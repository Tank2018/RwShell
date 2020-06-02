#include "MB.h"
/**
    return string ptr by the smbios string num
    @param SmBiosPtr            - input pointer of Smbios
    @param StringNum            - input StringNum of Smbios
    @retval CHAR8 *             - matched string of the string number, NULL failed
**/
CHAR8 *
MB_Get_String_By_Num (
  IN VOID   *SmBiosPtr,
  IN UINT8  StringNum
  ) 
{
  EFI_SMBIOS_TABLE_HEADER   *SmbiosTableHeader;
  CHAR8                     *StringPtr;
  CHAR8                     *String;
  UINTN                     StrSize;
  
  SmbiosTableHeader = (EFI_SMBIOS_TABLE_HEADER *) SmBiosPtr;
  if (SmBiosPtr == NULL) {
    return NULL;
  }
  StringPtr = (CHAR8 *)((UINTN)SmBiosPtr + SmbiosTableHeader->Length);
  while (--StringNum) {
    while (*StringPtr != 0) {
      StringPtr++;
    }
    StringPtr++;
  }

  StrSize = AsciiStrSize (StringPtr);
  String = AllocateZeroPool (StrSize);
  if (String == NULL) {
    return NULL;
  }

  CopyMem (String, StringPtr, StrSize);
  return String;
}
/**
    return Smbios table Ptr by the smbios type
    @param Type                     - input Type of Smbios
    @param This                     - input pointer of EFI_SMBIOS_PROTOCOL
    @param SmbiosTableHeader        - out ptr of the Smbios
    @retval EFI_SUCCESS             - success to found smbios, others failed
**/
EFI_STATUS 
EFIAPI
MB_Get_Smbios_By_Type (
  IN  EFI_SMBIOS_PROTOCOL             *This,
  IN  UINT8                           Type,
  IN  OUT UINTN                       **SmbiosTableHeader,
  IN  OUT UINTN                       *MatchedCount
  )
{
  EFI_STATUS                Status;
  EFI_SMBIOS_HANDLE         SmbiosHandle;
  EFI_SMBIOS_TABLE_HEADER   *Record;
  UINTN                     Count;
  UINTN                     *SmBiosAddr;
  UINTN                     Index;
  
  SmbiosHandle = SMBIOS_HANDLE_PI_RESERVED;
  Record       = NULL;
  Status       = EFI_NOT_FOUND;
  Count        = 0;
  
  do {
    Status = This->GetNext (This, &SmbiosHandle, NULL, &Record, NULL);
    if (EFI_ERROR (Status)) {
      break;
    }

    if (SmbiosHandle == SMBIOS_HANDLE_PI_RESERVED) {
      break;
    }
    //
    // found matched type count;
    //
    if (Record->Type == Type) {
      Count ++;
    }
  } while (!EFI_ERROR (Status));
    
  if (!Count) {
    return EFI_NOT_FOUND;
  } 

  SmBiosAddr = (UINTN *) AllocateZeroPool (sizeof (UINTN) * Count);
  if (SmBiosAddr == NULL) {
    return EFI_NOT_FOUND;
  }
  
  SmbiosHandle = SMBIOS_HANDLE_PI_RESERVED;
  Index = 0;
  do {
    Status = This->GetNext (This, &SmbiosHandle, NULL, &Record, NULL);
    if (EFI_ERROR (Status)) {
      break;
    }
    if (SmbiosHandle == SMBIOS_HANDLE_PI_RESERVED) {
      break;
    }
    //
    // Matched smbios type, than break;
    //
    if (Record->Type == Type) {
      SmBiosAddr[Index] = (UINTN) Record;
      Index ++;
    }
  } while (!EFI_ERROR (Status));

  *SmbiosTableHeader = SmBiosAddr;
  *MatchedCount      = Count;
  return EFI_SUCCESS;
}

