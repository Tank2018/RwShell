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
#include "String.h"
#include "File.h"
#define XML_DEBUG(x)  Debug_Msg x


#define EMPTY_TAG_END  " />\n"
#define STANDARD_TAG_ENG  ">\n"
#define CLOSE_TAG_START "</"

//============================================================
// Xml Struct defines										 =
//============================================================
//
// Xml Attrbute struct
//
#define XML_ATTRIBUTE_SIGNATURE  SIGNATURE_32 ('A', 'T', 'T', 'R')
typedef struct  {
  UINT32           Signature;
  LIST_ENTRY       Link;
  CHAR8            *pName; 
  CHAR8            *pValue;
} XML_ATTRIBUTE;

//
// CR Macro used to get the attribute
//
#define XML_ATTRIBUTE_FROM_LINK(a)  CR (a, XML_ATTRIBUTE, Link, XML_ATTRIBUTE_SIGNATURE)


//
// Xml Element struct
//
#define XML_ELEMENT_SIGNATURE  SIGNATURE_32 ('E', 'N', 'N', 'T')
typedef struct  {
  UINT32           Signature;
  LIST_ENTRY       Link;
  CHAR8            *pName;
  LIST_ENTRY       Attributes;
  LIST_ENTRY       Children;
} XML_ELEMENT;

//
// CR Macro used to get the element
//
#define XML_ELEMENT_FROM_LINK(a)  CR (a, XML_ELEMENT, Link, XML_ELEMENT_SIGNATURE)

//
// Xml Document struct
//
typedef struct  {
  CHAR8          *pEncoding;
  CHAR8          *pVersion;
  XML_ELEMENT    *pRoot;
} XML_DOCUMENT;

//
// XML Appendable type
//
typedef enum _XML_APPENDABLE_TYPE
{
  XML_APPENDABLE_TYPE_MEMORY,
  XML_APPENDABLE_TYPE_FILE
  //
  // some others type rsved
  //
} XML_APPENDABLE_TYPE;

//
// Xml appendable type
//
typedef struct {
  XML_APPENDABLE_TYPE Type;
  UINTN               Limit;
  UINTN               Length;
  void                *pPtr;
} XML_APPENDABLE;

//
// Xml Write struct
//
typedef struct {
  UINT8 IndentDepth;
  UINT8 IndentWidth;
} XML_WRITER;

//
// Xml Read struct
//
typedef struct _XmlReader
{
  UINTN         Current;
  LIST_ENTRY    *pCurrent;
  LIST_ENTRY    *pXmlTokenList;
} XML_READER;
typedef enum 
{
  XML_TOKEN_TYPE_START_TAG,
  XML_TOKEN_TYPE_END_TAG,
  XML_TOKEN_TYPE_END_EMPTY_TAG,
  XML_TOKEN_TYPE_START_END_TAG,
  XML_TOKEN_TYPE_IDENTIFIER,
  XML_TOKEN_TYPE_EQUALS,
  XML_TOKEN_TYPE_ENTITY,
  XML_TOKEN_TYPE_QUOTED_STRING,
  XML_TOKEN_TYPE_TEXT,

  XML_TOKEN_TYPE_END_OF_FILE,
}XML_TOKEN_TYPE;
//
// Xml Token struct
//
typedef struct {
  UINT32          Signature;
  LIST_ENTRY      Link;  
  CHAR8           *pData;
  UINTN           TokenNumber;
  XML_TOKEN_TYPE  TokenType;
  
}XML_TOKEN;
#define XML_TOKEN_SIGNATURE  SIGNATURE_32 ('T', 'K', 'E', 'N')
//
// CR Macro used to get the attribute
//
#define XML_TOKEN_FROM_LINK(a)  CR (a, XML_TOKEN, Link, XML_TOKEN_SIGNATURE)

