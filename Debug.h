#ifndef _DC_DEBUG_H_
#define _DC_DEBUG_H_
#include <Base.h>
#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>

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
  );
#endif