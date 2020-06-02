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
  
3. Support hii database prase
 <formset id="D1405D16-7AFC-4695-BB12-41459D3695A2" name="Network Stack Configuration">
      <form id="0x0001" name="Network Stack Configuration">
        <question id="0x0001" name="Network Stack" type="oneof" radix="unsinged dec" len="0x01">
          <help info="Enable/Disable UEFI Network Stack" />
          <current value="0x01" />
          <option value="0x00" name="Disabled" />
          <option value="0x01" name="Enabled" />
        </question>
        <question id="0x0002" name="Ipv4 PXE Support" type="oneof" radix="unsinged dec" len="0x01">
          <help info="Enable/Disable IPv4 PXE boot support. If disabled, IPv4 PXE boot support will not be available." />
          <current value="0x01" />
          <option value="0x00" name="Disabled" />
          <option value="0x01" name="Enabled" />
        </question>
        <question id="0x0003" name="Ipv4 HTTP Support" type="oneof" radix="unsinged dec" len="0x01">
          <help info="Enable/Disable IPv4 HTTP boot support. If disabled, IPv4 HTTP boot support will not be available." />
          <current value="0x00" />
          <option value="0x00" name="Disabled" />
          <option value="0x01" name="Enabled" />
        </question>
        <question id="0x0004" name="Ipv6 PXE Support" type="oneof" radix="unsinged dec" len="0x01">
          <help info="Enable/Disable IPv6 PXE boot support. If disabled, IPv6 PXE boot support will not be available." />
          <current value="0x01" />
          <option value="0x00" name="Disabled" />
          <option value="0x01" name="Enabled" />
        </question>
        <question id="0x0005" name="Ipv6 HTTP Support" type="oneof" radix="unsinged dec" len="0x01">
          <help info="Enable/Disable IPv6 HTTP boot support. If disabled, IPv6 HTTP boot support will not be available." />
          <current value="0x00" />
          <option value="0x00" name="Disabled" />
          <option value="0x01" name="Enabled" />
        </question>
        <question id="0x0006" name="IPSEC Certificate" type="oneof" radix="unsinged dec" len="0x01">
          <help info="Support to Enable/Disable IPSEC certificate for Ikev." />
          <current value="0x00" />
          <option value="0x00" name="Disabled" />
          <option value="0x01" name="Enabled" />
        </question>
        <question id="0x0007" name="PXE boot wait time" type="numeric" radix="unsinged dec" len="0x01" min="0x00" max="0x05" step="0x01">
          <help info="Wait time in seconds to press ESC key to abort the PXE boot. Use either +/- or numeric keys to set the value." />
          <current value="0x00" />
        </question>
        <question id="0x0008" name="Media detect count" type="numeric" radix="unsinged dec" len="0x01" min="0x01" max="0x32" step="0x01">
          <help info="Number of times the presence of media will be checked. Use either +/- or numeric keys to set the value." />
          <current value="0x00" />
        </question>
      </form>
    </formset>
