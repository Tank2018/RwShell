#ifndef _DC_FILE_H_
#define _DC_FILE_H_
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
#define FILE_DEBUG(x)  Debug_Msg x
#pragma pack(1)
typedef struct {
  UINT32                          Signature;
  LIST_ENTRY                      Link;
  UINTN                           Line;
  UINTN                           Size;
  CHAR8                           *pLine;
} FILE_LINE_STRUCT;
#pragma pack()
#define FILE_LINE_SIGNATURE  SIGNATURE_32 ('F', 'L', 'L', 'N')
#define FILE_LINE_FROM_LINK(a)  CR (a, FILE_LINE_STRUCT, Link, FILE_LINE_SIGNATURE)

/**

  this function is used to read file under efi shell by file name.

  @param pFileName     - the pointer to the unicode file name.
  @param pBuff         - the pointer to the file buffer.
  @param pSize         - the pointer to the size of the file buffer.

  @retval EFI_SUCCESS  - success to read the file

**/
EFI_STATUS
EFIAPI
File_Read (
  IN  CHAR16              *pFileName,
  IN  OUT CHAR8           **pBuff,
  IN  OUT UINTN           *pBuffSize
  );
/**

  This function is used to write file under efi shell by file name.

  @param pFileName      - the pointer to the unicode file name.
  @param pBuff          - the pointer to the file buffer.
  @param BuffSize       - the size of the file buffer.


  @retval EFI_SUCCESS   - success to write the file
**/
EFI_STATUS
File_Write (
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
File_ReWrite (
  IN  CHAR16               *pFileName,
  IN  CHAR8                *pBuff,
  IN  UINTN                pBufSize
  );

/**

  this function is used to read line into list

  @param pFileName      - the pointer to the unicode file name.
  @param pLineList      - the list


  @retval EFI_SUCCESS   - success to read file line
**/
EFI_STATUS
File_Read_Lines (
  IN  CHAR16              *pFileName,
  IN  LIST_ENTRY          *pLineList
  );
#endif