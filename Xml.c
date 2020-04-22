#include "Xml.h"

//============================================================
// Xml String defines									     =
//============================================================
/** 
  function used to clone a new string
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR8 
*CloneAsciiString (
  IN CHAR8    *String
  )
{
  CHAR8           *p; 
  if (String == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  p = (CHAR8 *) AllocateZeroPool (AsciiStrSize (String));
  if (p == NULL) {//safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  CopyMem (p, String, AsciiStrLen (String));

  return p;
}


UINTN 
Xml_Calc_Escape_String_Length (
  IN CHAR8    *str, 
  IN BOOLEAN  attribute
  )
{
  UINTN    i    = 0;
  UINTN    size = 0;

  if (str == NULL) {
    return 0;
  }
  while (str[i] != '\0')  {

    switch (str[i] ) {
      case '&':
        size += AsciiStrLen ("&amp;");
        break;
      case '<':
        size += AsciiStrLen ("&lt;");
        break;
      case '>':
        size += AsciiStrLen ("&gt;");
        break;
      case '\"':
        if (attribute)
          size += AsciiStrLen ("&quot;");
        else
          size += AsciiStrLen ("\"");
        break;
      case '\'':
        if (attribute)
          size += AsciiStrLen ("&apos;");
        else
          size += AsciiStrLen ("\'");
        break;

      default:
        size ++;
        break;
    }
    i++;
  }
  return size;
}

/** 
  escape some "<","&"..... string
  @param str          -- the str 
  @param attribute

  @retval NULL if failed, escape string will return
**/
CHAR8 *
Xml_Escape_String (
  IN CHAR8    *str, 
  IN BOOLEAN  attribute
  )
{
  UINTN    i, j, size;
  CHAR8    *t;

  if (str == NULL) { //safety check
    return NULL;
  }
  //
  // calc the escape string length, if matched with org, just return org string
  //
  size = Xml_Calc_Escape_String_Length (str, attribute);
  if (size == AsciiStrLen (str)) {
    return str;
  }

  t = (CHAR8 *)AllocateZeroPool (size);
  if (t == NULL) { //safety check
    return NULL; 
  }
  i = 0;
  j = 0;
  while (str[i] != '\0') {

    switch (str[i]) {

      case '&':
        CopyMem (t+j, "&amp;", AsciiStrLen ("&amp;"));
        j += AsciiStrLen ("&amp;");
        break;
      case '<':
        CopyMem (t+j, "&lt;", AsciiStrLen ("&lt;"));
        j += AsciiStrLen ("&lt;");
        break;
      case '>':
        CopyMem (t+j, "&gt;", AsciiStrLen ("&gt;"));
        j += AsciiStrLen ("&gt;");
        break;
      case '\"':
        if (attribute) {
          CopyMem (t+j, "&quot;", AsciiStrLen ("&quot;"));
          j += AsciiStrLen ("&quot;");
        } else {
          CopyMem (t+j, "\"", AsciiStrLen ("\""));
          j += AsciiStrLen ("\"");
        }
        break;
      case '\'':
        if (attribute) {
          CopyMem (t+j, "&apos;", AsciiStrLen ("&apos;"));
          j += AsciiStrLen ("&apos;");
        } else {
          CopyMem (t+j, "\"", AsciiStrLen ("\""));
          j += AsciiStrLen ("\"");
        }
        break;

      default:
        t[j] = str[i];
        j++;
        break;

    }
    i++;
  }
  t[j] = '\0';

  return t;
}

