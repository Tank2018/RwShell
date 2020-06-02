#include "LsPci.h"
/**
  Destory Pci vendor id and device id info pointer

  @param pVidDid  -- the info used to free
**/
VOID
Lspci_VidDid_Destory (
  IN  PciVidDid  *pVidDid
  )
{
  if (pVidDid == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }	
  if (pVidDid->pVidName != NULL) {
  	FreePool (pVidDid->pVidName);
  }
  if (pVidDid->pDidName != NULL) {
  	FreePool (pVidDid->pDidName);
  }
  FreePool (pVidDid);
}

/**
  New Pci vendor id and device id info pointer
  
  @param Vid  -- the vendor id
  @param Did  -- the device id

  @retval NULL if failed, others return pci vid.did info
**/
VOID *
Lspci_VidDid_New (
  IN  UINT16  Vid,
  IN  UINT16  Did
  )
{
  UINTN    			index;
  PciVidDid 		*viddid;

  if ((Vid == 0xffff) || (Did == 0xffff) || (Vid == 0) || (Did == 0)) { //safety check
  	return NULL;
  }
  //
  // Allocate a new pci did vid info
  //
  viddid = (PciVidDid *) AllocateZeroPool (sizeof (PciVidDid));
  if (viddid == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // serach the verndor string
  //
  index = 0;
  while (mVendorList[index].VendorId != 0xffff) {
  	if (mVendorList[index].VendorId == Vid) {
  	  break;
  	}
  	index ++;
  }
  if (mVendorList[index].VendorId == 0xffff) {
    viddid->pVidName = (CHAR8 *) Clone_Ascii_String_WO_SPACE ("Unknown Verndor Id");
  } else {
  	viddid->pVidName = (CHAR8 *) Clone_Ascii_String_WO_SPACE (mVendorList[index].pVidName);
  }
  //
  // serach the device string
  //
  index = 0;
  while (mDeviceList[index].VendorId != 0xffff) {
  	if (mDeviceList[index].VendorId != Vid) {
  	  index ++;
  	  continue;
  	}
  	if (mDeviceList[index].DeviceId == Did) {
  	  break;
  	}
  	index ++;
  }
  if (mDeviceList[index].VendorId == 0xffff) {
    viddid->pDidName = (CHAR8 *) Clone_Ascii_String_WO_SPACE ("Unknown Device Id");
  } else {
  	viddid->pDidName = (CHAR8 *) Clone_Ascii_String_WO_SPACE (mDeviceList[index].pDidName);
  } 

  return viddid;
}

/**
  Destory Pci device pointer
  @param pVidDid  -- the info used to free
**/
VOID 
Lspci_PciDevice_Destory (
  IN PciDevice    *pD
  )
{
  if (pD == NULL) { // safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  FreePool (pD);
  return;
}

/**
  New a Pci device instance
  
  @param Handle  -- the pci device handle

  @retval NULL if failed, others return pci device
**/
VOID *
Lspci_PciDevice_New (
  IN EFI_HANDLE    Handle
  )
{
  EFI_PCI_IO_PROTOCOL                   *PciIo;
  EFI_STATUS                            Status;
  PciDevice							                *d;

  //
  // handle the pci io protocol
  //
  Status = gBS->HandleProtocol (
                  Handle,
                  &gEfiPciIoProtocolGuid,
                  (VOID **)&PciIo
                  );
  if (EFI_ERROR (Status)) {
  	LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) handle pci io error\n", __FUNCTION__, __LINE__));
  	return NULL;
  }
  d = (PciDevice *) AllocateZeroPool (sizeof (PciDevice));
  if (d == NULL) { // safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  d->pData = (UINT8 *) AllocateZeroPool (256);
  if (d->pData == NULL) { // safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  Status = PciIo->Pci.Read (
                       PciIo, 
                       EfiPciIoWidthUint8,
                       0 /* Offset */,
                       256, 
                       d->pData 
                       );
  if (EFI_ERROR (Status)) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) handle pci io error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // resign the info Signature
  //
  d->Handle    = Handle;
  d->This      = PciIo;
  d->Signature = PCI_DEVICE_SIGNATURE;
  InitializeListHead (&d->List);
  InitializeListHead (&d->CapList);
  return d;
}

VOID 
Lspci_Add_List (
  IN  PciDevice  *pD,
  IN  PciDevice  *pD1
  )
{
  if ((pD == NULL) || (pD1 == NULL)) { // safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  //
  // Insert the device into list 
  //
  InsertTailList (&pD->List, &pD1->Link);

  return;  
}

VOID 
Lspci_Add_Cap (
  IN  PciDevice     *pD,
  IN  PciCapbility  *pCap
  )
{
  if ((pD == NULL) || (pCap == NULL)) { // safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  //
  // Insert the child list into the parent
  //
  InsertTailList (&pD->CapList, &pCap->Link);

  return;  
}
BOOLEAN 
Lspci_Is_Bridge (
  IN PciDevice  *pD
  )
{
  PCI_DEVICE_INDEPENDENT_REGION  *h = (PCI_DEVICE_INDEPENDENT_REGION  *)pD->pData;
  return !!(h->HeaderType & LS_PCI_HEADER_TYPE_BRIDGE);  
}

UINT32 
Lspci_Get_Bdf (
  IN PciDevice  *pD
  )
{
  UINTN s,b,d,f;
  pD->This->GetLocation (pD->This, &s, &b, &d, &f);
  return LSPCI_BDF_TO_U32 (b, d, f);
}

UINT16
Lspci_Get_VendorId (
  IN PciDevice  *pD
  )
{
  return ((PCI_DEVICE_INDEPENDENT_REGION  *)pD->pData)->VendorId;    
}

UINT16
Lspci_Get_DeviceId (
  IN PciDevice  *pD
  )
{
  return ((PCI_DEVICE_INDEPENDENT_REGION  *)pD->pData)->DeviceId;    
}
VOID 
Lspci_VidDid_Atrribute_New (
  IN PciDevice      *pD,
  IN XML_ELEMENT     *pElement
  )
{
  XML_ATTRIBUTE     *ret;
  PciVidDid        *viddid;
  CHAR8            t[20];
  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  viddid = Lspci_VidDid_New (Lspci_Get_VendorId (pD), Lspci_Get_DeviceId (pD));
  if (viddid == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new VidDid error\n", __FUNCTION__, __LINE__));
    return;    
  }
  //
  // input vendor name 
  //
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "vendor(%04x)", Lspci_Get_VendorId (pD));
  ret =  (XML_ATTRIBUTE *)Xml_Attribute_New (t, viddid->pVidName);
  if (ret == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Element_Add_Attribute (pElement, ret); 

  //
  // input device name 
  //
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "device(%04x)", Lspci_Get_DeviceId (pD));
  ret =  (XML_ATTRIBUTE *)Xml_Attribute_New (t, viddid->pDidName);
  if (ret == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Element_Add_Attribute (pElement, ret); 
}
VOID 
Lspci_Data_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  XML_ELEMENT      *e;
  CHAR8           t[50], p[10];
  XML_ATTRIBUTE    *a;
  UINT8           i,j;

  for (i = 0; i < 16; i++) {
    e =  (XML_ELEMENT *)Xml_Element_New ("data");
    if (e == NULL) { //safety check
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new element failed\n", __FUNCTION__, __LINE__));
      return ;
    }
    ZeroMem (t, 50);
    
    for (j = 0; j < 16; j ++) {
      ZeroMem (p, 10);
      AsciiSPrint (p, 10, "%02x ", pD->pData[(i*16)+j]);
      Ascii_Str_Cat (t, p);
    }
    ZeroMem (p, 10);
    AsciiSPrint (p, 10, "%02x", i);
    a = (XML_ATTRIBUTE *)Xml_Attribute_New (p, t);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new attribute failed\n", __FUNCTION__, __LINE__));
      return ;      
    }
    Xml_Element_Add_Attribute (e, a);
    Xml_Element_Add_Child (pElement, e);
  }
  return ;
}
UINT16
Lspci_Get_Svid (
  IN PciDevice  *pD
  )
{
  return ((PCI_TYPE00  *)pD->pData)->Device.SubsystemVendorID;    
  
}
UINT16
Lspci_Get_Sdid (
  IN PciDevice  *pD
  )
{
  return ((PCI_TYPE00  *)pD->pData)->Device.SubsystemID;    
  
}
VOID
Lspci_SSID_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  XML_ELEMENT      *e;
  XML_ATTRIBUTE    *a;
  CHAR8            t[10];

  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  e =  (XML_ELEMENT *)Xml_Element_New ("ssid"); 
  if (e == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new element failed\n", __FUNCTION__, __LINE__));
    return ;
  } 


  ZeroMem (t, 10);
  AsciiSPrint (t, 10, "%04X", Lspci_Get_Svid (pD));
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("svid", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new svid failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  ZeroMem (t, 10);
  AsciiSPrint (t, 10, "%04X", Lspci_Get_Sdid (pD));
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("sdid", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new svid failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);  

  Xml_Element_Add_Child (pElement, e);

  return;
}
UINT16
Lspci_Get_Cmd (
  IN PciDevice  *pD
  )
{
  return ((PCI_DEVICE_INDEPENDENT_REGION  *)pD->pData)->Command;    
}
VOID
Lspci_Control_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  XML_ELEMENT      *e;
  XML_ATTRIBUTE    *a;
  UINT16           cmd;
  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  e =  (XML_ELEMENT *)Xml_Element_New ("control"); 
  if (e == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new element failed\n", __FUNCTION__, __LINE__));
    return ;
  } 
  cmd = Lspci_Get_Cmd (pD);
  //
  // io
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("IO", FLAG(cmd, LS_PCI_COMMAND_IO));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new io failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  //
  // memory
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("Mem", FLAG(cmd, LS_PCI_COMMAND_MEMORY));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Mem failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // bus master
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("BusMaster", FLAG(cmd, LS_PCI_COMMAND_MASTER));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new BusMaster failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // speccycle
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("SpecCycle", FLAG(cmd, LS_PCI_COMMAND_SPECIAL));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new SpecCycle failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // meminv
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("MemInv", FLAG(cmd, LS_PCI_COMMAND_INVALIDATE));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new meminv failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // VGAsnoop
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("VGASnoop", FLAG(cmd, LS_PCI_COMMAND_VGA_PALETTE));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new VGASnoop failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // ParErr
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("ParErr", FLAG(cmd, LS_PCI_COMMAND_PARITY));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ParErr failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // Stepping
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("Stepping", FLAG(cmd, LS_PCI_COMMAND_WAIT));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Stepping failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // SERR
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("SERR", FLAG(cmd, LS_PCI_COMMAND_SERR));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new SERR failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // FastB2B
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("FastB2B", FLAG(cmd, LS_PCI_COMMAND_FAST_BACK));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new FastB2B failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // FastB2B
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("DisINTx", FLAG(cmd, LS_PCI_COMMAND_DISABLE_INTx));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new DisINTx failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  Xml_Element_Add_Child (pElement, e);
  return ;
}

