#include "HiiVar.h"

LIST_ENTRY                      gHiiVarPkgList = INITIALIZE_LIST_HEAD_VARIABLE (gHiiVarPkgList);
LIST_ENTRY                      gHiiVarStoreItemPkgList = INITIALIZE_LIST_HEAD_VARIABLE (gHiiVarStoreItemPkgList);
LIST_ENTRY                      gHiiDiffItemPkgList = INITIALIZE_LIST_HEAD_VARIABLE (gHiiDiffItemPkgList);
UINT8  gDispatchOperand[] = {
  EFI_IFR_FORM_SET_OP,
  EFI_IFR_FORM_OP,
  EFI_IFR_ONE_OF_OP,
  EFI_IFR_ONE_OF_OPTION_OP,
  EFI_IFR_NUMERIC_OP,
  EFI_IFR_CHECKBOX_OP,
  0
};
UINT8  gDispatchVarStoreItemOperand[] = {
  EFI_IFR_ONE_OF_OP,
  EFI_IFR_NUMERIC_OP,
  EFI_IFR_CHECKBOX_OP,
  0
};
//
// Debug
//
VOID
HiiVar_Opcode_Print (
  EFI_IFR_OP_HEADER         *pIfr
  )
{

  CHAR8   *String;
  if (pIfr == NULL) {
    return;
  }
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "Opcode: %x, len: %x scope: %x\n", Debug_Level_Get(),pIfr->OpCode,  pIfr->Length, pIfr->Scope));
  String = Hex_To_String_Space_Format_Align ((UINT8 *)pIfr, pIfr->Length, 16);
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  %a\n", String));
  if (String != NULL) {
    FreePool (String);
  }
}

//
//====================================Misc & Attribute==================================
//
/**
  Create a Attribute instance

  @param  Name             -- Attribute name string.
  @param  Data             -- Attribute data string.
  @retval a HIIVAR_OPCODE pointer will return if successful, others null.

**/
VOID *
HiiVar_Opcode_Attr_New (
  IN  CHAR8    *Name,
  IN  CHAR8    *Data
  )
{
  HIIVAR_OPCODE_ATTR        *pAttr;
  if ((Name == NULL) || (Data == NULL)) { //safety check
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return NULL;
  }  
  pAttr = (HIIVAR_OPCODE_ATTR *) AllocateZeroPool (sizeof (HIIVAR_OPCODE_ATTR));
  if (pAttr == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return NULL;    
  }
  pAttr->Signature = HIIVAR_OPCODE_ATTR_SIGNATURE;
  
  pAttr->Name      = Clone_Ascii_String_WO_SPACE (Name);
  pAttr->Data      = Clone_Ascii_String_WO_SPACE (Data);
  return pAttr;
}

/**
  Get the radix by opcode flag

  @param  Flag             -- opcode flag
  @retval a string will return if successful, others null.

**/
CHAR8 *
HiiVar_Get_Radix_String (
  IN  UINT8     Flag
  )
{
  switch (Flag & EFI_IFR_DISPLAY) {
    case EFI_IFR_DISPLAY_INT_DEC:
      return "dec";
    case EFI_IFR_DISPLAY_UINT_DEC:
      return "unsinged dec";
    case EFI_IFR_DISPLAY_UINT_HEX:
      return "unsinged hex";
    default:
      return NULL;
  }
  return NULL;
}
/**
  Get the item len by opcode flag

  @param  Flag             -- opcode flag
  @retval a string will return if successful, others null.

**/
CHAR8 *
HiiVar_Get_Item_Len (
  IN   UINT8  Flag
  )
{
//
// Flags related to the numeric question
//
//#define EFI_IFR_NUMERIC_SIZE           0x03
//  #define   EFI_IFR_NUMERIC_SIZE_1       0x00
//  #define   EFI_IFR_NUMERIC_SIZE_2       0x01
//  #define   EFI_IFR_NUMERIC_SIZE_4       0x02
//  #define   EFI_IFR_NUMERIC_SIZE_8       0x03
  UINT8  Len;
  switch (Flag & EFI_IFR_NUMERIC_SIZE) {
    case EFI_IFR_NUMERIC_SIZE_1:
    case EFI_IFR_NUMERIC_SIZE_2:
    case EFI_IFR_NUMERIC_SIZE_4:
    case EFI_IFR_NUMERIC_SIZE_8:
      Len = 1 << (Flag & EFI_IFR_NUMERIC_SIZE);
      return Hex_To_String_Order (&Len, 1);
      
    default:
      return NULL;
  }
  return NULL;
}

/**
  Get the item value

  @param  pOpcode             -- opcode pointer
  @retval a string will return if successful, others null.

**/
CHAR8 *  
HiiVar_Get_Item_Vaule (
  IN  HIIVAR_OPCODE  *pOpcode
  )
{
  CHAR8                 *pString = NULL;
  UINTN                 Size;
  UINT8                 Flags;
  EFI_IFR_OP_HEADER     *pIfr;
  HIIVAR_STORAGE        *pStorage;
  LIST_ENTRY            *Link;
  UINT16                VarStoreId;
  UINT16                VarOffset;
 

  if (pOpcode == NULL) { //safe checking
    return NULL;
  }

  pIfr = (EFI_IFR_OP_HEADER *)HIIVAR_OPCODE_IFRPTR (pOpcode);
  switch (pIfr->OpCode) {
    case EFI_IFR_ONE_OF_OP:
    case EFI_IFR_NUMERIC_OP:
    case EFI_IFR_CHECKBOX_OP:
      //
      // Calc the size , varstoreid , offset of one of item
      //
      Flags = ((EFI_IFR_ONE_OF *) pIfr)->Flags;
      Flags = Flags & EFI_IFR_NUMERIC_SIZE;
      Size = (UINTN)(1 << Flags);
      VarStoreId = ((EFI_IFR_ONE_OF *) pIfr)->Question.VarStoreId; 
      VarOffset = ((EFI_IFR_ONE_OF *) pIfr)->Question.VarStoreInfo.VarOffset;
      break;
    default:
      Size = 0;
      break;
  }
  if (Size == 0) {
    return NULL;
  }
  //
  // Dispatch all varstore, found matched
  //
  Link  = GetFirstNode (&HIIVAR_OPCODE_STROAGELIST(pOpcode));
  while (!IsNull (&HIIVAR_OPCODE_STROAGELIST(pOpcode), Link)) {
    pStorage = HIIVAR_STORAGE_FROM_LINK (Link);
    if (pStorage->StoreId == VarStoreId) {
      pString = Hex_To_String_Order (pStorage->Data + VarOffset, Size);
      break;
    }
    Link = GetNextNode (&HIIVAR_OPCODE_STROAGELIST(pOpcode), Link);
  }
  if (pString == NULL) {
    return NULL; 
  }
  return pString;
}

/**
  Get the item matched stroage

  @param  pOpcode             -- opcode pointer
  @retval a string will return if successful, others null.

**/
VOID *  
HiiVar_Get_Item_Storage (
  IN  HIIVAR_OPCODE  *pOpcode
  )
{
  CHAR8                 *pString = NULL;
  UINTN                 Size;
  UINT8                 Flags;
  EFI_IFR_OP_HEADER     *pIfr;
  HIIVAR_STORAGE        *pStorage;
  LIST_ENTRY            *Link;
  UINT16                VarStoreId;
  UINT16                VarOffset;
 

  if (pOpcode == NULL) { //safe checking
    return NULL;
  }

  pIfr = (EFI_IFR_OP_HEADER *)HIIVAR_OPCODE_IFRPTR (pOpcode);
  switch (pIfr->OpCode) {
    case EFI_IFR_ONE_OF_OP:
    case EFI_IFR_NUMERIC_OP:
    case EFI_IFR_CHECKBOX_OP:
      //
      // Calc the size , varstoreid , offset of one of item
      //
      Flags = ((EFI_IFR_ONE_OF *) pIfr)->Flags;
      Flags = Flags & EFI_IFR_NUMERIC_SIZE;
      Size = (UINTN)(1 << Flags);
      VarStoreId = ((EFI_IFR_ONE_OF *) pIfr)->Question.VarStoreId; 
      VarOffset = ((EFI_IFR_ONE_OF *) pIfr)->Question.VarStoreInfo.VarOffset;
      break;
    default:
      Size = 0;
      break;
  }
  if (Size == 0) {
    return NULL;
  }
  //
  // Dispatch all varstore, found matched
  //
  Link  = GetFirstNode (&HIIVAR_OPCODE_STROAGELIST(pOpcode));
  while (!IsNull (&HIIVAR_OPCODE_STROAGELIST(pOpcode), Link)) {
    pStorage = HIIVAR_STORAGE_FROM_LINK (Link);
    if (pStorage->StoreId == VarStoreId) {
      pString = Hex_To_String_Order (pStorage->Data + VarOffset, Size);
      return pStorage;
    }
    Link = GetNextNode (&HIIVAR_OPCODE_STROAGELIST(pOpcode), Link);
  }

  return NULL;
}
/**
  Misc:
  1.Create a current value tag
  2.Create a help tag
  @param  pOpcode             -- opcode pointer
**/
VOID 
HiiVar_Opcode_Misc_New (
  IN  HIIVAR_OPCODE  *pOpcode
  )
{
  HIIVAR_OPCODE         *pNewOpcode;
  HIIVAR_OPCODE_ATTR    *pAttr;
  CHAR8                 *pString;
  EFI_IFR_OP_HEADER     *pIfr;


  if (pOpcode == NULL) { //safe checking
    return ;
  }

  pIfr = (EFI_IFR_OP_HEADER     *)HIIVAR_OPCODE_IFRPTR (pOpcode);
  //
  // new a tag of current item help message
  // <help info="xxxxx......."/>
  // 
  pNewOpcode = (HIIVAR_OPCODE   *)AllocateZeroPool (sizeof (HIIVAR_OPCODE));
  if (pNewOpcode == NULL) {
    return ;
  }
  pNewOpcode->Signature = HIIVAR_OPCODE_SIGNATURE;
  pNewOpcode->Name      = Clone_Ascii_String_WO_SPACE (HELP_TAG_STR);
  InitializeListHead (&pNewOpcode->AttrList);
  InitializeListHead (&pNewOpcode->ChildList);
  pString = Unicode_To_Ascii (
              HiiGetString (
                HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                ((EFI_IFR_ONE_OF *)pIfr)->Question.Header.Help, 
                NULL
                ), 
              NULL
              );
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  help = %a \n", pString));
  if (pString != NULL) {
    pAttr = HiiVar_Opcode_Attr_New (INFO_ATR_STR, pString);
    if (pAttr != NULL) {
      HiiVar_Opcode_Add_Attr (pNewOpcode, pAttr);
    }
    //
    // add "help" tag into root
    //
    HiiVar_Opcode_Add_Child (pOpcode, pNewOpcode);
  }
  //
  // new a tag of current item vaule format as belwo
  // <current value="x"/>
  // 
  pNewOpcode = (HIIVAR_OPCODE   *)AllocateZeroPool (sizeof (HIIVAR_OPCODE));
  if (pNewOpcode == NULL) {
    return ;
  }
  pNewOpcode->Signature = HIIVAR_OPCODE_SIGNATURE;
  pNewOpcode->Name      = Clone_Ascii_String_WO_SPACE (CURRENT_TAG_STR);
  InitializeListHead (&pNewOpcode->AttrList);
  InitializeListHead (&pNewOpcode->ChildList);
  //
  // Add value attr , if can't get current value, just return
  //
  pString =  HiiVar_Get_Item_Vaule (pOpcode);
  if (pString == NULL) return;
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  value = %a \n", pString));
  pAttr = HiiVar_Opcode_Attr_New (VALUE_ATR_STR, pString);
  if (pAttr != NULL) {
    HiiVar_Opcode_Add_Attr (pNewOpcode, pAttr);
  } 
  //
  // add "current" tag into root
  //
  HiiVar_Opcode_Add_Child (pOpcode, pNewOpcode);

  //
  // new a tag of current item vaule format as belwo
  // <modify value="x"/>
  // 
  pNewOpcode = (HIIVAR_OPCODE   *)AllocateZeroPool (sizeof (HIIVAR_OPCODE));
  if (pNewOpcode == NULL) {
    return ;
  }
  pNewOpcode->Signature = HIIVAR_OPCODE_SIGNATURE;
  pNewOpcode->Name      = Clone_Ascii_String_WO_SPACE (MODIFY_TAG_STR);
  InitializeListHead (&pNewOpcode->AttrList);
  InitializeListHead (&pNewOpcode->ChildList);
  pAttr = HiiVar_Opcode_Attr_New (VALUE_ATR_STR, pString);
  if (pAttr != NULL) {
    HiiVar_Opcode_Add_Attr (pNewOpcode, pAttr);
  } 
  //
  // add "modify" tag into root
  //
  HiiVar_Opcode_Add_Child (pOpcode, pNewOpcode);
  return;
}

