#include "Xml.h"

//============================================================
// Xml String defines									     =
//============================================================



UINTN 
Xml_Calc_Escape_String_Length (
  IN CHAR8    *pStr, 
  IN BOOLEAN  Attribute
  )
{
  UINTN    i    = 0;
  UINTN    Size = 0;

  if (pStr == NULL) {
    return 0;
  }
  while (pStr[i] != '\0')  {

    switch (pStr[i] ) {
      //case '&':
      //  Size += AsciiStrLen ("&amp;");
      //  break;
      //case '<':
      //  Size += AsciiStrLen ("&lt;");
      //  break;
      //case '>':
      //  Size += AsciiStrLen ("&gt;");
      //  break;
      case '\"':
        if (Attribute)
          Size += AsciiStrLen ("&quot;");
        else
          Size += AsciiStrLen ("\"");
        break;
      case '\'':
        if (Attribute)
          Size += AsciiStrLen ("&apos;");
        else
          Size += AsciiStrLen ("\'");
        break;

      default:
        Size ++;
        break;
    }
    i++;
  }
  return Size;
}

/** 
  escape some "<","&"..... string
  @param pStr             -- the string pointer 
  @param IsAttribute      -- is it a attribute

  @retval NULL if failed, escape string will return
**/
CHAR8 *
Xml_Escape_String (
  IN CHAR8            *pStr, 
  IN BOOLEAN          IsAttribute
  )
{
  UINTN    i;
  UINTN    j;
  UINTN    Size;
  CHAR8    *pString;

  if (pStr == NULL) { //safety check
    return NULL;
  }
  //
  // calc the escape string length, if matched with org, just return org string
  //
  Size = Xml_Calc_Escape_String_Length (pStr, IsAttribute);
  if (Size == AsciiStrLen (pStr)) {
    return pStr;
  }

  pString = (CHAR8 *)AllocateZeroPool (Size);
  if (pString == NULL) { //safety check
    return NULL; 
  }
  i = 0;
  j = 0;
  while (pStr[i] != '\0') {

    switch (pStr[i]) {

      //case '&':
      //  CopyMem (pString+j, "&amp;", AsciiStrLen ("&amp;"));
      //  j += AsciiStrLen ("&amp;");
      //  break;
      //case '<':
      //  CopyMem (pString+j, "&lt;", AsciiStrLen ("&lt;"));
      //  j += AsciiStrLen ("&lt;");
      //  break;
      //case '>':
      //  CopyMem (pString+j, "&gt;", AsciiStrLen ("&gt;"));
      //  j += AsciiStrLen ("&gt;");
      //  break;
      case '\"':
        if (IsAttribute) {
          CopyMem (pString+j, "&quot;", AsciiStrLen ("&quot;"));
          j += AsciiStrLen ("&quot;");
        } else {
          CopyMem (pString+j, "\"", AsciiStrLen ("\""));
          j += AsciiStrLen ("\"");
        }
        break;
      case '\'':
        if (IsAttribute) {
          CopyMem (pString+j, "&apos;", AsciiStrLen ("&apos;"));
          j += AsciiStrLen ("&apos;");
        } else {
          CopyMem (pString+j, "\"", AsciiStrLen ("\""));
          j += AsciiStrLen ("\"");
        }
        break;

      default:
        pString[j] = pStr[i];
        j++;
        break;

    }
    i++;
  }
  pString[j] = '\0';

  return pString;
}


//============================================================
// Xml Attribute defines								                     =
//============================================================