//
// Xml Tokenizer struct
//
typedef struct {
  CHAR8         *pString;
  UINTN         StingSize;
  UINTN         Current;
  UINTN         Line;
  UINTN         Column;
  UINTN         LastLineColumn;
  UINTN         TokenNumber;
  LIST_ENTRY    *pTokenList;
  CHAR8         *pErrorMsg;
}XML_TOKENIZER;



//============================================================
// Xml String defines									                       =
//============================================================



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


//============================================================
// Xml Attribute defines									 =
//============================================================
/**
  New a xml attribute
  @param name  -- the name of the attribute
  @param value -- the value of the attribute

  @retval new xml attribute, null is failed
**/
XML_ATTRIBUTE *
Xml_Attribute_New (
  IN CHAR8                      *pName, 
  IN CHAR8                      *pValue
  );

/**
  Free a xml attribute
  @param pAttribute  -- the  attribute pool to free

**/
VOID 
Xml_Attribute_Destroy (
  IN XML_ATTRIBUTE      *pAttribute
  );

/**
  get a xml attribute name
  @param  pAttribute -- the attribute pointer
  
  @retval  xml attribute name string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Name (
  IN XML_ATTRIBUTE           *pAttribute
  );

/**
  get a xml attribute value
  @param  pAttribute -- the attribute pointer
  
  @retval  xml attribute value string, null is failed
**/
CHAR8 *
Xml_Attribute_Get_Value (
  IN XML_ATTRIBUTE           *pAttribute
  );

//============================================================
// Xml Element defines									     =
//============================================================

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
  );

/**
  Clone a xml element with attribute
  @param pElement  -- the element pointer

  @retval new clone xml element will returned, null is failed
**/
XML_ELEMENT * 
Xml_Element_Clone_With_Attribute (
  IN XML_ELEMENT                        *pElement
  );

/**
  Clone a xml element
  @param pElement  -- the element pointer

  @retval new clone xml element will returned, null is failed
**/
XML_ELEMENT * 
Xml_Element_Clone (
  IN XML_ELEMENT                        *pElement
  );
/** 
  xml element destroy all attribute under it
  @param pElement  -- the element pointer

  @reval none.
**/
VOID
Xml_Element_Destroy_Attribute (
  IN XML_ELEMENT        *pElement
  );

/** 
  xml element destroy 
  @param pElement  -- the element pointer

  @retval none.
**/
VOID
Xml_Element_Destroy_Element (
  IN  XML_ELEMENT                *pElement
  );

/** 
  xml element destroy all child under it
  @param pElement  -- the element pointer

  @retval none.
**/
VOID
Xml_Element_Destroy (
  IN  XML_ELEMENT                *pElement
  );

/**
  Insert a attribute into a element
  @param pElement        -- the element
  @param pAttribute      -- the attribute

  @retval  xml element, null is failed
**/
XML_ELEMENT * 
Xml_Element_Add_Attribute (
  IN XML_ELEMENT                     *pElement,
  IN XML_ATTRIBUTE                   *pAttribute
  );

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
  );


/**
  get the element attributes list
  @param pElement  -- the element

  
  @retval  xml element attributes, null is failed
**/
VOID * 
Xml_Element_Get_Attributes_List (
  IN   XML_ELEMENT               *pElement
  );

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
  );
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
  );
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
  );

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
  );

/** 
  check if a element's child element is empty or not
  @param pElement     -- the element

  @retval TRUE if not empty, FALSE is empty 
**/
BOOLEAN 
Xml_Element_Is_Empty (
  IN  XML_ELEMENT               *pElement
  );

/** 
  debug print element to the screen
  @param pElement           -- the element pointer
  @param IndentIndex        -- the indent index

**/
VOID
Xml_Element_Debug_Print_Element (
  IN  XML_ELEMENT               *pElement,
  IN  UINTN                     IndentIndex
  );