/**
  Dispatch the opcode, build attribute and child
  @param  pOpcode             -- opcode pointer

  @retval EFI_INVALID_PARAMETER  -- if input is null
          EFI_SUCCESS            -- dispatch success
**/
EFI_STATUS
HiiVar_Opcode_Attr_Dispatch (
  IN HIIVAR_OPCODE  *pOpcode
  )
{
  EFI_IFR_OP_HEADER         *pIfr;
  HIIVAR_OPCODE_ATTR        *pAttr;
  CHAR8                     *pString;
  EFI_IFR_ONE_OF            *pOneOf; 
  EFI_IFR_ONE_OF_OPTION     *pOneOfOption;
  EFI_IFR_NUMERIC           *pNumeric;
  EFI_IFR_CHECKBOX          *pCheckBox;
  UINT8                     Flag;
  UINT8                     Offset;
                

  if (pOpcode == NULL) { //safety check
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return EFI_INVALID_PARAMETER;
  }
  //
  // Get current opcode pointer by offset.
  //
  if (pOpcode->Formset == NULL ){
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "Opcode's formset is null\n"));
    return EFI_INVALID_PARAMETER;
  }

  pIfr = (EFI_IFR_OP_HEADER  *)HIIVAR_OPCODE_IFRPTR (pOpcode);
  switch (pIfr->OpCode) {
    case EFI_IFR_FORM_SET_OP: //FORSET
      pOpcode->Name = Clone_Ascii_String_WO_SPACE (FORMSET_TAG_STR);
      //
      //Add a node tag for formset, format as below
      //<formset id="XXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXX" name="XXXXXXX">
      //
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "Formset: id =%g \n", &((EFI_IFR_FORM_SET *) pIfr)->Guid));
      //
      // 1. Add a id attribute
      //

      pAttr = HiiVar_Opcode_Attr_New (ID_ATR_STR, Guid_To_Acsii (&((EFI_IFR_FORM_SET *) pIfr)->Guid));
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 2. Add a name attribute
      //
      pString = Unicode_To_Ascii (
                  HiiGetString (
                    HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                    ((EFI_IFR_FORM_SET *) pIfr)->FormSetTitle, 
                    NULL
                    ), 
                  NULL
                  );
      pAttr = HiiVar_Opcode_Attr_New (
                NAME_ATR_STR, 
                pString
                );
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      break;
    case EFI_IFR_FORM_OP: //FORM
      pOpcode->Name = Clone_Ascii_String_WO_SPACE (FORM_TAG_STR);
      //
      //Add a node tag for form, format as below
      //<form id="XXXX" name="XXXXXX">
      //
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "Form: title id = %04x", (((EFI_IFR_FORM *) pIfr)->FormId)));

      //
      // 1. Add a id attribute
      //
      pAttr = HiiVar_Opcode_Attr_New (
                ID_ATR_STR, 
                Hex_To_String_Order ((UINT8 *)&(((EFI_IFR_FORM *) pIfr)->FormId), 2)
                );
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 2. Add a name attribute
      //
      pString = Unicode_To_Ascii (
                  HiiGetString (
                    HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                    ((EFI_IFR_FORM *) pIfr)->FormTitle, 
                    NULL), 
                  NULL
                  );
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "name = %a\n", pString));
      pAttr = HiiVar_Opcode_Attr_New (
                NAME_ATR_STR, 
                pString
                );
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      break;
    case EFI_IFR_ONE_OF_OP: //oneof
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "OneOf: \n"));
      pOpcode->Name = Clone_Ascii_String_WO_SPACE (QUETION_TAG_STR);
      //
      //Add a tag for one of opcode and a value child tag, format as below
      //<question id="x" name="xxxx"  type="oneof" radix="xxxx" len="xxxx">
      //  <current value="x"/>
      //  <help  info="xxxx"/>
      //
      pOneOf = (EFI_IFR_ONE_OF *)pIfr;
      //
      // 1. Add a id attribute
      //
      pString = Hex_To_String_Order (
                  (UINT8 *)(&pOneOf->Question.QuestionId), 
                  sizeof (pOneOf->Question.QuestionId)
                  );
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  QuestionId = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New (ID_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 2. Add a name attribute
      //
      pString = Unicode_To_Ascii (
                  HiiGetString (
                    HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                    pOneOf->Question.Header.Prompt, 
                    NULL), 
                  NULL
                  );
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  name = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New (NAME_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 3. Add a type attribute
      //
      pAttr = HiiVar_Opcode_Attr_New (TYPE_ATR_STR, QUESTION_ONE_OF);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 4. Add a radix attribute
      //
      pString = HiiVar_Get_Radix_String (pOneOf->Flags);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  radix = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New (RADIX_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 5. Add a Len attribute
      //
      pString = HiiVar_Get_Item_Len (pOneOf->Flags);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "len = %a ", pString));
      if (pString != NULL) {
        pAttr = HiiVar_Opcode_Attr_New (LEN_ATR_STR, pString);
        if (pAttr != NULL) {
          HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
        }
      }
      //
      // 6. Create a Vaule Tag
      //
      HiiVar_Opcode_Misc_New (pOpcode);
      break;
    case EFI_IFR_ONE_OF_OPTION_OP: //option
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "Option: \n"));
                
      pOpcode->Name = Clone_Ascii_String_WO_SPACE (OPTION_TAG_STR);
      //
      //Add a tag for one of opcode and a value child tag, format as below
      //<option value="0" name="Disabled" mfgdef="yes", stddef="yese"/>
      //
      pOneOfOption = (EFI_IFR_ONE_OF_OPTION *)pIfr;

      //
      // 1. Add a vaule attr
      //
      Flag = pOneOfOption->Type & 0x0F;
      if (Flag == EFI_IFR_TYPE_STRING) {
        pString = Unicode_To_Ascii (
                    HiiGetString (
                      HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                      pOneOfOption->Value.string, 
                      NULL), 
                    NULL
                    );
        if (pString != NULL) {
          pAttr = HiiVar_Opcode_Attr_New (VALUE_ATR_STR, pString);
          if (pAttr != NULL) {
            HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
          }
        }
      } else if ((Flag == EFI_IFR_TYPE_NUM_SIZE_8) ||
            (Flag == EFI_IFR_TYPE_NUM_SIZE_16) ||
            (Flag == EFI_IFR_TYPE_NUM_SIZE_32) ||
            (Flag == EFI_IFR_TYPE_NUM_SIZE_64)) {
        pString = Hex_To_String_Order((UINT8 *)&pOneOfOption->Value.u8, 1<<(Flag&EFI_IFR_NUMERIC_SIZE));
        pAttr = HiiVar_Opcode_Attr_New (VALUE_ATR_STR, pString);
        if (pAttr != NULL) {
          HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
        }    
      } else if (Flag == EFI_IFR_TYPE_BOOLEAN) {
        pAttr = HiiVar_Opcode_Attr_New (VALUE_ATR_STR, pOneOfOption->Value.b?"true":"false");
        if (pAttr != NULL) {
          HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
        }    
      }
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  value: %a\n", pAttr->Data));
      //
      // 2. Add a name attr
      //
      pString = Unicode_To_Ascii (
                  HiiGetString (
                    HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                    pOneOfOption->Option, 
                    NULL), 
                  NULL
                  );
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  value: %a\n", pString));
      pAttr = HiiVar_Opcode_Attr_New (NAME_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }

      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  flag: %x\n", pOneOfOption->Flags));
      //
      // 3. Add a mfg default attr
      //
      if (pOneOfOption->Flags & EFI_IFR_OPTION_DEFAULT_MFG) {
        pAttr = HiiVar_Opcode_Attr_New (MFGDEF_ATR_STR, "yes");
        if (pAttr != NULL) {
          HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
        }
      }
      //
      // 4. Add a std default attr
      //
      if (pOneOfOption->Flags & EFI_IFR_OPTION_DEFAULT) {
        pAttr = HiiVar_Opcode_Attr_New (STDDEF_ATR_STR, "yes");
        if (pAttr != NULL) {
          HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
        }
      }
      break;
    case EFI_IFR_NUMERIC_OP:
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "numeric: \n"));
                
      pOpcode->Name = Clone_Ascii_String_WO_SPACE (QUETION_TAG_STR);
      //
      //<question id="x" name="xxxx"  type="numeric" radix="xxxx" min="x", max="x",step="x">
      //  <current value="x"/>
      //  <help  info="xxxx"/>
      pNumeric = (EFI_IFR_NUMERIC *)pIfr;
      //
      // 1. Add a id attribute
      //
      pString = Hex_To_String_Order (
                  (UINT8 *)(&pNumeric->Question.QuestionId), 
                  sizeof (pNumeric->Question.QuestionId)
                  );
      if (pString != NULL) {
        HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  QuestionId = %a \n", pString));
        pAttr = HiiVar_Opcode_Attr_New (ID_ATR_STR, pString);
        if (pAttr != NULL) {
          HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
        }
      }
      //
      // 2. Add a name attribute
      //
      pString = Unicode_To_Ascii (
                  HiiGetString (
                    HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                    pNumeric->Question.Header.Prompt, 
                    NULL), 
                  NULL
                  );
      if (pString != NULL) {
        HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  name = %a \n", pString));
        pAttr = HiiVar_Opcode_Attr_New (NAME_ATR_STR, pString);
        if (pAttr != NULL) {
          HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
        }
      }
      //
      // 3. Add a type attribute
      //
      pAttr = HiiVar_Opcode_Attr_New (TYPE_ATR_STR, QUESTION_NUMERIC);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 4. Add a radix attribute
      //
      pString = HiiVar_Get_Radix_String (pNumeric->Flags);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  radix = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New (RADIX_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 5. Add a Len attribute
      //
      pString = HiiVar_Get_Item_Len (pNumeric->Flags);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "len = %a ", pString));
      pAttr = HiiVar_Opcode_Attr_New (LEN_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 5. Mini Vaule
      //
      Flag = pNumeric->Flags & EFI_IFR_NUMERIC_SIZE;
      Offset = 1 << Flag;
      pString = Hex_To_String_Order ((UINT8 *)(&pNumeric->data), Offset);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  min = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New ("min", pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 6. Max Vaule
      //
      pString = Hex_To_String_Order (((UINT8 *)(&pNumeric->data))+Offset, Offset);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  max = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New ("max", pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 7. Step Vaule
      //
      pString = Hex_To_String_Order (((UINT8 *)(&pNumeric->data))+Offset+Offset, Offset);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  step = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New ("step", pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 6. Create a Vaule Tag
      //
      HiiVar_Opcode_Misc_New (pOpcode);
      break;
    case EFI_IFR_CHECKBOX_OP:
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "checkbox: \n"));
                
      pOpcode->Name = Clone_Ascii_String_WO_SPACE (QUETION_TAG_STR);
      //
      //<question id="x" name="xxxx"  type="checkbox" radix="xxxx" >
      //  <current value="x"/>
      //  <help  info="xxxx"/>
      pCheckBox = (EFI_IFR_CHECKBOX *)pIfr;
      //
      // 1. Add a id attribute
      //
      pString = Hex_To_String_Order (
                  (UINT8 *)(&pCheckBox->Question.QuestionId), 
                  sizeof (pCheckBox->Question.QuestionId)
                  );
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  QuestionId = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New (ID_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 2. Add a name attribute
      //
      pString = Unicode_To_Ascii (
                  HiiGetString (
                    HIIVAR_OPCODE_HIIHANDLE (pOpcode), 
                    pCheckBox->Question.Header.Prompt, 
                    NULL), 
                  NULL
                  );
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  name = %a \n", pString));
      pAttr = HiiVar_Opcode_Attr_New (NAME_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 3. Add a type attribute
      //
      pAttr = HiiVar_Opcode_Attr_New (TYPE_ATR_STR, QUESTION_CHECKBOX);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 4. Add a radix attribute
      //
      //pString = HiiVar_Get_Radix_String (pNumeric->Flags);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  radix = BOOLEAN \n" ));
      pAttr = HiiVar_Opcode_Attr_New (RADIX_ATR_STR, "boolean");
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }
      //
      // 5. Add a Len attribute
      //
      pString = HiiVar_Get_Item_Len (pCheckBox->Flags);
      HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "len = %a ", pString));
      pAttr = HiiVar_Opcode_Attr_New (LEN_ATR_STR, pString);
      if (pAttr != NULL) {
        HiiVar_Opcode_Add_Attr (pOpcode, pAttr);
      }

      //
      // 6. Create a Vaule Tag
      //
      HiiVar_Opcode_Misc_New (pOpcode);
      break;
    default:
      break;
  }
  return EFI_SUCCESS;
}
//
//====================================Opcode================================
//
/**
  Tell whether this Operand is an known OpCode.

  @param  Operand                Operand of an IFR OpCode.

  @retval TRUE                   This is an known OpCode.

**/
BOOLEAN
HiiVar_Is_KnownOpCode (
  IN UINT8              Operand
  )
{
  UINT8  Index = 0;
  while (gDispatchOperand[Index] != 0) {
    if (Operand == gDispatchOperand[Index]) {
      return TRUE;
    }
    Index ++;
  }
  return FALSE;
}
/**
  Create a opcode instance, and dispatch the attribute under it.

  @param  Offset             -- a Offset of current opcode.
  @param  pFormset           -- pointer of current opcode's formset
  @retval a HIIVAR_OPCODE pointer will return if successful, others null.

**/
VOID *
HiiVar_Opcode_New (
  IN UINTN                         Offset,
  IN HIIVAR_FORMSET                *pFormset
  )
{
  HIIVAR_OPCODE    *pOpcode;
  if (pFormset == NULL) { //safety check
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // Allocate Pool for hii opcode and init
  //
  pOpcode = (HIIVAR_OPCODE  *) AllocateZeroPool (sizeof (HIIVAR_OPCODE));
  if (pOpcode == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pOpcode->Signature   = HIIVAR_OPCODE_SIGNATURE;
  pOpcode->Offset      = Offset;
  pOpcode->Formset     = pFormset;
  InitializeListHead (&pOpcode->AttrList);
  InitializeListHead (&pOpcode->ChildList);
  //
  // Dispatch all attribute under this tag.
  //
  HiiVar_Opcode_Attr_Dispatch (pOpcode);
  
  return pOpcode;
}
/**
  Insert a child opcode  into a parentOpcode

  @param  pParentOp             -- a Parent node pointer
  @param  pChildOp              -- a child node pointer

  @retval EFI_SUCCESS if intert successfully, others failed.

**/
EFI_STATUS
HiiVar_Opcode_Add_Child (
  IN  HIIVAR_OPCODE   *pParentOp,
  IN  HIIVAR_OPCODE   *pChildOp
  )
{
  if ((pParentOp == NULL) || (pChildOp == NULL)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return EFI_UNSUPPORTED;
  }
  //
  // Insert the child opcode into root.
  //
  InsertTailList (&pParentOp->ChildList, &pChildOp->Link);
  return EFI_SUCCESS;
}

/**
  Insert a attribute node into a opcode node

  @param  pOpcode             -- a opcode node pointer
  @param  pAttr               -- a attribute node pointer

  @retval EFI_SUCCESS if intert successfully, others failed.

**/
EFI_STATUS
HiiVar_Opcode_Add_Attr (
  IN  HIIVAR_OPCODE        *pOpcode,
  IN  HIIVAR_OPCODE_ATTR   *pAttr
  )
{
  if ((pOpcode == NULL) || (pAttr == NULL)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return EFI_UNSUPPORTED;
  }
  //
  // Insert the attribute into opcode
  //
  InsertTailList (&pOpcode->AttrList, &pAttr->Link);
  return EFI_SUCCESS;
}
/**
  get a attribute under opcode by it's name

  @param  pOpcode             -- a opcode node pointer
  @param  pName               -- a attribute name string

  @retval a opcode attr will return if found, others null.

**/
VOID *
HiiVar_Opcode_Get_Attr_By_Name (
  IN  HIIVAR_OPCODE        *pOpcode,
  IN  CHAR8                *pName
  )
{
  LIST_ENTRY                *Link;
  HIIVAR_OPCODE_ATTR        *pAttr;
  Link  = GetFirstNode (&pOpcode->AttrList);
  while (!IsNull (&pOpcode->AttrList, Link)) {
    pAttr = HIIVAR_ATTR_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->AttrList, Link);

    if (AsciiStrCmp (pName, pAttr->Name) == 0) {
      return pAttr;
    }
  }
  return NULL;
}
/**
  get a child opcode under parent opcode by it's name

  @param  pOpcode             -- a opcode node pointer
  @param  pName               -- a child opcode string

  @retval a opcode attr will return if found, others null.

**/
VOID *
HiiVar_Opcode_Get_Child_By_Name (
  IN  HIIVAR_OPCODE        *pOpcode,
  IN  CHAR8                *pName
  )
{
  LIST_ENTRY                *Link;
  HIIVAR_OPCODE             *pCurrentOpcode;
  Link  = GetFirstNode (&pOpcode->ChildList);
  while (!IsNull (&pOpcode->ChildList, Link)) {
    pCurrentOpcode = HIIVAR_OPCODE_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->ChildList, Link);

    if (AsciiStrCmp (pName, pCurrentOpcode->Name) == 0) {
      return pCurrentOpcode;
    }
  }
  return NULL;
}