/**
  New a xml attribute 
  @param pName  -- the name of the attribute
  @param pValue -- the value of the attribute

  @retval new xml attribute, null is failed
**/
XML_ATTRIBUTE *
Xml_Attribute_New (
  IN CHAR8                      *pName, 
  IN CHAR8                      *pValue
  )
{
  XML_ATTRIBUTE           *pAttr;
  if ((pName == NULL) || (pValue == NULL)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pAttr = (XML_ATTRIBUTE *) AllocateZeroPool (sizeof(XML_ATTRIBUTE));
  if (pAttr == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  
  pAttr->Signature = XML_ATTRIBUTE_SIGNATURE;
  pAttr->pName  = Clone_Ascii_String_WO_SPACE (pName);
  pAttr->pValue = Clone_Ascii_String_WO_SPACE (pValue);

  return pAttr;
}
/**
  Clone a xml attribute 
  @param pName  -- the name of the attribute
  @param pValue -- the value of the attribute

  @retval new xml attribute, null is failed
**/
XML_ATTRIBUTE *
Xml_Attribute_Clone (
  IN   XML_ATTRIBUTE  *pAttribute
  )
{
  if (pAttribute == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  return Xml_Attribute_New (pAttribute->pName, pAttribute->pValue);

}
/**
  Free a xml attribute
  @param pAttribute  -- the  attribute pool to free

**/
VOID 
Xml_Attribute_Destroy (
  IN XML_ATTRIBUTE      *pAttribute
  )
{
  if (pAttribute == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  if (pAttribute->pName  != NULL)   FreePool (pAttribute->pName);
  if (pAttribute->pValue != NULL)   FreePool (pAttribute->pValue);
  FreePool (pAttribute);
}

/**
  get a xml attribute name
  @param  pAttribute -- the attribute pointer
  
  @retval  xml attribute name string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Name (
  IN XML_ATTRIBUTE           *pAttribute
  )
{
  if (pAttribute == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  return Clone_Ascii_String_WO_SPACE (pAttribute->pName);
}

/**
  get a xml attribute value
  @param  pAttribute -- the attribute pointer
  
  @retval  xml attribute value string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Value (
  IN XML_ATTRIBUTE           *pAttribute
  )
{
  if (pAttribute == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  return Clone_Ascii_String_WO_SPACE (pAttribute->pValue);
}

//============================================================
// Xml Element defines									     =
//============================================================
/**
  New a xml element
  @param pName  -- the name of the element

  @retval new xml element, null is failed
**/
XML_ELEMENT * 
Xml_Element_New (
  IN CHAR8                        *pName
  )
{
  XML_ELEMENT       *pElt;

  if (pName == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pElt = (XML_ELEMENT *) AllocateZeroPool (sizeof(XML_ELEMENT));
  if (pElt == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  pElt->Signature = XML_ELEMENT_SIGNATURE;
  pElt->pName = Clone_Ascii_String_WO_SPACE (pName);
  InitializeListHead (&pElt->Attributes);
  InitializeListHead (&pElt->Children);

  return pElt;
}

/**
  Clone a xml element
  @param pElement  -- the element pointer

  @retval new clone xml element will returned, null is failed
**/
XML_ELEMENT * 
Xml_Element_Clone_With_Attribute (
  IN XML_ELEMENT                        *pElement
  )
{
  XML_ELEMENT       *pElt;
  LIST_ENTRY        *Link;
  XML_ATTRIBUTE     *pAttr;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pElt = (XML_ELEMENT *) Xml_Element_New (pElement->pName);
  if (pElt == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  Link  = GetFirstNode (&pElement->Attributes);
  while (!IsNull (&pElement->Attributes, Link)) {
    pAttr = XML_ATTRIBUTE_FROM_LINK (Link);
    XML_DEBUG ((DEBUG_LEVEL_INFO, "%a %a=%a\n", __FUNCTION__, pAttr->pName, pAttr->pValue));
    pAttr = Xml_Attribute_Clone (pAttr);
    Link = GetNextNode (&pElement->Attributes, Link);
    InsertTailList (&pElt->Attributes, &pAttr->Link);
  }
  return pElt;
}


/**
  Clone a xml element
  @param pElement  -- the element pointer

  @retval new clone xml element will returned, null is failed
**/
XML_ELEMENT * 
Xml_Element_Clone (
  IN XML_ELEMENT                        *pElement
  )
{
  XML_ELEMENT       *pElt;
  XML_ELEMENT       *pChild;
  LIST_ENTRY        *Link;
  pElt = (XML_ELEMENT *) Xml_Element_Clone_With_Attribute (pElement);
  if (pElt == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  Link  = GetFirstNode (&pElement->Children);
  while (!IsNull (&pElement->Children, Link)) {
    pChild = XML_ELEMENT_FROM_LINK (Link);
    pChild = Xml_Element_Clone (pChild);
    Xml_Element_Add_Child (pElt, pChild);
    Link = GetNextNode (&pElement->Children, Link);
  }
  return pElt;
}
/** 
  xml element destroy all attribute under it
  @param pElement  -- the element pointer

  @reval none.
**/
VOID
Xml_Element_Destroy_Attribute (
  IN  XML_ELEMENT        *pElement
  )
{
  LIST_ENTRY          *Link;
  XML_ATTRIBUTE       *pAttribute;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  //
  // Destroy all attribute under element
  //
  Link  = GetFirstNode (&pElement->Attributes);
  while (!IsNull (&pElement->Attributes, Link)) {
    pAttribute = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Attributes, Link);
    Xml_Attribute_Destroy (pAttribute);
  }
}
/** 
  xml element destroy 
  @param pElement  -- the element pointer

  @retval none.
**/
VOID
Xml_Element_Destroy_Element (
  IN  XML_ELEMENT                *pElement
  )
{
  
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  if (pElement->pName != NULL) {
    FreePool (pElement->pName);
  }
  FreePool (pElement);
}

/** 
  xml element destroy all child under it
  @param pElement  -- the element pointer

  @retval none.
**/
VOID
Xml_Element_Destroy (
  IN  XML_ELEMENT                *pElement
  )
{
  LIST_ENTRY       *Link;
  XML_ELEMENT      *pChild;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Element_Destroy_Attribute (pElement);
  Link  = GetFirstNode (&pElement->Children);
  while (!IsNull (&pElement->Children, Link)) {
    pChild = XML_ELEMENT_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Children, Link);
    Xml_Element_Destroy_Element (pChild);
    Xml_Element_Destroy (pChild);
  }
  FreePool (pElement->pName);
  FreePool (pElement);

}

/**
  Insert a attribute into a element
  @param pElement        -- the element
  @param pAttribute      -- the attribute

  @retval  xml element, null is failed
**/
XML_ELEMENT * 
Xml_Element_Add_Attribute (
  IN  XML_ELEMENT                     *pElement,
  IN  XML_ATTRIBUTE                   *pAttribute
  )
{
  if ((pElement == NULL) || (pAttribute == NULL)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // Insert the attribute into the
  //
  InsertTailList (&pElement->Attributes, &pAttribute->Link);

  return pElement;
}

/**
  Insert a child element into a element
  @param pElement           -- the element
  @param pChild             -- the attribute
  
  @retval  xml element, null is failed
**/
XML_ELEMENT * 
Xml_Element_Add_Child (
  IN  XML_ELEMENT                     *pElement,
  IN  XML_ELEMENT                     *pChild
  )
{
  if ((pElement == NULL) || (pChild == NULL)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  //
  // Insert the child into the root
  //
  InsertTailList (&pElement->Children, &pChild->Link);

  return pElement;
}


/**
  get the element attributes list
  @param pElement  -- the element

  
  @retval  xml element attributes, null is failed
**/
VOID * 
Xml_Element_Get_Attributes_List (
  IN  XML_ELEMENT               *pElement
  )
{
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  
  return (VOID *) &(pElement->Attributes);
}

/**
  get the element attributes by name
  @param pElement  -- the element
  @param pName     -- the name of attribute
  
  @retval  xml element attributes, null is failed
**/
XML_ATTRIBUTE * 
Xml_Element_Get_Attributes_By_Name (
  IN  XML_ELEMENT               *pElement,
  IN  CHAR8                     *pName
  )
{
  LIST_ENTRY          *Link;
  XML_ATTRIBUTE       *pAttribute;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // get matched name attribute 
  //
  Link  = GetFirstNode (&pElement->Attributes);
  while (!IsNull (&pElement->Attributes, Link)) {
    pAttribute = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Attributes, Link);
    if (AsciiStrCmp (pName, pAttribute->pName) == 0) return pAttribute;
  }
  return NULL;
}

XML_ATTRIBUTE * 
Xml_Element_Get_Attributes_By_Name_D (
  IN  XML_ELEMENT               *pElement,
  IN  CHAR8                     *pName
  )
{
  LIST_ENTRY          *Link;
  XML_ATTRIBUTE       *pAttribute;
    CHAR8               *FirstString;
    CHAR8               *SecondString;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // get matched name attribute 
  //
  Link  = GetFirstNode (&pElement->Attributes);
  while (!IsNull (&pElement->Attributes, Link)) {
    pAttribute = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Attributes, Link);
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a=%a\n", pAttribute->pName, pAttribute->pValue));
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a=%a %x\n", pAttribute->pName, pName, AsciiStrCmp (pName, pAttribute->pName)));
    FirstString = pName;
    SecondString = pAttribute->pName;
    while ((*FirstString != '\0') && (*FirstString == *SecondString)) {
      Print (L"%x %x\n", *FirstString, *SecondString);
      FirstString++;
      SecondString++;
    }
    Print (L"%x %x\n", *FirstString, *SecondString);
    if (AsciiStrCmp (pName, pAttribute->pName) == 0) return pAttribute;
  }
  return NULL;
}
/**
  get the element attributes data by name
  @param pElement  -- the element
  @param pName     -- the name of attribute
  
  @retval  xml element attributes, null is failed
**/
CHAR8 * 
Xml_Element_Get_AttributesData_By_Name (
  IN  XML_ELEMENT               *pElement,
  IN  CHAR8                     *pName
  )
{
  XML_ATTRIBUTE       *pAttribute;
  pAttribute = Xml_Element_Get_Attributes_By_Name (pElement, pName);
  if (pAttribute == NULL) return NULL;

  return pAttribute->pValue;
}

CHAR8 * 
Xml_Element_Get_AttributesData_By_Name_d (
  IN  XML_ELEMENT               *pElement,
  IN  CHAR8                     *pName
  )
{
  XML_ATTRIBUTE       *pAttribute;
  pAttribute = Xml_Element_Get_Attributes_By_Name_D (pElement, pName);
  if (pAttribute == NULL) return NULL;

  return pAttribute->pValue;
}
/**
  get the element child by name
  @param pElement  -- the element
  @param pName     -- the name of child element
  
  @retval  xml element child will returned, null is failed
**/
XML_ELEMENT * 
Xml_Element_Get_Child_By_Name (
  IN  XML_ELEMENT               *pElement,
  IN  CHAR8                     *pName
  )
{
  LIST_ENTRY          *Link;
  XML_ELEMENT         *pChild;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // get matched name child element
  //
  Link  = GetFirstNode (&pElement->Children);
  while (!IsNull (&pElement->Children, Link)) {
    pChild = XML_ELEMENT_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Children, Link);
    if (AsciiStrCmp (pName, pChild->pName) == 0) return pChild;
  }
  return NULL;
}

/**
  get the child element attribute  by name
  @param pElement       -- the element
  @param pChildName     -- the name of child element
  @param pAttrName      -- the name of child attribute
  @retval  xml element child will returned, null is failed
**/
XML_ATTRIBUTE *
Xml_Element_Get_Child_Attr_By_Name (
  IN  XML_ELEMENT               *pElement,
  IN  CHAR8                     *pChildName,  
  IN  CHAR8                     *pAttrName  
  )
{
  XML_ELEMENT         *pChild;
  XML_ATTRIBUTE       *pAttr;
  if ((pElement == NULL) || (pChildName == NULL) || (pAttrName == NULL)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // get matched element
  //
  pChild = Xml_Element_Get_Child_By_Name (pElement, pChildName);
  if (pChild == NULL) {
    return NULL;
  }

  //
  // get matched attribute
  //
  pAttr = Xml_Element_Get_Attributes_By_Name (pChild, pAttrName);
  if (pAttr == NULL) {
    return NULL;
  }
  return pAttr;

}
/** 
  check if a element's child element is empty or not
  @param pElement     -- the element

  @retval TRUE if not empty, FALSE is empty 
**/
BOOLEAN 
Xml_Element_Is_Empty (
  IN  XML_ELEMENT               *pElement
  )
{
  if (pElement == NULL) { 
    return FALSE;
  }

  return IsListEmpty (&pElement->Children);
}

/** 
  debug print element to the screen
  @param pElement           -- the element pointer
  @param IndentIndex        -- the indent index

 
**/
VOID
Xml_Element_Debug_Print_Element (
  IN  XML_ELEMENT               *pElement,
  IN  UINTN                     IndentIndex
  )
{
  LIST_ENTRY          *Link;
  XML_ATTRIBUTE       *pAttr;
  UINTN               Index;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  for (Index = 0; Index < IndentIndex; Index++) {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "  "));
  }
  XML_DEBUG ((DEBUG_LEVEL_ERROR, "e:%a(%x)\n", pElement->pName, (UINTN)pElement->pName));


  Link  = GetFirstNode (&pElement->Attributes);
  while (!IsNull (&pElement->Attributes, Link)) {
    pAttr = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Attributes, Link);
    for (Index = 0; Index < IndentIndex; Index++) {
      XML_DEBUG ((DEBUG_LEVEL_ERROR, "  "));
    }
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "  a:%a(%x) = %a(%x)\n", pAttr->pName, (UINTN)pAttr->pName, pAttr->pValue,  (UINTN)pAttr->pValue));
  }
}

/** 
  debug print element  and it's child to the screen
  @param element     -- the element
  @param Index        -- the indent index

 
**/
VOID
Xml_Element_Debug_Print (
  IN  XML_ELEMENT               *pElement,
  IN  UINTN                     Index
  )
{

  LIST_ENTRY      *Link;
  XML_ELEMENT     *pChild;
  if (pElement == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Element_Debug_Print_Element (pElement, Index);
  Index ++;
  Link  = GetFirstNode (&pElement->Children);
  while (!IsNull (&pElement->Children, Link)) {
    pChild = XML_ELEMENT_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Children, Link);
    Xml_Element_Debug_Print (pChild, Index);
  }
}

//============================================================
// Xml Write defines									     =
//============================================================

CHAR8     *empty_tag_end = " />\n";

CHAR8     *standard_tag_end = ">\n";

CHAR8     *close_tag_start = "</";
/**
 New a xml appendable instance, if is memory type, all data store in memory(memory addr @ ptr)
 if is a file type, all data will store in a file(file name in ptr)
 @param  Type  -- the type of xml apppendable
 @param  pPtr   -- the ptr of xml appendable
 @param  Limit -- the limit size of all appendable xml

 @retval NULL is failed to new a apppenable xml, a new appendable xml will return
**/
XML_APPENDABLE * 
Xml_Appendable_New (
  IN  XML_APPENDABLE_TYPE    Type, 
  IN  VOID                   *pPtr, 
  IN  UINTN                  Limit
  )
{
  XML_APPENDABLE        *pAppendable;
  
  pAppendable = (XML_APPENDABLE *) AllocateZeroPool (sizeof (XML_APPENDABLE));
  if (pAppendable == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pAppendable->Type = Type;
  pAppendable->Limit = Limit;
  pAppendable->Length = 0; // all string length without the Null-terminated
  if (Type == XML_APPENDABLE_TYPE_MEMORY) {
    //
    // if all data store in memory, just allocate A zero page pool to store the information
    //
    pAppendable->pPtr = AllocatePages (EFI_SIZE_TO_PAGES (Limit)); 
    ZeroMem (pAppendable->pPtr, Limit);
  } else {
    //
    // // if this file, store it as file name, to do later, tank[TBD]
    //
    pAppendable->pPtr = pPtr;
  }

  return pAppendable;
}
/**
  Destory a appendable instance

  @param  pAppendable  -- the apppendable pointer

  @retval none.
**/
VOID
Xml_Appendable_Destroy (
  IN  XML_APPENDABLE  *pAppeandable 
  )
{
  if (pAppeandable == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  if (pAppeandable->Type == XML_APPENDABLE_TYPE_MEMORY) {
    if (pAppeandable->pPtr != NULL) {
      FreePool (pAppeandable);
    }
    FreePool (pAppeandable);
  }
}
/**
  reset a appendable instance, if is memory type, all data store in memory(memory addr @ ptr)

  @param  pAppendable  -- the apppendable pointer

  @retval NULL is failed to reset a apppenable 
**/
XML_APPENDABLE * 
Xml_Appendable_Reset (
  IN  XML_APPENDABLE    *pAppendable 
  )
{
  if (pAppendable == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  if (pAppendable->Type == XML_APPENDABLE_TYPE_MEMORY) {
    ZeroMem (pAppendable->pPtr, pAppendable->Length);
    pAppendable->Length = 0;
  }
  return pAppendable;
}

/**
 a xml appendable append a char
 @param  pAppendable    -- the xml apppendable
 @param  Data           -- the char

**/
VOID 
Xml_Appendable_Append_Char (
  IN  XML_APPENDABLE   *pAppendable, 
  IN  CHAR8            Data
  )
{
  if (pAppendable == NULL) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  switch (pAppendable->Type)  {

    case XML_APPENDABLE_TYPE_MEMORY:
      if (pAppendable->Length >= pAppendable->Limit && pAppendable->Limit != -1)
        return;
      //
      // if current ptr is null, allocate a char size ptr to it
      //
      ((CHAR8 *) pAppendable->pPtr)[pAppendable->Length] = Data;
      ((CHAR8 *) pAppendable->pPtr)[pAppendable->Length+1] = '\0';
      pAppendable->Length ++;
      break;
    case XML_APPENDABLE_TYPE_FILE:
      // to do later, tank[TBD]
      break;

    default:
      break;
  }
}

/**
 a xml appendable append a string
 @param  pAppendable  -- the xml apppendable
 @param  pString      -- the string

**/
VOID
Xml_Appendable_Append_String (
  IN  XML_APPENDABLE   *pAppendable,  
  IN  CHAR8            *pString
  )
{
  UINTN        String_Len;
  if (pAppendable == NULL) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  if (pString == NULL) {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
	//while (1);
    return;
  }
  switch (pAppendable->Type) {

    case XML_APPENDABLE_TYPE_MEMORY:
      if (pAppendable->Length >= pAppendable->Limit && pAppendable->Limit != -1) {
        return;
      }

      String_Len = AsciiStrLen (pString);
      if ((pAppendable->Length + String_Len > pAppendable->Limit) && (pAppendable->Limit != -1)) {
        return;
      }
      //
      // to check later if need to copy a limit-length size string
      // when length overlap
      //
      Ascii_Str_Cat (pAppendable->pPtr, pString);
      pAppendable->Length = AsciiStrLen (pAppendable->pPtr);
      break;
    case XML_APPENDABLE_TYPE_FILE:
      // to do later
      break;

    default:
      break;

  }
}

/** 
  append a indent if current is child
  @param  pAppendable  -- the xml apppendable
  @param  pWriter      -- the writer 
**/
VOID
Xml_Appendable_Writer_Indent (
  IN  XML_APPENDABLE     *pAppendable,
  IN  XML_WRITER         *pWriter
  )
{
  UINTN  Index;
  if ((pWriter == NULL) || (pAppendable == NULL)) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  for (Index = 0; Index < pWriter->IndentDepth * pWriter->IndentWidth; Index++)  {
    Xml_Appendable_Append_Char (pAppendable, ' '); // indent with space, width default is 2, depth by child depth 
  }
}

/** 
  append one attribute into string
  @param pAppendable  -- the appendable 
  @param pAttribute   -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Attribute_Callback (
  IN  XML_APPENDABLE     *pAppendable,
  IN  XML_ATTRIBUTE      *pAttribute
  )
{
  CHAR8  *EscapedString;

  if ((pAppendable == NULL) || (pAttribute == NULL)) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Appendable_Append_Char (pAppendable, ' '); // ap a space
  
  //
  // attr="xxx"
  // 
  Xml_Appendable_Append_String (pAppendable, pAttribute->pName); // ap the attribute name
  Xml_Appendable_Append_Char (pAppendable, '='); 
  Xml_Appendable_Append_Char (pAppendable, '\"');

  EscapedString = Xml_Escape_String (pAttribute->pValue, TRUE);
  Xml_Appendable_Append_String (pAppendable, EscapedString);
  //Xml_Appendable_Append_String (appendable, attribute->pValue);
  FreePool (EscapedString);

  Xml_Appendable_Append_Char (pAppendable, '\"');
}


/** 
  append element attribute list into string

  @param  pAppendable   -- the appendable 
  @param  pElement      -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Element_Attributes (
  IN  XML_APPENDABLE      *pAppendable, 
  IN  XML_ELEMENT         *pElement
  )
{
  LIST_ENTRY            *Link;
  XML_ATTRIBUTE         *pAttr;
  if ((pAppendable == NULL) || (pElement == NULL)) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 

  Link  = GetFirstNode (&pElement->Attributes);
  while (!IsNull (&pElement->Attributes, Link)) {
    pAttr = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&pElement->Attributes, Link);
    Xml_Appendable_Attribute_Callback (pAppendable, pAttr);
  }
  return;
}

/** 
  append element attribute list into string
  @param  pWriter      -- the writer 
  @param  pAppendable  -- the appendable 
  @param  pElement     -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Element (
  IN XML_WRITER              *pWriter, 
  IN XML_APPENDABLE          *pAppendable, 
  IN XML_ELEMENT             *pElement
  )
{
  LIST_ENTRY         *Link;
  XML_ELEMENT        *pChild;

  if ((pWriter == NULL) || (pAppendable == NULL) || (pElement == NULL)) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 
  Xml_Appendable_Writer_Indent (pAppendable, pWriter);
  Xml_Appendable_Append_Char (pAppendable, '<');
  Xml_Appendable_Append_String (pAppendable, pElement->pName);

  Xml_Appendable_Element_Attributes (pAppendable, pElement); //TANK_END



  if (Xml_Element_Is_Empty (pElement))  { // if the element have none child
    Xml_Appendable_Append_String (pAppendable, empty_tag_end);
  } else {
    Xml_Appendable_Append_String (pAppendable, standard_tag_end);
    
    pWriter->IndentDepth++;
    Link  = GetFirstNode (&pElement->Children);
    while (!IsNull (&pElement->Children, Link)) {
      pChild = XML_ELEMENT_FROM_LINK (Link);
      Link = GetNextNode (&pElement->Children, Link);
      Xml_Appendable_Element (pWriter, pAppendable, pChild);
    }
    pWriter->IndentDepth--;
    Xml_Appendable_Writer_Indent (pAppendable, pWriter);
    Xml_Appendable_Append_String (pAppendable, close_tag_start);
    Xml_Appendable_Append_String (pAppendable, pElement->pName);
    Xml_Appendable_Append_String (pAppendable, standard_tag_end);
    
  }

  return;
}
/**
  new a xml write instance

**/
XML_WRITER * 
Xml_Writer_New (
  VOID
  )
{
  XML_WRITER   *pWriter;
  
  pWriter = (XML_WRITER *) AllocateZeroPool (sizeof(XML_WRITER));
  if (pWriter == NULL) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  } 

  pWriter->IndentDepth = 0;
  pWriter->IndentWidth = 2;

  return pWriter;
}

/** 
  append element and attribute into document then into string
  @param  pAppendable  -- the appendable 
  @param  pElement     -- the atrribute used to been append
  
**/
VOID  
Xml_Appendable_Write_Document (
  IN  XML_APPENDABLE          *pAppendable, 
  IN  XML_DOCUMENT            *pDocument
  )
{

  XML_WRITER     *pWriter;
  CHAR8          Temp[100];
  if ((pDocument == NULL) || (pAppendable == NULL)) {  //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 
  
  ZeroMem (Temp, 100);
  AsciiSPrint (
    Temp,
    100,
    "<?xml version=\"%a\" encoding=\"%a\"?>\n",
    pDocument->pVersion,
    pDocument->pEncoding
    );
  //XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
  Xml_Appendable_Append_String (pAppendable, Temp); 

  pWriter = Xml_Writer_New ();

  Xml_Appendable_Element (pWriter, pAppendable, Xml_Document_Get_Root (pDocument));

  //TO DO LATER tank[TBD] FreePool (appendable);
}

//============================================================
// Xml Document defines                                      =
//============================================================

/**
  New a xml document

  @retval new xml element, null is failed
**/
XML_DOCUMENT * 
Xml_Document_New (
  VOID
  )
{
  XML_DOCUMENT    *pDocument;
  pDocument = (XML_DOCUMENT *) AllocateZeroPool (sizeof (XML_DOCUMENT));
  if (pDocument == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pDocument->pEncoding = Clone_Ascii_String_WO_SPACE ("UTF-8");
  pDocument->pVersion = Clone_Ascii_String_WO_SPACE ("1.0");
  pDocument->pRoot = Xml_Element_New ("root");

  return pDocument;
}

/**
  New a xml document with root input
  @param pRoot  -- the root element

  @retval new xml element, null is failed
**/
XML_DOCUMENT * 
Xml_Document_New_With_Root (
  IN XML_ELEMENT    *pRoot
  )
{
  XML_DOCUMENT    *pDocument;
  if (pRoot == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pDocument = (XML_DOCUMENT *) AllocateZeroPool (sizeof (XML_DOCUMENT));
  if (pDocument == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  pDocument->pEncoding = Clone_Ascii_String_WO_SPACE("UTF-8");
  pDocument->pVersion = Clone_Ascii_String_WO_SPACE("1.0");
  pDocument->pRoot = pRoot;

  return pDocument;
}

/**
  return a xml document  root element
  @param pDocument  -- the document

  @retval  document element, null is failed
**/
XML_ELEMENT * 
Xml_Document_Get_Root (
  IN  XML_DOCUMENT     *pDocument
  )
{
  if (pDocument == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  return pDocument->pRoot;
}
//============================================================
// Xml Token defines                                         =
//============================================================

/**
  new a xml token instance 
  @param  pData       -- the string
  @param  TokenType   -- the token type

  @retval a xml token will returned if success, others failed
**/
XML_TOKEN *
Xml_Token_New (
  IN  CHAR8             *pData,
  IN  XML_TOKEN_TYPE    TokenType
  )
{
  XML_TOKEN              *pToken;

  pToken = (XML_TOKEN *) AllocateZeroPool (sizeof (XML_TOKEN));
  if (pToken == NULL) {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;    
  } 
  pToken->TokenType   = TokenType;
  pToken->pData       = Clone_Ascii_String (pData);
  pToken->Signature   = XML_TOKEN_SIGNATURE;
  return pToken;
}
/**
  Forward a char step of tokenizer.
  @param  pTokenizer  -- the pTokenizer pointer

  @retval none.
**/
VOID 
Xml_Tokenizer_Forward (
  IN  XML_TOKENIZER           *pTokenizer
  )
{
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  if (Xml_Tokenizer_Get_Current_Char (pTokenizer) == '\n')  { // a line switch
    pTokenizer->Line++;
    pTokenizer->LastLineColumn = pTokenizer->Column;
    pTokenizer->Column = 0;
  } else {
    pTokenizer->Column++;
  }

  pTokenizer->Current++;  
}
/**
  Backward a char step of tokenizer.
  @param  pTokenizer  -- the tokenizer pointer

  @retval none.
**/
VOID
Xml_Tokenizer_Backward (
  IN  XML_TOKENIZER           *pTokenizer
  )
{
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  pTokenizer->Current--;

  if (pTokenizer->Column == 0)  {
    pTokenizer->Column = pTokenizer->LastLineColumn;
    pTokenizer->Line--;
  } else {
    pTokenizer->Column--;
  }
}

/**
  Backward a N char step of tokenizer.
  @param  pTokenizer  -- the tokenizer pointer
  @param  Number      -- the number of char

  @retval none.
**/
VOID
Xml_Tokenizer_Backward_n (
  IN  XML_TOKENIZER           *pTokenizer, 
  IN  UINTN                   Number
  )
{
  UINTN   Index;
  if ((pTokenizer == NULL) || (Number == 0)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  for (Index = 0; Index < Number; Index++) {
    Xml_Tokenizer_Backward (pTokenizer);
  }
}

/**
  Accept a equal char and forward a char
  @param  pTokenizer  -- the tokenizer pointer
  @param  Number      -- the number of char
 
  @retval TRUE if the char matched , others failed
**/
BOOLEAN
Xml_Tokenizer_Accept (
  IN  XML_TOKENIZER           *pTokenizer, 
  IN  CHAR8                   Char
  )
{
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }
  if (Xml_Tokenizer_Get_Current_Char (pTokenizer) == Char) {
    Xml_Tokenizer_Forward (pTokenizer);
    return TRUE;
  }

  return FALSE;
}

/**
  Accept a equal char in range and forward a char
  @param  pTokenizer  -- the tokenizer pointer
  @param  StartChar   -- the start char
  @param  EndChar     -- the end char
  @retval TRUE if the char matched in range, others failed
**/
BOOLEAN
Xml_Tokenizer_Accept_Range (
  IN  XML_TOKENIZER           *pTokenizer, 
  IN  CHAR8                   StartChar, 
  IN  CHAR8                   EndChar
  )
{
  CHAR8 Data; 
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }
  Data = Xml_Tokenizer_Get_Current_Char (pTokenizer);
  if (Data >= StartChar && Data <= EndChar) {
    Xml_Tokenizer_Forward (pTokenizer);
    return TRUE;
  }

  return FALSE;

}

/**
  Accept a  char if current char is a space and forward this
  @param  pTokenizer  -- the tokenizer pointer
 
  @retval TRUE if the char matched space, others failed
**/
BOOLEAN
Xml_Tokenizer_Accept_Space (
  IN  XML_TOKENIZER           *pTokenizer
  )
{
  return Xml_Tokenizer_Accept (pTokenizer, 0x20); //accept space
}

/**
  Accept a char if this char is a letter and forward this
  @param  pTokenizer  -- the tokenizer pointer
 
  @retval TRUE if the char is letter, others failed
**/
BOOLEAN
Xml_Tokenizer_Accept_Any_Letter (
 IN  XML_TOKENIZER           *pTokenizer
 )
{
  CHAR8    Data; 
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }
  Data = Xml_Tokenizer_Get_Current_Char (pTokenizer);

  if ((('a' <= Data) && (Data <= 'z')) || \
      (('A' <= Data) && (Data <= 'Z')) || \
      (Data > 0x7F)) { /* considers all values out of ascii-7 to be valid characters */

    Xml_Tokenizer_Forward (pTokenizer);
    return TRUE;
  }
  return FALSE;
}

/**
  Expect a string start with tokenizer's current
  @param  pTokenizer  -- the tokenizer pointer
  @param  pString     -- the string pointer

  @retval TRUE if the string is matched , others failed
**/
BOOLEAN
Xml_Tokenizer_Expect_String (  
  IN  XML_TOKENIZER           *pTokenizer, 
  IN  CHAR8                   *pString
  )
{
  UINTN  Index;
  UINTN  Size;
  if ((pTokenizer == NULL) || (pString == NULL)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }   
  Size = AsciiStrLen (pString);
  for (Index = 0; Index < Size; Index ++) {
    if (!Xml_Tokenizer_Accept (pTokenizer, pString[Index])) {
      return FALSE;
    }
  }
  return TRUE;
}
/**
  Accept a string if this string matched input and forward this string
  @param  pTokenizer  -- the tokenizer pointer
  @param  pString     -- the string pointer

  @retval TRUE if the char is letter, others failed
**/
BOOLEAN
Xml_Tokenizer_Accept_String (
  IN  XML_TOKENIZER           *pTokenizer, 
  IN  CHAR8                   *pString
  )
{
  UINTN  Index;
  UINTN  Size;
  if ((pTokenizer == NULL) || (pString == NULL)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return FALSE;
  }   
  Size = AsciiStrLen (pString);
  for (Index = 0; Index < Size; Index ++) {
    if (!Xml_Tokenizer_Accept (pTokenizer, pString[Index])) {
      Xml_Tokenizer_Backward_n (pTokenizer, Index);
      return FALSE;
    }
  }

  return TRUE;
}
/**
  this function get char from tokenizer by current offset
  @param  pTokenizer  -- the tokenizer pointer

  @retval 0 means current big than tokenizer size, others will return the current
          char  
**/
CHAR8
Xml_Tokenizer_Get_Current_Char (
  IN  XML_TOKENIZER           *pTokenizer
  )
{
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return '\0';
  }
  if (pTokenizer->Current >= pTokenizer->StingSize) {
    return '\0';
  } else {
    return pTokenizer->pString[pTokenizer->Current];
  }
} 
/**
  this function new a instance of tokenizer
  @param  pString     -- the tokenizer pString pointer
  @param  StringSize  -- the string size of tokenizer

  @retval NULL is failed, others will return a tokenizer instance  pointer
**/
XML_TOKENIZER *
Xml_Tokenizer_New (
  IN  CHAR8     *pString,
  IN  UINTN     StringSize
  )
{
  XML_TOKENIZER           *pTokenizer;
  if ((pString == NULL) || (StringSize == 0)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }  
  pTokenizer = (XML_TOKENIZER *) AllocateZeroPool (sizeof (XML_TOKENIZER));
  if (pTokenizer == NULL) {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;    
  } 
  pTokenizer->pString = pString;
  pTokenizer->StingSize = StringSize;
  InitializeListHead (pTokenizer->pTokenList);

  return pTokenizer;
}
/**
  insert a token into token list, build the token number
  @param  pTokenizer     -- the tokenizer  pointer
  @param  pToken         -- the pToken tokenizer

  @retval none.
**/
VOID
Xml_Tokenizer_Add_Token (
  IN  XML_TOKENIZER    *pTokenizer, 
  IN  XML_TOKEN        *pToken
  )
{

  if ((pTokenizer == NULL) || (pToken == 0)) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  pToken->TokenNumber = pTokenizer->TokenNumber; 
  pTokenizer->TokenNumber ++;
  InsertTailList (pTokenizer->pTokenList, &pToken->Link);
}
/**
  new a token instancd and insert it into token list, build the token number
  @param  pTokenizer     -- the tokenizer  pointer
  @param  Type           -- the pToken tokenizer

  @retval none.
**/
VOID
Xml_Tokenizer_Add_A_New_Token (
  IN  XML_TOKENIZER    *pTokenizer,
  IN  XML_TOKEN_TYPE   Type,
  IN  CHAR8            *pString
  )
{
  XML_TOKEN        *pToken;
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  pToken = (XML_TOKEN *) Xml_Token_New (pString, Type);
  if (pToken != NULL) {
    Xml_Tokenizer_Add_Token (pTokenizer, pToken);
  }
  return;
}
/**
  prase the indentifier such as tag name, attribute name
  @param  pTokenizer     -- the tokenizer  pointer
  @retval none.
**/
VOID 
Xml_Tokenizer_Parse_Identifier (
  IN  XML_TOKENIZER    *pTokenizer
  )
{
  CHAR8                Data;
  XML_APPENDABLE        *pAppendable;

  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  pAppendable = Xml_Appendable_New (
                  XML_APPENDABLE_TYPE_MEMORY,
                  NULL,
                  200
                  );
  
  Data = Xml_Tokenizer_Get_Current_Char (pTokenizer);

  //
  // Element can't start number or punctuation, we only accept
  // letter, '_', '.', ':' as first char
  //
  if (Xml_Tokenizer_Accept_Any_Letter (pTokenizer) ||  //accept the letter 'a'~'z', 'A'~'Z'
      Xml_Tokenizer_Accept (pTokenizer, '_') || 
      Xml_Tokenizer_Accept (pTokenizer, '.') || 
      Xml_Tokenizer_Accept (pTokenizer, ':')) {

    Xml_Appendable_Append_Char (pAppendable, Data);
    Data = Xml_Tokenizer_Get_Current_Char (pTokenizer);

    while (Xml_Tokenizer_Accept_Any_Letter (pTokenizer) ||
      Xml_Tokenizer_Accept_Range (pTokenizer, '0', '9') ||
      Xml_Tokenizer_Accept (pTokenizer, '-') ||
      Xml_Tokenizer_Accept (pTokenizer, '_') ||
      Xml_Tokenizer_Accept (pTokenizer, '.') ||
      Xml_Tokenizer_Accept (pTokenizer, ':')) {
      Xml_Appendable_Append_Char (pAppendable, Data);
      Data = Xml_Tokenizer_Get_Current_Char (pTokenizer);
    }
    XML_DEBUG ((DEBUG_LEVEL_INFO, "  XML_TOKEN_TYPE_IDENTIFIER: %a\n", pAppendable->pPtr));
    Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_IDENTIFIER, pAppendable->pPtr);
  }
  if (pAppendable != NULL) {
    Xml_Appendable_Destroy (pAppendable);
  }
}

/**
  prase arribute text value xx="XXX", get XXX and insert it into token
  @param  pTokenizer     -- the tokenizer  pointer
  @retval none.
**/
VOID
Xml_Tokenizer_Prase_Quoted_Text (
  IN  XML_TOKENIZER    *pTokenizer
  )
{
  XML_APPENDABLE        *pAppendable;
  CHAR8                Data;
  if (pTokenizer == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  pAppendable = Xml_Appendable_New (
                  XML_APPENDABLE_TYPE_MEMORY,
                  NULL,
                  0x200
                  );

  Data = Xml_Tokenizer_Get_Current_Char (pTokenizer);
  //
  // a attribute have text value, must start with '"' and end with '"'
  //<xxxx  xx="xxx"          > 
  //
  while (!Xml_Tokenizer_Accept (pTokenizer, '"')) {
    Xml_Appendable_Append_Char (pAppendable, Data);
    //
    // next
    //
    Xml_Tokenizer_Forward (pTokenizer);
    Data = Xml_Tokenizer_Get_Current_Char (pTokenizer);

    if (Data == '&')  {
      /**TANK TODO later**/
    }
  }
  XML_DEBUG ((DEBUG_LEVEL_INFO, "  XML_TOKEN_TYPE_QUOTED_STRING:%a\n ", pAppendable->pPtr));
  Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_QUOTED_STRING, pAppendable->pPtr);
  if (pAppendable != NULL) {
    Xml_Appendable_Destroy (pAppendable);
  }
}

/**
  Set current of tokenizer if current meesage is a comment
  @param  pTokenizer     -- the tokenizer pointer

  @retval none.
**/
VOID
Xml_Tokenizer_Parse_Until_End_Comment (
  IN  XML_TOKENIZER    *pTokenizer
  )
{
  BOOLEAN  IsInside = TRUE;
  //<!-- This is a comment --> 
  do {
    if (Xml_Tokenizer_Accept_String (pTokenizer, "--")) {
      if (!Xml_Tokenizer_Accept (pTokenizer, '>')) {
        pTokenizer->pErrorMsg = "Unexpected '--' sequence within comment";
      }
      IsInside = FALSE;
    } else if (Xml_Tokenizer_Accept (pTokenizer, '\0')) {
      pTokenizer->pErrorMsg = "Encountered EOF while parsing comment";
      IsInside = FALSE;
    } else {
      Xml_Tokenizer_Forward (pTokenizer);
    }
  }
  while (IsInside);
}

/**
  prase char between '>'/'/>' to '<'
  TBD: Now, just forward. later we may need to add some method to prase specail char
  @param  pTokenizer   -- the Tokenizer pointer

  @retval  none.
**/
VOID
Xml_Tokenizer_Parse_Non_Tag_Data (
  IN  XML_TOKENIZER    *pTokenizer
  )
{
  Xml_Tokenizer_Forward (pTokenizer);
 /*tank to do*/
}
/**
  prase the string in tag, if '>'/'/>' found, means we are out tag
  @param  pTokenizer   -- the Tokenizer pointer
  @param  IsInTag      -- In Tag flag.
  @retval  none.
**/
VOID 
Xml_Tokenizer_Parse_In_Tag (
  IN  XML_TOKENIZER    *pTokenizer,
  IN  BOOLEAN          *IsInTag
  )
{
  //
  // Accept all head space
  //
  while (Xml_Tokenizer_Accept_Space (pTokenizer));
  
  //
  //a tag have child and child tag have none child
  //<xxxx  xx="xxx"          > 
  //  <xxx  xx="xxx"           />   
  //</xxxx> 
  //

  if (Xml_Tokenizer_Accept (pTokenizer, '/')) { //'/' means the end tag start
    // a tag  with child end with '/' started
    *IsInTag = FALSE;

    if (Xml_Tokenizer_Accept (pTokenizer, '>')) {//'>' means
      XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_END_EMPTY_TAG\n"));
      Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_END_EMPTY_TAG, NULL);
    } else {
      XML_DEBUG ((DEBUG_LEVEL_ERROR, "Unexpected char '>'\n"));
      //pTokenizer->error_message = "Unexpected character '%c'";
    }
  } else if (Xml_Tokenizer_Accept (pTokenizer, '>')) {
    // is a tag end without child
    *IsInTag = FALSE;
    XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_END_TAG\n"));
    Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_END_TAG, NULL);
  } else if (Xml_Tokenizer_Accept (pTokenizer, '='))  {
    // a '=' means there have a attribute
    Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_EQUALS, NULL);
    XML_DEBUG ((DEBUG_LEVEL_INFO, "  XML_TOKEN_TYPE_EQUALS\n"));
  } else if (Xml_Tokenizer_Accept (pTokenizer, '"')) {
    // a '"' means a start of text
    Xml_Tokenizer_Prase_Quoted_Text (pTokenizer);
  } else if (Xml_Tokenizer_Accept_Any_Letter (pTokenizer) || 
              Xml_Tokenizer_Accept (pTokenizer, '_')) {
   
    Xml_Tokenizer_Backward (pTokenizer);
    Xml_Tokenizer_Parse_Identifier (pTokenizer);
  } else if (Xml_Tokenizer_Accept (pTokenizer, '<'))  {
    //<!-- This is a comment --> 
    if (Xml_Tokenizer_Expect_String (pTokenizer, "!--")) {
      Xml_Tokenizer_Parse_Until_End_Comment (pTokenizer);
    }
  } else {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "Unexpected char %x\n", Xml_Tokenizer_Get_Current_Char (pTokenizer)));
    Xml_Tokenizer_Forward (pTokenizer);
  }
}