/**
  [ATTENTION] This function will be deprecated for security reason.

  Copies one Null-terminated ASCII string to another Null-terminated ASCII
  string and returns the new ASCII string.

  This function copies the contents of the ASCII string Source to the ASCII
  string Destination, and returns Destination. If Source and Destination
  overlap, then the results are undefined.

  If Destination is NULL, then ASSERT().
  If Source is NULL, then ASSERT().
  If Source and Destination overlap, then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and Source contains more than
  PcdMaximumAsciiStringLength ASCII characters, not including the Null-terminator,
  then ASSERT().

  @param  Destination A pointer to a Null-terminated ASCII string.
  @param  Source      A pointer to a Null-terminated ASCII string.

  @return Destination

**/
CHAR8 *
EFIAPI
Xml_Ascii_Str_Cpy (
  OUT     CHAR8                     *Destination,
  IN      CONST CHAR8               *Source
  )
{
  CHAR8                             *ReturnValue;

  //
  // Destination cannot be NULL
  //
  ASSERT (Destination != NULL);

  //
  // Destination and source cannot overlap
  //
  ASSERT ((UINTN)(Destination - Source) > AsciiStrLen (Source));
  ASSERT ((UINTN)(Source - Destination) > AsciiStrLen (Source));

  ReturnValue = Destination;
  while (*Source != 0) {
    *(Destination++) = *(Source++);
  }
  *Destination = 0;
  return ReturnValue;
}
/**
  [ATTENTION] This function will be deprecated for security reason.

  Concatenates one Null-terminated ASCII string to another Null-terminated
  ASCII string, and returns the concatenated ASCII string.

  This function concatenates two Null-terminated ASCII strings. The contents of
  Null-terminated ASCII string Source are concatenated to the end of Null-
  terminated ASCII string Destination. The Null-terminated concatenated ASCII
  String is returned.

  If Destination is NULL, then ASSERT().
  If Source is NULL, then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and Destination contains more than
  PcdMaximumAsciiStringLength ASCII characters, not including the Null-terminator,
  then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and Source contains more than
  PcdMaximumAsciiStringLength ASCII characters, not including the Null-terminator,
  then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and concatenating Destination and
  Source results in a ASCII string with more than PcdMaximumAsciiStringLength
  ASCII characters, then ASSERT().

  @param  Destination A pointer to a Null-terminated ASCII string.
  @param  Source      A pointer to a Null-terminated ASCII string.

  @return Destination

**/
CHAR8 *
EFIAPI
Xml_Ascii_Str_Cat (
  IN OUT CHAR8    *Destination,
  IN CONST CHAR8  *Source
  )
{
  Xml_Ascii_Str_Cpy (Destination + AsciiStrLen (Destination), Source);

  //
  // Size of the resulting string should never be zero.
  // PcdMaximumUnicodeStringLength is tested inside StrLen().
  //
  ASSERT (AsciiStrSize (Destination) != 0);
  return Destination;
}

//============================================================
// Xml Attribute defines								     =
//============================================================