/**
  get a child attr under parent opcode by it's name

  @param  pOpcode             -- a opcode node pointer
  @param  pName               -- a child opcode string

  @retval a opcode attr will return if found, others null.

**/
VOID *
HiiVar_Opcode_Get_Child_Attr_By_Name (
  IN  HIIVAR_OPCODE        *pOpcode,
  IN  CHAR8                *pTagName,
  IN  CHAR8                *pAttrName
  )
{
  HIIVAR_OPCODE             *pChildOpcode;
  pChildOpcode = HiiVar_Opcode_Get_Child_By_Name (pOpcode, pTagName);
  if (pChildOpcode == NULL) {
    return NULL;
  }
  return  HiiVar_Opcode_Get_Attr_By_Name (pChildOpcode, pAttrName);
  
}
/**
  Repeat  dispatch the Ifr binary's opcode of a FormSet.

  @param  pFormset                -- Formset pointer
  @param  pParentOpcode           -- The Parenet Opcode node.If NULL, means it's root.
  @param  Offset                  -- The offset based on FormSet Ifr binary.

  @retval EFI_SUCCESS  means dispatch success, others means failed.


**/
EFI_STATUS
HiiVar_Opcode_Dispatch (
  IN  HIIVAR_FORMSET     *pFormset,
  IN  HIIVAR_OPCODE      *pParentOpcode,
  IN  UINTN              *Offset
  )
{
  HIIVAR_OPCODE      *pOpcode; 
  EFI_IFR_OP_HEADER  *pIfr;
  HIIVAR_STORAGE     *pStorage;
  EFI_STATUS         Status;
  if ((pFormset == NULL) || (pFormset->IfrBinaryData == NULL)) {
    return EFI_INVALID_PARAMETER;
  }
  //
  // if dispatch len > IfrBinaryLen, the disaptch is end
  //
  if (*Offset >= pFormset->IfrBinaryLength) {
    return EFI_SUCCESS;
  }
  pIfr = (EFI_IFR_OP_HEADER  *)(pFormset->IfrBinaryData + *Offset);
  
  
  
  if (pIfr->Length == 0) while (1); //deadloop when opcode length is zero
  //
  // Check if this is a varstore opcode
  //
  pStorage = HiiVar_Storage_New (pIfr);
  if (pStorage != NULL) {
    Status = HiiVar_Formset_Add_Stroage (pFormset, pStorage);
    if (EFI_ERROR (Status)) {
      return Status;
    }
  }
  //
  // Prase the konow op code we defined
  //
  if (HiiVar_Is_KnownOpCode (pIfr->OpCode)) {
    HiiVar_Opcode_Print (pIfr);
    pOpcode = HiiVar_Opcode_New (*Offset, pFormset);

    if (pOpcode != NULL) {
      //
      // The first should been the formset opcode.
      // And shold not been NULL
      //
      if (pFormset->Opcode == NULL) {

        pFormset->Opcode = pOpcode;
        HIIVAR_DEBUG ((DEBUG_LEVEL_VERBOSE, "%a(%d)\n", __FUNCTION__, __LINE__));
      } else {
        if (pParentOpcode != NULL) {
          HiiVar_Opcode_Add_Child (pParentOpcode, pOpcode); 
          HIIVAR_DEBUG ((DEBUG_LEVEL_VERBOSE, "%a(%d)\n", __FUNCTION__, __LINE__));
        }
      }
    
    } else {
      HIIVAR_DEBUG ((DEBUG_LEVEL_VERBOSE, "opcode prase failed"));
    }
    
  } else {
    pOpcode = pParentOpcode;
  }
  //
  // Add the opcode length
  //
  *Offset += pIfr->Length;  

  //
  //if it's a end opcode, break the depth parse
  //
  if (pIfr->OpCode == EFI_IFR_END_OP) { 
    return EFI_SUCCESS;    
  }

  //
  // if current opcode have a scopde, dispatch the child under it.
  //
  if (pIfr->Scope) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_VERBOSE, "%a(%d) %x\n", __FUNCTION__, __LINE__, (UINTN)pOpcode));
    HiiVar_Opcode_Dispatch (pFormset, pOpcode, Offset);      
  }
  
  HIIVAR_DEBUG ((DEBUG_LEVEL_VERBOSE, "%a(%d) %x\n", __FUNCTION__, __LINE__, (UINTN)pParentOpcode));
  HiiVar_Opcode_Dispatch (pFormset, pParentOpcode, Offset);  
  
  return EFI_SUCCESS;
}

