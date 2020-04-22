# RwShell
Read Write something under shell
Release Note:
1.support pci dump


  <PciDump version="v0.1">
    <Device(00:00:00) vendor(1022)="Advanced Micro Devices, Inc. [AMD]" device(15D0)="Unknown Device Id">
      <data 00="22 10 D0 15 00 00 00 00 00 00 00 06 00 00 80 00 " />
      <data 01="00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 " />
      <data 02="00 00 00 00 00 00 00 00 00 00 00 00 22 10 D0 15 " />
      <data 03="00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 " />
      <data 04="00 00 00 00 00 00 00 00 80 00 00 00 10 00 80 00 " />
      <data 05="22 10 D0 15 00 00 00 00 00 00 00 00 00 00 00 00 " />
      <data 06="00 00 00 00 14 97 FF FF 00 00 00 00 00 00 00 00 " />
      <data 07="00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 " />
      <data 08="00 00 00 00 08 01 00 00 00 00 00 00 00 00 00 00 " />
      <data 09="00 00 00 E0 00 00 00 00 00 00 00 00 00 00 00 00 " />
      <data 0A="00 00 00 00 14 97 FF FF 00 00 00 00 00 00 00 00 " />
      <data 0B="00 00 00 00 00 00 00 00 1C A8 05 00 03 00 00 00 " />
      <data 0C="00 00 00 00 00 00 00 00 14 97 FF FF 00 00 00 00 " />
      <data 0D="00 00 00 00 14 97 FF FF 00 00 00 00 00 00 00 00 " />
      <data 0E="46 00 30 01 00 00 00 00 00 00 00 00 00 00 00 00 " />
      <data 0F="00 00 00 00 00 80 80 00 00 00 00 00 14 97 FF FF " />
      <ssid svid="1022" sdid="15D0" />
      <control IO="-" Mem="-" BusMaster="-" SpecCycle="-" MemInv="-" VGASnoop="-" ParErr="-" Stepping="-" SERR="-" FastB2B="-" DisINTx="-" />
      <status Cap="-" 66MHz="-" UDF="-" FastB2B="-" ParErr="-" DEVSEL="fast" STAbort="-" RTAbort="-" RMAbort="-" SERR="-" PERR="-" INTx="-" />
      <interrupt IntLine="0" IntIRQ="0" />
    </Device(00:00:00)>
2. suuport onboard information dump
<Dump email="tanktang2018@hotmail.com" aurthor="tank">
  <MainboardInfoDump version="v0.1">
    <BIOS Version="M33KT1BS" date="01/14/2020" />
    <EC Version="00.04" />
    <CPU name="AMD Ryzen 5 PRO 3500U w/ Radeon Vega Mobile Gfx" />
    <Memory>
      <Mem BankLocator="P0 CHANNEL A" Manufacturer="Hynix" PartNum="HMA851S6CJR6N-XN    " Size="4096 MB" />
      <Mem BankLocator="P0 CHANNEL B" Manufacturer="Hynix" PartNum="HMA851S6CJR6N-XN    " Size="4096 MB" />
    </Memory>
    <Storage>
      <NVME Description="UMIS RPJTJ128MEE1MWX" />
      <NVME Description="KXG6AZNV256G TOSHIBA" />
    </Storage>
  </MainboardInfoDump>