CHAR8 *
MB_Get_Bios_Date (
  IN EFI_SMBIOS_PROTOCOL             *This
  )
{
  EFI_STATUS            Status;
  UINTN                 *Addr;
  UINTN                 Count;
  CHAR8                 *t;
  SMBIOS_TABLE_TYPE0    *Type0;

  //
  // Get Smbios type0 
  //
  Status = MB_Get_Smbios_By_Type (
             This, 
             SMBIOS_TYPE_BIOS_INFORMATION, 
             &Addr, 
             &Count
             );
  if (EFI_ERROR (Status)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) load smbios type 0 failed\n", __FUNCTION__, __LINE__));
    return NULL;    
  }

  //
  // Update SMBIOS type0 bios version info into mainboard sw info
  //
  Type0 = (SMBIOS_TABLE_TYPE0 *)(UINTN) Addr[0];
  t = MB_Get_String_By_Num ((VOID *)Type0, Type0->BiosReleaseDate); 
  if (t == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found bios version string\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  return t;
}

CHAR8 *
MB_Get_Bios_Version (
  IN EFI_SMBIOS_PROTOCOL             *This
  )
{
  EFI_STATUS            Status;
  UINTN                 *Addr;
  UINTN                 Count;
  CHAR8                 *t;
  SMBIOS_TABLE_TYPE0    *Type0;

  //
  // Get Smbios type0 
  //
  Status = MB_Get_Smbios_By_Type (
             This, 
             SMBIOS_TYPE_BIOS_INFORMATION, 
             &Addr, 
             &Count
             );
  if (EFI_ERROR (Status)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) load smbios type 0 failed\n", __FUNCTION__, __LINE__));
    return NULL;    
  }

  //
  // Update SMBIOS type0 bios version info into mainboard sw info
  //
  Type0 = (SMBIOS_TABLE_TYPE0 *)(UINTN) Addr[0];
  t = MB_Get_String_By_Num ((VOID *)Type0, Type0->BiosVersion); 
  if (t == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found bios version string\n", __FUNCTION__, __LINE__));
    return NULL;
  }
  if (Addr != NULL) {
    FreePool (Addr);
  }
  return t;
}


VOID
MB_FW_BIOS_Element_New (
  IN EFI_SMBIOS_PROTOCOL                   *This,
  IN XML_ELEMENT                            *pE
  )
{
  XML_ELEMENT                            *e;
  XML_ATTRIBUTE                          *a;
  
  CHAR8                                 *t;
  if ((pE == NULL) || (This == NULL)) { //safety check
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  e = Xml_Element_New ("BIOS");
  if (e == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;    
  }

  //
  // Get BIOS version
  //
  t = MB_Get_Bios_Version (This);
  if (t == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;        
  }
 
  a = Xml_Attribute_New ("Version", t);
  if (a == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new version error\n", __FUNCTION__, __LINE__));
    return;    
  }
  Xml_Element_Add_Attribute (e, a);
  FreePool (t);

  //
  // Get BIOS Build Date
  //
  t = MB_Get_Bios_Date (This);
  if (t == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;        
  }
  a = Xml_Attribute_New ("date", t);
  if (a == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new date error\n", __FUNCTION__, __LINE__));
    return;    
  }
  Xml_Element_Add_Attribute (e, a);
  FreePool (t);
 
  Xml_Element_Add_Child (pE, e);
  return;
}

VOID
MB_FW_EC_Element_New (
  IN EFI_SMBIOS_PROTOCOL                   *This,
  IN XML_ELEMENT                            *pE
  )
{
  XML_ELEMENT                            *e;
  XML_ATTRIBUTE                          *a;
  EFI_STATUS                            Status;
  UINTN                                 *Addr;
  UINTN                                 Count;
  CHAR8                                 t[20];
  SMBIOS_TABLE_TYPE0                    *Type0;  
  if ((pE == NULL) || (This == NULL)) { //safety check
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  e = Xml_Element_New ("EC");
  if (e == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;    
  }

  //
  // Get EC version
  //
  Status = MB_Get_Smbios_By_Type (
             This, 
             SMBIOS_TYPE_BIOS_INFORMATION, 
             &Addr, 
             &Count
             );
  if (EFI_ERROR (Status)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) load smbios type 0 failed\n", __FUNCTION__, __LINE__));
    return;    
  }
  Type0 = (SMBIOS_TABLE_TYPE0 *)(UINTN) Addr[0];
  ZeroMem (t, 20);
  AsciiSPrint (t, 20, "%02x.%02x", Type0->EmbeddedControllerFirmwareMajorRelease, Type0->EmbeddedControllerFirmwareMinorRelease);
  a = Xml_Attribute_New ("Version", t);
  if (a == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new version error\n", __FUNCTION__, __LINE__));
    return;    
  }
  Xml_Element_Add_Attribute (e, a);
  Xml_Element_Add_Child (pE, e);
  return;
}
VOID
MB_CPU_Element_New (
  IN EFI_SMBIOS_PROTOCOL                   *This,
  IN XML_ELEMENT                            *pE
  )
{
  XML_ELEMENT                            *e;
  XML_ATTRIBUTE                          *a;
  EFI_STATUS                            Status;
  UINTN                                 *Addr;
  UINTN                                 Count;
  SMBIOS_TABLE_TYPE4                    *Type4;
  CHAR8                                 *t;
  //
  // Get Type4 bios information
  //
  Status = MB_Get_Smbios_By_Type (
             This, 
             SMBIOS_TYPE_PROCESSOR_INFORMATION, 
             &Addr, 
             &Count
             );
  if (EFI_ERROR (Status)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR,  "%a(%d): Can't load TYPE4\n", __FUNCTION__, __LINE__));
    return;
  }
  e = Xml_Element_New ("CPU");
  if (e == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;    
  }
  //
  // Get cpu name
  //
  Type4 = (SMBIOS_TABLE_TYPE4 *)(UINTN) Addr[0];
  t = MB_Get_String_By_Num ((VOID *)Type4, Type4->ProcessorVersion); 
  if (t == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found Processor Version\n", __FUNCTION__, __LINE__));
    return;
  }  

  a = Xml_Attribute_New ("name", t);
  if (a == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new version error\n", __FUNCTION__, __LINE__));
    return;    
  }
  Xml_Element_Add_Attribute (e, a);
  Xml_Element_Add_Child (pE, e);
  return;
}