UINT16
Lspci_Get_Sts (
  IN PciDevice  *pD
  )
{
  return ((PCI_DEVICE_INDEPENDENT_REGION  *)pD->pData)->Status;    
}
VOID
Lspci_Status_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  XML_ELEMENT      *e;
  XML_ATTRIBUTE    *a;
  UINT16           sts;
  CHAR8           *t;
  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  e =  (XML_ELEMENT *)Xml_Element_New ("status"); 
  if (e == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new element failed\n", __FUNCTION__, __LINE__));
    return ;
  } 
  sts = Lspci_Get_Sts (pD);
  //
  // Cap
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("Cap", FLAG(sts, LS_PCI_STATUS_CAP_LIST));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Cap failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  //
  // 66MHz
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("66MHz", FLAG(sts, LS_PCI_STATUS_66MHZ));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new 66MHz failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  //UDF
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("UDF", FLAG(sts, LS_PCI_STATUS_UDF));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new UDF failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // FastB2B
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("FastB2B", FLAG(sts, LS_PCI_STATUS_FAST_BACK));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new FastB2B failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // ParErr
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("ParErr", FLAG(sts, LS_PCI_STATUS_PARITY));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ParErr failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // DEVSEL
  //
  if ((sts & LS_PCI_STATUS_DEVSEL_MASK) == LS_PCI_STATUS_DEVSEL_FAST) {
    t = "fast";
  }
  if ((sts & LS_PCI_STATUS_DEVSEL_MASK) == LS_PCI_STATUS_DEVSEL_MEDIUM) {
    t = "medium";
  }
  if ((sts & LS_PCI_STATUS_DEVSEL_MASK) == LS_PCI_STATUS_DEVSEL_SLOW) {
    t = "slow";
  }
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("DEVSEL", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new DEVSEL failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // STAbort
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("STAbort", FLAG(sts, LS_PCI_STATUS_SIG_TARGET_ABORT));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new STAbort failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // RTAbort
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("RTAbort", FLAG(sts, LS_PCI_STATUS_REC_TARGET_ABORT));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new RTAbort failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // RMAbort
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("RMAbort", FLAG(sts, LS_PCI_STATUS_REC_MASTER_ABORT));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new RMAbort failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // SERR
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("SERR", FLAG(sts, LS_PCI_STATUS_SIG_SYSTEM_ERROR));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new SERR failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // PERR
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("PERR", FLAG(sts, LS_PCI_STATUS_DETECTED_PARITY));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PERR failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // INTx
  //
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("INTx", FLAG(sts, LS_PCI_STATUS_INTx));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new INTx failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  Xml_Element_Add_Child (pElement, e);
  return ;
}

