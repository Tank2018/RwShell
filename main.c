#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Protocol/PciIo.h>
#include "LsPci.h"
#include "MB.h"
/**
    Dump Info Entry point

    @param  ImageHandle    - The image handle.
    @param  SystemTable    - The system table.

    @retval EFI_SUCCESS            Command completed successfully.
**/
EFI_STATUS
EFIAPI
DumpEntryPoint (
  IN  EFI_HANDLE        ImageHandle,
  IN  EFI_SYSTEM_TABLE  *SystemTable
  )
{

  XmlAppendable                         *appendable;
  XmlDocument                           *document;
  XmlElement                            *element;
  XmlAttribute                          *attribute;
  UINTN                                  Index = 0;

  element = Xml_Element_New ("Dump");
  if (element == NULL) {
    return EFI_UNSUPPORTED;
  }
  attribute = Xml_Attribute_New ("email", "tanktang2018@hotmail.com");
  Xml_Element_Add_Attribute (element, attribute);
  attribute = Xml_Attribute_New ("aurthor", "tank");
  Xml_Element_Add_Attribute (element, attribute);

  document = Xml_Document_New_With_Root (element);
  if (document == NULL) {
    return EFI_UNSUPPORTED;
  }
  appendable  = Xml_Appendable_New (
    XML_APPENDABLE_TYPE_MEMORY,
    NULL,
    0x200000);


  MB_Xml_Write (Xml_Document_Get_Root (document));
  Index = 0;
  Xml_Element_Debug_Print (Xml_Document_Get_Root (document), Index);
	Lspci_Xml_Write (Xml_Document_Get_Root (document));



  Xml_Appendable_Write_Document (
    appendable,
    document
  );

  Xml_Write_File (L"Dumpx.xml", appendable->ptr, AsciiStrSize (appendable->ptr));
	return EFI_SUCCESS;
}