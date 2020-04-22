#if 0


typedef struct {
  UINT32                           Signature;
  LIST_ENTRY                       Link;
  EFI_HII_HANDLE                   HiiHandle;
  UINTN                            IfrBinaryLength;
  UINT8                            *IfrBinaryData; 
  LIST_ENTRY             FormsetList;                   
} HIIVAR_PKG;
#define HIIVAR_PKG_FROM_LINK(a)  CR (a, HIIVAR_PKG, Link, HIIVAR_FORMSET_SIGNATURE)

#define HIIVAR_PKG_SIGNATURE  SIGNATURE_32 ('H', 'V', 'P', 'A')
/**

  this function is used to new a database package 
  @param  handle -- the hii handle
  @retval pkg struct pointer is return, NULL is error.

**/
VOID *
HiiVar_Package_New (
  IN  EFI_HII_HANDLE        *handle
  )
{
  EFI_STATUS                     Status;
  EFI_HII_DATABASE_PROTOCOL      *HiiDatabaseProtocol = NULL;
  UINTN                          BufferSize = 0;
  EFI_HII_PACKAGE_LIST_HEADER    *pBuff = NULL;
  HIIVAR_PKG                     *pPkg = NULL;

  if (handle == NULL) { //safety check
    HIIVAR_DEBUG ((EFI_D_ERROR, "%a(%d) safety check failed\n", __FUNCTION__, __LINE__));
    return NULL;        
  }
  //
  // Get the hii database protocol
  //
  if (gThis == NULL) {
    Status = gBS->LocateProtocol (&gEfiHiiDatabaseProtocolGuid, NULL, (VOID **)&gThis);
    if (EFI_ERROR (Status)) {
      return NULL;
    }
  }

  //
  // copy pool of all exposed database
  // 
  Status = gThis->ExportPackageLists (gThis, Handle, &BufferSize, pBuff); //get size
  if (Status == EFI_BUFFER_TOO_SMALL) {
    pBuff = AllocatePool (BufferSize);
    if (pBuff != NULL) {
      Status = gThis->ExportPackageLists (gThis, Handle, &BufferSize, pBuff); //get buffer
      if (EFI_ERROR (Status)) {
        HIIVAR_DEBUG ((EFI_D_ERROR, "%a(%d) can't export hii buffer\n", __FUNCTION__, __LINE__));
        return NULL;        
      }
    }
  }
  pPkg = (HIIVAR_PKG *) AllocateZeroPool (sizeof (HIIVAR_PKG));
  if (pPkg == NULL) { //safety check
    HIIVAR_DEBUG ((EFI_D_ERROR, "%a(%d) safety check failed\n", __FUNCTION__, __LINE__));
    return NULL;        
  }
  pPkg->Signature = HIIVAR_PKG_SIGNATURE;
  pPkg->HiiHandle = handle;
  pPkg->IfrBinaryLength = BufferSize;
  pPkg->IfrBinaryData = pBuff;
  InitializeListHead (&pPkg->FormsetList);

  //
  // Insert the pkg link into list 
  //
  InsertTailList (&gHiiVarPkgList, &pPkg->Link);
  return pPkg;
}

/**
  Inset the formset link into pkg
  @param pkg -- the pkg pointer
  @param formset -- the formset pointer

**/                       
VOID
HiiVar_Pkg_Add_Formset (
  IN  HIIVAR_PKG            *pkg,
  IN  HIIVAR_HIIVAR_FORMSET *formset
  )
{
  if ((pkg == NULL) || (formset == NULL)) {
    return;
  }
  //
  // Insert the pkg link into list 
  //
  InsertTailList (&pkg->FormsetList, &formset->Link);
  return;
}
/**
 TANK:TBD
**/
VOID 
HiiVar_Package_Destory (
  VOID
  )
{
  return;
}

/**
 this function is used to dispatch all pakges
 into list
**/
VOID 
HiiVar_Package_Dispatch (
  VOID
  )
{
  EFI_HII_HANDLE            *handles = NULL;
  UINTN                     i = 0;

  handles = HiiGetHiiHandles (NULL);
  if (handles == NULL) {
    return;
  }
  while (handles[i] != 0) {
    HiiVar_Package_New (handles[i]);
  }
  return;
}
/**
**/
VOID
HiiVar_Pkg_Dispatch (
  VOID
  )
{
  EFI_HII_HANDLE    *handles;
  UINTN             Index;
  UINT8             *Data;
  UINTN             DataLen;
  Index = 0;
  Handles = HiiVar_Get_All_Handles ();

  while (handles[index] != NULL) {
    Data = HiiVar_Get_All_Database_ByHandle (handles[index], DataLen);
  }
}
#endif