UINT8
Lspci_Get_IntLine (
  IN PciDevice  *pD
  )
{
  return pD->pData[0x3c];    
}
UINT8
Lspci_Get_IntIRQ (
  IN PciDevice  *pD
  )
{
  return pD->pData[0x3d];    
}

VOID
Lspci_Int_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  XML_ELEMENT      *e;
  XML_ATTRIBUTE    *a;
  CHAR8            t[10];

  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  e =  (XML_ELEMENT *)Xml_Element_New ("interrupt"); 
  if (e == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new element failed\n", __FUNCTION__, __LINE__));
    return ;
  } 


  ZeroMem (t, 10);
  AsciiSPrint (t, 10, "%d", Lspci_Get_IntLine (pD));
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("IntLine", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new svid failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  ZeroMem (t, 10);
  AsciiSPrint (t, 10, "%d", Lspci_Get_IntIRQ (pD));
  a = (XML_ATTRIBUTE *)Xml_Attribute_New ("IntIRQ", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new svid failed\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);  

  Xml_Element_Add_Child (pElement, e);

  return;
}
UINT32
Lspci_Get_Bar (
  IN  PciDevice  *pD,
  IN  UINTN      Index
  )
{
  return  *(UINT32 *)(pD->pData + 0x10 + 4 * Index);
}
VOID
Lspci_Region_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  XML_ELEMENT      *e = NULL;
  XML_ATTRIBUTE    *a;
  CHAR8            t[10];
  CHAR8           *t1;
  UINT8           is = 2;
  UINTN           i;
  UINT32          Temp;
  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }

  is = Lspci_Is_Bridge (pD)?2:6;

  for (i = 0; i < is; i ++) {

    Temp = Lspci_Get_Bar (pD, i);
    if ((Temp == 0) || (Temp == 0xffffffff)) {
      continue;
    } 


    if ((Temp & LS_PCI_BASE_ADDRESS_SPACE) == LS_PCI_BASE_ADDRESS_SPACE_IO) {
      if ((Temp & (~0x03)) == 0) {
        continue;
      }

      ZeroMem (t, 10);
      AsciiSPrint (t, 10, "Region %d", i);
      e =  (XML_ELEMENT *)Xml_Element_New (t); 
      if (e == NULL) { //safety check
        LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Region failed\n", __FUNCTION__, __LINE__));
        continue ;
      } 
      ZeroMem (t, 10);
      AsciiSPrint (t, 10, "%x", Temp & (~0x3));
      a = Xml_Attribute_New ("IO Addr", t);
      if (a == NULL) {
        LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new IO port failed\n", __FUNCTION__, __LINE__));
        continue ;
      }
      Xml_Element_Add_Attribute (e, a);  
      Xml_Element_Add_Child (pElement, e);
      continue;
    }
    if ((Temp & (~0x0F)) == 0) {
      continue;
    }

    ZeroMem (t, 10);
    AsciiSPrint (t, 10, "Region %d", i);
    e =  (XML_ELEMENT *)Xml_Element_New (t); 
    if (e == NULL) { //safety check
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Region failed\n", __FUNCTION__, __LINE__));
      continue ;
    } 
    ZeroMem (t, 10);
    AsciiSPrint (t, 10, "%x", Temp & (~0xf));
    a = Xml_Attribute_New ("Memory Addr", t);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Memory Addr failed\n", __FUNCTION__, __LINE__));
      continue ;
    }  
    Xml_Element_Add_Attribute (e, a);

    if ((Temp & LS_PCI_BASE_ADDRESS_MEM_TYPE_MASK) == LS_PCI_BASE_ADDRESS_MEM_TYPE_32) {
      t1 = "32";
    }
    if ((Temp & LS_PCI_BASE_ADDRESS_MEM_TYPE_MASK) == LS_PCI_BASE_ADDRESS_MEM_TYPE_64) {
      t1 = "64";
    }
    a = Xml_Attribute_New ("Bits", t1);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Memory Addr failed\n", __FUNCTION__, __LINE__));
      continue ;
    }  
    Xml_Element_Add_Attribute (e, a);  

    if ((Temp & LS_PCI_BASE_ADDRESS_MEM_TYPE_MASK) == LS_PCI_BASE_ADDRESS_MEM_PREFETCH) {
      t1 = "y";
    } else {
      t1 = "n";
    }
    a = Xml_Attribute_New ("Perfetch", t1);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Perfetch failed\n", __FUNCTION__, __LINE__));
      continue ;
    }  

    Xml_Element_Add_Attribute (e, a);  
    Xml_Element_Add_Child (pElement, e);
  }

    

  return;
}
UINT16 
Lspci_Get_Cap (
  IN  PciDevice  *pD,
  IN  UINT8      CapId
  )
{
  UINT8                                 Pointer;
  EFI_STATUS                            Status;
  EFI_PCI_CAPABILITY_HDR                Hdr;

  Status = pD->This->Pci.Read (
                       pD->This, 
                       EfiPciIoWidthUint8,
                       LS_PCI_CAPBILITY_POINTER_OFFSET /* Offset */,
                       1, 
                       &Pointer
                       );
  if (EFI_ERROR (Status)) {
    return 0;
  }

  do {
    Status = pD->This->Pci.Read (
                       pD->This, 
                       EfiPciIoWidthUint8,
                       Pointer /* Offset */,
                       2, 
                       &Hdr
                       );
    if (EFI_ERROR (Status)) {
      return 0;
    }
    if (Hdr.CapabilityID == CapId) {
      return Pointer;
    }
    Pointer = Hdr.NextItemPtr;
  } while (Hdr.NextItemPtr != 0);
  return 0;
}
VOID
Lspci_Capbility_PM_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  UINT16                  offset;
  EFI_STATUS              Status;
  EFI_PCI_CAPABILITY_PMI  pmCap; 
  CHAR8                   t[20]; 
  XML_ELEMENT              *eE = NULL;      
  XML_ELEMENT              *e = NULL;
  XML_ATTRIBUTE            *a = NULL;
  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  offset = Lspci_Get_Cap (pD, LS_PCI_CAP_ID_PM);
  if (offset == 0) {
    return ;
  }  
  Status = pD->This->Pci.Read (
                       pD->This, 
                       EfiPciIoWidthUint8,
                       offset /* Offset */,
                       sizeof (EFI_PCI_CAPABILITY_PMI), 
                       &pmCap
                       );
  if (EFI_ERROR (Status)) {
    return;
  }
  //
  // new a pm capbility element
  //
  eE = Xml_Element_New ("Capabilities");
  if (eE == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Capabilities error\n", __FUNCTION__, __LINE__));
    return ; 
  }
  //
  // add attribute capbility name
  //
  a = Xml_Attribute_New ("Cap", "Power Management");
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PMEClk error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (eE, a);
  //
  // add attribute capbility id
  //
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%x", pmCap.Hdr.CapabilityID);
  a = Xml_Attribute_New ("CapId", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PMEClk error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (eE, a);
  //
  // add attribute capbility offset
  //
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%x", offset);
  a = Xml_Attribute_New ("Offset", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PMEClk error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (eE, a);


  //
  // add Flags child elment under pm capbility element
  //
  e = Xml_Element_New ("Flags");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new power management error\n", __FUNCTION__, __LINE__));
    return ;    
  }

  //
  // add attribute version
  //
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%x", pmCap.PMC.Bits.Version);
  a = Xml_Attribute_New ("Version", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Version error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add attribute PMEClk
  //
  a = Xml_Attribute_New ("PMEClk", FLAG(pmCap.PMC.Data, LS_PCI_PM_CAP_PME_CLOCK));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PMEClk error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add attribute D1 support
  //
  a = Xml_Attribute_New ("D1", FLAG(pmCap.PMC.Data, LS_PCI_PM_CAP_D1));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new D1 error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add attribute D2 support
  //
  a = Xml_Attribute_New ("D2", FLAG(pmCap.PMC.Data, LS_PCI_PM_CAP_D2));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new D1 error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add attribute PME support
  //
  ZeroMem (t, 20);
  if (FLAGX (pmCap.PMC.Data, LS_PCI_PM_CAP_PME_D0)) {
    Ascii_Str_Cat (t, "D0 ");
  }
  if (FLAGX (pmCap.PMC.Data, LS_PCI_PM_CAP_PME_D1)) {
    Ascii_Str_Cat (t, "D1 ");
  }
  if (FLAGX (pmCap.PMC.Data, LS_PCI_PM_CAP_PME_D2)) {
    Ascii_Str_Cat (t, "D2 ");
  }
  if (FLAGX (pmCap.PMC.Data, LS_PCI_PM_CAP_PME_D3_HOT)) {
    Ascii_Str_Cat (t, "D3hot ");
  }
  if (FLAGX (pmCap.PMC.Data, LS_PCI_PM_CAP_PME_D3_COLD)) {
    Ascii_Str_Cat (t, "D3cold ");
  }
  a = Xml_Attribute_New ("PMESupport", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PMESupport error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add Status child elment under pm capbility element
  //
  Xml_Element_Add_Child (eE, e);
  e = Xml_Element_New ("Status");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new power management error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  //
  // add attribute PME Status
  //
  a = Xml_Attribute_New ("PMEStatus", FLAG(pmCap.PMCSR.Data, LS_PCI_PM_CTRL_PME_STATUS));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PMEStatus error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add attribute PME Enable
  //
  a = Xml_Attribute_New ("PMEEnable", FLAG(pmCap.PMCSR.Data, LS_PCI_PM_CTRL_PME_ENABLE));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PMEEnable error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add attribute current state
  //
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "D%X", pmCap.PMCSR.Data&LS_PCI_PM_CTRL_STATE_MASK);
  a = Xml_Attribute_New ("State", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) State error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  if (Lspci_Is_Bridge (pD)) {
    a = Xml_Attribute_New ("PPB", FLAG(pmCap.PMCSR.Data, LS_PCI_PM_BPCC_ENABLE));
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PPB error\n", __FUNCTION__, __LINE__));
      return ;    
    }
    Xml_Element_Add_Attribute (e, a);
  }
  Xml_Element_Add_Child (eE, e);

  //
  // insert the pm capbility element into root
  //
  Xml_Element_Add_Child (pElement, eE);
}