/** 
  debug print element  and it's child to the screen
  @param element     -- the element
  @param Index        -- the indent index

**/
VOID
Xml_Element_Debug_Print (
  IN  XML_ELEMENT               *pElement,
  IN  UINTN                     Index
  );
//============================================================
// Xml Write defines									                       =
//============================================================

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
  );


/**
  Destory a appendable instance

  @param  pAppendable  -- the apppendable pointer

  @retval none.
**/
VOID
Xml_Appendable_Destroy (
  IN  XML_APPENDABLE  *pAppeandable 
  );

/**
  reset a appendable instance, if is memory type, all data store in memory(memory addr @ ptr)

  @param  pAppendable  -- the apppendable pointer

  @retval NULL is failed to reset a apppenable 
**/
XML_APPENDABLE * 
Xml_Appendable_Reset (
  IN XML_APPENDABLE    *pAppendable 
  );

/**
 a xml appendable append a char
 @param  pAppendable    -- the xml apppendable
 @param  Data           -- the char

**/
VOID 
Xml_Appendable_Append_Char (
  IN  XML_APPENDABLE   *pAppendable, 
  IN  CHAR8            Data
  );

/**
 a xml appendable append a string
 @param  pAppendable  -- the xml apppendable
 @param  pString      -- the string

**/
VOID
Xml_Appendable_Append_String (
  IN  XML_APPENDABLE   *pAppendable,  
  IN  CHAR8            *pString
  );

/** 
  append a indent if current is child
  @param  pAppendable  -- the xml apppendable
  @param  pWriter      -- the writer 
**/
VOID
Xml_Appendable_Writer_Indent (
  IN  XML_APPENDABLE     *pAppendable,
  IN  XML_WRITER         *pWriter
  );


/** 
  append one attribute into string
  @param pAppendable  -- the appendable 
  @param pAttribute   -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Attribute_Callback (
  IN  XML_APPENDABLE     *pAppendable,
  IN  XML_ATTRIBUTE      *pAttribute
  );

/** 
  append element attribute list into string
  @param pAppendable  -- the appendable 
  @param pElement     -- the atrribute used to been append
  
**/
VOID 
Xml_Appendable_Element_Attributes (
  IN  XML_APPENDABLE      *pAppendable, 
  IN  XML_ELEMENT         *pElement
  );

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
  );

/**
  new a xml write instance

**/
XML_WRITER * 
Xml_Writer_New (
  VOID
  );

/** 
  append element and attribute into document then into string
  @param  pAppendable  -- the appendable 
  @param  pElement     -- the atrribute used to been append
  
**/
VOID  
Xml_Appendable_Write_Document (
  IN  XML_APPENDABLE          *pAppendable, 
  IN  XML_DOCUMENT            *pDocument
  );
//============================================================
// Xml document defines                                      =
//============================================================
/**
  New a xml document

  @retval new xml element, null is failed
**/
XML_DOCUMENT * 
Xml_Document_New (
  VOID
  );

/**
  New a xml document with root input
  @param pRoot  -- the root element

  @retval new xml element, null is failed
**/
XML_DOCUMENT * 
Xml_Document_New_With_Root (
  IN XML_ELEMENT    *pRoot
  );

/**
  return a xml document  root element
  @param pDocument  -- the document

  @retval  document element, null is failed
**/
XML_ELEMENT * 
Xml_Document_Get_Root (
  IN  XML_DOCUMENT     *pDocument
  );

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
  );

/**
  Forward a char step of tokenizer.
  @param  pTokenizer  -- the pTokenizer pointer

  @retval none.
**/
VOID 
Xml_Tokenizer_Forward (
  IN  XML_TOKENIZER           *pTokenizer
  );

/**
  Backward a char step of tokenizer.
  @param  pTokenizer  -- the tokenizer pointer

  @retval none.
**/
VOID
Xml_Tokenizer_Backward (
  IN  XML_TOKENIZER           *pTokenizer
  );

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
  );

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
  );

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
  );