VOID
MB_MEM_Element_New (
  IN EFI_SMBIOS_PROTOCOL                   *This,
  IN XML_ELEMENT                            *pE
  )
{
  XML_ELEMENT                            *e;
  XML_ELEMENT                            *eE;
  XML_ATTRIBUTE                          *a;
  EFI_STATUS                            Status;
  UINTN                                 *Addr;
  UINTN                                 Count;
  SMBIOS_TABLE_TYPE17                   *Type17;
  CHAR8                                 *t;
  CHAR8                                 t1[20];
  UINT8                                 Index;
  //
  // Get Type17 bios information
  //
  Status = MB_Get_Smbios_By_Type (
             This, 
             SMBIOS_TYPE_MEMORY_DEVICE, 
             &Addr, 
             &Count
             );
  if (EFI_ERROR (Status)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't load TYPE4\n", __FUNCTION__, __LINE__));
    return;
  }
  eE = Xml_Element_New ("Memory");
  if (eE == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;    
  }
  //MB_DEBUG ((DEBUG_LEVEL_ERROR, "%x", Count));
  for (Index = 0; Index < Count; Index ++) {
    e = NULL;
    e = Xml_Element_New ("Mem");
    if (e == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
      return;    
    }
    Type17 = (SMBIOS_TABLE_TYPE17 *)(UINTN) Addr[Index];
    //
    // Get bank locater
    //
    t = MB_Get_String_By_Num ((VOID *)Type17, Type17->BankLocator); 
    if (t == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found Processor Version\n", __FUNCTION__, __LINE__));
      return;
    }  
    a = NULL;
    a = Xml_Attribute_New ("BankLocator", t);
    if (a == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new BankLocator error\n", __FUNCTION__, __LINE__));
      return;    
    }
    FreePool (t);
    Xml_Element_Add_Attribute (e, a);

    //
    // Get Manufacturer
    //
    t = MB_Get_String_By_Num ((VOID *)Type17, Type17->Manufacturer); 
    //    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a\n", t));
    if (t == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found Processor Version\n", __FUNCTION__, __LINE__));
      continue;
    }  
    a = NULL;
    a = Xml_Attribute_New ("Manufacturer", t);
    if (a == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new Manufacturer error\n", __FUNCTION__, __LINE__));
      return;    
    }
    FreePool (t);
    Xml_Element_Add_Attribute (e, a);

    //
    // Get Part Number
    //
    t = MB_Get_String_By_Num ((VOID *)Type17, Type17->PartNumber); 
    if (t == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found Processor Version\n", __FUNCTION__, __LINE__));
      continue;
    }  
    a = Xml_Attribute_New ("PartNum", t);
    if (a == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new version error\n", __FUNCTION__, __LINE__));
      return;    
    }
    FreePool (t);
    Xml_Element_Add_Attribute (e, a);

    //
    // Get Size
    //
    ZeroMem (t1, 20);
    AsciiSPrint (t1, 20, "%d MB", Type17->Size);
    a = Xml_Attribute_New ("Size", t1);
    if (a == NULL) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) new version error\n", __FUNCTION__, __LINE__));
      return;    
    }

    Xml_Element_Add_Attribute (e, a);
    Xml_Element_Add_Child (eE, e);
  }
  Xml_Element_Add_Child (pE, eE);
  return;
}

