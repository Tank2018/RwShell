#ifndef _DC_XML_H_
#define _DC_XML_H_
#include <Base.h>
#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Protocol/Shell.h>
#include <Protocol/ShellParameters.h>
#include <Library/ShellLib.h>
#include <Library/PrintLib.h>
#include "Debug.h"

#define XML_DEBUG(x)  ConOutMsg x
//============================================================
// Xml Struct defines										 =
//============================================================
//
// Xml Attrbute struct
//
#define XML_ATTRIBUTE_SIGNATURE  SIGNATURE_32 ('A', 'T', 'T', 'R')
typedef struct _XmlAttribute {
  UINT32           Signature;
  LIST_ENTRY       Link;
  CHAR8            *pName; 
  CHAR8            *pValue;
} XmlAttribute;

//
// CR Macro used to get the attribute
//
#define XML_ATTRIBUTE_FROM_LINK(a)  CR (a, XmlAttribute, Link, XML_ATTRIBUTE_SIGNATURE)


//
// Xml Element struct
//
#define XML_ELEMENT_SIGNATURE  SIGNATURE_32 ('E', 'N', 'N', 'T')
typedef struct _XmlElement {
  UINT32           Signature;
  LIST_ENTRY       Link;
  CHAR8            *pName;
  LIST_ENTRY       pAttributes;
  LIST_ENTRY       pChildren;
} XmlElement;

//
// CR Macro used to get the element
//
#define XML_ELEMENT_FROM_LINK(a)  CR (a, XmlElement, Link, XML_ELEMENT_SIGNATURE)

//
// Xml Document struct
//
typedef struct _XmlDocument {
  CHAR8         *pEncoding;
  CHAR8         *pVersion;
  XmlElement    *pRoot;
} XmlDocument;

//
// XML Appendable type
//
typedef enum _XmlAppendableType
{
  XML_APPENDABLE_TYPE_MEMORY,
  XML_APPENDABLE_TYPE_FILE
  //
  // some others type rsved
  //
} XmlAppendableType;

//
// Xml appendable type
//
typedef struct _XmlAppendable
{
  XmlAppendableType type;
  UINTN             limit;
  UINTN             length;
  void              *ptr;
} XmlAppendable;

//
// Xml Write struct
//
typedef struct _XmlWriter
{
  UINT8 indent_depth;
  UINT8 indent_width;
} XmlWriter;

//============================================================
// Xml String defines									                       =
//============================================================
/** 
  function used to clone a new string
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR8 
*CloneAsciiString (
  IN CHAR8    *String
  );


/** 
  escape some "<","&"..... string, the new string will been allocated

  @param str          -- the str 
  @param attribute

  @retval NULL if failed, escape string will return
**/
CHAR8 *
Xml_Escape_String (
  IN CHAR8    *str, 
  IN BOOLEAN  attribute
  );

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
  );
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
  );

//============================================================
// Xml Attribute defines									 =
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
  );

/**
  Free a xml attribute
  @param attribute  -- the  attribute pool to free

**/
VOID 
Xml_Attribute_Destroy (
  IN XmlAttribute * attribute
  );

/**
  get a xml attribute name
  @param attribute 
  
  @retval  xml attribute name string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Name (
  IN XmlAttribute * attribute
  );

/**
  get a xml attribute value
  @param attribute 
  
  @retval  xml attribute value string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Value (
  IN XmlAttribute * attribute
  );

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
  );

/** 
  xml element destroy all attribute under it
  @param name  -- the element
**/
VOID
Xml_Element_Destroy_Attribute (
  IN XmlElement *element
  );

/** 
  xml element destroy 
  @param name  -- the element
**/
VOID
Xml_Element_Destroy_Element (
  IN XmlElement *element
  );

/** 
  xml element destroy all child under it
  @param name  -- the element
**/
VOID
Xml_Element_Destroy (
  IN XmlElement *element
  );

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
  );

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
  );

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
  );
/**
  get the element attributes list
  @param element  -- the element

  @retval  xml element attributes, null is failed
**/
VOID * 
Xml_Element_Get_Attributes (
  IN XmlElement   *element
  );

/** 
  check if a element's child element is empty or not
  @param element     -- the element

  @retval TRUE if not empty, FALSE is empty 
**/
BOOLEAN 
Xml_Element_Is_Empty (
  IN XmlElement  *element
  );

VOID
Xml_Element_Debug_Print (
  IN  XmlElement  *element,
  IN  UINTN       Index
  );

VOID
Xml_Element_Debug_Print_Element (
  IN  XmlElement  *element,
  IN  UINTN       Indx
  );
//============================================================
// Xml Write defines									                       =
//============================================================

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
  );

/**
 a xml appendable a char
 @param  appendable  -- the xml apppendable
 @param  c           -- the char

**/
VOID 
Xml_Appendable_Append_Char (
  IN   XmlAppendable   *appendable, 
  IN   CHAR8           c
  );

/**
 a xml appendable a string
 @param  appendable  -- the xml apppendable
 @param  string      -- the string

**/
VOID
Xml_Appendable_Append_String (
  IN XmlAppendable  *appendable, 
  IN CHAR8          *string
  );

/** 
  append a indent if current is child
  @param writer  -- the writer 


**/
VOID
Xml_Appendable_Writer_Indent (
  IN XmlAppendable *appendable,
  IN XmlWriter      *writer
  );

/** 
  append one attribute into string
  @param appendable  -- the appendable 
  @param attribute   -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Attribute_Callback (
  IN XmlAppendable   *appendable, 
  IN XmlAttribute    *attribute
  );

/** 
  append element attribute list into string
  @param appendable  -- the appendable 
  @param element     -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Element_Attributes (
  IN XmlAppendable      *appendable, 
  IN XmlElement         *element
  );

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
  );

XmlWriter * 
Xml_Writer_New (
  VOID
  );

VOID  
Xml_Appendable_Write_Document (
  IN XmlAppendable          *appendable, 
  IN XmlDocument            *document
  );
//============================================================
// Xml document defines                                      =
//============================================================
/**
  New a xml document

  @retval new xml element, null is failed
**/
XmlDocument * 
Xml_Document_New (
  VOID
  );

/**
  New a xml document with root input
  @param root  -- the root element

  @retval new xml element, null is failed
**/
XmlDocument * 
Xml_Document_New_With_Root (
  IN XmlElement  *root
  );

/**
  return a xml document  root element
  @param document  -- the document

  @retval  document element, null is failed
**/
XmlElement * 
Xml_Document_Get_Root (
  IN XmlDocument *document
  );
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
  );

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
  );

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
  ) ;
#endif