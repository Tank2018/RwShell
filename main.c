#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Protocol/PciIo.h>
#include "LsPci.h"
#include "MB.h"
#include "HiiVar.h"
#include "File.h"
typedef enum {
  MB_INFO = 1,
  PCI_INFO = 2,
  HII_INFO = 4,
  FILE_COMPARE = 0x80,
  ALL_INFO = 0xff
} ARG_S;

/**
  Print APP usage.
**/
VOID
PrintUsage (
  VOID
  )
{
  Debug_Msg (DEBUG_LEVEL_ALL, "Dump:\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -h: help info\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -o filename.xml: file name to read/save\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -f filename.xml: file name to compare or set\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -mb: dump mainboard info\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -pci: dump pci info\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -hii: dump hii info\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -all: dump all info\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "  -s 0xXX: set debug level\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "    0x0: none debug\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "    0x1: error level\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "    0x2: info level\n");
  Debug_Msg (DEBUG_LEVEL_ALL, "    0x4: verbose level\n");
}
/**

  This function Get application ARG.

  @param  ImageHandle    - ImageHandle of the Test info tool
  @retval EFI_SUCCESS    - success to load the shell parm

**/
UINT8
GetArg (
  IN  EFI_HANDLE        ImageHandle,
  OUT CHAR16            **FileName
  )
{
  EFI_STATUS                    Status;
  EFI_SHELL_PARAMETERS_PROTOCOL *ShellParameters;
  UINTN                         Argc;
  UINTN                         ArgIndex;
  CHAR16                        **Argv;
  UINT8                         Command = 0xf;
  CHAR16                        *File = NULL;
  Status = gBS->HandleProtocol (
                  gImageHandle,
                  &gEfiShellParametersProtocolGuid,
                  (VOID**)&ShellParameters
                  );
  if (EFI_ERROR(Status)) {
    Print (L"Can't handle the shell Parameter!\n");
    return 0;
  }

  Argc = ShellParameters->Argc;
  Argv = ShellParameters->Argv;
  ArgIndex = 1;
  //
  // Dispatch the command
  //
  while (ArgIndex < Argc) {
  //
    //arg "h" means app help
    //
    if (StrCmp (Argv[ArgIndex], L"-h") == 0) {
      PrintUsage ();
      return 0;
    }
  
    //
    //arg "-s" means the debug level
    //
    if (StrCmp (Argv[ArgIndex], L"-s") == 0)  {
      ArgIndex ++;
      Debug_Level_Set ((UINT8)StrHexToUintn (Argv[ArgIndex]));
    }

    //
    //arg "-o" means the save file name
    //
    if (StrCmp (Argv[ArgIndex], L"-o") == 0)  {
      ArgIndex ++;
      File = Clone_Unicode_String(Argv[ArgIndex]);
    }
    //
    //arg "-f" means the compare or set file name
    //
    if (StrCmp (Argv[ArgIndex], L"-f") == 0)  {
      ArgIndex ++;
      File = Clone_Unicode_String(Argv[ArgIndex]);
      if (Command == 0xf) {
        Command = 0x80;
      } else {
        Command |= 0x80;
      }
    }
    //
    //arg "-mb" means pci info
    //
    if (StrCmp (Argv[ArgIndex], L"-mb") == 0)  {
      if (Command == 0xf) {
        Command = 0x01;
      } else {
        Command |= 0x01;
      }
    }

    //
    //arg "-pci" means pci info
    //
    if (StrCmp (Argv[ArgIndex], L"-pci") == 0)  {
      if (Command == 0xf) {
        Command = 0x02;
      } else {
        Command |= 0x02;
      }
    }

    //
    //arg "-hii" means hii info
    //
    if (StrCmp (Argv[ArgIndex], L"-hii") == 0)  {
      if (Command == 0xf) {
        Command = 0x04;
      } else {
        Command |= 0x04;
      }
    }

    //
    //arg "-all" means hii info
    //
    if (StrCmp (Argv[ArgIndex], L"-all") == 0)  {
      Command = 0xf;
    }

    ArgIndex ++;
  }
  *FileName = File;
  return Command;
}
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
#if 1
  XML_APPENDABLE                         *pAppendable;
  XML_DOCUMENT                           *pDocument;
  XML_ELEMENT                            *pElement;
  XML_ATTRIBUTE                          *pAttribute;
  UINT8                                   Command = 0;
  CHAR16                                 *pFileName = NULL;
  //LIST_ENTRY                            FileLineList;
  Command = GetArg (ImageHandle, &pFileName);
  if (Command == 0) {
    return EFI_INVALID_PARAMETER;
  }
  if (pFileName == NULL) {
    pFileName = L"Dumpx.xml";
  }
  pElement = Xml_Element_New ("Dump");
  if (pElement == NULL) {
    return EFI_UNSUPPORTED;
  }
  pAttribute = Xml_Attribute_New ("email", "tanktang2018@hotmail.com");
  Xml_Element_Add_Attribute (pElement, pAttribute);
  pAttribute = Xml_Attribute_New ("aurthor", "tank");
  Xml_Element_Add_Attribute (pElement, pAttribute);

  pDocument = Xml_Document_New_With_Root (pElement);
  if (pDocument == NULL) {
    return EFI_UNSUPPORTED;
  }
  pAppendable  = Xml_Appendable_New (
                   XML_APPENDABLE_TYPE_MEMORY,
                   NULL,
                   0x200000
                   );
  
  if (Command & MB_INFO) {
    MB_Xml_Write (Xml_Document_Get_Root (pDocument));
  }
  if (Command & PCI_INFO) {
    Lspci_Xml_Write (Xml_Document_Get_Root (pDocument));
  }

  if (Command & HII_INFO) {
    HiiVar_Xml_Write (Xml_Document_Get_Root (pDocument));
  }

  Xml_Appendable_Write_Document (
    pAppendable,
    pDocument
  );
  if (Command & FILE_COMPARE) {
    Xml_Reader_Parse (pFileName);
  } else {
    File_Write (pFileName, pAppendable->pPtr, AsciiStrLen (pAppendable->pPtr));
  }
#else
CHAR8  *p="ort,\
\
\
T";
for (UINT8 i = 0; i < AsciiStrSize (p); i ++) {
  Print(L"%X", p[i]);
}

#endif
	return EFI_SUCCESS;
}