/**
  Get attribute data from opcode

  @param  pOpcode                -- opcode pointer
  @param  pName                  -- The name string

  @retval attribute data string will returned , NULL means not found or failed.
**/
VOID *
HiiVar_Opcode_GetAttrData_ByName (
  IN  HIIVAR_OPCODE       *pOpcode,
  IN  CHAR8               *pName
  )
{
  HIIVAR_OPCODE_ATTR                    *pAttr;
  LIST_ENTRY                            *Link;
  if ((pOpcode == NULL) || (pName == NULL)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  Link  = GetFirstNode (&pOpcode->AttrList);
  while (!IsNull (&pOpcode->AttrList, Link)) {
    pAttr = HIIVAR_ATTR_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->AttrList, Link);

    if (AsciiStrCmp (pName, pAttr->Name) == 0) {
      return pAttr->Data;
    }
  }
  return NULL;
}
/**
  Get  child from opcode by child name

  @param  pOpcode                -- opcode pointer
  @param  pName                  -- The name string

  @retval attribute data string will returned , NULL means not found or failed.
**/
VOID *
HiiVar_Opcode_GetChild_ByName (
  IN  HIIVAR_OPCODE       *pOpcode,
  IN  CHAR8               *pName
  )
{
  HIIVAR_OPCODE                         *pChild;
  LIST_ENTRY                            *Link;
  if ((pOpcode == NULL) || (pName == NULL)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  Link  = GetFirstNode (&pOpcode->ChildList);
  while (!IsNull (&pOpcode->ChildList, Link)) {
    pChild = HIIVAR_OPCODE_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->ChildList, Link);

    if (AsciiStrCmp (pName, pChild->Name) == 0) {
      return pChild;
    }
  }
  return NULL;
}
//
// ====================================== Storage=========================================
//
/**
  Create a storage instance, get matched variable
  @param  pIfr                   -- The opcode pointer

  @retval a HIIVAR_STORAGE pointer will return if success, others NULL.

**/
VOID *
HiiVar_Storage_New (
  IN  EFI_IFR_OP_HEADER  *pIfr
  )
{
  EFI_STATUS            Status;
  HIIVAR_STORAGE        *pStorage;
  EFI_IFR_VARSTORE      *pVarStore;
  EFI_IFR_VARSTORE_EFI  *pEfiVarStore;

  if (pIfr == NULL) { //safety check
    return NULL;
  }
  //
  // Now, we only check varstore and efivarstore opcode here
  //
  if ((pIfr->OpCode != EFI_IFR_VARSTORE_OP) && \
     (pIfr->OpCode != EFI_IFR_VARSTORE_EFI_OP)) {
    return NULL;
  }
  pStorage = AllocateZeroPool (sizeof (HIIVAR_STORAGE));
  if (pStorage == NULL) { //safety check
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  switch (pIfr->OpCode) {
    //
    // init varstore and efi varstore
    //
    case EFI_IFR_VARSTORE_OP:
      pVarStore = (EFI_IFR_VARSTORE *)pIfr;
      pStorage->Signature = HIIVAR_STORAGE_SIGNATURE;
      pStorage->StoreId = pVarStore->VarStoreId;
      pStorage->Size    = pVarStore->Size;
      pStorage->Name    = Ascii_To_Unicode ((CHAR8 *)pVarStore->Name);
      pStorage->Guid    = pVarStore->Guid;
      break;
    case EFI_IFR_VARSTORE_EFI_OP:
      pEfiVarStore = (EFI_IFR_VARSTORE_EFI *)pIfr;
      pStorage->Signature = HIIVAR_STORAGE_SIGNATURE;
      pStorage->StoreId = pEfiVarStore->VarStoreId;
      pStorage->Size    = pEfiVarStore->Size;
      pStorage->Name    = Ascii_To_Unicode ((CHAR8 *)pEfiVarStore->Name);
      pStorage->Guid    = pEfiVarStore->Guid;
      break;
    default:
      if (pStorage != NULL) {
        FreePool (pStorage);
      }
      return NULL;
  }
  //
  // Get current var store data
  //
  pStorage->Data    = AllocateZeroPool (pStorage->Size);
  Status = gRT->GetVariable (
                  pStorage->Name,
                  &pStorage->Guid, 
                  NULL,
                  &pStorage->Size, 
                  pStorage->Data
                  );
  //Tank: So if we need to sync varstore size and variable size here?
  if (Status == EFI_BUFFER_TOO_SMALL) {
    if (pStorage->Data != NULL) {
      FreePool (pStorage->Data);
    }
    pStorage->Data    = AllocateZeroPool (pStorage->Size);
    Status = gRT->GetVariable (
                    pStorage->Name,
                    &pStorage->Guid, 
                    NULL,
                    &pStorage->Size, 
                    pStorage->Data
                    );
    
    if (EFI_ERROR (Status)) {
      HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "var store get variable failed, status=%r\n", Status));
      return NULL;
    }
    return NULL;
  }
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "Name %s\n Guid: %g\n Size:%x\n, Status: %r\n", pStorage->Name, &pStorage->Guid, pStorage->Size, Status));
  return pStorage;
}
//
//==================================Formset===================================
//
/**
  Insert a Storage into a formset storage list
  [Tank]To do later, sync the storage again is they are not same or not????
  @param  pFormset             -- a formset node pointer
  @param  pStorage             -- a storage node pointer

  @retval EFI_SUCCESS if intert successfully, others failed.

**/
EFI_STATUS
HiiVar_Formset_Add_Stroage (
  IN  HIIVAR_FORMSET     *pFormset,
  IN  HIIVAR_STORAGE     *pStorage
  ) 
{
  if ((pFormset == NULL) || (pStorage == NULL)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return EFI_UNSUPPORTED;
  }
  //
  // Insert the storage into formset's storage list
  //
  InsertTailList (&pFormset->StorageListHead, &pStorage->Link);
  return EFI_SUCCESS;
}
/**
  Fetch the Ifr binary data of a FormSet.
  We assume on packge only have one formset.
  @param  Handle                 PackageList Handle
  @param  BinaryLength           The length of the FormSet IFR binary.
  @param  BinaryData             The buffer designed to receive the FormSet.

  @retval EFI_SUCCESS            Buffer filled with the requested FormSet.
                                 BufferLength was updated.
          EFI_INVALID_PARAMETER  The handle is unknown.
          EFI_NOT_FOUND          A form or FormSet on the requested handle cannot
                                 be found with the requested FormId.

**/
EFI_STATUS
HiiVar_Get_IfrBinary (
  IN  EFI_HII_HANDLE   Handle,
  OUT UINTN            *BinaryLength,
  OUT UINT8            **BinaryData
  )
{
  EFI_STATUS                   Status;
  EFI_HII_PACKAGE_LIST_HEADER  *HiiPackageList;
  UINTN                        BufferSize;
  UINT8                        *Package;
  UINT8                        *OpCodeData;
  UINT32                       Offset;
  UINT32                       Offset2;
  UINT32                       PackageListLength;
  EFI_HII_PACKAGE_HEADER       PackageHeader;
  BOOLEAN                      IsFound = FALSE;

  OpCodeData = NULL;
  Package = NULL;
  ZeroMem (&PackageHeader, sizeof (EFI_HII_PACKAGE_HEADER));


  //
  // Get HII PackageList
  //
  BufferSize = 0;
  HiiPackageList = NULL;
  Status = gHiiDatabase->ExportPackageLists (gHiiDatabase, Handle, &BufferSize, HiiPackageList);
  if (Status == EFI_BUFFER_TOO_SMALL) {
    HiiPackageList = AllocatePool (BufferSize);
    ASSERT (HiiPackageList != NULL);

    Status = gHiiDatabase->ExportPackageLists (gHiiDatabase, Handle, &BufferSize, HiiPackageList);
  }
  if (EFI_ERROR (Status)) {
    return Status;
  }
  ASSERT (HiiPackageList != NULL);

  //
  // Get Form package from this HII package List
  //
  Offset = sizeof (EFI_HII_PACKAGE_LIST_HEADER);
  Offset2 = 0;
  CopyMem (&PackageListLength, &HiiPackageList->PackageLength, sizeof (UINT32));


  while (Offset < PackageListLength) {
    Package = ((UINT8 *) HiiPackageList) + Offset;
    CopyMem (&PackageHeader, Package, sizeof (EFI_HII_PACKAGE_HEADER));

    if (PackageHeader.Type == EFI_HII_PACKAGE_FORMS) {
      //
      // Search FormSet in this Form Package, we assume only one formset in one package list.
      //
      Offset2 = sizeof (EFI_HII_PACKAGE_HEADER);
      while (Offset2 < PackageHeader.Length) {
        OpCodeData = Package + Offset2;

        if (((EFI_IFR_OP_HEADER *) OpCodeData)->OpCode == EFI_IFR_FORM_SET_OP) {
          IsFound = TRUE;
          break;
        }

        Offset2 += ((EFI_IFR_OP_HEADER *) OpCodeData)->Length;
      }

      if (Offset2 < PackageHeader.Length) {
        //
        // Target formset found
        //
        break;
      }
    }

    Offset += PackageHeader.Length;
  }

  if (!IsFound) {
    //
    // Form package not found in this Package List
    //
    FreePool (HiiPackageList);
    return EFI_NOT_FOUND;
  }
  //
  // To determine the length of a whole FormSet IFR binary, one have to parse all the Opcodes
  // in this FormSet; So, here just simply copy the data from start of a FormSet to the end
  // of the Form Package.
  //
  *BinaryLength = PackageHeader.Length - Offset2;
  *BinaryData = AllocateCopyPool (*BinaryLength, OpCodeData);

  FreePool (HiiPackageList);

  if (*BinaryData == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  return EFI_SUCCESS;
}
/**

  Create formset instance and insert it into root

  @param HiiHandle   -- the HiiHandle 
  
  @retval a HIIVAR_FORMSET pointer is return, NULL is failed.

**/
VOID *
HiiVar_Formset_New (
  IN  EFI_HII_HANDLE        *HiiHandle
  )
{
  HIIVAR_FORMSET           *pHiiVarFormset = NULL;
  EFI_STATUS                Status;
  UINTN                     Offset = 0;
  //
  // Allocate Hii var formset
  //
  pHiiVarFormset = (HIIVAR_FORMSET *)AllocateZeroPool (sizeof (HIIVAR_FORMSET));
  if (pHiiVarFormset == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check failed\n", __FUNCTION__, __LINE__));
    goto ErrExit;
  }
  //
  // Initilize FormSet Setting
  //
  Status = HiiVar_Get_IfrBinary ( // get current opcode support formset ifr binary len and data
             HiiHandle, 
             &pHiiVarFormset->IfrBinaryLength, 
             &pHiiVarFormset->IfrBinaryData
             );
  if (EFI_ERROR (Status)) {
    //HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) load the formset data from handle failed\n", __FUNCTION__, __LINE__));
    goto ErrExit;
  }

  pHiiVarFormset->Signature = HIIVAR_FORMSET_SIGNATURE;
  pHiiVarFormset->HiiHandle = HiiHandle;
  pHiiVarFormset->Opcode    = NULL; //init it as null means it should been root
  InitializeListHead (&pHiiVarFormset->StorageListHead);
  //
  // Prase the formset inside this
  //
  Status = HiiVar_Opcode_Dispatch (pHiiVarFormset, NULL, &Offset);
  if (EFI_ERROR (Status)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) prase the formset opcode failed\n", __FUNCTION__, __LINE__));
    goto ErrExit;
  }
  return pHiiVarFormset;
ErrExit:
  if (pHiiVarFormset != NULL) {
    FreePool (pHiiVarFormset);
  }
  return NULL;
}