/**
  New a xml attribute
  @param name  -- the name of the attribute
  @param value -- the value of the attribute

  @retval new xml attribute, null is failed
**/
XmlAttribute *
Xml_Attribute_New (
  IN CHAR8 *name, 
  IN CHAR8 *value
  )
{
  XmlAttribute *ret;
  if ((name == NULL) || (value == NULL)) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  ret = (XmlAttribute *) AllocateZeroPool (sizeof(XmlAttribute));
  if (ret == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  
  ret->Signature = XML_ATTRIBUTE_SIGNATURE;
  ret->pName  = CloneAsciiString(name);
  ret->pValue = CloneAsciiString(value);

  return ret;
}

/**
  Free a xml attribute
  @param attribute  -- the  attribute pool to free

**/
VOID 
Xml_Attribute_Destroy (
  IN XmlAttribute * attribute
  )
{
  if (attribute == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  if (attribute->pName  != NULL)   FreePool (attribute->pName);
  if (attribute->pValue != NULL)   FreePool (attribute->pValue);
  FreePool (attribute);
}

/**
  get a xml attribute name
  @param attribute 
  
  @retval  xml attribute name string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Name (
  IN XmlAttribute * attribute
  )
{
  if (attribute == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  return CloneAsciiString (attribute->pName);
}

/**
  get a xml attribute value
  @param attribute 
  
  @retval  xml attribute value string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Value (
  IN XmlAttribute * attribute
  )
{
  if (attribute == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  return CloneAsciiString(attribute->pValue);
}

//============================================================
// Xml Element defines									     =
//============================================================
/**
  New a xml element
  @param name  -- the name of the element

  @retval new xml element, null is failed
**/
XmlElement * 
Xml_Element_New (
  IN CHAR8 *name
  )
{
  XmlElement    *ret;

  if (name == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  ret = (XmlElement *) AllocateZeroPool (sizeof(XmlElement));
  if (ret == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  ret->Signature = XML_ELEMENT_SIGNATURE;
  ret->pName = CloneAsciiString (name);
  InitializeListHead (&ret->pAttributes);
  InitializeListHead (&ret->pChildren);

  return ret;
}

/** 
  xml element destroy all attribute under it
  @param name  -- the element
**/
VOID
Xml_Element_Destroy_Attribute (
  IN XmlElement *element
  )
{
  LIST_ENTRY      *Link;
  XmlAttribute    *attribute;
  if (element == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Link  = GetFirstNode (&element->pAttributes);
  while (!IsNull (&element->pAttributes, Link)) {
    attribute = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&element->pAttributes, Link);
    Xml_Attribute_Destroy (attribute);
  }
}
/** 
  xml element destroy 
  @param name  -- the element
**/
VOID
Xml_Element_Destroy_Element (
  IN XmlElement *element
  )
{
  
  if (element == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  if (element->pName != NULL) {
    FreePool (element->pName);
  }
  FreePool (element);
}

/** 
  xml element destroy all child under it
  @param name  -- the element
**/
VOID
Xml_Element_Destroy (
  IN XmlElement *element
  )
{
  LIST_ENTRY      *Link;
  XmlElement      *child;
  if (element == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Element_Destroy_Attribute (element);
  Link  = GetFirstNode (&element->pChildren);
  while (!IsNull (&element->pChildren, Link)) {
    child = XML_ELEMENT_FROM_LINK (Link);
    Link = GetNextNode (&element->pChildren, Link);
    Xml_Element_Destroy_Element (child);
    Xml_Element_Destroy (child);
  }
  FreePool (element->pName);
  FreePool (element);

}

/**
  Insert a attribute into a element
  @param element  -- the element
  @param attribute  -- the attribute

  @retval  xml element, null is failed
**/
XmlElement * 
Xml_Element_Add_Attribute (
  IN XmlElement     *element,
  IN XmlAttribute   *attribute
  )
{
  if ((element == NULL) || (attribute == NULL)) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // Insert the attribute into the
  //
  InsertTailList (&element->pAttributes, &attribute->Link);

  return element;
}

/**
  Insert a child element into a element
  @param element  -- the element
  @param attribute  -- the attribute
  
  @retval  xml element, null is failed
**/
XmlElement * 
Xml_Element_Add_Child (
  IN XmlElement     *element,
  IN XmlElement     *child
  )
{
  if ((element == NULL) || (child == NULL)) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // Insert the child into the
  //
  InsertTailList (&element->pChildren, &child->Link);

  return element;
}

/**
  Insert a element into a element
  @param element   -- the element
  @param element1  -- the element
  
  @retval  xml element, null is failed
**/
XmlElement * 
Xml_Element_Add_Element (
  IN XmlElement     *element,
  IN XmlElement     *element1
  )
{
  if ((element == NULL) || (element1 == NULL)) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // Insert the child into the
  //
  InsertTailList (&element->Link, &element->Link);

  return element;
}
/**
  get the element attributes list
  @param element  -- the element

  
  @retval  xml element attributes, null is failed
**/
VOID * 
Xml_Element_Get_Attributes (
  IN XmlElement   *element
  )
{
  if (element == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  return (VOID *) &(element->pAttributes);
}

/** 
  check if a element's child element is empty or not
  @param element     -- the element

  @retval TRUE if not empty, FALSE is empty 
**/
BOOLEAN 
Xml_Element_Is_Empty (
  IN XmlElement  *element
  )
{
  if (element == NULL) { 
    return FALSE;
  }

  return IsListEmpty (&element->pChildren);
}

/** 
  debug print element to the screen
  @param element     -- the element
  @param Indx        -- the indent index

 
**/
VOID
Xml_Element_Debug_Print_Element (
  IN  XmlElement  *element,
  IN  UINTN       Indx
  )
{
  LIST_ENTRY      *Link;
  XmlAttribute    *attribute;
  UINTN           Index;
  if (element == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  for (Index = 0; Index < Indx; Index++) {
    XML_DEBUG ((EFI_D_ERROR, "  "));
  }
  XML_DEBUG ((EFI_D_ERROR, "e:%a\n", element->pName));


  Link  = GetFirstNode (&element->pAttributes);
  while (!IsNull (&element->pAttributes, Link)) {
    attribute = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&element->pAttributes, Link);
    for (Index = 0; Index < Indx; Index++) {
      XML_DEBUG ((EFI_D_ERROR, "  "));
    }
    XML_DEBUG ((EFI_D_ERROR, "  a:%a = %a\n", attribute->pName, attribute->pValue));
  }
}

/** 
  debug print element to the screen
  @param element     -- the element
  @param Indx        -- the indent index

 
**/
VOID
Xml_Element_Debug_Print (
  IN  XmlElement  *element,
  IN  UINTN       Index
  )
{

  LIST_ENTRY      *Link;
  XmlElement      *child;
  if (element == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Element_Debug_Print_Element (element, Index);
  Index ++;
  Link  = GetFirstNode (&element->pChildren);
  while (!IsNull (&element->pChildren, Link)) {
    child = XML_ELEMENT_FROM_LINK (Link);
    Link = GetNextNode (&element->pChildren, Link);
    //Xml_Element_Debug_Print_Element (child, Index);
    Xml_Element_Debug_Print (child, Index);
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
 @param  type  -- the type of xml apppendable
 @param  ptr   -- the ptr of xml appendable
 @param  limit -- the limit size of all appendable xml

 @retval NULL is failed to new a apppenable xml, a new appendable xml will return
**/
XmlAppendable * 
Xml_Appendable_New (
  IN XmlAppendableType  type, 
  IN VOID               *ptr, 
  IN UINTN              limit
  )
{
  XmlAppendable * ret = (XmlAppendable *) AllocateZeroPool (sizeof (XmlAppendable));
  if (ret == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  ret->type = type;
  ret->limit = limit;
  ret->length = 0; // all string length without the Null-terminated
  if (type == XML_APPENDABLE_TYPE_MEMORY) {
    //
    // if all data store in memory, just allocate A zero page pool to store the information
    //
    ret->ptr = AllocatePages (EFI_SIZE_TO_PAGES (limit)); 
    ZeroMem (ret->ptr, limit);
  } else {
    //
    // // if this file, store it as file name, to do later, tank[TBD]
    //
    ret->ptr = ptr;
  }

  return ret;
}

/**
 a xml appendable a char
 @param  appendable  -- the xml apppendable
 @param  c           -- the char

**/
VOID 
Xml_Appendable_Append_Char (
  IN   XmlAppendable   *appendable, 
  IN   CHAR8           c
  )
{
  if (appendable == NULL) {  //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  switch (appendable->type)  {

    case XML_APPENDABLE_TYPE_MEMORY:
      if (appendable->length >= appendable->limit && appendable->limit != -1)
        return;
      //
      // if current ptr is null, allocate a char size ptr to it
      //
      ((CHAR8 *) appendable->ptr)[appendable->length] = c;
      ((CHAR8 *) appendable->ptr)[appendable->length+1] = '\0';
      appendable->length ++;
      break;
    case XML_APPENDABLE_TYPE_FILE:
      // to do later, tank[TBD]
      break;

    default:
      break;
  }
}

/**
 a xml appendable a string
 @param  appendable  -- the xml apppendable
 @param  string      -- the string

**/
VOID
Xml_Appendable_Append_String (
  IN XmlAppendable  *appendable, 
  IN CHAR8          *string
  )
{
  UINTN        string_length;
  if ((appendable == NULL) || (string == NULL)) {  //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  switch (appendable->type) {

    case XML_APPENDABLE_TYPE_MEMORY:
      if (appendable->length >= appendable->limit && appendable->limit != -1) {
        return;
      }

      string_length = AsciiStrLen (string);
      if ((appendable->length + string_length > appendable->limit) && (appendable->limit != -1)) {
        return;
      }
      //
      // to check later if need to copy a limit-length size string
      // when length overlap
      //
      Xml_Ascii_Str_Cat (appendable->ptr, string);
      appendable->length = AsciiStrLen (appendable->ptr);
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
  @param writer  -- the writer 


**/
VOID
Xml_Appendable_Writer_Indent (
  IN XmlAppendable *appendable,
  IN XmlWriter      *writer
  )
{
  UINTN i;
  if (writer == NULL) {  //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  for (i = 0; i < writer->indent_depth * writer->indent_width; i++)  {
    Xml_Appendable_Append_Char (appendable, ' '); // indent with space, width default is 2, depth by child depth 
  }
}

/** 
  append one attribute into string
  @param appendable  -- the appendable 
  @param attribute   -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Attribute_Callback (
  IN XmlAppendable   *appendable, 
  IN XmlAttribute    *attribute
  )
{
  CHAR8  *escaped_value;

  if ((appendable == NULL) || (attribute == NULL)) {  //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Appendable_Append_Char (appendable, ' '); // ap a space
  
  //
  // attr="xxx"
  // 
  Xml_Appendable_Append_String (appendable, attribute->pName); // ap the attribute name
  Xml_Appendable_Append_Char (appendable, '='); 
  Xml_Appendable_Append_Char (appendable, '\"');

  escaped_value = Xml_Escape_String (attribute->pValue, TRUE);
  Xml_Appendable_Append_String (appendable, escaped_value);
  FreePool (escaped_value);

  Xml_Appendable_Append_Char (appendable, '\"');
}


/** 
  append element attribute list into string
  @param appendable  -- the appendable 
  @param element     -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Element_Attributes (
  IN XmlAppendable      *appendable, 
  IN XmlElement         *element
  )
{
  LIST_ENTRY      *Link;
  XmlAttribute    *attribute;
  if ((appendable == NULL) || (element == NULL)) {  //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 

  Link  = GetFirstNode (&element->pAttributes);
  while (!IsNull (&element->pAttributes, Link)) {
    attribute = XML_ATTRIBUTE_FROM_LINK (Link);
    Link = GetNextNode (&element->pAttributes, Link);
    Xml_Appendable_Attribute_Callback (appendable, attribute);
  }
  return;
}

/** 
  append element attribute list into string
  @param appendable  -- the appendable 
  @param element     -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Element (
  IN XmlWriter              *writer, 
  IN XmlAppendable          *appendable, 
  IN XmlElement             *element
  )
{
  LIST_ENTRY         *Link;
  XmlElement         *child;

  if ((writer == NULL) || (appendable == NULL) || (element == NULL)) {  //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 
  Xml_Appendable_Writer_Indent (appendable, writer);
  Xml_Appendable_Append_Char (appendable, '<');
  Xml_Appendable_Append_String (appendable, element->pName);


  Xml_Appendable_Element_Attributes (appendable, element); //TANK_END



  if (Xml_Element_Is_Empty (element))  { // if the element have none child
    Xml_Appendable_Append_String (appendable, empty_tag_end);
  } else {
    Xml_Appendable_Append_String (appendable, standard_tag_end);

    writer->indent_depth++;
    Link  = GetFirstNode (&element->pChildren);
    while (!IsNull (&element->pChildren, Link)) {
      child = XML_ELEMENT_FROM_LINK (Link);
      Link = GetNextNode (&element->pChildren, Link);
      Xml_Appendable_Element (writer, appendable, child);
    }
    writer->indent_depth--;
    Xml_Appendable_Writer_Indent (appendable, writer);
    Xml_Appendable_Append_String (appendable, close_tag_start);
    Xml_Appendable_Append_String (appendable, element->pName);
    Xml_Appendable_Append_String(appendable, standard_tag_end);
    
  }
  //XML_DEBUG ((EFI_D_ERROR, "%a\n", element->pName));
  return;
}

XmlWriter * 
Xml_Writer_New (
  VOID
  )
{
  XmlWriter * ret = (XmlWriter *) AllocateZeroPool (sizeof(XmlWriter));


  ret->indent_depth = 0;
  ret->indent_width = 2;

  return ret;
}


VOID  
Xml_Appendable_Write_Document (
  IN XmlAppendable          *appendable, 
  IN XmlDocument            *document
  )
{

  XmlWriter     *writer;
  CHAR8         t[100];
  if (document == NULL) {  //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  } 
  
  ZeroMem (t, 100);
  AsciiSPrint (
    t,
    100,
    "<?xml version=\"%a\" encoding=\"%a\"?>\n",
    document->pVersion,
    document->pEncoding
    );
  //XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
  Xml_Appendable_Append_String (appendable, t); 

  writer = Xml_Writer_New ();

  Xml_Appendable_Element (writer, appendable, Xml_Document_Get_Root (document));

  //TO DO LATER tank[TBD] FreePool (appendable);
}

//============================================================
// Xml Document defines                                      =
//============================================================

/**
  New a xml document

  @retval new xml element, null is failed
**/
XmlDocument * 
Xml_Document_New (
  VOID
  )
{
  XmlDocument * ret = (XmlDocument *) AllocateZeroPool (sizeof (XmlDocument));
  if (ret == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  ret->pEncoding = CloneAsciiString ("UTF-8");
  ret->pVersion = CloneAsciiString ("1.0");
  ret->pRoot = Xml_Element_New ("root");

  return ret;
}

/**
  New a xml document with root input
  @param root  -- the root element

  @retval new xml element, null is failed
**/
XmlDocument * 
Xml_Document_New_With_Root (
  IN XmlElement  *root
  )
{
  XmlDocument *ret;
  if (root == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  ret = (XmlDocument *) AllocateZeroPool (sizeof (XmlDocument));
  if (ret == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  ret->pEncoding = CloneAsciiString("UTF-8");
  ret->pVersion = CloneAsciiString("1.0");
  ret->pRoot = root;

  return ret;
}

/**
  return a xml document  root element
  @param document  -- the document

  @retval  document element, null is failed
**/
XmlElement * 
Xml_Document_Get_Root (
  IN XmlDocument *document
  )
{
  if (document == NULL) { //safety check
    XML_DEBUG ((EFI_D_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }

  return document->pRoot;
}
//============================================================
// Xml File defines                                          =
//============================================================

/**

    this function is used to read file under efi shell by file name.

    @param pFileName     - the pointer to the unicode file name.
    @param pBuff         - the pointer to the file buffer.
    @param pSize         - the pointer to the size of the file buffer.

    @retval EFI_SUCCESS  - success to read the file

**/
EFI_STATUS
EFIAPI
Xml_Read_File (
  IN  CHAR16              *pFileName,
  IN  OUT CHAR8           **pBuff,
  IN  OUT UINTN           *pBuffSize
)
{
  EFI_STATUS          Status;
  SHELL_FILE_HANDLE   Handle;
  EFI_FILE_INFO       *pFileInfo;

  if ((pFileName == NULL) || (pBuff == NULL) || (pBuffSize == NULL)) {  //safety checking.
    return EFI_NOT_FOUND;
  }

  Status = ShellOpenFileByName (pFileName, &Handle, EFI_FILE_MODE_READ, 0);

  if (!EFI_ERROR (Status)) {
    pFileInfo = ShellGetFileInfo (Handle);
    if (pFileInfo != NULL) {
      *pBuffSize = pFileInfo->FileSize + 1;
      *pBuff = AllocateZeroPool (*pBuffSize);
      if (*pBuff != NULL) {
        Status = ShellReadFile (Handle, pBuffSize, *pBuff);
        if (!EFI_ERROR (Status)) {
          ShellCloseFile (&Handle);
          return Status;
        } else {
          FreePool (*pBuff);
          *pBuff = NULL;
        }
      }
    }
    ShellCloseFile (&Handle);
  }
  return EFI_NOT_FOUND;
}

/**

    this function is used to write file under efi shell by file name.

    @param pFileName      - the pointer to the unicode file name.
    @param pBuff          - the pointer to the file buffer.
    @param BuffSize       - the size of the file buffer.
    @param pFileHandle    - the file handle of the file


    @retval EFI_SUCCESS   - success to write the file
**/
EFI_STATUS
Xml_Write_File (
  IN  CHAR16               *pFileName,
  IN  CHAR8                *pBuff,
  IN  UINTN                BuffSize
  )
{
  EFI_STATUS        Status;
  SHELL_FILE_HANDLE   Handle;

  if ((pFileName == NULL) || (pBuff == NULL) || (BuffSize == 0)) {  //safety checking.
    return EFI_UNSUPPORTED;
  }

  Status = ShellOpenFileByName (pFileName, &Handle, EFI_FILE_MODE_READ | EFI_FILE_MODE_WRITE, 0);
  if (!EFI_ERROR (Status)) {
    ShellDeleteFile (&Handle);
  }
  Status = ShellOpenFileByName (pFileName, &Handle, EFI_FILE_MODE_READ | EFI_FILE_MODE_WRITE | EFI_FILE_MODE_CREATE, 0);
  if (! EFI_ERROR(Status)) {
    Status = ShellWriteFile (Handle, &BuffSize, pBuff);
    ShellCloseFile (&Handle);
    if (EFI_ERROR(Status)) {
      return EFI_UNSUPPORTED;
    }
    return EFI_SUCCESS;
  } else {
  }
  return EFI_UNSUPPORTED;
}


/**

    this function is used to re-write and append string into file under efi shell by file name.

    @param pFileName      - the pointer to the unicode file name.
    @param pBuff          - the pointer to the file buffer.
    @param BuffSize       - the size of the file buffer.

    @retval EFI_SUCCESS   - success to re write the file
**/
EFI_STATUS
Xml_ReWrite_File (
  IN  CHAR16               *pFileName,
  IN  CHAR8                *pBuff,
  IN  UINTN                pBufSize
  ) 
{
  EFI_STATUS                  Status;
  CHAR8                       *Buf;
  UINTN                       BufSize;

  UINT8                         *FileBuf;
  UINTN                       FileSize;
  Buf        = NULL;
  BufSize    = 0;
  if ((pFileName == NULL) || (pBuff == NULL) || (pBufSize == 0)) {  //safety checking.
    return EFI_UNSUPPORTED;
  }
  Status = Xml_Read_File (pFileName, &Buf, &BufSize);
  FileSize = BufSize + pBufSize;


  FileBuf = (UINT8 *) AllocateZeroPool (FileSize);
  AsciiSPrint ((CHAR8 *)FileBuf, FileSize, "%a%a", pBuff, Buf);
  if (Buf != NULL) {
    FreePool (Buf);
  }

  Status = Xml_Write_File (pFileName, (CHAR8 *)FileBuf, FileSize);
  if (FileBuf != NULL) {
    FreePool (FileBuf);
  }
  return Status;
}