4. support L"Setup" Generate
  <VarStore name="Setup" size="0x01BE" guid="EC87D643-EBA4-4BB5-A1E5-3F3E36B20DA9">
    <data L00="01 01 00 00 00 00 01 02 01 00 00 02 00 01 00 01 " />
    <data L01="00 00 01 00 01 03 00 00 00 01 00 01 00 00 00 00 " />
    <data L02="00 00 00 01 01 00 00 01 00 01 00 01 00 00 01 00 " />
    <data L03="00 00 00 00 00 01 01 00 00 00 00 00 01 01 00 00 " />
    <data L04="00 00 00 00 00 00 01 01 01 01 01 01 01 0F 01 00 " />
    <data L05="01 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 " />
    <data L06="00 00 00 00 02 01 00 00 01 02 00 01 01 00 01 01 " />
    <data L07="00 00 00 00 00 01 02 01 01 01 01 02 01 01 01 00 " />
    <data L08="00 00 01 02 00 00 00 00 01 00 00 00 00 01 00 03 " />
    <data L09="00 02 01 01 00 00 00 02 00 00 01 00 00 00 01 02 " />
    <data L0A="00 00 00 00 00 00 00 00 00 00 00 00 01 01 01 01 " />
    <data L0B="01 01 01 01 00 01 FF 04 00 00 0F 00 00 FF 01 01 " />
    <data L0C="00 00 01 01 FF FF FF FF FF FF FF FF FF FF FF 00 " />
    <data L0D="FF FF FF FF FF FF FF FF FF FF FF FF FF FF 00 FF " />
    <data L0E="FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF 00 " />
    <data L0F="FF 00 FF FF 00 00 00 FF FF FF FF FF FF FF FF FF " />
    <data L10="FF FF FF FF FF FF FF FF FF FF FF FF 01 FF FF FF " />
    <data L11="FF FF 00 00 FF FF FF FF FF 01 FF FF 00 01 00 00 " />
    <data L12="00 01 FF FF FF FF FF FF FF FF FF FF FF FF FF FF " />
    <data L13="FF FF FF FF FF FF FF FF FF FF 00 01 00 00 00 00 " />
    <data L14="00 07 08 01 01 01 01 01 01 00 01 00 01 00 00 00 " />
    <data L15="02 07 00 00 00 00 00 01 00 02 00 01 01 01 01 01 " />
    <data L16="01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 " />
    <data L17="00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 " />
    <data L18="00 01 01 01 00 00 00 00 00 00 00 00 00 00 01 01 " />
    <data L19="00 00 00 00 00 01 02 01 01 01 00 00 02 01 00 00 " />
    <data L1A="00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 " />
    <data L1B="00 00 00 00 00 00 00 00 00 00 00 00 00 00 53 00 " />
    <Item Offset="0000" value="0x01" size="0x01" name="Bootup NumLock State" />
    <Item Offset="0001" value="0x01" size="0x01" name="Wireless LAN Access" />
    <Item Offset="0002" value="0x00" size="0x01" name="HTTPs Support" />
    <Item Offset="0003" value="0x00" size="0x01" name="Wireless LAN PXE boot" />
    <Rsvd Offset="0004" value="0x00" />
    <Rsvd Offset="0005" value="0x00" />
    <Item Offset="0006" value="0x01" size="0x01" name="Wake on LAN" />
    <Item Offset="0007" value="0x02" size="0x01" name="After Power Loss" />
    <Item Offset="0008" value="0x01" size="0x01" name="Performance Mode" />
    <Rsvd Offset="0009" value="0x00" />
    <Rsvd Offset="000A" value="0x00" />
    <Item Offset="000B" value="0x02" size="0x01" name="Wake from Serial Port Ring" />
    <Rsvd Offset="000C" value="0x00" />
    <Item Offset="000D" value="0x01" size="0x01" name="PSU Over load Warning" />
    <Item Offset="000E" value="0x00" size="0x01" name="Enhanced Power Saving Mode" />
    <Item Offset="000F" value="0x01" size="0x01" name="Smart Power On" />
    <Item Offset="0010" value="0x00" size="0x01" name="Access Security Settings" />
    <Item Offset="0011" value="0x00" size="0x01" name="Remote Set SMP" />
    <Item Offset="0012" value="0x01" size="0x01" name="Allow Jumper Clear SVP" />
    <Rsvd Offset="0013" value="0x00" />
    <Item Offset="0014" value="0x01" size="0x01" name="Secure Roll Back Prevention" />
    <Item Offset="0015" value="0x03" size="0x01" name="Max Password Attempts" />
    <Item Offset="0016" value="0x00" size="0x01" name="Custom Password Mode" />
    <Item Offset="0017" value="0x00" size="0x01" name="Password Change Time" />
    <Item Offset="0018" value="0x00" size="0x01" name="Require SVP when Flashing" />
    <Item Offset="0019" value="0x01" size="0x01" name="BIOS Password At System Boot" />
    <Item Offset="001A" value="0x00" size="0x01" name="BIOS Password At Reboot" />
    <Item Offset="001B" value="0x01" size="0x01" name="POP Changeable by User" />
    <Item Offset="001C" value="0x00" size="0x01" name="BIOS Password At Boot Device List" />
    <Item Offset="001D" value="0x00" size="0x01" name="Smart USB Protection" />
    <Item Offset="001E" value="0x00" size="0x01" name="Device Guard" />
    <Item Offset="001F" value="0x00" size="0x01" name="Credential Guard" />
    <Rsvd Offset="0020" value="0x00" />
    <Item Offset="0021" value="0x00" size="0x01" name="Cover Tamper Detected" />
    <Item Offset="0022" value="0x00" size="0x01" name="Configuration Change Detection" />
    <Item Offset="0023" value="0x01" size="0x01" name="Password Count Exceeded Error" />
    <Item Offset="0024" value="0x01" size="0x01" name="Require HDP on System Boot" />
    <Rsvd Offset="0025" value="0x00" />
    <Rsvd Offset="0026" value="0x00" />
    <Item Offset="0027" value="0x01" size="0x01" name="Absolute Persistence Module" />
    <Rsvd Offset="0028" value="0x00" />
    <Item Offset="0029" value="0x01" size="0x01" name="To diagnose hardware" />
    <Rsvd Offset="002A" value="0x00" />
    <Item Offset="002B" value="0x01" size="0x01" name="Windows UEFI Firmware Update" />
    <Rsvd Offset="002C" value="0x00" />
    <Rsvd Offset="002D" value="0x00" />
    <Item Offset="002E" value="0x01" size="0x01" name="Quick Boot" />
    <Item Offset="002F" value="0x00" size="0x01" name="Floppyless Operation" />
    <Item Offset="0030" value="0x00" size="0x01" name="Keyboardless Operation" />
    <Item Offset="0031" value="0x00" size="0x01" name="USB Enumeration Delay" />
    <Item Offset="0032" value="0x00" size="0x01" name="Boot Priority " />
    <Item Offset="0033" value="0x00" size="0x01" name="Option Keys Display" />
    <Item Offset="0034" value="0x00" size="0x01" name="Option Keys Display Style" />
    <Item Offset="0035" value="0x01" size="0x01" name="Startup Device Menu Prompt" />
    <Item Offset="0036" value="0x01" size="0x01" name="Quiet Boot" />
    <Item Offset="0037" value="0x00" size="0x01" name="Serial Number Style" />
    <Item Offset="0038" value="0x00" size="0x01" name="Display Logo" />
    <Item Offset="0039" value="0x00" size="0x01" name="BGRT" />
    <Item Offset="003A" value="0x00" size="0x01" name="Resolution" />
    <Item Offset="003B" value="0x00" size="0x01" name="OEM Logo Feature Support" />
    <Item Offset="003C" value="0x01" size="0x01" name="Fast Boot" />
    <Item Offset="003D" value="0x01" size="0x01" name="OS Optimized Defaults" />
    <Rsvd Offset="003E" value="0x00" />
    <Rsvd Offset="003F" value="0x00" />
    <Rsvd Offset="0040" value="0x00" />
    <Rsvd Offset="0041" value="0x00" />
    <Rsvd Offset="0042" value="0x00" />
    <Rsvd Offset="0043" value="0x00" />
    <Item Offset="0044" value="0x00" size="0x01" name="Set Minimum Length" />
    <Item Offset="0045" value="0x00" size="0x01" name="Set Strong Password" />
    <Item Offset="0046" value="0x01" size="0x01" name="USB Port Access" />
    <Item Offset="0047" value="0x01" size="0x01" name="Front USB Ports" />
    <Item Offset="0048" value="0x01" size="0x01" name="Rear USB Ports" />
    <Item Offset="0049" value="0x01" size="0x01" name="Internal Speaker" />
    <Item Offset="004A" value="0x01" size="0x01" name="Onboard Ethernet Controller" />
    <Item Offset="004B" value="0x01" size="0x01" name="Bluetooth" />
    <Item Offset="004C" value="0x01" size="0x01" name="AMD Secure Virtual Machine" />
    <Item Offset="004D" value="0x0F" size="0x01" name="IOMMU" />
    <Item Offset="004E" value="0x01" size="0x01" name="C State Support" />
    <Item Offset="004F" value="0x00" size="0x01" name="DASH Support" />
    <Item Offset="0050" value="0x01" size="0x01" name="Console Redirection Terminal Type" />
    <Item Offset="0051" value="0x00" size="0x01" name="Windows Modern Standby" />
    <Item Offset="0052" value="0x00" size="0x01" name="Set Password Encryption Algorithm" />
    <Rsvd Offset="0053" value="0x00" />
    <Item Offset="0054" value="0x00" size="0x01" name="Lenovo Cloud Services" />
    <Item Offset="0055" value="0x00" size="0x01" name="HTTPs Boot" />
    <Item Offset="0056" value="0x01" size="0x01" name="Block SID Authentication" />
    <Rsvd Offset="0057" value="0x00" />
    <Rsvd Offset="0058" value="0x00" />
    <Rsvd Offset="0059" value="0x00" />
    <Rsvd Offset="005A" value="0x00" />
    <Rsvd Offset="005B" value="0x00" />
    <Rsvd Offset="005C" value="0x00" />
    <Rsvd Offset="005D" value="0x00" />
    <Rsvd Offset="005E" value="0x00" />
    <Rsvd Offset="005F" value="0x00" />
    <Rsvd Offset="0060" value="0x00" />
    <Item Offset="0061" value="0x00" size="0x01" name="Fast Boot" />
    <Item Offset="0062" value="0x00" size="0x01" name="SATA Support" />
    <Item Offset="0063" value="0x00" size="0x01" name="VGA Support" />
    <Item Offset="0064" value="0x02" size="0x01" name="USB Support" />
    <Item Offset="0065" value="0x01" size="0x01" name="PS2 Devices Support" />
    <Item Offset="0066" value="0x00" size="0x01" name="Redirection Support" />
    <Item Offset="0067" value="0x00" size="0x01" name="Network Stack Driver Support" />
    <Item Offset="0068" value="0x01" size="0x01" name="NVMe Support" />
    <Item Offset="0069" value="0x02" size="0x01" name="Security Chip 1.2" />
    <Item Offset="006A" value="0x00" size="0x01" name="Clear TCG Security Feature" />
    <Rsvd Offset="006B" value="0x01" />
    <Rsvd Offset="006C" value="0x01" />
    <Rsvd Offset="006D" value="0x00" />
    <Item Offset="006E" value="0x01" size="0x01" name="Security Device Support" />
    <Rsvd Offset="006F" value="0x01" />
    <Rsvd Offset="0070" value="0x00" />
    <Rsvd Offset="0071" value="0x00" />
    <Rsvd Offset="0072" value="0x00" />
    <Rsvd Offset="0073" value="0x00" />
    <Rsvd Offset="0074" value="0x00" />
    <Rsvd Offset="0075" value="0x01" />
    <Item Offset="0076" value="0x02" size="0x01" name="TPM2.0 UEFI Spec Version" />
    <Item Offset="0077" value="0x01" size="0x01" name="Platform Hierarchy" />
    <Item Offset="0078" value="0x01" size="0x01" name="Storage Hierarchy" />
    <Item Offset="0079" value="0x01" size="0x01" name="Endorsement Hierarchy" />
    <Item Offset="007A" value="0x01" size="0x01" name="TPM 20 InterfaceType" />
    <Item Offset="007B" value="0x02" size="0x01" name="Device Select" />
    <Item Offset="007C" value="0x01" size="0x01" name="PH Randomization" />
    <Rsvd Offset="007D" value="0x01" />
    <Rsvd Offset="007E" value="0x01" />
    <Rsvd Offset="007F" value="0x00" />
    <Rsvd Offset="0080" value="0x00" />
    <Rsvd Offset="0081" value="0x00" />
    <Item Offset="0082" value="0x01" size="0x01" name="SHA-1 PCR Bank" />
    <Item Offset="0083" value="0x02" size="0x01" name="SHA256 PCR Bank" />
    <Item Offset="0084" value="0x00" size="0x01" name="SHA384 PCR Bank" />
    <Item Offset="0085" value="0x00" size="0x01" name="SHA512 PCR Bank" />
    <Item Offset="0086" value="0x00" size="0x01" name="SM3_256 PCR Bank" />
    <Rsvd Offset="0087" value="0x00" />
    <Item Offset="0088" value="0x01" size="0x01" name="Physical Presence Spec Version" />
    <Item Offset="0089" value="0x00" size="0x01" name="Disable Block Sid" />
    <Rsvd Offset="008A" value="0x00" />
    <Rsvd Offset="008B" value="0x00" />
    <Item Offset="008C" value="0x00" size="0x01" name="Physical Presence for Provisioning" />
    <Item Offset="008D" value="0x01" size="0x01" name="Physical Presence for Clear" />
    <Item Offset="008E" value="0x00" size="0x01" name="Physical Presence for Clear" />
    <Rsvd Offset="008F" value="0x03" />
    <Rsvd Offset="0090" value="0x00" />
    <Item Offset="0091" value="0x02" size="0x01" name="AMD fTPM switch" />
    <Item Offset="0092" value="0x01" size="0x01" name="Erase fTPM NV for factory reset" />
    <Item Offset="0093" value="0x01" size="0x01" name="Thermal Policy" />
    <Rsvd Offset="0094" value="0x00" />
    <Rsvd Offset="0095" value="0x00" />
    <Item Offset="0096" value="0x00" size="0x01" name="Enable ACPI Auto Configuration" />
    <Item Offset="0097" value="0x0002" size="0x02" name="ACPI Sleep State" />
    <Rsvd Offset="0098" value="0x00" />
    <Item Offset="0099" value="0x00" size="0x01" name="Lock Legacy Resources" />
    <Item Offset="009A" value="0x01" size="0x01" name="Enable Hibernation" />
    <Rsvd Offset="009B" value="0x00" />
    <Rsvd Offset="009C" value="0x00" />
    <Rsvd Offset="009D" value="0x00" />
    <Item Offset="009E" value="0x01" size="0x01" name="OnChip SATA Channel" />
    <Item Offset="009F" value="0x02" size="0x01" name="OnChip SATA Type" />
    <Item Offset="00A0" value="0x00" size="0x01" name="RAID Type" />
    <Rsvd Offset="00A1" value="0x00" />
    <Rsvd Offset="00A2" value="0x00" />
    <Rsvd Offset="00A3" value="0x00" />
    <Rsvd Offset="00A4" value="0x00" />
    <Rsvd Offset="00A5" value="0x00" />
    <Rsvd Offset="00A6" value="0x00" />
    <Rsvd Offset="00A7" value="0x00" />
    <Rsvd Offset="00A8" value="0x00" />
    <Rsvd Offset="00A9" value="0x00" />
    <Rsvd Offset="00AA" value="0x00" />
    <Rsvd Offset="00AB" value="0x00" />
    <Item Offset="00AC" value="0x01" size="0x01" name="XHCI0 Port 0 " />
    <Item Offset="00AD" value="0x01" size="0x01" name="XHCI0 Port 1 " />
    <Item Offset="00AE" value="0x01" size="0x01" name="XHCI0 Port 2" />
    <Item Offset="00AF" value="0x01" size="0x01" name="XHCI0 Port 3" />
    <Item Offset="00B0" value="0x01" size="0x01" name="XHCI0 Port 4" />
    <Item Offset="00B1" value="0x01" size="0x01" name="XHCI0 Port 5" />
    <Item Offset="00B2" value="0x01" size="0x01" name="XHCI1 Port 0 " />
    <Item Offset="00B3" value="0x01" size="0x01" name="XHCI1 Port 1 " />
    <Rsvd Offset="00B4" value="0x00" />
    <Item Offset="00B5" value="0x01" size="0x01" name="IR Config" />
    <Item Offset="00B6" value="0xFF" size="0x01" name="SD Mode" />
    <Rsvd Offset="00B7" value="0x04" />
    <Rsvd Offset="00B8" value="0x00" />
    <Rsvd Offset="00B9" value="0x00" />
    <Rsvd Offset="00BA" value="0x0F" />
    <Rsvd Offset="00BB" value="0x00" />
    <Rsvd Offset="00BC" value="0x00" />
    <Item Offset="00BD" value="0xFF" size="0x01" name="GPIO Devices Support" />
    <Item Offset="00BE" value="0x01" size="0x01" name="I2C 0 Enable" />
    <Item Offset="00BF" value="0x01" size="0x01" name="I2C 1 Enable" />
    <Item Offset="00C0" value="0x00" size="0x01" name="I2C 2 Enable" />
    <Item Offset="00C1" value="0x00" size="0x01" name="I2C 3 Enable" />
    <Item Offset="00C2" value="0x01" size="0x01" name="Uart 0 Enable" />
    <Item Offset="00C3" value="0x01" size="0x01" name="Uart 1 Enable" />
    <Item Offset="00C4" value="0xFF" size="0x01" name="AB Clock Gating" />
    <Item Offset="00C5" value="0xFF" size="0x01" name="PCIB Clock Run" />
    <Item Offset="00C6" value="0xFF" size="0x01" name="ESATA Port On Port 0" />
    <Item Offset="00C7" value="0xFF" size="0x01" name="ESATA Port On Port 1" />
    <Rsvd Offset="00C8" value="0xFF" />
    <Rsvd Offset="00C9" value="0xFF" />
    <Rsvd Offset="00CA" value="0xFF" />
    <Rsvd Offset="00CB" value="0xFF" />
    <Rsvd Offset="00CC" value="0xFF" />
    <Rsvd Offset="00CD" value="0xFF" />
    <Item Offset="00CE" value="0xFF" size="0x01" name="SATA Power On Port 0" />
    <Item Offset="00CF" value="0x00" size="0x01" name="SATA Power On Port 1" />
    <Rsvd Offset="00D0" value="0xFF" />
    <Rsvd Offset="00D1" value="0xFF" />
    <Rsvd Offset="00D2" value="0xFF" />
    <Rsvd Offset="00D3" value="0xFF" />
    <Rsvd Offset="00D4" value="0xFF" />
    <Rsvd Offset="00D5" value="0xFF" />
    <Item Offset="00D6" value="0xFF" size="0x01" name="SATA Port 0 MODE" />
    <Item Offset="00D7" value="0xFF" size="0x01" name="SATA Port 1 MODE" />
    <Rsvd Offset="00D8" value="0xFF" />
    <Rsvd Offset="00D9" value="0xFF" />
    <Rsvd Offset="00DA" value="0xFF" />
    <Rsvd Offset="00DB" value="0xFF" />
    <Rsvd Offset="00DC" value="0xFF" />
    <Rsvd Offset="00DD" value="0xFF" />
    <Item Offset="00DE" value="0x00" size="0x01" name="SATA Drive x Hot-Plug Support" />
    <Rsvd Offset="00DF" value="0xFF" />
    <Rsvd Offset="00E0" value="0xFF" />
    <Item Offset="00E1" value="0xFF" size="0x01" name="SATA MAXGEN2 CAP OPTION" />
    <Item Offset="00E2" value="0xFF" size="0x01" name="SATA CLK Mode Option" />
    <Item Offset="00E3" value="0xFF" size="0x01" name="Aggressive Link PM Capability" />
    <Item Offset="00E4" value="0xFF" size="0x01" name="Port Multiplier Capability" />
    <Item Offset="00E5" value="0xFF" size="0x01" name="SATA Ports Auto Clock Control" />
    <Item Offset="00E6" value="0xFF" size="0x01" name="SATA Partial State Capability" />
    <Item Offset="00E7" value="0xFF" size="0x01" name="SATA FIS Based Switching" />
    <Item Offset="00E8" value="0xFF" size="0x01" name="SATA Command Completion Coalescing Support" />
    <Item Offset="00E9" value="0xFF" size="0x01" name="SATA Slumber State Capability" />
    <Item Offset="00EA" value="0xFF" size="0x01" name="SATA MSI Capability Support" />
    <Item Offset="00EB" value="0xFF" size="0x01" name="SATA Target Support 8 Devices" />
    <Item Offset="00EC" value="0xFF" size="0x01" name="Generic Mode" />
    <Item Offset="00ED" value="0xFF" size="0x01" name="SATA AHCI Enclosure" />
    <Item Offset="00EE" value="0xFF" size="0x01" name="SATA SGPIO 0" />
    <Rsvd Offset="00EF" value="0x00" />
    <Item Offset="00F0" value="0xFF" size="0x01" name="SATA PHY PLL" />
    <Rsvd Offset="00F1" value="0x00" />
    <Rsvd Offset="00F2" value="0xFF" />
    <Item Offset="00F3" value="0xFF" size="0x01" name="Clock Interrupt Tag" />
    <Rsvd Offset="00F4" value="0x00" />
    <Rsvd Offset="00F5" value="0x00" />
    <Rsvd Offset="00F6" value="0x00" />
    <Rsvd Offset="00F7" value="0xFF" />
    <Item Offset="00F8" value="0xFF" size="0x01" name="SPI Read Mode" />
    <Item Offset="00F9" value="0xFF" size="0x01" name="SPI Normal Speed" />
    <Item Offset="00FA" value="0xFF" size="0x01" name="SPI Fast Read Speed" />
    <Rsvd Offset="00FB" value="0xFF" />
    <Rsvd Offset="00FC" value="0xFF" />
    <Item Offset="00FD" value="0xFF" size="0x01" name="I2C 0 D3 Support" />
    <Item Offset="00FE" value="0xFF" size="0x01" name="I2C 1 D3 Support" />
    <Item Offset="00FF" value="0xFF" size="0x01" name="I2C 2 D3 Support" />
    <Item Offset="0100" value="0xFF" size="0x01" name="I2C 3 D3 Support" />
    <Item Offset="0101" value="0xFF" size="0x01" name="I2C 4 D3 Support" />
    <Item Offset="0102" value="0xFF" size="0x01" name="I2C 5 D3 Support" />
    <Item Offset="0103" value="0xFF" size="0x01" name="UART 0 D3 Support" />
    <Item Offset="0104" value="0xFF" size="0x01" name="UART 1 D3 Support" />
    <Item Offset="0105" value="0xFF" size="0x01" name="UART 2 D3 Support" />
    <Item Offset="0106" value="0xFF" size="0x01" name="UART 3 D3 Support" />
    <Item Offset="0107" value="0xFF" size="0x01" name="SATA D3 Support" />
    <Item Offset="0108" value="0xFF" size="0x01" name="EHCI D3 Support" />
    <Item Offset="0109" value="0xFF" size="0x01" name="XHCI D3 Support" />
    <Item Offset="010A" value="0xFF" size="0x01" name="SD D3 Support" />
    <Item Offset="010B" value="0xFF" size="0x01" name="S0I3" />
    <Rsvd Offset="010C" value="0x01" />
    <Item Offset="010D" value="0xFF" size="0x01" name="SB Clock Spread Spectrum" />
    <Item Offset="010E" value="0xFF" size="0x01" name="HPET In SB" />
    <Item Offset="010F" value="0xFF" size="0x01" name="MsiDis in HPET" />
    <Item Offset="0110" value="0xFF" size="0x01" name="_OSC For PCI0" />
    <Rsvd Offset="0111" value="0xFF" />
    <Rsvd Offset="0112" value="0x00" />
    <Rsvd Offset="0113" value="0x00" />
    <Rsvd Offset="0114" value="0xFF" />
    <Rsvd Offset="0115" value="0xFF" />
    <Rsvd Offset="0116" value="0xFF" />
    <Rsvd Offset="0117" value="0xFF" />
    <Rsvd Offset="0118" value="0xFF" />
    <Rsvd Offset="0119" value="0x01" />
    <Item Offset="011A" value="0xFF" size="0x01" name="Restore On AC Power Loss" />
    <Item Offset="011B" value="0xFF" size="0x01" name="GPP Serial Debug Bus Enable" />
    <Rsvd Offset="011C" value="0x00" />
    <Item Offset="011D" value="0x01" size="0x01" name="Onboard PCIE LAN PXE ROM" />
    <Rsvd Offset="011E" value="0x00" />
    <Rsvd Offset="011F" value="0x00" />
    <Rsvd Offset="0120" value="0x00" />
    <Item Offset="0121" value="0x01" size="0x01" name="Pcie Port Control" />
    <Item Offset="0122" value="0xFF" size="0x01" name="Device 1 Fun 7" />
    <Item Offset="0123" value="0xFF" size="0x01" name="Device 1 Fun 3" />
    <Item Offset="0124" value="0xFF" size="0x01" name="Device 1 Fun 2" />
    <Item Offset="0125" value="0xFF" size="0x01" name="Device 1 Fun 5" />
    <Item Offset="0126" value="0xFF" size="0x01" name="Device 1 Fun 4" />
    <Item Offset="0127" value="0xFF" size="0x01" name="Device5" />
    <Item Offset="0128" value="0xFF" size="0x01" name="Device6" />
    <Item Offset="0129" value="0xFF" size="0x01" name="Device7" />
    <Item Offset="012A" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="012B" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="012C" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="012D" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="012E" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="012F" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="0130" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="0131" value="0xFF" size="0x01" name="ASPM Mode Control" />
    <Item Offset="0132" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="0133" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="0134" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="0135" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="0136" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="0137" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="0138" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="0139" value="0xFF" size="0x01" name="Hotplug Mode Control" />
    <Item Offset="013A" value="0x00" size="0x01" name="ASF Support" />
    <Item Offset="013B" value="0x01" size="0x01" name="ASF BIOS Mode" />
    <Item Offset="013C" value="0x00" size="0x01" name="ASF WatchDog Timer" />
    <Item Offset="013D" value="0x0000" size="0x02" name="WatchDog Timer : BIOS" />
    <Rsvd Offset="013E" value="0x00" />
    <Item Offset="013F" value="0x0000" size="0x02" name="WatchDog Timer : OS" />
    <Rsvd Offset="0140" value="0x00" />
    <Item Offset="0141" value="0x07" size="0x01" name="Bits per second" />
    <Item Offset="0142" value="0x08" size="0x01" name="Data Bits" />
    <Item Offset="0143" value="0x01" size="0x01" name="Parity" />
    <Item Offset="0144" value="0x01" size="0x01" name="Stop Bits" />
    <Item Offset="0145" value="0x01" size="0x01" name="Flow Control" />
    <Item Offset="0146" value="0x01" size="0x01" name="Console Redirection" />
    <Item Offset="0147" value="0x01" size="0x01" name="Terminal Type" />
    <Item Offset="0148" value="0x01" size="0x01" name="VT-UTF8 Combo Key Support" />
    <Item Offset="0149" value="0x00" size="0x01" name="Recorder Mode" />
    <Item Offset="014A" value="0x01" size="0x01" name="Resolution 100x31" />
    <Rsvd Offset="014B" value="0x00" />
    <Item Offset="014C" value="0x01" size="0x01" name="Putty KeyPad" />
    <Rsvd Offset="014D" value="0x00" />
    <Item Offset="014E" value="0x00" size="0x01" name="Console Redirection" />
    <Item Offset="014F" value="0x00" size="0x01" name="Out-of-Band Mgmt Port" />
    <Item Offset="0150" value="0x02" size="0x01" name="Terminal Type" />
    <Item Offset="0151" value="0x07" size="0x01" name="Bits per second" />
    <Item Offset="0152" value="0x00" size="0x01" name="Flow Control" />
    <Rsvd Offset="0153" value="0x00" />
    <Rsvd Offset="0154" value="0x00" />
    <Rsvd Offset="0155" value="0x00" />
    <Rsvd Offset="0156" value="0x00" />
    <Item Offset="0157" value="0x01" size="0x01" name="PSS Support" />
    <Item Offset="0158" value="0x00" size="0x01" name="PSTATE Adjustment" />
    <Rsvd Offset="0159" value="0x02" />
    <Item Offset="015A" value="0x00" size="0x01" name="PPC Adjustment" />
    <Item Offset="015B" value="0x01" size="0x01" name="SVM Mode" />
    <Item Offset="015C" value="0x01" size="0x01" name="NX Mode" />
    <Item Offset="015D" value="0x01" size="0x01" name="C6 Mode" />
    <Item Offset="015E" value="0x01" size="0x01" name="CPB Mode" />
    <Rsvd Offset="015F" value="0x01" />
    <Rsvd Offset="0160" value="0x01" />
    <Item Offset="0161" value="0x00" size="0x01" name="STIBP Status" />
    <Rsvd Offset="0162" value="0x00" />
    <Rsvd Offset="0163" value="0x00" />
    <Rsvd Offset="0164" value="0x00" />
    <Rsvd Offset="0165" value="0x00" />
    <Rsvd Offset="0166" value="0x00" />
    <Rsvd Offset="0167" value="0x00" />
    <Rsvd Offset="0168" value="0x00" />
    <Rsvd Offset="0169" value="0x00" />
    <Rsvd Offset="016A" value="0x00" />
    <Rsvd Offset="016B" value="0x00" />
    <Rsvd Offset="016C" value="0x00" />
    <Rsvd Offset="016D" value="0x00" />
    <Rsvd Offset="016E" value="0x00" />
    <Rsvd Offset="016F" value="0x00" />
    <Rsvd Offset="0170" value="0x00" />
    <Rsvd Offset="0171" value="0x00" />
    <Rsvd Offset="0172" value="0x00" />
    <Rsvd Offset="0173" value="0x00" />
    <Rsvd Offset="0174" value="0x00" />
    <Rsvd Offset="0175" value="0x00" />
    <Rsvd Offset="0176" value="0x00" />
    <Rsvd Offset="0177" value="0x00" />
    <Rsvd Offset="0178" value="0x00" />
    <Rsvd Offset="0179" value="0x00" />
    <Rsvd Offset="017A" value="0x00" />
    <Rsvd Offset="017B" value="0x00" />
    <Rsvd Offset="017C" value="0x00" />
    <Rsvd Offset="017D" value="0x00" />
    <Rsvd Offset="017E" value="0x00" />
    <Rsvd Offset="017F" value="0x00" />
    <Rsvd Offset="0180" value="0x00" />
    <Item Offset="0181" value="0x01" size="0x01" name="Onboard Audio Controller" />
    <Item Offset="0182" value="0x01" size="0x01" name="Bank Interleaving" />
    <Item Offset="0183" value="0x01" size="0x01" name="Channel Interleaving" />
    <Item Offset="0184" value="0x00" size="0x01" name="Memory Clock" />
    <Item Offset="0185" value="0x00" size="0x01" name="Memory Clear" />
    <Rsvd Offset="0186" value="0x00" />
    <Item Offset="0187" value="0x00" size="0x01" name="Output Select" />
    <Item Offset="0188" value="0x00" size="0x01" name="Debug Port Table" />
    <Item Offset="0189" value="0x00" size="0x01" name="Debug Port Table 2" />
    <Item Offset="018A" value="0x0000" size="0x02" name="Keyboard Layout" />
    <Rsvd Offset="018B" value="0x00" />
    <Item Offset="018C" value="0x00" size="0x01" name="Select FMP Device Target" />
    <Item Offset="018D" value="0x00" size="0x01" name="CSM Support" />
    <Item Offset="018E" value="0x01" size="0x01" name="Option ROM Messages" />
    <Item Offset="018F" value="0x01" size="0x01" name="INT19 Trap Response" />
    <Rsvd Offset="0190" value="0x00" />
    <Item Offset="0191" value="0x00" size="0x01" name="HDD Connection Order" />
    <Item Offset="0192" value="0x00" size="0x01" name="GateA20 Active" />
    <Item Offset="0193" value="0x00" size="0x01" name="Boot option filter" />
    <Item Offset="0194" value="0x00" size="0x01" name="PXE Option ROM" />
    <Item Offset="0195" value="0x01" size="0x01" name="Storage" />
    <Item Offset="0196" value="0x02" size="0x01" name="Video" />
    <Item Offset="0197" value="0x01" size="0x01" name="Other PCI devices" />
    <Item Offset="0198" value="0x01" size="0x01" name="Setup Mode Select" />
    <Item Offset="0199" value="0x01" size="0x01" name="Unfreeze all devices" />
    <Item Offset="019A" value="0x00" size="0x01" name="Serial Port1 UART Type" />
    <Item Offset="019B" value="0x00" size="0x01" name="Serial Port2 UART Type" />
    <Item Offset="019C" value="0x02" size="0x01" name="Serial Port1 Address" />
    <Item Offset="019D" value="0x01" size="0x01" name="Serial Port2 Address" />
    <Rsvd Offset="019E" value="0x00" />
    <Rsvd Offset="019F" value="0x00" />
    <Rsvd Offset="01A0" value="0x00" />
    <Rsvd Offset="01A1" value="0x00" />
    <Rsvd Offset="01A2" value="0x00" />
    <Rsvd Offset="01A3" value="0x00" />
    <Rsvd Offset="01A4" value="0x00" />
    <Rsvd Offset="01A5" value="0x00" />
    <Rsvd Offset="01A6" value="0x00" />
    <Rsvd Offset="01A7" value="0x00" />
    <Rsvd Offset="01A8" value="0x00" />
    <Rsvd Offset="01A9" value="0x00" />
    <Rsvd Offset="01AA" value="0x00" />
    <Rsvd Offset="01AB" value="0x00" />
    <Rsvd Offset="01AC" value="0x00" />
    <Rsvd Offset="01AD" value="0x00" />
    <Rsvd Offset="01AE" value="0x00" />
    <Rsvd Offset="01AF" value="0x00" />
    <Rsvd Offset="01B0" value="0x00" />
    <Rsvd Offset="01B1" value="0x00" />
    <Rsvd Offset="01B2" value="0x00" />
    <Rsvd Offset="01B3" value="0x00" />
    <Rsvd Offset="01B4" value="0x00" />
    <Rsvd Offset="01B5" value="0x00" />
    <Rsvd Offset="01B6" value="0x00" />
    <Rsvd Offset="01B7" value="0x00" />
    <Rsvd Offset="01B8" value="0x00" />
    <Rsvd Offset="01B9" value="0x00" />
    <Rsvd Offset="01BA" value="0x00" />
    <Rsvd Offset="01BB" value="0x00" />
    <Rsvd Offset="01BC" value="0x00" />
    <Rsvd Offset="01BD" value="0x00" />
  </VarStore>