/**
  Load all hii formset to the formset node and prase all opcode 
  under it.
**/
EFI_STATUS
HiiVar_Formset_Dispatch (
  VOID
  )
{
  HIIVAR_FORMSET                    *pFormSet;
  EFI_HII_HANDLE                    *HiiHandles = NULL;
  UINTN                             Index;
  UINT8                            Test;

  //
  //  required Hii relative protocols
  //
  if (gHiiDatabase == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return EFI_NOT_FOUND;
  }
  //
  // Get all the Hii handles
  //
  HiiHandles = HiiGetHiiHandles (NULL);
  if (HiiHandles == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
    return EFI_NOT_FOUND;
  }

  //
  // Search for formset of each class type
  //
  Test = 0;
  for (Index = 0; HiiHandles[Index] != NULL; Index++) {

    pFormSet = HiiVar_Formset_New (HiiHandles[Index]);
    if (pFormSet == NULL) {
      //Tank to do later DestroyFormSet (LocalFormSet);
      continue;
    }
    //
    // Insert the storage into formset's storage list
    //
    InsertTailList (&gHiiVarPkgList, &pFormSet->Link);
    Test ++;
    if (Test == 6) {
      //break;
    }
    //break;
  }
  //
  // Free resources, and restore gOldFormSet and gClassOfVfr
  //
  FreePool (HiiHandles);
  return EFI_SUCCESS;
}
//
//=====================================XML Operation===================================
//
/**
  this is function used to add all hii opcode attribute into xml node
  @param  pOpcode  -- the Opcode
  @param  pEltRoot -- the root of the xml

**/
VOID 
HiiVar_Xml_Attribute (
  IN HIIVAR_OPCODE         *pOpcode,
  IN XML_ELEMENT            *pEltRoot
  )
{
  HIIVAR_OPCODE_ATTR                    *pAttr;
  XML_ATTRIBUTE                          *pXmlAttr;
  LIST_ENTRY                            *Link;
  if ((pOpcode == NULL) || (pEltRoot == NULL)) { // safety check
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Link  = GetFirstNode (&pOpcode->AttrList);
  while (!IsNull (&pOpcode->AttrList, Link)) {
    pAttr = HIIVAR_ATTR_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->AttrList, Link);

    //
    // Create a attribute xml node by opcode attr's name and data
    //
    pXmlAttr = Xml_Attribute_New (pAttr->Name, pAttr->Data);
    if (pXmlAttr != NULL) {
      Xml_Element_Add_Attribute (pEltRoot, pXmlAttr);
    }
  }
}

/**
  this is function used to add all hii opcode into xml node
  @param  pOpcode  -- the Opcode
  @param  pEltRoot -- the root of the xml
**/
VOID 
HiiVar_Xml_Opcode (
  IN HIIVAR_OPCODE         *pOpcode,
  IN XML_ELEMENT            *pEltRoot
  )
{
  HIIVAR_OPCODE         *pCurrentOpcode;
  XML_ELEMENT            *pElement;
  LIST_ENTRY            *Link;
  if ((pOpcode == NULL) || (pEltRoot == NULL)) { //safety check 
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  //
  // new a xml element for current opcode by it's name
  //
  pElement = Xml_Element_New (pOpcode->Name);
  if (pElement == NULL) {
    return;
  } 
  //
  // dispatch all attribute under current opcode
  //
  HiiVar_Xml_Attribute (pOpcode, pElement);

  //
  // dispatch all child device under it
  //
  Link  = GetFirstNode (&pOpcode->ChildList);
  while (!IsNull (&pOpcode->ChildList, Link)) {
    pCurrentOpcode = HIIVAR_OPCODE_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->ChildList, Link);

    //
    // repeat dispatch all child opcode under current opcode
    //
    HiiVar_Xml_Opcode (pCurrentOpcode, pElement);
  }
  Xml_Element_Add_Child (pEltRoot, pElement);
}


/**
  this is function used to add all hii database into xml node
  @param  pElement -- the root of the xml

**/
VOID
HiiVar_Xml_Write (
  IN XML_ELEMENT *pElement
  )
{
  XML_ELEMENT                            *pElt;
  XML_ATTRIBUTE                          *pAttr;
  LIST_ENTRY                             *Link;
  HIIVAR_FORMSET                         *pFormset;
  HIIVAR_STORAGE                         *pStorage;
 // UINTN  Index = 0;
  if (pElement == NULL) { //safety check
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  //
  // New a element as below
  // <HiiDump version="v0.1">
  //
  pElt = Xml_Element_New ("HiiVarInfoDump");
  if (pElt == NULL) {
    return;
  }
  pAttr = Xml_Attribute_New ("version", "v0.1");
  if (pAttr == NULL) {
    return;
  }
  Xml_Element_Add_Attribute (pElt, pAttr);
  //
  // Dispatch all formset
  //
  HiiVar_Formset_Dispatch ();
  
  //
  // Link all opcode into xml node
  //
  Link  = GetFirstNode (&gHiiVarPkgList);
  while (!IsNull (&gHiiVarPkgList, Link)) {
    pFormset = HIIVAR_FORMSET_FROM_LINK (Link);
    Link = GetNextNode (&gHiiVarPkgList, Link);
    //
    // Repeat add opcode
    //
    HiiVar_Xml_Opcode (pFormset->Opcode, pElt);
  }
  Xml_Element_Add_Child (pElement, pElt);

  pStorage = HiiVar_VarStore_Item_Formset_Dispatch ();
  if (pStorage == NULL) {
    return;
  }
  HiiVar_VarStore_Item_Xml_Write (pElement, pStorage);
  return;
}

//
//==============================L"Setup"=============================== 
//
VOID *
HiiVar_VarStore_Item_Formset_Found (
  HIIVAR_FORMSET                        *pFormset 
  )
{
  LIST_ENTRY                            *Link;
  HIIVAR_STORAGE                        *pStorage;
  EFI_GUID                               Guid  = SETUP_VARIABLE_GUID;
  //
  // Link all storage under formset
  //
  Link  = GetFirstNode (&pFormset->StorageListHead);
  while (!IsNull (&pFormset->StorageListHead, Link)) {
    pStorage = HIIVAR_STORAGE_FROM_LINK (Link);
    Link = GetNextNode (&pFormset->StorageListHead, Link);
    HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "varstore(%04x %s) found in formset (%a)\n", pStorage->StoreId, pStorage->Name, pFormset->Opcode->Name));
    //
    // We assume one formset only have one L"Setup" Store
    // and guid "EC87D643-EBA4-4BB5-A1E5-3F3E36B20DA9"
    //
    if ((StrCmp (SETUP_NAME, pStorage->Name) == 0) &&
        CompareGuid (&Guid, &pStorage->Guid)) {
      return pStorage;
    }
  }
  return NULL;
}

