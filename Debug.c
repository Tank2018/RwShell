#include "Debug.h"
UINT8   mDebugLevel = DEBUG_LEVEL_ERROR;
/**

  this function is used to set debug level.

  @param  Level 		  - Con Out message level


**/

VOID
Debug_Level_Set (
  IN  UINT8 Level
  )
{
  mDebugLevel = Level;
}

/**

  this function is used to get debug level.

  @param  Level 		  - Con Out message level

  @retval a inter of level will returned
**/

UINT8
Debug_Level_Get (
  VOID
  )
{
  
  return mDebugLevel ;

}
/**

  this function is used to print debug info.

  @param  Level 		  - Con Out message level
  @param  Format          - Format string for the debug message to print.
  @param  ...             - A variable argument list whose contents are accessed based on the format string specified by Format.

  @retval none

**/
VOID
EFIAPI
Debug_Msg (
  IN  UINT8       Level,
  IN  CHAR8       *Format,
  ...
  )
{

  CHAR16        Buffer[0x200]; 
  VA_LIST       Marker;
  //
  // Check the msg level first
  //
  if ((mDebugLevel & Level) == 0) {
    return;
  }
  //
  // Convert the DEBUG() message to an ASCII String
  //
  VA_START (Marker, Format);
  UnicodeVSPrintAsciiFormat (Buffer, sizeof (Buffer), Format, Marker);
  VA_END (Marker);

  //
  // Send the print string to the Console Output device
  //
  if ((gST != NULL) && (gST->ConOut != NULL)) {
    gST->ConOut->OutputString (gST->ConOut, Buffer);
  }
}


VOID
Debug_By_Step (
  VOID
  )
{
  EFI_STATUS                   Status;
  EFI_INPUT_KEY                InputKey;
  UINTN                        Index;
  //
  // Step by step debug , wait for key input, wait for narrow down key
  //
  if (gST->ConIn != NULL) {
    do {
      Status = gST->ConIn->ReadKeyStroke (gST->ConIn, &InputKey);
      if (Status == EFI_NOT_READY) {
        gBS->WaitForEvent (1, &gST->ConIn->WaitForKey, &Index);
        continue;
      }

      if (Status == EFI_DEVICE_ERROR) {
        return;
      }

      if (InputKey.ScanCode == SCAN_DOWN) {
        return ;
      }

    } while (1);
  }
  return;
}