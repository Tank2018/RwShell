#include "Debug.h"
/**

  this function is used to print debug info.

  @param  Level 		  - Con Out message level
  @param  Format          - Format string for the debug message to print.
  @param  ...             - A variable argument list whose contents are accessed based on the format string specified by Format.

  @retval none

**/
VOID
EFIAPI
ConOutMsg (
  IN  UINTN       Level,
  IN  CHAR8       *Format,
  ...
  )
{

  CHAR16        Buffer[0x200]; 
  VA_LIST       Marker;
  //
  // Check the msg level first
  //
  //if ((CON_OUT_LEVEL (mConout) && Level) == 0) {
  //  return;
  //}
  //
  // Convert the DEBUG() message to an ASCII String
  //
  VA_START (Marker, Format);
  UnicodeVSPrintAsciiFormat (Buffer, sizeof (Buffer), Format, Marker);
  VA_END (Marker);

  //
  // Send the print string to the Console Output device
  //
  //if ((gST != NULL) && (gST->ConOut != NULL) && IsConOutMsgTypeScreen ()) {
    gST->ConOut->OutputString (gST->ConOut, Buffer);
  //}
}