/**
  Tell whether this Operand is an known item OpCode.

  @param  Operand                Operand of an IFR OpCode.

  @retval TRUE                   This is an known OpCode.

**/
BOOLEAN
HiiVar_Is_KnownVarStoreItemOpCode (
  IN UINT8              Operand
  )
{
  UINT8  Index = 0;
  while (gDispatchVarStoreItemOperand[Index] != 0) {
    if (Operand == gDispatchVarStoreItemOperand[Index]) {
      return TRUE;
    }
    Index ++;
  }
  return FALSE;
}

/**
  Tell whether this varstore id is matched with an OpCode varstoreid.

  @param  VarStoreId -- the varstore id of varstore
  @param  pOpcode    -- the opcode pointer

  @retval TRUE   is matched.

**/
BOOLEAN 
HiiVar_VarStore_Item_Opcode_Match (
  IN  HIIVAR_OPCODE            *pOpcode,
  IN  UINT16                    VarStoreId
  )
{

  EFI_IFR_NUMERIC             *pQeustion;
  if (pOpcode == NULL) {
    return FALSE;
  }  
  
  pQeustion = (EFI_IFR_NUMERIC *)HIIVAR_OPCODE_IFRPTR (pOpcode);
  //
  // We only disable known varstore item opcode, others just return
  //
  if (!HiiVar_Is_KnownVarStoreItemOpCode (pQeustion->Header.OpCode)) {
    return FALSE;
  }

  //
  // Check varstore id is matched with current
  //
  if (pQeustion->Question.VarStoreId == VarStoreId) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "%a \n", HiiVar_Opcode_GetAttrData_ByName (pOpcode, NAME_ATR_STR)));
    return TRUE;
  }
  return FALSE;
}

/** 
  new a varstore item instance and insert it into list
  @param  pOpcode    -- the opcode pointer

  
**/
VOID 
HiiVar_VarStore_Item_New (
  IN  HIIVAR_OPCODE            *pOpcode
  )
{
  EFI_IFR_NUMERIC           *pQeustion;
  HIIVAR_OPCODE             *pChild;
  HIIVAR_VARSTORE_ITEM      *pItem;
  if (pOpcode == NULL) {
    return;
  }
  pQeustion = (EFI_IFR_NUMERIC *)HIIVAR_OPCODE_IFRPTR (pOpcode);
  
  //
  // init varstore item
  //
  pItem = (HIIVAR_VARSTORE_ITEM *)AllocateZeroPool (sizeof (HIIVAR_VARSTORE_ITEM));
  if (pItem == NULL) {
    goto ErrorExit;
  }
  pItem->Signature = HIIVAR_ITEM_SIGNATURE;
  
  pItem->Name      = Clone_Ascii_String_WO_SPACE (HiiVar_Opcode_GetAttrData_ByName (pOpcode, NAME_ATR_STR));
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  name = %a\n", pItem->Name));
  if (pItem->Name == NULL) {
    goto ErrorExit;
  }
  pItem->Offset    = pQeustion->Question.VarStoreInfo.VarOffset;
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  Offset = %x\n", pItem->Offset));
  pItem->Size      = Clone_Ascii_String_WO_SPACE (HiiVar_Opcode_GetAttrData_ByName (pOpcode, LEN_ATR_STR));
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  Size = %a\n", pItem->Size));
  pChild = HiiVar_Opcode_GetChild_ByName (pOpcode, CURRENT_TAG_STR);
  if (pChild == NULL) {
    goto ErrorExit;
  } else {
    pItem->Value     = Clone_Ascii_String_WO_SPACE (HiiVar_Opcode_GetAttrData_ByName (pChild, VALUE_ATR_STR));
    HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  Value = %a\n", pItem->Value));
  }
  if (pItem->Value == NULL) {
    goto ErrorExit;
  }
  //
  // Insert the child opcode into root.
  //
  InsertTailList (&gHiiVarStoreItemPkgList, &pItem->Link);  
  return;
ErrorExit:
  if (pItem->Name != NULL) {
    FreePool (pItem->Name);
  }
  if (pItem->Size != NULL) {
    FreePool (pItem->Size);
  }
  if (pItem->Value != NULL) {
    FreePool (pItem->Value);
  }
  if (pItem != NULL) {
    FreePool (pItem);
  }
  return;
}

/** 
  Dispatch all var store item under opcode
  @param  VarStoreId -- the varstore id of varstore
  @param  pOpcode    -- the opcode pointer

  
**/
VOID
HiiVar_VarStore_Item_Opcode_Dispatch (
  IN  UINT16                   VarStoreId,
  IN  HIIVAR_OPCODE            *pOpcode
  ) 
{
  LIST_ENTRY                            *Link;
  HIIVAR_OPCODE                         *pCurrentOpcode;
       
  if (pOpcode == NULL) {
    return;
  }
  if (HiiVar_VarStore_Item_Opcode_Match (pOpcode, VarStoreId)) {
    HiiVar_VarStore_Item_New (pOpcode);
  }
  
  //
  // dispatch all opcode under opcode
  //
  Link  = GetFirstNode (&pOpcode->ChildList);
  while (!IsNull (&pOpcode->ChildList, Link)) {
    pCurrentOpcode = HIIVAR_OPCODE_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->ChildList, Link);
    //HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a \n", HiiVar_Opcode_GetAttrData_ByName (pOpcode, NAME_ATR_STR)));
    //
    // check if current opcode item  matched VarStore
    //
    HiiVar_VarStore_Item_Opcode_Dispatch (VarStoreId, pCurrentOpcode);
  }
}

/** 
  Dispatch all var store item under formset
**/
VOID *
HiiVar_VarStore_Item_Formset_Dispatch (
  VOID
  )
{
  LIST_ENTRY                            *Link;
  HIIVAR_FORMSET                        *pFormset;
  HIIVAR_STORAGE                        *pStorage;
  HIIVAR_STORAGE                        *pReturn = NULL;
  //
  // Link all opcode into xml node
  //
  Link  = GetFirstNode (&gHiiVarPkgList);
  while (!IsNull (&gHiiVarPkgList, Link)) {
    pStorage = NULL;  
    pFormset = HIIVAR_FORMSET_FROM_LINK (Link);
    Link = GetNextNode (&gHiiVarPkgList, Link);
    //
    // check if current formset have L"Setup" VarStore
    //
    pStorage = HiiVar_VarStore_Item_Formset_Found (pFormset);
    if (pStorage == NULL) {
      continue;
    }
    //HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "varstore(%04x %a) found in formset (%s)\n", pStorage->StoreId, pStorage->Name, pFormset->Opcode->Name));
    HiiVar_VarStore_Item_Opcode_Dispatch (pStorage->StoreId, pFormset->Opcode);
    pReturn = pStorage;
  }

  return pReturn;
}

/**
  
  Get the item by offset in varstore
  @param  Offset    -- the Offset of varstore

  @retval a item will returned, null is failed.
**/
VOID *
HiiVar_VarStore_Item_Serch_ByOffset (
  IN   UINTN              Offset
  )
{
  LIST_ENTRY                            *Link;
  HIIVAR_VARSTORE_ITEM                  *pItem;
  //
  // Link all opcode into xml node
  //
  Link  = GetFirstNode (&gHiiVarStoreItemPkgList);
  while (!IsNull (&gHiiVarStoreItemPkgList, Link)) {
    pItem = HIIVAR_ITEM_FROM_LINK (Link);
    Link = GetNextNode (&gHiiVarPkgList, Link);
    //
    // check if current formset have L"Setup" VarStore
    //
    if (pItem->Offset == Offset) {
      return pItem;
    }
  }

  return NULL;  
}
/**
  
  New a element as below
  <VarStore Name="Setup" size="xx" guid="">
    <Data "xx"="xxxxxxxxxxxxxxxxxxxxx"/>
    <Item  "">
  @param  pRoot    -- the root xml element
  @param pStorage  -- the varstore
  @retval a xml element will returned, null is failed.
**/
VOID
HiiVar_VarStore_Item_Xml_Write (
  XML_ELEMENT                            *pRoot,
  HIIVAR_STORAGE                        *pStorage
  )
{
  XML_ELEMENT                            *pElt;
  XML_ELEMENT                            *pChildElt;
  XML_ATTRIBUTE                          *pAtr;
  UINTN                                 i;
  CHAR8                                 pString[100];
  //LIST_ENTRY                            *Link;
  HIIVAR_VARSTORE_ITEM                  *pItem;
  if ((pStorage == NULL) || (pRoot == NULL)) { //SAFETY CHECK
    return;
  }


  if (pStorage->Size == 0) { //if current size is zero
    return;
  }
  pElt = (XML_ELEMENT *)Xml_Element_New ("VarStore");
  if (pRoot == NULL) { //safety check
    return;
  }
  //
  // Add name
  //
  pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New ("name", Unicode_To_Ascii (pStorage->Name, NULL));
  if (pAtr == NULL) { //safety check
    return;
  }
  Xml_Element_Add_Attribute (pElt, pAtr);
  //
  // Add Size
  //
  pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New ("size", Hex_To_String_Order ((UINT8 *)&pStorage->Size, 2));
  if (pAtr == NULL) { //safety check
    return ;
  }
  Xml_Element_Add_Attribute (pElt, pAtr);

  //
  // Add Guid
  //
  pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New ("guid", Guid_To_Acsii (&pStorage->Guid));
  if (pAtr == NULL) { //safety check
    return ;
  }
  Xml_Element_Add_Attribute (pElt, pAtr);

  //
  // Add Data
  //
  for (i = 0; i < pStorage->Size/16; i++) {
    pChildElt =  (XML_ELEMENT *)Xml_Element_New ("data");
    if (pChildElt == NULL) { //safety check
      return ;
    }
    //
    // XML Element can't been start with number.
    //
    AsciiSPrint (pString, 100, "L%a", Hex_To_String ((UINT8 *)&i, 1));
    pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New (
                             pString,
                             Hex_To_String_Space_Format_Align (pStorage->Data+i*16, 16, 17)
                             );
    Xml_Element_Add_Attribute (pChildElt, pAtr);
    Xml_Element_Add_Child (pElt, pChildElt);
  }

  if (pStorage->Size%16) {
    pChildElt =  (XML_ELEMENT *)Xml_Element_New ("data");
    if (pChildElt == NULL) { //safety check
      return ;
    }
    //
    // XML Element can't been start with number.
    //
    AsciiSPrint (pString, 100, "L%a", Hex_To_String ((UINT8 *)&i, 1));
    pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New (
                             pString,
                             Hex_To_String_Space_Format_Align (pStorage->Data+i*16, 16, 17)
                             );
    Xml_Element_Add_Attribute (pChildElt, pAtr);
    Xml_Element_Add_Child (pElt, pChildElt);
  }

  //
  // Add all item
  //
  for (i = 0; i < pStorage->Size; i ++) {
  
    //
    // match offset
    //  
    pItem =  HiiVar_VarStore_Item_Serch_ByOffset (i); 
    if (pItem == NULL) {
      pChildElt =  (XML_ELEMENT *)Xml_Element_New ("Rsvd");
      if (pElt == NULL) { //safety check
        return ;
      }
    } else {
      pChildElt =  (XML_ELEMENT *)Xml_Element_New ("Item");
      if (pElt == NULL) { //safety check
        return ;
      }      
    }
    Xml_Element_Add_Child (pElt, pChildElt);
    //
    // Add offset attribute
    //
    pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New (
                             "Offset",
                             Hex_To_String ((UINT8 *)&i, 2) //VarSize must < 0xffff
                             );  
    if (pAtr == NULL) {
      continue;
    }
    Xml_Element_Add_Attribute (pChildElt, pAtr);
    if (pItem == NULL) {
      //
      // If current item is null, used var store offset value
      //
      pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New (
                             "value",
                             Hex_To_String_Order ((UINT8 *)(pStorage->Data+i), 1) //VarSize must < 0xffff
                             );  
      if (pAtr == NULL) {
        continue;
      }
    }
    Xml_Element_Add_Attribute (pChildElt, pAtr);
    
    if (pItem == NULL) {
      continue;
    }
    //
    // Add value Attribute
    //
    pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New (
                             "value",
                             pItem->Value //VarSize must < 0xffff
                             );  
    if (pAtr == NULL) {
      continue;
    }   
    Xml_Element_Add_Attribute (pChildElt, pAtr);
    //
    // Add size Attribute
    //
    pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New (
                             "size",
                             pItem->Size //VarSize must < 0xffff
                             );  
    if (pAtr == NULL) {
      continue;
    }   
    Xml_Element_Add_Attribute (pChildElt, pAtr);
    //
    // Add Name Attribute
    //
    pAtr = (XML_ATTRIBUTE *)Xml_Attribute_New (
                             "name",
                             pItem->Name //VarSize must < 0xffff
                             );  
    if (pAtr == NULL) {
      continue;
    }
    Xml_Element_Add_Attribute (pChildElt, pAtr);    

  }
  Xml_Element_Add_Child (pRoot, pElt);
  return ;
}
/**
  Get the question opcode by string

  @param  pString    -- the opcode type string

  @retval a opcode will returned, 0 means not found.
**/
UINT8
HiiVar_Xml_Get_Opcode_By_Type_String (
  IN  CHAR8    *pString
  )
{
  if (pString == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }
  if (AsciiStrCmp (pString, QUESTION_NUMERIC) == 0) {
    return EFI_IFR_NUMERIC_OP;
  }
  if (AsciiStrCmp (pString, QUESTION_CHECKBOX) == 0) {
    return EFI_IFR_CHECKBOX_OP;
  }
  if (AsciiStrCmp (pString, QUESTION_ONE_OF) == 0) {
    return EFI_IFR_ONE_OF_OP;
  }
  return 0;
}