/**
  prase the string in tag, if '<' found, means we are in tag
  @param  pTokenizer   -- the Tokenizer pointer
  @param  IsInTag      -- In Tag flag.
  @retval  none.
**/
VOID
Xml_Tokenizer_Parse_Out_Tag (
  IN  XML_TOKENIZER    *pTokenizer,
  IN  BOOLEAN          *IsInTag
  )
{
  //
  //a tag have child and child tag have none child
  //<xxxx  xx="xxx"          > 
  //  <xxx  xx="xxx"           />   
  //</xxxx> 
  //
  
  if (Xml_Tokenizer_Accept (pTokenizer, '<')) {
    Xml_Tokenizer_Print_Current_Line (pTokenizer);
    //
    // a "<" found means we need into tag prase
    //
    *IsInTag = TRUE;

    if (Xml_Tokenizer_Accept (pTokenizer, '/')) {
      XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_START_END_TAG \n"));
      //
      // if a '<' follow with '/' means tag with child end 
      //
      Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_START_END_TAG, NULL);
      Xml_Tokenizer_Parse_Identifier (pTokenizer);

    } else if (Xml_Tokenizer_Accept (pTokenizer, '!')) {
      /* TANK TODO: */

    } else {
      //
      // if it's a tag, parse the tag name into token
      //
      Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_START_TAG, NULL);
      XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_START_TAG\n"));
      Xml_Tokenizer_Parse_Identifier (pTokenizer);
    }
  } else {
    Xml_Tokenizer_Parse_Non_Tag_Data (pTokenizer);
  }
}

