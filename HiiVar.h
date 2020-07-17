#ifndef  _DC_HII_VAR_H_
#define _DC_HII_VAR_H_
#include "Debug.h"
#include "Xml.h"
#include "String.h"
#include <Library/HiiLib.h>
#include <Library/UefiHiiServicesLib.h>
#include <Protocol/HiiDatabase.h>
#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>

#define HIIVAR_DEBUG(x)  Debug_Msg x
#pragma pack(1)

//
// Hii Opcode node struct define
//
typedef struct {
  UINT32                          Signature;
  VOID                            *Formset;
  LIST_ENTRY                      Link;
  CHAR8                           *Name;      // name of current opcode, such promt
  UINTN                           Offset;     // root formset offset of current opcode
  LIST_ENTRY                      AttrList;   // attribute list
  LIST_ENTRY                      ChildList;  // child opcode list
} HIIVAR_OPCODE;
//
// Hii Formset node struct define
//
typedef struct {
  UINT32                          Signature;
  LIST_ENTRY                      Link;
  EFI_HII_HANDLE                  HiiHandle;
  UINT8                           *IfrBinaryData;     //Formset binary data         
  UINTN                           IfrBinaryLength;    //Formset binary length
  HIIVAR_OPCODE                   *Opcode;            //Formset Opcode node
  LIST_ENTRY                      StorageListHead;    //Formset Storage list 
} HIIVAR_FORMSET;
//
// Hii Storage node struct define
//
typedef struct {
  UINT32                          Signature;
  LIST_ENTRY                      Link;
  UINT16                          StoreId;  // Var Store Id
  CHAR16                          *Name;    // Var Store Name
  EFI_GUID                        Guid;     // Var Store Guid
  UINTN                           Size;     // Var Store Size
  UINT8                           *Data;    // Var Store data
} HIIVAR_STORAGE;
//
// Hii Attribute node struct define
//
typedef struct {
  UINT32                          Signature;
  LIST_ENTRY                      Link;
  CHAR8                           *Name;
  CHAR8                           *Data;
} HIIVAR_OPCODE_ATTR;

//
// Hii Debug struct
//
typedef struct {
  UINT32                          Signature;
  LIST_ENTRY                      Link;
  UINTN                           Offset;
  CHAR8                           *Name;
  CHAR8                           *Value;
  CHAR8                           *Size;
} HIIVAR_VARSTORE_ITEM;


//
// Hii Debug struct
//
typedef struct {
  UINT8  IndentDepth; 
  UINT8  IndentWidth;
} HIIVAR_DEBUG;

#pragma pack() 
#define HIIVAR_ITEM_SIGNATURE  SIGNATURE_32 ('H', 'V', 'I', 'M')
#define HIIVAR_OPCODE_ATTR_SIGNATURE  SIGNATURE_32 ('H', 'V', 'T', 'R')
#define HIIVAR_OPCODE_SIGNATURE       SIGNATURE_32 ('H', 'V', 'O', 'P')
#define HIIVAR_STORAGE_SIGNATURE      SIGNATURE_32 ('H', 'V', 'S', 'R')
#define HIIVAR_FORMSET_SIGNATURE      SIGNATURE_32 ('H', 'V', 'F', 'S')
#define HIIVAR_ITEM_FROM_LINK(a)  CR (a, HIIVAR_VARSTORE_ITEM, Link, HIIVAR_ITEM_SIGNATURE)
#define HIIVAR_OPCODE_FROM_LINK(a)  CR (a, HIIVAR_OPCODE, Link, HIIVAR_OPCODE_SIGNATURE)
#define HIIVAR_ATTR_FROM_LINK(a)  CR (a, HIIVAR_OPCODE_ATTR, Link, HIIVAR_OPCODE_ATTR_SIGNATURE)
#define HIIVAR_STORAGE_FROM_LINK(a)  CR (a, HIIVAR_STORAGE, Link, HIIVAR_STORAGE_SIGNATURE)
#define HIIVAR_FORMSET_FROM_LINK(a)  CR (a, HIIVAR_FORMSET, Link, HIIVAR_FORMSET_SIGNATURE)
#define HIIVAR_OPCODE_HIIHANDLE(a) ((HIIVAR_FORMSET *)a->Formset)->HiiHandle
#define HIIVAR_OPCODE_IFRPTR(a) (((HIIVAR_FORMSET *)a->Formset)->IfrBinaryData + a->Offset)
#define HIIVAR_OPCODE_STROAGELIST(a) ((HIIVAR_FORMSET *)a->Formset)->StorageListHead


#define TYPE_FORMSET       0x01
#define TYPE_FORM          0x02
#define TYPE_ONEOF         0x04
#define TYPE_ONEOFOPTION   0x08


#define QUESTION_NUMERIC "numeric"
#define QUESTION_ONE_OF "oneof"
#define QUESTION_CHECKBOX "checkbox"
#define FORMSET_TAG_STR "formset"
#define FORM_TAG_STR "form"
#define QUETION_TAG_STR "question"
#define OPTION_TAG_STR "option"
#define CURRENT_TAG_STR "current"
#define MODIFY_TAG_STR "modify"
#define HELP_TAG_STR "help"
#define ID_ATR_STR "id"
#define NAME_ATR_STR "name"
#define TYPE_ATR_STR "type"
#define RADIX_ATR_STR "radix"
#define LEN_ATR_STR "len"
#define INFO_ATR_STR "info"
#define VALUE_ATR_STR "value"
#define MFGDEF_ATR_STR "mfgdef"
#define STDDEF_ATR_STR "stddef"

#define SETUP_NAME L"Setup"
#define SETUP_VARIABLE_GUID                                                      \
    {                                                                   \
        0xEC87D643, 0xEBA4, 0x4BB5, {0xA1, 0xE5, 0x3F, 0x3E, 0x36, 0xB2, 0x0D, 0xA9} \
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
  );

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
  );

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
  );

/**
  Dispatch the opcode, build attribute and child
  @param  pOpcode             -- opcode pointer

  @retval EFI_INVALID_PARAMETER  -- if input is null
          EFI_SUCCESS            -- dispatch success
**/
EFI_STATUS
HiiVar_Opcode_Attr_Dispatch (
  IN HIIVAR_OPCODE  *pOpcode
  );

/**
  Create a storage instance, get matched variable
  @param  pIfr                   -- The opcode pointer

  @retval a HIIVAR_STORAGE pointer will return if success, others NULL.

**/
VOID *
HiiVar_Storage_New (
  IN  EFI_IFR_OP_HEADER  *pIfr
  );

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
  );

/**
  this is function used to add all hii database into xml node
  @param  pElement -- the root of the xml

**/
VOID
HiiVar_Xml_Write (
  IN XML_ELEMENT *pElement
  );

/** 
  Dispatch all var store item under formset
**/
VOID *
HiiVar_VarStore_Item_Formset_Dispatch (
  VOID
  );

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
  );

VOID
HiiVar_Xml_Document_Parse (
  IN  XML_DOCUMENT      *pDocument
  );

VOID
HiiVar_Xml_Diff_Item_Mapped (
  IN  XML_ELEMENT          *pElement
  );
VOID  
HiiVar_Xml_HiiDumpInfo_Compare (
  IN  XML_ELEMENT     *pElement,
  IN  LIST_ENTRY      *List
  );
#endif