/**
  Get current element matched opcode 

  @param  pElement    -- the xml element pointer

  @retval a opcode will returned, 0 means not found.
**/
UINT8 
HiiVar_Xml_Get_Element_Opcode (
  IN  XML_ELEMENT      *pElement
  )
{
  XML_ATTRIBUTE    *pAttr;
  if (pElement == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }
  //
  // formset opcode have tag name  "formset"
  //
  if (AsciiStrCmp (FORMSET_TAG_STR, pElement->pName) == 0) {
    return EFI_IFR_FORM_SET_OP;
  }
  //
  // form opcode have tag name  "form"
  //
  if (AsciiStrCmp (FORM_TAG_STR, pElement->pName) == 0) {
    return EFI_IFR_FORM_OP;
  }
  //
  // quesiton opcode have tag name  "quesiton"
  //
  if (AsciiStrCmp (QUETION_TAG_STR, pElement->pName) == 0) {
    pAttr = Xml_Element_Get_Attributes_By_Name (pElement, TYPE_ATR_STR);
    if (pAttr == NULL) {
      return 0;
    }
    return HiiVar_Xml_Get_Opcode_By_Type_String(pAttr->pValue);
  }
  return 0;
}
/**
  check if current xml question is supported and need parsed

  @param  pElement    -- the xml element pointer

  @retval TRUE if support, others FALSE.
**/
BOOLEAN
HiiVar_Xml_Question_Type_Supported (
  IN  XML_ELEMENT      *pElement
  )
{

  UINT8                    Opcode;
  if (pElement == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }
  //
  // serach current element have "type" attribute
  //
  Opcode = HiiVar_Xml_Get_Element_Opcode (pElement);
  if (Opcode == 0) return FALSE;

  return HiiVar_Is_KnownVarStoreItemOpCode (Opcode);
}
/**
  check if current element have diff value of current and modify tag

  @param  pElement    -- the xml element pointer

  @retval TRUE if support, others FALSE.
**/
BOOLEAN 
HiiVar_Xml_Value_Diff (
  IN  XML_ELEMENT      *pElement
  )
{

  XML_ATTRIBUTE  *pCurrentValueAttr;
  XML_ATTRIBUTE  *pModifyValueAttr;
  if (pElement == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }
  //
  // check current is a matched quetion type element
  //
  if (!HiiVar_Xml_Question_Type_Supported (pElement)) {
    return FALSE;
  }

  //
  // check current element have current&modify tag, and the value of them 
  // are different
  //
  pCurrentValueAttr = Xml_Element_Get_Child_Attr_By_Name (pElement, CURRENT_TAG_STR, VALUE_ATR_STR);
  if (pCurrentValueAttr == NULL) {
    return FALSE;
  }
  pModifyValueAttr = Xml_Element_Get_Child_Attr_By_Name (pElement, MODIFY_TAG_STR, VALUE_ATR_STR);
  if (pModifyValueAttr == NULL) {
    return FALSE;
  }
  if (AsciiStrCmp (pCurrentValueAttr->pValue, pModifyValueAttr->pValue) != 0) return TRUE;
  
  return FALSE;
}
/**
  found the diff question item in formset tag

  @param  pElement    -- the xml element pointer

  @retval none.
**/
VOID 
HiiVar_Xml_HiiDumpInfo_Formset_Compare (
  IN  XML_ELEMENT     *pFormsetElt,
  IN  XML_ELEMENT     *pElement,
  IN  BOOLEAN         *HaveDiff
  )
{

  XML_ELEMENT          *pChildElt;
  LIST_ENTRY           *Link;
  CHAR8                *pString;
  //
  // Current question item is differed 
  //
  if (HiiVar_Xml_Value_Diff (pElement)) {
    pString = (CHAR8 *) Xml_Element_Get_AttributesData_By_Name (pElement, NAME_ATR_STR);
    HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "a child name : %a in ",pString));
    pString = (CHAR8 *) Xml_Element_Get_AttributesData_By_Name (pElement, NAME_ATR_STR);
    HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "%a formset found\n",pString));
    Xml_Element_Add_Child (pFormsetElt, Xml_Element_Clone (pElement));
    *HaveDiff = TRUE;
  }
  Link  = GetFirstNode (&pElement->Children);
  while (!IsNull (&pElement->Children, Link)) {
    pChildElt = XML_ELEMENT_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Children, Link);
    //
    // serach the diff item under child
    //
    HiiVar_Xml_HiiDumpInfo_Formset_Compare (pFormsetElt, pChildElt, HaveDiff);
  }
}
/**
  found the diff question item in formset tag and formset 
  and insert it into list

  @param  pElement    -- the xml element pointer

  @retval none.
**/
VOID  
HiiVar_Xml_HiiDumpInfo_Compare (
  IN  XML_ELEMENT     *pElement,
  IN  LIST_ENTRY      *List
  )
{
  XML_ELEMENT          *pFormsetElt;
  XML_ELEMENT          *pChildElt;
  LIST_ENTRY           *Link;
  BOOLEAN              HaveDiff = FALSE;
 // UINTN                Index;
 // CHAR8                *pString;
  //
  // get matched name child element
  //
  pFormsetElt = NULL;
  Link  = GetFirstNode (&pElement->Children);
  while (!IsNull (&pElement->Children, Link)) {
    pChildElt = XML_ELEMENT_FROM_LINK (Link); 
    Link = GetNextNode (&pElement->Children, Link);
    //
    // if it's a formset element
    //
    if (HiiVar_Xml_Get_Element_Opcode (pChildElt) == EFI_IFR_FORM_SET_OP) {
      pFormsetElt = Xml_Element_Clone_With_Attribute (pChildElt);
      if (pFormsetElt == NULL) {
        continue;
      }
      HaveDiff = FALSE;
      HiiVar_Xml_HiiDumpInfo_Formset_Compare (pFormsetElt, pChildElt, &HaveDiff);
      if (HaveDiff) {
        //Xml_Element_Debug_Print (pFormsetElt, Index); 
        InsertTailList (List, &pFormsetElt->Link);

      } else {
        //
        // Free pformsetElt [TANK TO DO]
        //
      }
    }
  } 

}

/**
  found the XML element and hii opcode instanced's attribute by it's name
  and check if they are matched

  @param  pOpcode     -- the hii opcode pointer
  @param  pElement    -- the xml element pointer
  @param  pName       -- the attribute name

  @retval TRUE if the value is matched, others failed.
**/
BOOLEAN
HiiVar_Xml_Diff_Attr_Value_Matched_By_Name (
  IN  HIIVAR_OPCODE        *pOpcode,
  IN  XML_ELEMENT          *pElement,
  IN  CHAR8                *pName
  )
{
  CHAR8                       *pEltString;
  CHAR8                       *pOpcodeString; 
  //
  // get xml element attribute value by name
  //
  pEltString = Xml_Element_Get_AttributesData_By_Name (pElement, pName);
  if (pEltString == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "%a(%d) \n",  __FUNCTION__, __LINE__));
    return FALSE;
  } 
  //
  // get hii opcode attribute value by name
  //
  pOpcodeString = HiiVar_Opcode_GetAttrData_ByName (pOpcode, pName);
  if (pOpcodeString == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "%a(%d) \n",  __FUNCTION__, __LINE__));
    return FALSE;
  }
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "%a(%d) %a=%a\n",  __FUNCTION__, __LINE__, pEltString, pOpcodeString));
  if (AsciiStrCmp (pEltString, pOpcodeString) == 0) return TRUE;

  return FALSE;
}

