#ifndef _DC_DEBUG_H_
#define _DC_DEBUG_H_
#include <Base.h>
#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
typedef enum {
  DEBUG_LEVEL_NONE  = 0x0,
  DEBUG_LEVEL_ERROR = 0x1,
  DEBUG_LEVEL_INFO  = 0x2,
  DEBUG_LEVEL_VERBOSE = 0x4,
  DEBUG_LEVEL_STEP  = 0x08,
  DEBUG_LEVEL_ALL   = 0x0f
} DEBUG_LEVEL;

/**

  this function is used to set debug level.

  @param  Level 		  - Con Out message level


**/

VOID
Debug_Level_Set (
  IN  UINT8 Level
  );

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
  );

/**

  this function is used to get debug level.

  @param  Level 		  - Con Out message level

  @retval a inter of level will returned
**/

UINT8
Debug_Level_Get (
  VOID
  );

VOID
Debug_By_Step (
  VOID
  );
#endif