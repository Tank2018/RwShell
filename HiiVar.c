#include "HiiVar.h"

LIST_ENTRY                      gHiiVarPkgList = INITIALIZE_LIST_HEAD_VARIABLE (gHiiVarPkgList);
LIST_ENTRY                      gHiiVarStoreItemPkgList = INITIALIZE_LIST_HEAD_VARIABLE (gHiiVarStoreItemPkgList);
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
  pAttr = HiiVar_Opcode_Attr_New (INFO_ATR_STR, pString);
  if (pAttr != NULL) {
    HiiVar_Opcode_Add_Attr (pNewOpcode, pAttr);
  }
  //
  // add "help" tag into root
  //
  HiiVar_Opcode_Add_Child (pOpcode, pNewOpcode);

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
  // Add value attr 
  //
  HIIVAR_DEBUG ((DEBUG_LEVEL_INFO, "  value = %a \n", HiiVar_Get_Item_Vaule (pOpcode)));
  pAttr = HiiVar_Opcode_Attr_New (VALUE_ATR_STR, HiiVar_Get_Item_Vaule (pOpcode));
  if (pAttr != NULL) {
    HiiVar_Opcode_Add_Attr (pNewOpcode, pAttr);
  } 
  //
  // add "current" tag into root
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
      HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "len = %a ", pString));
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
                    pNumeric->Question.Header.Prompt, 
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
      HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "len = %a ", pString));
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
      HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "len = %a ", pString));
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
    HIIVAR_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) load the formset data from handle failed\n", __FUNCTION__, __LINE__));
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