#if 1
VOID
Lspci_Capbility_PCIE_Element_New (
  IN  PciDevice  *pD,
  IN  XML_ELEMENT *pElement
  )
{
  UINT16                  offset;
  EFI_STATUS              Status;
  PCI_CAPABILITY_PCIEXP   pcieCap; 
  CHAR8                   t[40]; 
  XML_ELEMENT              *eE = NULL;      
  XML_ELEMENT              *e = NULL;
  XML_ATTRIBUTE            *a = NULL;
  BOOLEAN                 needSoltImplement = FALSE;
  CHAR8                   *l0sltan[] = { "64ns", "128ns", "256ns", "512ns", "1us", "2us", "4us", "unlimited" };
  CHAR8                   *l1ltan[] = { "1us", "2us", "4us", "8us", "16us", "32us", "64us", "unlimited" };
  //CHAR8                   *lnkSpeed[] = {"2.5GT/s", "5GT/s", "8GT/s"};
  if ((pD == NULL) || (pElement == NULL)) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return ;
  }
  offset = Lspci_Get_Cap (pD, LS_PCI_CAP_ID_EXP);
  if (offset == 0) {
    return ;
  }  
  Status = pD->This->Pci.Read (
                       pD->This, 
                       EfiPciIoWidthUint8,
                       offset /* Offset */,
                       sizeof (PCI_CAPABILITY_PCIEXP), 
                       &pcieCap
                       );
  if (EFI_ERROR (Status)) {
    return;
  }

  eE = Xml_Element_New ("Capabilities");
  if (eE == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Capabilities error\n", __FUNCTION__, __LINE__));
    return ; 
  }

  a = Xml_Attribute_New ("Cap", "PCIE Express");
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Caperror\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (eE, a);

  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%x", pcieCap.Hdr.CapabilityID);
  a = Xml_Attribute_New ("CapId", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new CapId error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (eE, a);

  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%x", offset);
  a = Xml_Attribute_New ("Offset", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Offset error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (eE, a);


  //
  // Add  child pcie capbility element into pcei capbility element
  //
  e = Xml_Element_New ("Flags");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new flags error\n", __FUNCTION__, __LINE__));
    return ;    
  }

  //
  // add attribute version
  // 
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%x", pcieCap.Capability.Bits.Version);
  a = Xml_Attribute_New ("Version", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new version error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // add attribute port type
  // 
  ZeroMem (t, 20);

  switch (pcieCap.Capability.Bits.DevicePortType) {
    case LS_PCI_EXP_TYPE_ENDPOINT:
      Ascii_Str_Cat (t, "Endpoint");
      break;
    case LS_PCI_EXP_TYPE_LEG_END:
      Ascii_Str_Cat (t, "Legacy Endpoint");
      break;
    case LS_PCI_EXP_TYPE_ROOT_PORT:
      Ascii_Str_Cat (t, "Root Port");
      needSoltImplement = TRUE;
      break;
    case LS_PCI_EXP_TYPE_UPSTREAM:
      Ascii_Str_Cat (t,"Upstream Port");
      break;
    case LS_PCI_EXP_TYPE_DOWNSTREAM:
      Ascii_Str_Cat (t, "Downstream Port");
      needSoltImplement = TRUE;
      break;
    case LS_PCI_EXP_TYPE_PCI_BRIDGE:
      Ascii_Str_Cat (t, "PCI-Express to PCI/PCI-X Bridge");
      break;
    case LS_PCI_EXP_TYPE_PCIE_BRIDGE:
      Ascii_Str_Cat (t, "PCI/PCI-X to PCI-Express Bridge");
      needSoltImplement = TRUE;
      break;
    case LS_PCI_EXP_TYPE_ROOT_INT_EP:
      Ascii_Str_Cat (t,"Root Complex Integrated Endpoint");
      break;
    case LS_PCI_EXP_TYPE_ROOT_EC:
      Ascii_Str_Cat (t, "Root Complex Event Collector");
      break;
    default:
      Ascii_Str_Cat (t, "Unknown type");
      break;
  }
  a = Xml_Attribute_New ("Type", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Type error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // Add attribute slot implmented
  //
  if (needSoltImplement) {
    a = Xml_Attribute_New ("SoltImplement", FLAG (pcieCap.Capability.Uint16, LS_PCI_EXP_FLAGS_SLOT));
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new SoltImplement error\n", __FUNCTION__, __LINE__));
      return ;    
    }
    Xml_Element_Add_Attribute (e, a);
  }

  //
  // Add attribute interrput Message Number
  //
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%x", pcieCap.Capability.Bits.InterruptMessageNumber);
  a = Xml_Attribute_New ("IntMsgNum", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new IntMsgNum error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  Xml_Element_Add_Child (eE, e);

  //
  // Add child DevCap element into into pcei capbility element
  //
  e = Xml_Element_New ("DevCap");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new DevCap error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%d Byte", (pcieCap.DeviceCapability.Bits.MaxPayloadSize+1) * 128);
  a = Xml_Attribute_New ("MaxPayload", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new MaxPayload error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%d", pcieCap.DeviceCapability.Bits.PhantomFunctions);
  a = Xml_Attribute_New ("PhantFunc", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new PhantFunc error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  if ((pcieCap.Capability.Bits.DevicePortType == LS_PCI_EXP_TYPE_ENDPOINT) || 
      (pcieCap.Capability.Bits.DevicePortType == LS_PCI_EXP_TYPE_LEG_END)) {

    a = Xml_Attribute_New ("L0s Latency", l0sltan[pcieCap.DeviceCapability.Bits.EndpointL0sAcceptableLatency]);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new L0s Latency error\n", __FUNCTION__, __LINE__));
      return ;    
    }
    Xml_Element_Add_Attribute (e, a);

    a = Xml_Attribute_New ("L1 Latency", l1ltan[pcieCap.DeviceCapability.Bits.EndpointL1AcceptableLatency]);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new L1 Latency error\n", __FUNCTION__, __LINE__));
      return ;    
    }
    Xml_Element_Add_Attribute (e, a);
    
    a = Xml_Attribute_New ("FRst", FLAG(pcieCap.DeviceCapability.Bits.EndpointL1AcceptableLatency, LS_PCI_EXP_DEVCAP_FLRESET));
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new FRst error\n", __FUNCTION__, __LINE__));
      return ;    
    }
    Xml_Element_Add_Attribute (e, a);
  }
  Xml_Element_Add_Child (eE, e);
  //
  // Add child control element into into pcei capbility element
  //
  e = Xml_Element_New ("DevCtl");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new DevCtl error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  //  Error  Report
  ZeroMem (t, 40);
  if (FLAGX (pcieCap.DeviceControl.Uint16, LS_PCI_EXP_DEVCTL_CERE)) {
    Ascii_Str_Cat (t, "Correctable ");
  }
  if (FLAGX (pcieCap.DeviceControl.Uint16, LS_PCI_EXP_DEVCTL_NFERE)) {
    Ascii_Str_Cat (t, "NonFatal ");
  }
  if (FLAGX (pcieCap.DeviceControl.Uint16, LS_PCI_EXP_DEVCTL_FERE)) {
    Ascii_Str_Cat (t, "Fatal ");
  }
  if (FLAGX (pcieCap.DeviceControl.Uint16, LS_PCI_EXP_DEVCTL_URRE)) {
    Ascii_Str_Cat (t, "UnsuppReq ");
  }

  a = Xml_Attribute_New ("ERRSupport", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ERRSupport error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  //Releax ordering
  a = Xml_Attribute_New ("RlxdOrd", FLAG (pcieCap.DeviceControl.Uint16, LS_PCI_EXP_DEVCTL_RELAXED));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new RlxdOrd error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  //max payload
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%d Byte", (pcieCap.DeviceControl.Bits.MaxPayloadSize+1) * 128);
  a = Xml_Attribute_New ("MaxPayload", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new MaxPayload error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  //max read size
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%d Byte", (pcieCap.DeviceControl.Bits.MaxReadRequestSize+1) * 128);
  a = Xml_Attribute_New ("MaxReadReq", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new MaxReadReq error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  Xml_Element_Add_Child (eE, e);

  //
  // Add child status element into into pcei capbility element
  //
  e = Xml_Element_New ("DevSts");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new DevSts error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  //  Error  Report
  ZeroMem (t, 40);
  if (FLAGX (pcieCap.DeviceStatus.Uint16, LS_PCI_EXP_DEVSTA_CED)) {
    Ascii_Str_Cat (t, "Correctable ");
  }
  if (FLAGX (pcieCap.DeviceStatus.Uint16, LS_PCI_EXP_DEVSTA_NFED)) {
    Ascii_Str_Cat (t, "NonFatal ");
  }
  if (FLAGX (pcieCap.DeviceStatus.Uint16, LS_PCI_EXP_DEVSTA_FED)) {
    Ascii_Str_Cat (t, "Fatal ");
  }
  if (FLAGX (pcieCap.DeviceStatus.Uint16, LS_PCI_EXP_DEVSTA_URD)) {
    Ascii_Str_Cat (t, "UnsuppReq ");
  }

  a = Xml_Attribute_New ("ERRStatus", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ERRStatus error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // Add child link capbility element into into pcei capbility element
  //
  e = Xml_Element_New ("LnkCap");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new LnkCap error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  //Port Number
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%d", pcieCap.LinkCapability.Bits.PortNumber);
  a = Xml_Attribute_New ("Port", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Surprise error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);  
  // Max Link Speed
  ZeroMem (t, 20);
  switch (pcieCap.LinkCapability.Bits.MaxLinkSpeed) {
    case 1:
      Ascii_Str_Cat (t, "2.5GT/s");
      break;
    case 2:
      Ascii_Str_Cat (t, "5GT/s");
      break;
    case 3:
      Ascii_Str_Cat (t, "8GT/s");
      break;
    case 4:
      Ascii_Str_Cat (t, "16GT/s");
      break;
    default:
      Ascii_Str_Cat (t, "unknown");
      break;
  }
  a = Xml_Attribute_New ("MaxLnkSpeed", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new MaxLnkSpeed error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  // Max Link Width
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "x%d", pcieCap.LinkCapability.Bits.MaxLinkWidth);
  a = Xml_Attribute_New ("MaxLnkWidth", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new MaxLnkWidth error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  //ASPM support
  ZeroMem (t, 20);
  switch (pcieCap.LinkCapability.Bits.Aspm) {
    case 0:
      Ascii_Str_Cat (t, "not supported");
      break;
    case 1:
      Ascii_Str_Cat (t, "L0s");
      break;
    case 2:
      Ascii_Str_Cat (t, "L1");
      break;
    case 3:
      Ascii_Str_Cat (t, "L0s L1");
      break;
    default:
      Ascii_Str_Cat (t,"unknown");
      break;
  }
  a = Xml_Attribute_New ("ASPMSupp", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ASPMSupp error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  if (pcieCap.LinkCapability.Bits.Aspm) {
    a = Xml_Attribute_New ("L0sLatencyExt", l0sltan[pcieCap.LinkCapability.Bits.L0sExitLatency]);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new L0sLatencyExterror\n", __FUNCTION__, __LINE__));
      return ;    
    }
    Xml_Element_Add_Attribute (e, a);

    a = Xml_Attribute_New ("L1LatencyExt", l1ltan[pcieCap.LinkCapability.Bits.L1ExitLatency]);
    if (a == NULL) {
      LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new L1LatencyExterror\n", __FUNCTION__, __LINE__));
      return ;    
    }
    Xml_Element_Add_Attribute (e, a);
  }

  // clock power manager
  a = Xml_Attribute_New ("ClockPM", FLAG(pcieCap.LinkCapability.Uint32, LS_PCI_EXP_LNKCAP_CLOCKPM));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new tClockPM error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);  
  Xml_Element_Add_Child (eE, e);
  //
  // Add child link control element into into pcei capbility element
  //
  e = Xml_Element_New ("LnkCtl");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new LnkCtl error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  //ASPM enable
  ZeroMem (t, 20);
  switch (pcieCap.LinkControl.Bits.AspmControl) {
    case 0:
      Ascii_Str_Cat (t, "disabled");
      break;
    case 1:
      Ascii_Str_Cat (t, "L0s");
      break;
    case 2:
      Ascii_Str_Cat (t, "L1");
      break;
    case 3:
      Ascii_Str_Cat (t, "L0s L1");
      break;
    default:
      Ascii_Str_Cat (t,"unknown");
      break;
  }
  a = Xml_Attribute_New ("ASPM", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ASPM error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a); 
  // link disable
  a = Xml_Attribute_New ("LnkDis", FLAG(pcieCap.LinkControl.Uint16, LS_PCI_EXP_LNKCTL_DISABLE));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ASPM error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a); 
  // Retry Link disable
  a = Xml_Attribute_New ("RtyLnk", FLAG(pcieCap.LinkControl.Uint16, LS_PCI_EXP_LNKCTL_RETRAIN));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new ASPM error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a); 
  Xml_Element_Add_Child (eE, e);
  //
  // Add child link status element into into pcei capbility element
  //
  e = Xml_Element_New ("LnkSts");
  if (e == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new LnkCtl error\n", __FUNCTION__, __LINE__));
    return ;    
  }  
  // current link speed
  ZeroMem (t, 20);
  switch (pcieCap.LinkStatus.Bits.CurrentLinkSpeed) {
    case 1:
      Ascii_Str_Cat (t, "2.5GT/s");
      break;
    case 2:
      Ascii_Str_Cat (t, "5GT/s");
      break;
    case 3:
      Ascii_Str_Cat (t, "8GT/s");
      break;
    case 4:
      Ascii_Str_Cat (t, "16GT/s");
      break;
    default:
      Ascii_Str_Cat (t, "unknown");
      break;
  }
  a = Xml_Attribute_New ("CurLnkSpeed", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new CurLnkSpeed error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  // current Link Width
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "x%d", pcieCap.LinkStatus.Bits.NegotiatedLinkWidth);
  a = Xml_Attribute_New ("CurLnkWidth", t);
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new MaxLnkWidth error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);

  // Link training
  a = Xml_Attribute_New ("LnkTrain", FLAG(pcieCap.LinkStatus.Uint16,LS_PCI_EXP_LNKSTA_TRAIN));
  if (a == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new MaxLnkWidth error\n", __FUNCTION__, __LINE__));
    return ;    
  }
  Xml_Element_Add_Attribute (e, a);
  Xml_Element_Add_Child (eE, e);

  Xml_Element_Add_Child (pElement, eE);
}
#endif

VOID *
Lspci_PciDevice_Element_New (
  IN  PciDevice  *pD
  )
{
  XML_ELEMENT      *ret;

  CHAR8           t[20];
  UINT32          bdf;
  if (pD == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // input bdf
  // 
  ZeroMem (t, 20);
  bdf = Lspci_Get_Bdf (pD);
  if (Lspci_Is_Bridge (pD)) {
    AsciiSPrint (t, 20, "Bridge(%02x:%02x:%02x)", LSPCI_U32_B (bdf), LSPCI_U32_D (bdf), LSPCI_U32_F (bdf));   
  } else {
    AsciiSPrint (t, 20, "Device(%02x:%02x:%02x)", LSPCI_U32_B (bdf), LSPCI_U32_D (bdf), LSPCI_U32_F (bdf));
  }
  ret = Xml_Element_New (t); 
  if (ret == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  //
  // Add Vendor and device id attribute string
  //
  Lspci_VidDid_Atrribute_New (pD, ret);

  //
  // Add data child elemnt
  //
  Lspci_Data_Element_New (pD, ret);
  if (ret == NULL) {
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
  }
  //
  // add the ssid information
  //
  if (!Lspci_Is_Bridge (pD)) {
    Lspci_SSID_Element_New (pD, ret);
  }
  //
  // add control information
  //
  Lspci_Control_Element_New (pD, ret);

  //
  // add satus information
  //
  Lspci_Status_Element_New (pD, ret);

  //
  // add interrupt information
  //
  Lspci_Int_Element_New (pD, ret);

  //
  // add region information
  //
  Lspci_Region_Element_New (pD, ret);

  //
  // add power capbility
  //
  Lspci_Capbility_PM_Element_New (pD, ret);

  //
  // add link capbility
  //
  Lspci_Capbility_PCIE_Element_New (pD, ret);
  return ret;
}
VOID * 
Lspci_PciDevice_Build (
  VOID
  )
{
  EFI_STATUS                            Status;
  EFI_HANDLE                            *hArray;
  UINTN                                 hArrayCount;
  UINTN                                 Index;
  PciDevice                             *d = NULL;
  PciDevice                             *p = NULL;
  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gEfiPciIoProtocolGuid,
                  NULL,
                  &hArrayCount,
                  &hArray
                  );
  if (EFI_ERROR (Status)) return NULL;
  for (Index = 0; Index < hArrayCount; Index ++) {
    d = Lspci_PciDevice_New (hArray[Index]);
    if (p == NULL) { // safety check
      p = d;
    }
    Lspci_Add_List (p, d);
  }
  return p;  
}

VOID
Lspci_Xml_Write (
  IN XML_ELEMENT *pElement
  )
{
  XML_ELEMENT                            *eE;
  XML_ELEMENT                            *e;
  XML_ATTRIBUTE                          *a;
  LIST_ENTRY                            *Link;
  PciDevice                             *d = NULL;
  PciDevice                             *dD = NULL;

  if (pElement == NULL) { //safety check
    LSPCI_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }


  dD = Lspci_PciDevice_Build ();
  if (dD == NULL) {
    return;
  }
  eE = Xml_Element_New ("PciDump");
  if (eE == NULL) {
    return;
  }
  a = Xml_Attribute_New ("version", "v0.1");
  if (a == NULL) {
    return;
  }
  Xml_Element_Add_Attribute (eE, a);

  Link  = GetFirstNode (&dD->List);
  while (!IsNull (&dD->List, Link)) {
    d = PCI_DEVICE_FROM_LINK (Link);
    Link = GetNextNode (&dD->List, Link);
    e = Lspci_PciDevice_Element_New (d);

    Xml_Element_Add_Child (eE, e);
  }
  Xml_Element_Add_Child (pElement, eE);
}