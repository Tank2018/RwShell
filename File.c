#include "File.h"
/**
  Function to determine if a SHELL_FILE_HANDLE is at the end of the file.

  This will NOT work on directories.

  If Handle is NULL, then ASSERT.

  @param[in] Handle     the file handle

  @retval TRUE          the position is at the end of the file
  @retval FALSE         the position is not at the end of the file
**/
BOOLEAN
EFIAPI
File_Handle_Eof (
  IN SHELL_FILE_HANDLE Handle
  )
{
  EFI_FILE_INFO *Info;
  UINT64        Pos;
  BOOLEAN       RetVal;

  //
  // ASSERT if Handle is NULL
  //
  //ASSERT(Handle != NULL);

  gEfiShellProtocol->GetFilePosition(Handle, &Pos);
  Info = gEfiShellProtocol->GetFileInfo (Handle);
  gEfiShellProtocol->SetFilePosition(Handle, Pos);

  if (Info == NULL) {
    return (FALSE);
  }

  if (Pos == Info->FileSize) {
    RetVal = TRUE;
  } else {
    RetVal = FALSE;
  }

  FreePool (Info);

  return (RetVal);
}
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
File_ReWrite (
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
  Status = File_Read (pFileName, &Buf, &BufSize);
  FileSize = BufSize + pBufSize;


  FileBuf = (UINT8 *) AllocateZeroPool (FileSize);
  AsciiSPrint ((CHAR8 *)FileBuf, FileSize, "%a%a", pBuff, Buf);
  if (Buf != NULL) {
    FreePool (Buf);
  }

  Status = File_Write (pFileName, (CHAR8 *)FileBuf, FileSize);
  if (FileBuf != NULL) {
    FreePool (FileBuf);
  }
  return Status;
}
/**


**/
VOID
File_Lines_Print (
  IN  LIST_ENTRY          *pLineList
  )
{
  FILE_LINE_STRUCT    *pFileLine;
  LIST_ENTRY          *Link;
  //
  // Link all opcode into xml node
  //
  Link  = GetFirstNode (pLineList);
  while (!IsNull (pLineList, Link)) {

    pFileLine = FILE_LINE_FROM_LINK(Link);
    Link = GetNextNode (pLineList, Link);
    FILE_DEBUG ((DEBUG_LEVEL_ERROR, "%a\n", pFileLine->pLine));
  }
}
/**

  this function is used to read line into list

  @param pFileName      - the pointer to the unicode file name.
  @param pLineList      - the list


  @retval EFI_SUCCESS   - success to read file line
**/
UINTN
File_Read_Lines (
  IN  CHAR16              *pFileName,
  IN  LIST_ENTRY          *pLineList
  )
{
  EFI_STATUS          Status;
  SHELL_FILE_HANDLE   Handle;
  UINTN               LineCount;
  BOOLEAN             Ascii;
  CHAR16              *pLine;
  FILE_LINE_STRUCT    *pFileLine;
  if (pFileName == NULL) {  //safety checking.
    return 0;
  }

  Status = ShellOpenFileByName (pFileName, &Handle, EFI_FILE_MODE_READ | EFI_FILE_MODE_WRITE, 0);
  if (EFI_ERROR (Status)) {
    return 0;
  }
  LineCount = 0;
  while(!File_Handle_Eof (Handle)) {
    pLine = ShellFileHandleReturnLine (Handle, &Ascii);
    if (!Ascii) {
      FILE_DEBUG ((DEBUG_LEVEL_ERROR, "current file %s is not ascii format\n", pFileName));
      return 0;
    }
    LineCount++;
    if ((pLine == NULL) || (StrLen (pLine) == 0)) {
      continue;
    }
    pFileLine = (FILE_LINE_STRUCT *)AllocateZeroPool (sizeof(FILE_LINE_STRUCT));
    if (pFileLine == NULL) {
      FILE_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check\n", __FUNCTION__, __LINE__));
      return 0;
    }
    pFileLine->Signature = FILE_LINE_SIGNATURE;
    
    pFileLine->Line      = LineCount;
    pFileLine->pLine     = Unicode_To_Ascii (pLine, NULL);
    pFileLine->Size      = AsciiStrSize (pFileLine->pLine);
    //FILE_DEBUG ((DEBUG_LEVEL_ERROR, "Line1: %a\n", (CHAR8 *)pFileLine->pLine));

    if (pLine != NULL) {
      FreePool (pLine);
    }
    //
    // Insert it into root file
    //
    InsertTailList (pLineList, &pFileLine->Link);
  }
  ShellCloseFile (&Handle);
  //
  // Debug
  //
  File_Lines_Print (pLineList);
  return LineCount;
}

