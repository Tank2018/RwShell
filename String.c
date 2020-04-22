#include "String.h"
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
  )
{
  CHAR8                             *ReturnValue;

  //
  // Destination cannot be NULL
  //
  ASSERT (Destination != NULL);

  //
  // Destination and source cannot overlap
  //
  ASSERT ((UINTN)(Destination - Source) > AsciiStrLen (Source));
  ASSERT ((UINTN)(Source - Destination) > AsciiStrLen (Source));

  ReturnValue = Destination;
  while (*Source != 0) {
    *(Destination++) = *(Source++);
  }
  *Destination = 0;
  return ReturnValue;
}
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
  )
{
  Ascii_Str_Cpy (Destination + AsciiStrLen (Destination), Source);

  //
  // Size of the resulting string should never be zero.
  // PcdMaximumUnicodeStringLength is tested inside StrLen().
  //
  ASSERT (AsciiStrSize (Destination) != 0);
  return Destination;
}


/**

  swap string
  @param Data                   - in Data of the swap string
  @param Size                   - size of the string

**/

VOID 
Swap_Entries (
  IN CHAR8    *Data,
  IN UINT16   Size
  )
{
  UINT16  Index;
  CHAR8   Temp8;

  for (Index = 0; (Index+1) < Size; Index+=2) {
    Temp8           = Data[Index];
    Data[Index]     = Data[Index + 1];
    Data[Index + 1] = Temp8;
  }
}

/**

  remove extra ' ' to '\0'
  @param Data                   - in Data of the swap string
  @param Size                   - size of the string

**/
VOID
Eliminate_Extra_Spaces (
  IN CHAR8                    *Str
  )
{
  UINTN                        Index;
  UINTN                        ActualIndex;
  if (Str == NULL) { // Safety check
    return;
  }
  for (Index = 0, ActualIndex = 0; Str[Index] != '\0'; Index++) {
    if ((Str[Index] != ' ') || ((ActualIndex > 0) && (Str[ActualIndex - 1] != ' '))) {
      Str[ActualIndex++] = Str[Index];
    }
  }
  
  Str[ActualIndex] = '\0';
  return;
}

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
  )
{
  CHAR8                               *ReturnValue;

  ASSERT (Destination != NULL);

  //
  // ASSERT if Source is long than PcdMaximumUnicodeStringLength.
  // Length tests are performed inside StrLen().
  //
  ASSERT (StrSize (Source) != 0);

  //
  // Source and Destination should not overlap
  //
  ASSERT ((UINTN) (Destination - (CHAR8 *) Source) >= StrSize (Source));
  ASSERT ((UINTN) ((CHAR8 *) Source - Destination) > StrLen (Source));


  ReturnValue = Destination;
  while (*Source != '\0') {
    //
    // If any Unicode characters in Source contain
    // non-zero value in the upper 8 bits, then ASSERT().
    //
    ASSERT (*Source < 0x100);
    *(Destination++) = (CHAR8) *(Source++);
  }

  *Destination = '\0';

  //
  // ASSERT Original Destination is less long than PcdMaximumAsciiStringLength.
  // Length tests are performed inside AsciiStrLen().
  //
  ASSERT (AsciiStrSize (ReturnValue) != 0);

  return ReturnValue;
}