/**
  Debug method for print current token start with current
  @param  pTokenizer   -- the Tokenizer pointer

  @retval  none.
**/
VOID
Xml_Tokenizer_Print_Current_Line (
  XML_TOKENIZER    *pTokenizer
  ) 
{
  UINTN Index;

  for (Index = pTokenizer->Current; Index < pTokenizer->StingSize; Index++) {
    if (pTokenizer->pString[Index] == '\n') {
      pTokenizer->pString[Index] = 0;
      XML_DEBUG ((DEBUG_LEVEL_INFO, "%a\n", pTokenizer->pString+pTokenizer->Current));
      pTokenizer->pString[Index] = '\n';
      break;
    }
  } 
}

/**
  Debug method for token list
  @param  pTokenizer   -- the Tokenizer pointer

  @retval  none.
**/
VOID
Xml_Tokenizer_Print (
  IN  XML_TOKENIZER    *pTokenizer
  )
{
  LIST_ENTRY                            *Link;
  XML_TOKEN                             *pToken;
  //
  // Link all tokens in token list
  //
  Link  = GetFirstNode (pTokenizer->pTokenList);
  while (!IsNull (pTokenizer->pTokenList, Link)) {
    pToken = XML_TOKEN_FROM_LINK (Link);
    Link = GetNextNode (pTokenizer->pTokenList, Link);
    XML_DEBUG ((DEBUG_LEVEL_INFO, "%x ", pToken->TokenType));
    switch (pToken->TokenType) {
      case XML_TOKEN_TYPE_START_TAG:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_START_TAG \n"));
        break;
      case XML_TOKEN_TYPE_IDENTIFIER:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "  XML_TOKEN_TYPE_IDENTIFIER:%a \n", pToken->pData));
        break;
      case XML_TOKEN_TYPE_EQUALS:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "  XML_TOKEN_TYPE_EQUALS:= \n"));
        break;     
      case XML_TOKEN_TYPE_TEXT:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "  XML_TOKEN_TYPE_TEXT:%a \n", pToken->pData));
        break; 
      case XML_TOKEN_TYPE_END_TAG:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_END_TAG\n\n"));
        break;      
      case XML_TOKEN_TYPE_END_EMPTY_TAG:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_END_EMPTY_TAG\n\n"));
        break;
      case XML_TOKEN_TYPE_QUOTED_STRING:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "  XML_TOKEN_TYPE_QUOTED_STRING:%a \n", pToken->pData));
        break;
      case XML_TOKEN_TYPE_START_END_TAG:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "XML_TOKEN_TYPE_START_END_TAG \n\n", pToken->pData));
        break;
      default:
        XML_DEBUG ((DEBUG_LEVEL_INFO, "unkown\n "));
        break;       
    }
  }

}