/**
  Accept a  char if current char is a space and forward this
  @param  pTokenizer  -- the tokenizer pointer
 
  @retval TRUE if the char matched space, others failed
**/
BOOLEAN
Xml_Tokenizer_Accept_Space (
  IN  XML_TOKENIZER           *pTokenizer
  );

/**
  Accept a char if this char is a letter and forward this
  @param  pTokenizer  -- the tokenizer pointer
 
  @retval TRUE if the char is letter, others failed
**/
BOOLEAN
Xml_Tokenizer_Accept_Any_Letter (
  IN  XML_TOKENIZER           *pTokenizer
  );

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
  );

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
  );

/**
  this function get char from tokenizer by current offset
  @param  pTokenizer  -- the tokenizer pointer

  @retval 0 means current big than tokenizer size, others will return the current
          char  
**/
CHAR8
Xml_Tokenizer_Get_Current_Char (
  IN  XML_TOKENIZER           *pTokenizer
  );

/**
  this function new a instance of tokenizer
  @param  pString     -- the tokenizer pString pointer
  @param  StringSize  -- the string size of tokenizer

  @retval NULL is failed, others will return a tokenizer instance  pointer
**/
XML_TOKENIZER *
Xml_Tokenizer_New (
  IN  CHAR8    *pString,
  IN  UINTN     StringSize
  );

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
  );

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
  );

/**
  prase the indentifier such as tag name, attribute name
  @param  pTokenizer     -- the tokenizer  pointer
  @retval none.
**/
VOID 
Xml_Tokenizer_Parse_Identifier (
  IN  XML_TOKENIZER    *pTokenizer
  );

/**
  prase arribute text value xx="XXX", get XXX and insert it into token
  @param  pTokenizer     -- the tokenizer  pointer
  @retval none.
**/
VOID
Xml_Tokenizer_Prase_Quoted_Text (
  IN  XML_TOKENIZER    *pTokenizer
  );

/**
  Set current of tokenizer if current meesage is a comment
  @param  pTokenizer     -- the tokenizer pointer

  @retval none.
**/
VOID
Xml_Tokenizer_Parse_Until_End_Comment (
  IN  XML_TOKENIZER    *pTokenizer
  );

/**
  Debug method for print current token start with current
  @param  pTokenizer   -- the Tokenizer pointer

  @retval  none.
**/
VOID
Xml_Tokenizer_Print_Current_Line (
  XML_TOKENIZER    *pTokenizer
  );

/**
  Debug method for token list
  @param  pTokenizer   -- the Tokenizer pointer

  @retval  none.
**/
VOID
Xml_Tokenizer_Print (
  IN  XML_TOKENIZER    *pTokenizer
  );

/**
  init the token by xml string.
  @param  pTokenizer   -- the Tokenizer pointer

  @retval  none.
**/
VOID
Xml_Tokenizer_Tokenize (
  IN  XML_TOKENIZER    *pTokenizer
  );

/**
  function used to get current token by link
  @param  pReader   -- the reader pointer

  @retval  a xml token will returned, NULL is failed.
**/
XML_TOKEN *
Xml_Reader_Get_Current_Token (
  IN XML_READER       *pReader 
  );

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
  );

/**
  go to next token
  @param  pReader   -- the reader pointer

  @retval  none.
**/
VOID
Xml_Reader_Accept_Any (
  IN  XML_READER       *pReader
  );

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
  );

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
  );

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
  );

/**
  prase the xml files
  Note: now we just calc the document offset
  @param  pFileName   -- the file name

  @retval  a xml document instance will return, NULL is failed
**/
XML_DOCUMENT * 
Xml_Reader_Parse (
  IN  CHAR16            *pFileName
  );

CHAR8 * 
Xml_Element_Get_AttributesData_By_Name_d (
  IN  XML_ELEMENT               *pElement,
  IN  CHAR8                     *pName
  );
#endif