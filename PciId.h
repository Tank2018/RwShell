#ifndef _DC_PCI_ID_H_
#define _DC_PCI_ID_H_
typedef struct _PciVendorString {
  UINT16 VendorId;
  CHAR8  *pVidName;
} PciVendorString;

typedef struct _PciDeviceString {
  UINT16 VendorId;
  UINT16 DeviceId;
  CHAR8  *pDidName;
}  PciDeviceString;

extern PciVendorString mVendorList[];
extern PciDeviceString mDeviceList[];
#endif