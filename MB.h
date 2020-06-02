#ifndef _DC_MB_H_
#define _DC_MB_H_
#include <Library/IoLib.h>
#include <Library/PcdLib.h>
#include <Library/BaseLib.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/PrintLib.h>
#include <Library/FileHandleLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Protocol/Smbios.h>
#include <IndustryStandard/Smbios.h>
#include <IndustryStandard/Scsi.h>
#include <Library/DevicePathLib.h>
#include <Protocol/DiskInfo.h>
#include <Protocol/IdeControllerInit.h>
#include <Protocol/DriverBinding.h>
#include <Protocol/ComponentName2.h>
#include "Xml.h"
#include "Debug.h"
#include "String.h"
#define MB_DEBUG(x) Debug_Msg x
#define ATA_IDENTIFY_DATA_MODE_LEN       40
#define ATA_IDENTIFY_DATA_SER_LEN        20
#define VENDOR_IDENTIFICATION_OFFSET     3
#define VENDOR_IDENTIFICATION_LENGTH     8
#define PRODUCT_IDENTIFICATION_OFFSET    11
#define PRODUCT_IDENTIFICATION_LENGTH    16

VOID
MB_Xml_Write (
  IN XML_ELEMENT *pElement
  );
#endif