/**

  Get the description of the stroage
  @param Data                   - in Data of the swap string
  @param Size                   - size of the string
  @retval EFI_SUCCESS           - success, others failed

**/

CHAR8 *
MB_Get_Driver_Name(
  IN  EFI_HANDLE         DeviceHandle,
  IN  EFI_HANDLE         PciHandle
  )
{
  EFI_HANDLE                    *BindingDriverHandles;
  UINTN                         BindingDriverNums;
  UINTN                         Index;
  EFI_DRIVER_BINDING_PROTOCOL   *DriverBindingProtocol;
  EFI_COMPONENT_NAME2_PROTOCOL  *ComponentName2Protocol;
  EFI_COMPONENT_NAME_PROTOCOL   *ComponentNameProtocol;
  EFI_STATUS                    Status;
  CHAR8                         *LanguageVariable;
  CHAR8                         *BestLanguage;
  CHAR16                        *DriverName;
  CHAR8                         *DeviceName;

  DeviceName = NULL;
  DriverName = NULL;

  //
  //  Locate all Binding driver 
  //
  Status = gBS->LocateHandleBuffer(
                  ByProtocol,
                  &gEfiDriverBindingProtocolGuid,
                  NULL,
                  &BindingDriverNums,
                  &BindingDriverHandles
                  );
  if (EFI_ERROR (Status)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found %g installed\n", __FUNCTION__, __LINE__, &gEfiDriverBindingProtocolGuid));
    return NULL;
  }

  //
  // Dispatch to found Component Device Name
  //
  for (Index = 0; Index < BindingDriverNums; ++Index) {
    Status = gBS->HandleProtocol (
                    BindingDriverHandles[Index],
                    &gEfiDriverBindingProtocolGuid,
                    (VOID **)&DriverBindingProtocol
                    );
    if (!EFI_ERROR (Status)) {
      //
      // Check if this driver is runed
      //
      Status = DriverBindingProtocol->Supported (
                                        DriverBindingProtocol,
                                        PciHandle,
                                        NULL
                                        );
      if(!EFI_ERROR(Status) || Status == EFI_ALREADY_STARTED) {
        //
        // Found the componet Name 2 protocol
        //
        Status = gBS->HandleProtocol(
                        BindingDriverHandles[Index],
                        &gEfiComponentName2ProtocolGuid,
                        (VOID **)&ComponentName2Protocol
                        );
        if(!EFI_ERROR(Status)) {
          GetVariable2 (FALSE ? L"Lang" : L"PlatformLang", &gEfiGlobalVariableGuid, (VOID**)&LanguageVariable, NULL);
          BestLanguage = GetBestLanguage(
                           ComponentName2Protocol->SupportedLanguages,
                           FALSE,
                           "en",
                           (LanguageVariable != NULL) ? LanguageVariable : "",
                           ComponentName2Protocol->SupportedLanguages,
                           NULL
                           );
          if (LanguageVariable != NULL) {
            FreePool (LanguageVariable);
          }

          Status = ComponentName2Protocol->GetControllerName (
                                              ComponentName2Protocol,
                                              PciHandle,
                                              DeviceHandle,
                                              BestLanguage,
                                              &DriverName
                                              );
          if (Status == EFI_UNSUPPORTED) {
            Status = ComponentName2Protocol->GetControllerName (
                                            ComponentName2Protocol,
                                            DeviceHandle,
                                            NULL,
                                            BestLanguage,
                                            &DriverName
                                            );
          }
          //MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): %s\n", __FUNCTION__, __LINE__, DriverName));
          if(BestLanguage != NULL) {
            FreePool (BestLanguage);
          }
          if(!EFI_ERROR(Status)) {
            break;
          }
        } else {
          //
          // Found the componet Name  protocol
          //
          Status = gBS->HandleProtocol (
                        BindingDriverHandles[Index],
                        &gEfiComponentNameProtocolGuid,
                        (VOID **)&ComponentNameProtocol
                        );
          if (!EFI_ERROR (Status)) {
            GetVariable2 (FALSE ? L"Lang" : L"PlatformLang", &gEfiGlobalVariableGuid, (VOID**)&LanguageVariable, NULL);

            BestLanguage = GetBestLanguage (
                             ComponentNameProtocol->SupportedLanguages,
                             FALSE,
                             "eng",
                             (LanguageVariable != NULL) ? LanguageVariable : "",
                             ComponentNameProtocol->SupportedLanguages,
                             NULL
                             );
            if (LanguageVariable != NULL) {
              FreePool (LanguageVariable);
            }

            Status = ComponentNameProtocol->GetControllerName(
                                                ComponentNameProtocol,
                                                PciHandle,
                                                DeviceHandle,
                                                BestLanguage,
                                                &DriverName
                                                );
            if(Status == EFI_UNSUPPORTED) {
              Status = ComponentNameProtocol->GetControllerName(
                                              ComponentNameProtocol,
                                              DeviceHandle,
                                              NULL,
                                              BestLanguage,
                                              &DriverName
                                              );
            }
            if(BestLanguage != NULL) {
              FreePool (BestLanguage);
            }
          }
        }
      }
    }
  }
  if (DriverName == NULL) {
    return NULL;
  }
  //
  // Unicode to ascii
  //
  DeviceName = (CHAR8 *)AllocateZeroPool (StrSize (DriverName)/2 + 1);
  Unicode_To_Ascii (DriverName, DeviceName);
  if(BindingDriverHandles != NULL) {
    FreePool (BindingDriverHandles);
  }
  return DeviceName;
}