/**
  found the matched hii formset opcode of current XML element formset
  @param  pElement    -- the xml element pointer

  @retval a hii formset opcode will returned, others NULL.
**/
VOID *
HiiVar_Xml_Diff_FormSet_Mapped (
  IN  XML_ELEMENT          *pElement
  )
{
  LIST_ENTRY                            *Link;
  HIIVAR_FORMSET                        *pFormset;

  if (pElement == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }  
  //
  // Check current element is a formset
  //
  if (HiiVar_Xml_Get_Element_Opcode (pElement) != EFI_IFR_FORM_SET_OP) { 
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "this element should been formset name opcode = %x\n",\
      HiiVar_Xml_Get_Element_Opcode (pElement)));
    return NULL;
  }
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, " formset name %a\n",\
      (CHAR8 *) Xml_Element_Get_AttributesData_By_Name (pElement, NAME_ATR_STR)));
  //
  // Link all opcode of formset instance
  //
  Link  = GetFirstNode (&gHiiVarPkgList);
  while (!IsNull (&gHiiVarPkgList, Link)) {
    pFormset = HIIVAR_FORMSET_FROM_LINK (Link);
    Link = GetNextNode (&gHiiVarPkgList, Link);

    //
    // check if "id" string matched
    //
    if (!HiiVar_Xml_Diff_Attr_Value_Matched_By_Name (pFormset->Opcode, pElement, ID_ATR_STR)) {
      continue;
    }
    //
    // check if "name" string matched
    //
    if (!HiiVar_Xml_Diff_Attr_Value_Matched_By_Name (pFormset->Opcode, pElement, NAME_ATR_STR)) {
      continue;
    }

    return pFormset;
  }
  return NULL;
}

/**
  found the matched hii question opcode of current XML element question
  @param  pOpcode     -- the hii opcode pointer
  @param  pElement    -- the xml element pointer

  @retval a hii question opcode will returned, others NULL.
**/
VOID *
HiiVar_Xml_Diff_Opcode_Mapped (
  IN  HIIVAR_OPCODE        *pOpcode,
  IN  XML_ELEMENT          *pElement
  )
{
  HIIVAR_OPCODE               *pCurrentOpcode;
  HIIVAR_OPCODE               *pMatchedOpcode;
  LIST_ENTRY                  *Link;
  //
  // Id name type matched
  //
  if (HiiVar_Xml_Diff_Attr_Value_Matched_By_Name (pOpcode, pElement, ID_ATR_STR) &&
      HiiVar_Xml_Diff_Attr_Value_Matched_By_Name (pOpcode, pElement, NAME_ATR_STR) && 
      HiiVar_Xml_Diff_Attr_Value_Matched_By_Name (pOpcode, pElement, TYPE_ATR_STR)){
    return pOpcode;
  }
  Link  = GetFirstNode (&pOpcode->ChildList);
  while (!IsNull (&pOpcode->ChildList, Link)) {
    pCurrentOpcode = HIIVAR_OPCODE_FROM_LINK (Link);
    Link = GetNextNode (&pOpcode->ChildList, Link);
    pMatchedOpcode = HiiVar_Xml_Diff_Opcode_Mapped (pCurrentOpcode, pElement);
    if (pMatchedOpcode != NULL) {
      return pMatchedOpcode;
    }
  }
  return NULL;
}

/**
  update the modify value into variable
  @param  pOpcode     -- the hii opcode pointer
  @param  pElement    -- the xml element pointer

  @retval none.
**/
VOID
HiiVar_Xml_Diff_Item_Update_Value (
  IN  XML_ELEMENT          *pElement,
  IN  HIIVAR_OPCODE        *pOpcode
  )
{
  HIIVAR_STORAGE                        *pStorage;
  EFI_STATUS                            Status;
  XML_ATTRIBUTE                         *pXmlAttr;
  EFI_IFR_OP_HEADER                     *pIfr;
  UINT8                                 Size;
  UINT8                                 *VarData;
  UINTN                                 VarSize;  
  UINT32                                VarAttr; 
  UINT8                                 Flags;
  UINTN                                 Value;
  UINTN                                 VarValue; 
  UINT16                                VarOffset;
  pXmlAttr = Xml_Element_Get_Child_Attr_By_Name (pElement, MODIFY_TAG_STR, VALUE_ATR_STR);
  if (pXmlAttr == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "Can't found modify in XML\n"));
    return;
  }
  HIIVAR_DEBUG ((DEBUG_LEVEL_ALL, "%a value = %a", \
    Xml_Element_Get_AttributesData_By_Name (pElement, NAME_ATR_STR),\
    pXmlAttr->pValue
    ));
  Value = AsciiStrHexToUintn (pXmlAttr->pValue);
  pStorage = HiiVar_Get_Item_Storage (pOpcode);
  if (pStorage == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, " can't found matched storage\n"));
    return;
  }
  
  pIfr = (EFI_IFR_OP_HEADER *)HIIVAR_OPCODE_IFRPTR (pOpcode);
  switch (pIfr->OpCode) {
    case EFI_IFR_ONE_OF_OP:
    case EFI_IFR_NUMERIC_OP:
    case EFI_IFR_CHECKBOX_OP:
      //
      // Calc the size , varstoreid , offset of one of item
      //
      Flags = ((EFI_IFR_ONE_OF *) pIfr)->Flags;
      Flags = Flags & EFI_IFR_NUMERIC_SIZE;
      Size = (UINTN)(1 << Flags);
      VarOffset = ((EFI_IFR_ONE_OF *) pIfr)->Question.VarStoreInfo.VarOffset;
      break;
    default:
      Size = 0;
      break;
  }
  VarSize = 0;
  Status = gRT->GetVariable (
                  pStorage->Name,
                  &pStorage->Guid, 
                  &VarAttr,
                  &VarSize, 
                  VarData
                  );
  if (Status == EFI_BUFFER_TOO_SMALL) {
    VarData = AllocateZeroPool (VarSize);
    Status = gRT->GetVariable (
                    pStorage->Name,
                    &pStorage->Guid, 
                    &VarAttr,
                    &VarSize, 
                    VarData
                    );
  }
  if (EFI_ERROR (Status)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "get %s failed status = %r\n", pStorage->Name, Status));
    return;
  }
  switch (Size)  {
    case 1:
      VarValue = *(VarData + VarOffset);
      *(VarData + VarOffset)=(UINT8) Value;
      break;
    case 2:
      VarValue = *(UINT16 *)(VarData + VarOffset);
      *(UINT16 *)(VarData + VarOffset)=(UINT16) Value;
      break;
    case 4:
      VarValue = *(UINT32 *)(VarData + VarOffset);
      *(UINT32 *)(VarData + VarOffset)=(UINT32) Value;
      break;  
    case 8:
      VarValue = *(UINT64 *)(VarData + VarOffset);
      *(UINT64 *)(VarData + VarOffset)=(UINT64) Value;
      break;       
    default:
      break;
  }
  if (VarValue == Value) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ALL, ", as same in storage L\"%s\" \n", pStorage->Name));
    return;
  }
  HIIVAR_DEBUG ((DEBUG_LEVEL_ALL, ", not equals to value = %x in variable L\"%s\" \n", VarValue, pStorage->Name));
  Status = gRT->SetVariable (
                  pStorage->Name, 
                  &pStorage->Guid,
                  VarAttr,
                  VarSize, 
                  VarData
                  );
  if (EFI_ERROR (Status)) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "SET %s failed status = %r\n", pStorage->Name, Status));
    return;
  }  
  HIIVAR_DEBUG ((DEBUG_LEVEL_ALL, "Update %s status = %r\n", pStorage->Name, Status));
  HIIVAR_DEBUG ((DEBUG_LEVEL_ALL, "you may reset it to make it make sence\n"));
}

/**
  Found item matched opcode and the formset it belong to.

  @param  pElement    -- the pElement of diff formset element

  @retval none. 
**/
VOID
HiiVar_Xml_Diff_Item_Mapped (
  IN  XML_ELEMENT          *pElement
  )
{
  XML_ELEMENT                           *pQuestionElt;
  HIIVAR_OPCODE                         *pOpcode;
  HIIVAR_FORMSET                        *pFormset;
  LIST_ENTRY                            *Link;
  //UINTN                                 Index = 0;
  

  if (pElement == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 
  //Xml_Element_Debug_Print (pElement, Index);
  pFormset = HiiVar_Xml_Diff_FormSet_Mapped (pElement);
  if (pFormset == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 
  Link  = GetFirstNode (&pElement->Children);
  while (!IsNull (&pElement->Children, Link)) {
    pQuestionElt = XML_ELEMENT_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Children, Link);
    //
    // Found matched opcode with current element.
    //
    pOpcode = HiiVar_Xml_Diff_Opcode_Mapped (pFormset->Opcode, pQuestionElt);
    if (pOpcode == NULL) {
      HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a not found \n", Xml_Element_Get_Attributes_By_Name (pQuestionElt, NAME_ATR_STR)));
      continue;
    }
    HiiVar_Xml_Diff_Item_Update_Value (pQuestionElt, pOpcode);
  }
}

/**
  Found item matched opcode instance and set it into variable

  @param  List    -- the diff item list

  @retval none. 
**/
VOID
HiiVar_Xml_Diff_Item_Prase (
  LIST_ENTRY   *List
  )
{
  XML_ELEMENT            *pElement;
  LIST_ENTRY             *Link;
  //UINTN                  Index = 0;
  if (IsListEmpty (List)) return;
  Link  = GetFirstNode (List);
  while (!IsNull (List, Link)) {
    pElement = XML_ELEMENT_FROM_LINK (Link);
    //Xml_Element_Debug_Print (pElement, Index);
    HiiVar_Xml_Diff_Item_Mapped (pElement);
    Link = GetNextNode (List, Link);
  }
}

/**
  Prase the input document for hii variable,
  Set the diff item in it.

  @param  pDocument  -- the document pointer

  @retval none. 
**/
VOID
HiiVar_Xml_Document_Parse (
  IN  XML_DOCUMENT      *pDocument
  )
{
  XML_ELEMENT          *pElement;
  XML_ELEMENT          *pElt;
  LIST_ENTRY           List;
  if (pDocument == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }

  //
  // Get root element of document
  //
  pElement = Xml_Document_Get_Root (pDocument);
  if (pElement == NULL) {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }

  //
  // Init diff item list
  //
  InitializeListHead (&List);

  //
  // get HiiVarInfoDump tag and prase the element under it.
  //
  pElt = Xml_Element_Get_Child_By_Name (pElement, "HiiVarInfoDump");
  if (pElt != NULL) {
    HiiVar_Xml_HiiDumpInfo_Compare (pElt, &List);
  } else {
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "HiiVarInfoDump not found\n"));
    return ;
  }

  //
  // dispatch all opcode current
  //
  HiiVar_Formset_Dispatch ();

  //
  // prase all diff item
  //
  HiiVar_Xml_Diff_Item_Prase (&List);
  
  
  
}