/**
  init the token by xml string.
  @param  pTokenizer   -- the Tokenizer pointer

  @retval  none.
**/
VOID
Xml_Tokenizer_Tokenize (
  IN  XML_TOKENIZER    *pTokenizer
  )
{

  BOOLEAN  IsInTag = FALSE;
  //
  //End when current > string size
  // 
  while (pTokenizer->Current < pTokenizer->StingSize) {
    if (IsInTag) {
      Xml_Tokenizer_Parse_In_Tag (pTokenizer, &IsInTag);
    } else {
      Xml_Tokenizer_Parse_Out_Tag (pTokenizer, &IsInTag);
    }
  }


}
//============================================================
// Xml Read defines                                          =
//============================================================
/**
  function used to get current token by link
  @param  pReader   -- the reader pointer

  @retval  a xml token will returned, NULL is failed.
**/
XML_TOKEN *
Xml_Reader_Get_Current_Token (
  IN XML_READER       *pReader 
  )
{

  XML_TOKEN        *pToken;
  if (pReader == NULL) { //safety check
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  pToken = XML_TOKEN_FROM_LINK (pReader->pCurrent);

  return pToken;
}

/**
  check a token's type matched with input, if matched, go to next token
  @param  pReader   -- the reader pointer
  @param  Type      -- the Xml token type
  @retval  TRUE if the type is matched, others FALSE
**/
BOOLEAN
Xml_Reader_Accept (
  IN  XML_READER       *pReader,
  IN  XML_TOKEN_TYPE   Type
  )
{
  XML_TOKEN        *pToken;

  pToken = Xml_Reader_Get_Current_Token (pReader);
  if (pToken == NULL) {
    return FALSE;
  } 

  XML_DEBUG ((DEBUG_LEVEL_INFO, "Req[%x] Now[%x]\n", Type, pToken->TokenType ));

  if (IsNull (pReader->pXmlTokenList, pReader->pCurrent)) {
    return FALSE;
  }

  //
  // if token type matched, get next token
  //
  if (pToken->TokenType == Type) {
    pReader->pCurrent = GetNextNode (pReader->pXmlTokenList, pReader->pCurrent);
    pReader->Current++;
    return TRUE;
  }

  return FALSE;
}

/**
  go to next token
  @param  pReader   -- the reader pointer

  @retval  none.
**/
VOID
Xml_Reader_Accept_Any (
  IN  XML_READER       *pReader
  )
{
  XML_TOKEN        *pToken;

  pToken = Xml_Reader_Get_Current_Token (pReader);
  if (pToken == NULL) {
    return ;
  } 

  if (IsNull (pReader->pXmlTokenList, pReader->pCurrent)) {
    return ;
  }

  pReader->pCurrent = GetNextNode (pReader->pXmlTokenList, pReader->pCurrent);

  pReader->Current++;
  return ;

}

/**
  prase the element in xml tokens, if first in, we bypass the whitespace and
  some special token.
  @param  pReader   -- the reader pointer
  @param  First     -- if we are first run in
  @retval  none.
**/
XML_ELEMENT * 
Xml_Reader_Parse_Element_Imp (
  IN XML_READER       *pReader, 
  IN BOOLEAN          First
  )
{
  XML_TOKEN            *pToken;
  XML_TOKEN            *pCurrent;
  XML_TOKEN            *pTagNameToken;
  XML_TOKEN            *pAttrNameToken;
  XML_TOKEN            *pAttrValueToken;
  XML_ELEMENT           *pElement;
  XML_ELEMENT           *pChild;
  XML_ATTRIBUTE         *pAttr;
  BOOLEAN              IsInToken = TRUE;

  BOOLEAN              TagIsEmpty = TRUE;
  if (First)   {
    /* clear valid whitespace */

    pToken = Xml_Reader_Get_Current_Token (pReader);
    while (Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_TEXT)) {

      pToken = Xml_Reader_Get_Current_Token (pReader);
    }
  }
  //
  // a line must start with "<" 
  //
  if (!Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_START_TAG))   {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "Expected '<'\n"));
    return NULL;
  }
  
  //
  // after "<" it start with tag name
  //
  pTagNameToken = Xml_Reader_Get_Current_Token (pReader);
  if (!Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_IDENTIFIER)) {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "Expected tag name identifier\n"));
    return NULL;
  }

  pElement = Xml_Element_New (pTagNameToken->pData);


  do {
    //
    // If tag not end with ">" means it have child tag in it
    // and out of token
    //
    if (Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_END_TAG)) {
      TagIsEmpty = FALSE;
      IsInToken = FALSE;
      continue;
    }
    //
    // If tag not end with "/>" means it have  none child tag in it
    // and out of token
    //
    if (Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_END_EMPTY_TAG)) {
      TagIsEmpty = TRUE;
      IsInToken = FALSE;
      continue;
    }


    pAttrNameToken = Xml_Reader_Get_Current_Token (pReader);

    if (!Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_IDENTIFIER))  {
      XML_DEBUG ((DEBUG_LEVEL_ERROR, "Expected attribute identifier\n"));
      return NULL;
    }
    if (!Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_EQUALS))
    {
      XML_DEBUG ((DEBUG_LEVEL_ERROR, "Expected '='"));
      return NULL;
    }


    pAttrValueToken = Xml_Reader_Get_Current_Token (pReader);
    if (!Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_QUOTED_STRING)) {
      XML_DEBUG ((DEBUG_LEVEL_ERROR, "Expected quoted attribute value\n"));
      return NULL;
    }
    

    //pAttrValueToken = Xml_Reader_Get_Current_Token (pReader);
    pAttr = Xml_Attribute_New (pAttrNameToken->pData, pAttrValueToken->pData);

    if (pAttr != NULL) {
      Xml_Element_Add_Attribute (pElement, pAttr);
    }
  }  while (IsInToken);
  //
  // if tag have none child, just return
  //
  if (TagIsEmpty) return pElement;

  while (!Xml_Reader_Accept (pReader, XML_TOKEN_TYPE_START_END_TAG)) {
    pCurrent = Xml_Reader_Get_Current_Token (pReader);

    if (pCurrent->TokenType == XML_TOKEN_TYPE_START_TAG) {
      pChild = Xml_Reader_Parse_Element_Imp (pReader, FALSE);
      if (pChild != NULL) {
        Xml_Element_Add_Child (pElement, pChild);
      }
    } else {
      Xml_Reader_Accept_Any (pReader);
    }
  }

  return pElement;
}
/**
  prase the document in xml tokens
  Note: now we just calc the document offset
  @param  StringSize     -- the size of string.
  @param  pString        -- the string pointer
  
  @retval  the end offset of document will returned.
**/
XML_ELEMENT * 
Xml_Reader_Parse_Element (
  IN UINTN      StringSize,  
  IN CHAR8      *pString
  )
{
  XML_TOKENIZER     *pTokenizer;
  XML_READER        *pReader;
  XML_ELEMENT        *pElement;
  //
  // new a tokenizer instance
  //
  pTokenizer = Xml_Tokenizer_New (pString, StringSize);
  
  if (pTokenizer == NULL) goto ErrExit;
  //
  // init the tokenizer 
  //  
  Xml_Tokenizer_Tokenize (pTokenizer);
  Xml_Tokenizer_Print (pTokenizer); //debug

  //
  // if the list is empty, just return
  //
  if (IsListEmpty (pTokenizer->pTokenList))  goto ErrExit;

  //
  // new a reader instance
  //
  pReader = (XML_READER *) AllocateZeroPool (sizeof (XML_READER));
  if (pReader == NULL) goto ErrExit;
  //
  // add a end of file token
  //
  Xml_Tokenizer_Add_A_New_Token (pTokenizer, XML_TOKEN_TYPE_END_OF_FILE, NULL);
  pReader->pXmlTokenList = pTokenizer->pTokenList;
  pReader->pCurrent = GetFirstNode (pReader->pXmlTokenList);
  //
  // prase the string for element
  //
  pElement = Xml_Reader_Parse_Element_Imp (pReader, TRUE);

  return pElement;
ErrExit:
  //
  // Free resource here, to do later[T a n k]
  //
  return NULL;
}
/**
  prase the document in xml tokens
  Note: now we just calc the document offset
  @param  StringSize     -- the size of string.
  @param  pString        -- the string pointer

  @retval  the end offset of document will returned.
**/
UINTN  
Xml_Reader_Parse_Document (
  IN UINTN      StringSize,  
  IN CHAR8      *pString
  )
{
  //XML_DOCUMENT *pDocument;
  UINTN       Index;
  BOOLEAN     IsStartFound = FALSE;
 // UINTN       EndIndex = 0;
  if ((pString == NULL) || (StringSize == 0)) {
    return 0;
  }
  for (Index = 0; Index < StringSize; Index ++) {
    if ((pString[Index] == '<') && (pString[Index+1] == '?')) {
      IsStartFound = TRUE;
    }
    if ((pString[Index] == '?') && (pString[Index+1] == '>')) {
      if (IsStartFound)      break;
    }
  }
  //
  // To do later
  //
  return Index + 2;
  
}
/**
  prase the xml files
  Note: now we just calc the document offset
  @param  pFileName   -- the file name

  @retval  a xml document instance will return, NULL is failed
**/
XML_DOCUMENT * 
Xml_Reader_Parse (
  IN  CHAR16            *pFileName
  )
{
  XML_DOCUMENT    *pDocument;
  XML_ELEMENT     *pElement;
  CHAR8          *FileData;
  UINTN          FileSize;
  XML_APPENDABLE  *pAppendable;
  UINTN          DocumentOffset;
  //
  // Read input file data and size
  //
  if (EFI_ERROR (File_Read (pFileName, &FileData, &FileSize))) {
    XML_DEBUG ((DEBUG_LEVEL_ERROR, "%s file is not found !!!\n", pFileName));
    return NULL;
  }

  //
  // bypass document header
  //
  DocumentOffset = Xml_Reader_Parse_Document (FileSize, FileData);

  //
  // prase element in xml string.
  //
  pElement = Xml_Reader_Parse_Element (FileSize-DocumentOffset, FileData+DocumentOffset);
  pDocument = Xml_Document_New_With_Root (pElement);

  #if 1 //DEBUG
  pAppendable  = Xml_Appendable_New (
    XML_APPENDABLE_TYPE_MEMORY,
    NULL,
    0x200000);
    Xml_Appendable_Write_Document (
    pAppendable,
    pDocument
  );
  File_Write (L"Test.xml", pAppendable->pPtr, AsciiStrLen (pAppendable->pPtr));
  #endif
  return pDocument;
}