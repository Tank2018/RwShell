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
  if (Source == NULL) {
    return NULL;
  } 
  if (Destination == NULL) { 
    Destination = (CHAR8 *) AllocateZeroPool (StrSize (Source)/2 + 1); //SAFE add 1
    if (Destination == NULL) {
      return NULL;
    }
  }

  ReturnValue = Destination;
  while (*Source != '\0') {
    //
    // If any Unicode characters in Source contain
    // non-zero value in the upper 8 bits, then ASSERT().
    //
    //ASSERT (*Source < 0x100);
    *(Destination++) = (CHAR8) *(Source++);
  }

  *Destination = '\0';

  //
  // ASSERT Original Destination is less long than PcdMaximumAsciiStringLength.
  // Length tests are performed inside AsciiStrLen().
  //
  //ASSERT (AsciiStrSize (ReturnValue) != 0);

  return ReturnValue;
}

/**
  Guid to ascii string , format as below
  523DF4C5-289B-49BF-BFAE-5BA3B511F17B
  @param  Guid          A 16 byte guid.

  @return A guid format string.

**/
CHAR8 *
Guid_To_Acsii (
  IN EFI_GUID   *Guid 
  )
{
  CHAR8   *String;
  if (Guid == NULL) {
    return NULL;
  }
  String = (CHAR8   *)AllocateZeroPool (0x25);
  if (String == NULL) {
    return NULL;
  }
  AsciiSPrint (String, 0x42, "%g", Guid);
  return String;
  
}

/** 
  Ascii to unicode string 
  @param  String          A Ascii String.

  @return A unicode string.
**/
CHAR16 *
Ascii_To_Unicode (
  IN  CHAR8     *String
  )
{
  UINTN    Size = 0;
  UINTN    i = 0;
  CHAR16   *Unicode;
  if (String == NULL) {
    return NULL;
  }
  Size = AsciiStrSize (String) * 2;
  Unicode = (CHAR16 *)AllocateZeroPool (Size);
  while (String[i] != '\0') {
    Unicode[i] = (CHAR16) String[i];
    i ++;
  }

  return Unicode;
}


CHAR8 mHexDigit[17] = "0123456789ABCDEF";
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
  )
{
  UINTN          Index;
  UINTN           HexIndex;
  UINTN          StringSize;
  CHAR8          *String;

  if (Hex == NULL) { //safety check
    return NULL;
  }

  StringSize = InSize * 2 + 1; //1 byte means xx ==> "XX"  + "\0"
  String = (CHAR8 *) AllocateZeroPool (StringSize);
  if (String == NULL) {
    return NULL;
  }

  HexIndex = 0;
  Index = StringSize - 1; 
  do {
    Index --;
    String[Index] = mHexDigit[Hex[HexIndex] & 0x0f];
    Index --;
    String[Index] = mHexDigit[(Hex[HexIndex] >> 4) & 0x0f];
    HexIndex ++;
  } while (HexIndex < InSize);
  return String;
}
/**
    Hex to string 0x11223344 ==> "0x11223344"
    @param  Hex                - the hex
    @param  InSize             - the hex size
    @retval CHAR8 *             NULL means failed, hex to string buffer
**/

CHAR8 *
Hex_To_String_Order (
  IN  UINT8       *Hex,
  IN  UINTN       InSize
  )
{
  UINTN          Index;
  UINTN           HexIndex;
  UINTN          StringSize;
  CHAR8          *String;

  if (Hex == NULL) { //safety check
    return NULL;
  }

  StringSize = InSize * 2 + 2 + 1; //1 byte means xx ==> "XX" + "0x" + "\0"
  String = (CHAR8 *) AllocateZeroPool (StringSize);
  if (String == NULL) {
    return NULL;
  }

  HexIndex = 0;
  Index = StringSize - 1; 
  do {
    Index --;
    String[Index] = mHexDigit[Hex[HexIndex] & 0x0f];
    Index --;
    String[Index] = mHexDigit[(Hex[HexIndex] >> 4) & 0x0f];
    HexIndex ++;
  } while (HexIndex < InSize);
  Index --;
  if (Index != 1) { // index should been 1
    return NULL;
  }
  String[1] = 0x78; // Add "x"
  String[0] = 0x30; // Add "0"
  return String;
}

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
  )
{
  UINTN          Index;
  UINTN           HexIndex;
  UINTN          StringSize;
  CHAR8          *String;

  if ((Hex == NULL) || (InSize == 0)) { //safety check
    return NULL;
  }

  StringSize = InSize * 3 +  1; //1 byte means xx ==> "XX"
  String = (CHAR8 *) AllocateZeroPool (StringSize);
  if (String == NULL) {
    return NULL;
  }
  SetMem (String, StringSize-1, 0x20); //format all string as space
  HexIndex = 0;
  Index = 0;

  do {
    *(String + Index) = mHexDigit[(Hex[HexIndex] >> 4) & 0x0f];
    Index ++;
    *(String + Index) = mHexDigit[Hex[HexIndex] & 0x0f];
    Index ++;


    HexIndex ++;
    if (HexIndex%Align == 0) { // if align, end with enter
      *(String + Index) = '\n';//
    }
    Index ++; // skip space
  } while (HexIndex < InSize);

  return String;
}
/** 
  function used to clone a new string
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR8 *
Clone_Ascii_String (
  IN CHAR8    *String
  )
{
  CHAR8           *p; 
  if (String == NULL) { //safety check
    return NULL;
  }
  p = (CHAR8 *) AllocateZeroPool (AsciiStrSize (String));
  if (p == NULL) {//safety check
    return NULL;
  }
  CopyMem (p, String, AsciiStrLen (String));

  return p;
}

/** 
  function used to clone a new string without '\r' 'n' and reduce space in head
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR8 *
Clone_Ascii_String_WO_SPACE (
  IN CHAR8    *String
  )
{
  CHAR8           *pString;
  CHAR8           *Temp; 
  UINTN            Size;
  if (String == NULL) { //safety check
    return NULL;
  }
  Size = AsciiStrSize (String);
  pString = (CHAR8 *) AllocateZeroPool (Size);
  if (pString == NULL) {//safety check
    return NULL;
  }
  CopyMem (pString, String, Size);
  Temp = pString;

  //
  // Replace the '\r' & '\n' to space
  //
  while (*Temp != '\0') {
    if ((*Temp == '\r') || (*Temp == '\n')) {
      *Temp = ' ';
    }
    Temp ++;
  }

  //
  // point to none-space header
  //
  Temp = pString;
  while (*Temp != '\0') {
    if (*Temp != 0x20) {
      break;
    }
    Temp ++;
  }

  //
  // Reallocate the memory
  //
  pString = ReallocatePool (Size, AsciiStrSize(pString), Temp);

  return pString;
}

/** 
  function used to clone a new unicode string
  @param String  -- the string used to been cloned

  @retval New Allocate String, NULL is failed 
**/
CHAR16 *
Clone_Unicode_String (
  IN CHAR16    *String
  )
{
  CHAR16           *p; 
  if (String == NULL) { //safety check
    return NULL;
  }
  p = (CHAR16 *) AllocateZeroPool (StrSize (String));
  if (p == NULL) {//safety check
    return NULL;
  }
  CopyMem (p, String, StrSize (String));

  return p;
}

