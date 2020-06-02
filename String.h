#ifndef _DC_STRING_H_
#define _DC_STRING_H_
#include <Base.h>
#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
/**
  [ATTENTION] This function will be deprecated for security reason.

  Copies one Null-terminated ASCII string to another Null-terminated ASCII
  string and returns the new ASCII string.

  This function copies the contents of the ASCII string Source to the ASCII
  string Destination, and returns Destination. If Source and Destination
  overlap, then the results are undefined.

  If Destination is NULL, then ASSERT().
  If Source is NULL, then ASSERT().
  If Source and Destination overlap, then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and Source contains more than
  PcdMaximumAsciiStringLength ASCII characters, not including the Null-terminator,
  then ASSERT().

  @param  Destination A pointer to a Null-terminated ASCII string.
  @param  Source      A pointer to a Null-terminated ASCII string.

  @return Destination

**/
CHAR8 *
EFIAPI
Ascii_Str_Cpy (
  OUT     CHAR8                     *Destination,
  IN      CONST CHAR8               *Source
  );


/**
  [ATTENTION] This function will be deprecated for security reason.

  Concatenates one Null-terminated ASCII string to another Null-terminated
  ASCII string, and returns the concatenated ASCII string.

  This function concatenates two Null-terminated ASCII strings. The contents of
  Null-terminated ASCII string Source are concatenated to the end of Null-
  terminated ASCII string Destination. The Null-terminated concatenated ASCII
  String is returned.

  If Destination is NULL, then ASSERT().
  If Source is NULL, then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and Destination contains more than
  PcdMaximumAsciiStringLength ASCII characters, not including the Null-terminator,
  then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and Source contains more than
  PcdMaximumAsciiStringLength ASCII characters, not including the Null-terminator,
  then ASSERT().
  If PcdMaximumAsciiStringLength is not zero and concatenating Destination and
  Source results in a ASCII string with more than PcdMaximumAsciiStringLength
  ASCII characters, then ASSERT().

  @param  Destination A pointer to a Null-terminated ASCII string.
  @param  Source      A pointer to a Null-terminated ASCII string.

  @return Destination

**/
CHAR8 *
EFIAPI
Ascii_Str_Cat (
  IN OUT CHAR8    *Destination,
  IN CONST CHAR8  *Source
  );


/**

  swap string
  @param Data                   - in Data of the swap string
  @param Size                   - size of the string

**/

VOID 
Swap_Entries (
  IN CHAR8    *Data,
  IN UINT16   Size
  );
/**

  remove extra ' ' to '\0'
  @param Data                   - in Data of the swap string
  @param Size                   - size of the string

**/
VOID
Eliminate_Extra_Spaces (
  IN CHAR8                    *Str
  );

/**
  [ATTENTION] This function is deprecated for security reason.

  Convert a Null-terminated Unicode string to a Null-terminated
  ASCII string and returns the ASCII string.

  This function converts the content of the Unicode string Source
  to the ASCII string Destination by copying the lower 8 bits of
  each Unicode character. It returns Destination.

  The caller is responsible to make sure Destination points to a buffer with size
  equal or greater than ((StrLen (Source) + 1) * sizeof (CHAR8)) in bytes.

  If any Unicode characters in Source contain non-zero value in
  the upper 8 bits, then ASSERT().

  If Destination is NULL, then ASSERT().
  If Source is NULL, then ASSERT().
  If Source is not aligned on a 16-bit boundary, then ASSERT().
  If Source and Destination overlap, then ASSERT().

  If PcdMaximumUnicodeStringLength is not zero, and Source contains
  more than PcdMaximumUnicodeStringLength Unicode characters, not including
  the Null-terminator, then ASSERT().

  If PcdMaximumAsciiStringLength is not zero, and Source contains more
  than PcdMaximumAsciiStringLength Unicode characters, not including the
  Null-terminator, then ASSERT().

  @param  Source        A pointer to a Null-terminated Unicode string.
  @param  Destination   A pointer to a Null-terminated ASCII string.

  @return Destination.

**/
CHAR8 *
EFIAPI
Unicode_To_Ascii (
  IN      CONST CHAR16              *Source,
  OUT     CHAR8                     *Destination
  );

/**
  Guid to ascii string , format as below
  523DF4C5-289B-49BF-BFAE-5BA3B511F17B
  @param  Guid          A 16 byte guid.

  @return A guid format string.

**/
CHAR8 *
Guid_To_Acsii (
  IN EFI_GUID   *Guid 
  );


/** 
  Ascii to unicode string 
  @param  String          A Ascii String.

  @return A unicode string.
**/
CHAR16 *
Ascii_To_Unicode (
  IN  CHAR8     *String
  );
/**
    Hex to string 11223344 ==> "11223344"
    @param  Hex                - the hex
    @param  InSize             - the hex size
    @retval CHAR8 *             NULL means failed, hex to string buffer
**/

CHAR8 *
Hex_To_String (
  IN  UINT8       *Hex,
  IN  UINTN       InSize
  );
/**
    Hex to string
    @param  Hex                - the hex
    @param  InSize             - the hex size
    @retval CHAR8 *             NULL means failed, hex to string buffer
**/
CHAR8 *
Hex_To_String_Order (
  IN  UINT8       *Hex,
  IN  UINTN       InSize
  );

/** 
  function used to clone a new string
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR8 *
Clone_Ascii_String (
  IN CHAR8    *String
  );
/** 
  function used to clone a new string
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR8 *
Clone_Ascii_String_WO_SPACE (
  IN CHAR8    *String
  );
/** 
  function used to clone a new unicode string
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR16 *
Clone_Unicode_String (
  IN CHAR16    *String
  );
/**
    Hex to format align string
    00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
    10 XX
    @param  Hex                - the hex
    @param  InSize             - the hex size
    @retval CHAR8 *             NULL means failed, hex to string buffer
**/

CHAR8 *
Hex_To_String_Space_Format_Align (
  IN  UINT8       *Hex,
  IN  UINTN       InSize,
  IN  UINT8       Align
  );
#endif