/**

  New the storage element
  @param String                   - out ptr of the update string
  @retval EFI_SUCCESS             - success, others failed

**/

VOID
MB_Storage_Element_New (
  IN XML_ELEMENT                            *pE
) 
{
  EFI_STATUS                    Status;
  UINTN                         NumHandles;
  EFI_HANDLE                    *Handles;
  EFI_DISK_INFO_PROTOCOL        *DiskInfo;
  //UINTN                         StorageCount;
  UINT32                        BufferSize;
  EFI_SCSI_INQUIRY_DATA         InquiryData;
  EFI_ATAPI_IDENTIFY_DATA       IdentifyData;
  CHAR8                         *Description;
 //UINT8                         *Temp;
  //UINTN                         TempSize;
  EFI_DEVICE_PATH_PROTOCOL      *PtrPciDevicePath;
  EFI_HANDLE                    PciHandle;
  CHAR8                         *ControllerName;
  UINTN                         StorageIndex;
  //UINTN                         StorageStringSize;
  //UINT8                         *StorageStr;
  XML_ATTRIBUTE                  *a = NULL;
  XML_ELEMENT                    *eE = NULL;
  XML_ELEMENT                    *e = NULL;
  //
  // Get every Block IO protocol instance installed in the system
  //
  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gEfiDiskInfoProtocolGuid,
                  NULL,
                  &NumHandles,
                  &Handles
                  );
  if (EFI_ERROR (Status) || (NumHandles == 0)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't found %g install\n", __FUNCTION__, __LINE__, &gEfiDiskInfoProtocolGuid));
    return;
  }
  eE = Xml_Element_New ("Storage");
  if (eE == NULL) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): safety check error\n", __FUNCTION__, __LINE__));
    return;
  }

  //
  // Dispatch disk info
  //
  for (StorageIndex = 0; StorageIndex < NumHandles; StorageIndex ++) {
    e = NULL;
    Status = gBS->HandleProtocol (
                    Handles[StorageIndex],
                    &gEfiDiskInfoProtocolGuid,
                    (VOID **) &DiskInfo
                    );
    if (EFI_ERROR (Status)) {
      MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't load %g \n", __FUNCTION__, __LINE__, &gEfiDiskInfoProtocolGuid));
      return;
    }

    //
    // if ahci & ide interface, we assume it as sata deivce
    //
    if (CompareGuid (&DiskInfo->Interface, &gEfiDiskInfoAhciInterfaceGuid) || \
       CompareGuid (&DiskInfo->Interface, &gEfiDiskInfoIdeInterfaceGuid)) {
      BufferSize   = sizeof (EFI_ATA_IDENTIFY_DATA);
      ZeroMem  (&IdentifyData, BufferSize);
      Status = DiskInfo->Identify (
                         DiskInfo,
                         &IdentifyData,
                         &BufferSize
                         );
      if (EFI_ERROR (Status)) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't get sata identify data\n", __FUNCTION__, __LINE__));
        continue;
      }

      e = Xml_Element_New ("SATA");
      if (e == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): safety check error\n", __FUNCTION__, __LINE__));
        return;
      }
      //
      // Use sata mode name and serial number as description string
      //
      Description = AllocateZeroPool (ATA_IDENTIFY_DATA_MODE_LEN + ATA_IDENTIFY_DATA_SER_LEN + 2);
      if (Description == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): safety check error\n", __FUNCTION__, __LINE__));
        return;
      }
      CopyMem (Description, IdentifyData.ModelName, ATA_IDENTIFY_DATA_MODE_LEN);
      Swap_Entries (Description, (UINT16)AsciiStrLen (Description));
      Eliminate_Extra_Spaces (Description);
      a = Xml_Attribute_New ("Description", Description);
      if (a == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't get sata identify data\n", __FUNCTION__, __LINE__));
        return;
      }
      Xml_Element_Add_Attribute (e, a);
    } else if (CompareGuid (&DiskInfo->Interface, &gEfiDiskInfoScsiInterfaceGuid)) {
      BufferSize   = sizeof (EFI_SCSI_INQUIRY_DATA);
      Status = DiskInfo->Inquiry (
                         DiskInfo,
                         &InquiryData,
                         &BufferSize
                         );
      if (EFI_ERROR (Status)) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't get scsi inquiry data\n", __FUNCTION__, __LINE__));
        continue;
      }
      e = Xml_Element_New ("SCSI");
      if (e == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): safety check error\n", __FUNCTION__, __LINE__));
        return;
      }
      //
      // Per SCSI spec, EFI_SCSI_INQUIRY_DATA.Reserved_5_95[3 - 10] save the Verdor identification
      // EFI_SCSI_INQUIRY_DATA.Reserved_5_95[11 - 26] save the product identification, 
      // Here combine the vendor identification and product identification to the description.
      //
      Description = AllocateZeroPool (VENDOR_IDENTIFICATION_LENGTH + PRODUCT_IDENTIFICATION_LENGTH + 2);
      if (Description == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): safety check error\n", __FUNCTION__, __LINE__));
        return;
      }
      CopyMem (Description, &InquiryData.Reserved_5_95[VENDOR_IDENTIFICATION_OFFSET], VENDOR_IDENTIFICATION_LENGTH);
      Eliminate_Extra_Spaces (Description);
      CopyMem (Description, &InquiryData.Reserved_5_95[PRODUCT_IDENTIFICATION_OFFSET], PRODUCT_IDENTIFICATION_LENGTH);
      a = Xml_Attribute_New ("Description", Description);
      if (a == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't get sata identify data\n", __FUNCTION__, __LINE__));
        return;
      }
      Xml_Element_Add_Attribute (e, a);
      //Xml_Element_Add_Child (eE, e);      
    } else if (CompareGuid (&DiskInfo->Interface, &gEfiDiskInfoNvmeInterfaceGuid)) {
      PtrPciDevicePath = (EFI_DEVICE_PATH_PROTOCOL *) DevicePathFromHandle (Handles[StorageIndex]);
      Status = gBS->LocateDevicePath(
                      &gEfiPciIoProtocolGuid,
                      &PtrPciDevicePath,
                      &PciHandle
                      );
      if (EFI_ERROR (Status)) {
        continue;
      }

      //
      // Get device name by nvme binding drivers, to support some nvme have it's own native driver
      //
      ControllerName = MB_Get_Driver_Name (Handles[StorageIndex], PciHandle);
      //MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): %a\n", __FUNCTION__, __LINE__, ControllerName));
      if (ControllerName == NULL) {
        continue;
      }
      Description = AllocateZeroPool (AsciiStrSize (ControllerName));
      if (Description == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): safety check error\n", __FUNCTION__, __LINE__));
        return;
      }
      Ascii_Str_Cpy (Description, ControllerName);
      Eliminate_Extra_Spaces (Description);
      //MB_DEBUG ((DEBUG_LEVEL_ERROR, "tank: %a\n",Description));
      if (ControllerName != NULL) {
        FreePool (ControllerName);
      }
      e = NULL;
      e = Xml_Element_New ("NVME");
      if (e == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): safety check error\n", __FUNCTION__, __LINE__));
        return;
      }
      a = NULL;
      a = Xml_Attribute_New ("Description", Description);
      if (a == NULL) {
        MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): Can't get sata identify data\n", __FUNCTION__, __LINE__));
        return;
      }
      Xml_Element_Add_Attribute (e, a);
    }
    if (e != NULL) {
      Xml_Element_Add_Child (eE, e); 
    }
    //if (Description != NULL) {
    //  FreePool (Description);
    //}
    
  }
  //StorageIndex = 0;
  //Xml_Element_Debug_Print (eE, StorageIndex);
  if (Xml_Element_Is_Empty (eE)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d): no storage\n", __FUNCTION__, __LINE__));
    return;
  }
  Xml_Element_Add_Child (pE, eE);
  return;
}
VOID
MB_Xml_Write (
  IN XML_ELEMENT *pElement
  )
{
  XML_ELEMENT                            *e;
  XML_ATTRIBUTE                          *a;
  EFI_STATUS                            Status;
  EFI_SMBIOS_PROTOCOL                   *EfiSmbiosProtocol;
  if (pElement == NULL) { //safety check
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "%a(%d) safety check error\n", __FUNCTION__, __LINE__));
    return;
  }
  //
  //Get efi smbios protocol
  //
  Status = gBS->LocateProtocol(&gEfiSmbiosProtocolGuid, NULL, (VOID **)&EfiSmbiosProtocol);
  if (EFI_ERROR (Status)) {
    MB_DEBUG ((DEBUG_LEVEL_ERROR, "Locate: %g error\n", &gEfiSmbiosProtocolGuid));
  }

  e = Xml_Element_New ("MainboardInfoDump");
  if (e == NULL) {
    return;
  }
  a = Xml_Attribute_New ("version", "v0.1");
  if (a == NULL) {
    return;
  }
  Xml_Element_Add_Attribute (e, a);

  //
  // Add bios information
  //
  MB_FW_BIOS_Element_New (EfiSmbiosProtocol, e);

  //
  // Add EC information
  //
  MB_FW_EC_Element_New (EfiSmbiosProtocol, e);

  //
  // Add CPU information
  //
  MB_CPU_Element_New (EfiSmbiosProtocol, e);

  //
  // Add MEM information
  //
  MB_MEM_Element_New (EfiSmbiosProtocol, e);

  //
  // Add Storage information
  //
  MB_Storage_Element_New (e);
  Xml_Element_Add_Child (pElement, e);
  return;
}