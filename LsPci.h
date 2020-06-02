#ifndef _DC_LS_PCI_H_
#define _DC_LS_PCI_H_
#include <Protocol/PciIo.h>
#include <IndustryStandard/PciExpress40.h>
#include "Debug.h"
#include "Xml.h"
#include "PciId.h"
#include "String.h"
#define LSPCI_DEBUG(x)  
#define LS_PCI_VENDOR_ID   0x00  /* 16 bits */
#define LS_PCI_DEVICE_ID   0x02  /* 16 bits */
#define LS_PCI_COMMAND   0x04  /* 16 bits */
#define  LS_PCI_COMMAND_IO   0x1 /* Enable response in I/O space */
#define  LS_PCI_COMMAND_MEMORY 0x2 /* Enable response in Memory space */
#define  LS_PCI_COMMAND_MASTER 0x4 /* Enable bus mastering */
#define  LS_PCI_COMMAND_SPECIAL  0x8 /* Enable response to special cycles */
#define  LS_PCI_COMMAND_INVALIDATE 0x10  /* Use memory write and invalidate */
#define  LS_PCI_COMMAND_VGA_PALETTE 0x20 /* Enable palette snooping */
#define  LS_PCI_COMMAND_PARITY 0x40  /* Enable parity checking */
#define  LS_PCI_COMMAND_WAIT   0x80  /* Enable address/data stepping */
#define  LS_PCI_COMMAND_SERR 0x100 /* Enable SERR */
#define  LS_PCI_COMMAND_FAST_BACK  0x200 /* Enable back-to-back writes */
#define  LS_PCI_COMMAND_DISABLE_INTx 0x400 /* PCIE: Disable INTx interrupts */

#define LS_PCI_STATUS    0x06  /* 16 bits */
#define  LS_PCI_STATUS_INTx  0x08  /* PCIE: INTx interrupt pending */
#define  LS_PCI_STATUS_CAP_LIST  0x10  /* Support Capability List */
#define  LS_PCI_STATUS_66MHZ 0x20  /* Support 66 Mhz PCI 2.1 bus */
#define  LS_PCI_STATUS_UDF   0x40  /* Support User Definable Features [obsolete] */
#define  LS_PCI_STATUS_FAST_BACK 0x80  /* Accept fast-back to back */
#define  LS_PCI_STATUS_PARITY  0x100 /* Detected parity error */
#define  LS_PCI_STATUS_DEVSEL_MASK 0x600 /* DEVSEL timing */
#define    LS_PCI_STATUS_DEVSEL_FAST 0x000
#define    LS_PCI_STATUS_DEVSEL_MEDIUM 0x200
#define    LS_PCI_STATUS_DEVSEL_SLOW 0x400
#define  LS_PCI_STATUS_SIG_TARGET_ABORT 0x800 /* Set on target abort */
#define  LS_PCI_STATUS_REC_TARGET_ABORT 0x1000 /* Master ack of " */
#define  LS_PCI_STATUS_REC_MASTER_ABORT 0x2000 /* Set on master abort */
#define  LS_PCI_STATUS_SIG_SYSTEM_ERROR 0x4000 /* Set when we drive SERR */
#define  LS_PCI_STATUS_DETECTED_PARITY 0x8000 /* Set on parity error */
#define LS_PCI_CLASS_REVISION  0x08  /* High 24 bits are class, low 8 revision */
#define LS_PCI_REVISION_ID         0x08    /* Revision ID */
#define LS_PCI_CLASS_PROG          0x09    /* Reg. Level Programming Interface */
#define LS_PCI_CLASS_DEVICE        0x0a    /* Device class */

#define LS_PCI_CACHE_LINE_SIZE 0x0c  /* 8 bits */
#define LS_PCI_LATENCY_TIMER 0x0d  /* 8 bits */
#define LS_PCI_HEADER_TYPE   0x0e  /* 8 bits */
#define  LS_PCI_HEADER_TYPE_NORMAL 0
#define  LS_PCI_HEADER_TYPE_BRIDGE 1
#define  LS_PCI_HEADER_TYPE_CARDBUS 2

#define PCI_BIST    0x0f  /* 8 bits */
#define PCI_BIST_CODE_MASK  0x0f  /* Return result */
#define PCI_BIST_START    0x40  /* 1 to start BIST, 2 secs or less */
#define PCI_BIST_CAPABLE  0x80  /* 1 if BIST capable */
/* Header type 1 (PCI-to-PCI bridges) */
#define LS_PCI_PRIMARY_BUS   0x18  /* Primary bus number */
#define LS_PCI_SECONDARY_BUS 0x19  /* Secondary bus number */
#define LS_PCI_SUBORDINATE_BUS 0x1a  /* Highest bus number behind the bridge */
#define LS_PCI_SEC_LATENCY_TIMER 0x1b  /* Latency timer for secondary interface */
/*
 * Base addresses specify locations in memory or I/O space.
 * Decoded size can be determined by writing a value of
 * 0xffffffff to the register, and reading it back.  Only
 * 1 bits are decoded.
 */
#define LS_PCI_BASE_ADDRESS_0	0x10	/* 32 bits */
#define LS_PCI_BASE_ADDRESS_1	0x14	/* 32 bits [htype 0,1 only] */
#define LS_PCI_BASE_ADDRESS_2	0x18	/* 32 bits [htype 0 only] */
#define LS_PCI_BASE_ADDRESS_3	0x1c	/* 32 bits */
#define LS_PCI_BASE_ADDRESS_4	0x20	/* 32 bits */
#define LS_PCI_BASE_ADDRESS_5	0x24	/* 32 bits */
#define  LS_PCI_BASE_ADDRESS_SPACE	0x01	/* 0 = memory, 1 = I/O */
#define  LS_PCI_BASE_ADDRESS_SPACE_IO 0x01
#define  LS_PCI_BASE_ADDRESS_SPACE_MEMORY 0x00
#define  LS_PCI_BASE_ADDRESS_MEM_TYPE_MASK 0x06
#define  LS_PCI_BASE_ADDRESS_MEM_TYPE_32	0x00	/* 32 bit address */
#define  LS_PCI_BASE_ADDRESS_MEM_TYPE_1M	0x02	/* Below 1M [obsolete] */
#define  LS_PCI_BASE_ADDRESS_MEM_TYPE_64	0x04	/* 64 bit address */
#define  LS_PCI_BASE_ADDRESS_MEM_PREFETCH	0x08	/* prefetchable? */

/* Capability lists */

#define LS_PCI_CAP_LIST_ID		0	/* Capability ID */
#define  LS_PCI_CAP_ID_PM		0x01	/* Power Management */
#define  LS_PCI_CAP_ID_AGP		0x02	/* Accelerated Graphics Port */
#define  LS_PCI_CAP_ID_VPD		0x03	/* Vital Product Data */
#define  LS_PCI_CAP_ID_SLOTID	0x04	/* Slot Identification */
#define  LS_PCI_CAP_ID_MSI		0x05	/* Message Signaled Interrupts */
#define  LS_PCI_CAP_ID_CHSWP	0x06	/* CompactPCI HotSwap */
#define  LS_PCI_CAP_ID_PCIX        0x07    /* PCI-X */
#define  LS_PCI_CAP_ID_HT          0x08    /* HyperTransport */
#define  LS_PCI_CAP_ID_VNDR	0x09	/* Vendor specific */
#define  LS_PCI_CAP_ID_DBG		0x0A	/* Debug port */
#define  LS_PCI_CAP_ID_CCRC	0x0B	/* CompactPCI Central Resource Control */
#define  LS_PCI_CAP_ID_HOTPLUG	0x0C	/* PCI hot-plug */
#define  LS_PCI_CAP_ID_SSVID	0x0D	/* Bridge subsystem vendor/device ID */
#define  LS_PCI_CAP_ID_AGP3	0x0E	/* AGP 8x */
#define  LS_PCI_CAP_ID_SECURE	0x0F	/* Secure device (?) */
#define  LS_PCI_CAP_ID_EXP		0x10	/* PCI Express */
#define  LS_PCI_CAP_ID_MSIX	0x11	/* MSI-X */
#define  LS_PCI_CAP_ID_SATA	0x12	/* Serial-ATA HBA */
#define  LS_PCI_CAP_ID_AF		0x13	/* Advanced features of PCI devices integrated in PCIe root cplx */
#define  LS_PCI_CAP_ID_EA		0x14	/* Enhanced Allocation */
#define LS_PCI_CAP_LIST_NEXT	1	/* Next capability in the list */
#define LS_PCI_CAP_FLAGS		2	/* Capability defined flags (16 bits) */
/* bit 1 is reserved if address_space = 1 */
/* Capbility Offset*/
#define LS_PCI_CAPBILITY_POINTER_OFFSET 0x34
/* Power Management Registers */

#define  LS_PCI_PM_CAP_VER_MASK  0x0007  /* Version (2=PM1.1) */
#define  LS_PCI_PM_CAP_PME_CLOCK 0x0008  /* Clock required for PME generation */
#define  LS_PCI_PM_CAP_DSI   0x0020  /* Device specific initialization required */
#define  LS_PCI_PM_CAP_AUX_C_MASK  0x01c0  /* Maximum aux current required in D3cold */
#define  LS_PCI_PM_CAP_D1    0x0200  /* D1 power state support */
#define  LS_PCI_PM_CAP_D2    0x0400  /* D2 power state support */
#define  LS_PCI_PM_CAP_PME_D0  0x0800  /* PME can be asserted from D0 */
#define  LS_PCI_PM_CAP_PME_D1  0x1000  /* PME can be asserted from D1 */
#define  LS_PCI_PM_CAP_PME_D2  0x2000  /* PME can be asserted from D2 */
#define  LS_PCI_PM_CAP_PME_D3_HOT  0x4000  /* PME can be asserted from D3hot */
#define  LS_PCI_PM_CAP_PME_D3_COLD 0x8000  /* PME can be asserted from D3cold */
#define LS_PCI_PM_CTRL   4 /* PM control and status register */
#define  LS_PCI_PM_CTRL_STATE_MASK 0x0003  /* Current power state (D0 to D3) */
#define  LS_PCI_PM_CTRL_NO_SOFT_RST  0x0008  /* No Soft Reset from D3hot to D0 */
#define  LS_PCI_PM_CTRL_PME_ENABLE 0x0100  /* PME pin enable */
#define  LS_PCI_PM_CTRL_DATA_SEL_MASK  0x1e00  /* PM table data index */
#define  LS_PCI_PM_CTRL_DATA_SCALE_MASK  0x6000  /* PM table data scaling factor */
#define  LS_PCI_PM_CTRL_PME_STATUS 0x8000  /* PME pin status */
#define LS_PCI_PM_PPB_EXTENSIONS 6 /* PPB support extensions */
#define  LS_PCI_PM_PPB_B2_B3 0x40  /* If bridge enters D3hot, bus enters: 0=B3, 1=B2 */
#define  LS_PCI_PM_BPCC_ENABLE 0x80  /* Secondary bus is power managed */
#define LS_PCI_PM_DATA_REGISTER  7 /* PM table contents read here */
#define LS_PCI_PM_SIZEOF   8

/* PCI Express */
#define LS_PCI_EXP_FLAGS		0x2	/* Capabilities register */
#define LS_PCI_EXP_FLAGS_VERS	0x000f	/* Capability version */
#define LS_PCI_EXP_FLAGS_TYPE	0x00f0	/* Device/Port type */
#define  LS_PCI_EXP_TYPE_ENDPOINT	0x0	/* Express Endpoint */
#define  LS_PCI_EXP_TYPE_LEG_END	0x1	/* Legacy Endpoint */
#define  LS_PCI_EXP_TYPE_ROOT_PORT 0x4	/* Root Port */
#define  LS_PCI_EXP_TYPE_UPSTREAM	0x5	/* Upstream Port */
#define  LS_PCI_EXP_TYPE_DOWNSTREAM 0x6	/* Downstream Port */
#define  LS_PCI_EXP_TYPE_PCI_BRIDGE 0x7	/* PCIe to PCI/PCI-X Bridge */
#define  LS_PCI_EXP_TYPE_PCIE_BRIDGE 0x8	/* PCI/PCI-X to PCIe Bridge */
#define  LS_PCI_EXP_TYPE_ROOT_INT_EP 0x9	/* Root Complex Integrated Endpoint */
#define  LS_PCI_EXP_TYPE_ROOT_EC 0xa	/* Root Complex Event Collector */
#define LS_PCI_EXP_FLAGS_SLOT	0x0100	/* Slot implemented */
#define LS_PCI_EXP_FLAGS_IRQ	0x3e00	/* Interrupt message number */
#define LS_PCI_EXP_DEVCAP		0x4	/* Device capabilities */
#define  LS_PCI_EXP_DEVCAP_PAYLOAD	0x07	/* Max_Payload_Size */
#define  LS_PCI_EXP_DEVCAP_PHANTOM	0x18	/* Phantom functions */
#define  LS_PCI_EXP_DEVCAP_EXT_TAG	0x20	/* Extended tags */
#define  LS_PCI_EXP_DEVCAP_L0S	0x1c0	/* L0s Acceptable Latency */
#define  LS_PCI_EXP_DEVCAP_L1	0xe00	/* L1 Acceptable Latency */
#define  LS_PCI_EXP_DEVCAP_ATN_BUT	0x1000	/* Attention Button Present */
#define  LS_LS_PCI_EXP_DEVCAP_ATN_IND	0x2000	/* Attention Indicator Present */
#define  LS_PCI_EXP_DEVCAP_PWR_IND	0x4000	/* Power Indicator Present */
#define  LS_PCI_EXP_DEVCAP_RBE	0x8000	/* Role-Based Error Reporting */
#define  LS_PCI_EXP_DEVCAP_PWR_VAL	0x3fc0000 /* Slot Power Limit Value */
#define  LS_PCI_EXP_DEVCAP_PWR_SCL	0xc000000 /* Slot Power Limit Scale */
#define  LS_PCI_EXP_DEVCAP_FLRESET	0x10000000 /* Function-Level Reset */
#define LS_PCI_EXP_DEVCTL		0x8	/* Device Control */
#define  LS_PCI_EXP_DEVCTL_CERE	0x0001	/* Correctable Error Reporting En. */
#define  LS_PCI_EXP_DEVCTL_NFERE	0x0002	/* Non-Fatal Error Reporting Enable */
#define  LS_PCI_EXP_DEVCTL_FERE	0x0004	/* Fatal Error Reporting Enable */
#define  LS_PCI_EXP_DEVCTL_URRE	0x0008	/* Unsupported Request Reporting En. */
#define  LS_PCI_EXP_DEVCTL_RELAXED	0x0010	/* Enable Relaxed Ordering */
#define  LS_PCI_EXP_DEVCTL_PAYLOAD	0x00e0	/* Max_Payload_Size */
#define  LS_PCI_EXP_DEVCTL_EXT_TAG	0x0100	/* Extended Tag Field Enable */
#define  LS_PCI_EXP_DEVCTL_PHANTOM	0x0200	/* Phantom Functions Enable */
#define  LS_PCI_EXP_DEVCTL_AUX_PME	0x0400	/* Auxiliary Power PM Enable */
#define  LS_PCI_EXP_DEVCTL_NOSNOOP	0x0800	/* Enable No Snoop */
#define  LS_PCI_EXP_DEVCTL_READRQ	0x7000	/* Max_Read_Request_Size */
#define  LS_PCI_EXP_DEVCTL_BCRE	0x8000	/* Bridge Configuration Retry Enable */
#define  LS_PCI_EXP_DEVCTL_FLRESET	0x8000	/* Function-Level Reset [bit shared with BCRE] */
#define LS_PCI_EXP_DEVSTA		0xa	/* Device Status */
#define  LS_PCI_EXP_DEVSTA_CED	0x01	/* Correctable Error Detected */
#define  LS_PCI_EXP_DEVSTA_NFED	0x02	/* Non-Fatal Error Detected */
#define  LS_PCI_EXP_DEVSTA_FED	0x04	/* Fatal Error Detected */
#define  LS_PCI_EXP_DEVSTA_URD	0x08	/* Unsupported Request Detected */
#define  LS_PCI_EXP_DEVSTA_AUXPD	0x10	/* AUX Power Detected */
#define  LS_PCI_EXP_DEVSTA_TRPND	0x20	/* Transactions Pending */
#define LS_PCI_EXP_LNKCAP		0xc	/* Link Capabilities */
#define  LS_PCI_EXP_LNKCAP_SPEED	0x0000f	/* Maximum Link Speed */
#define  LS_PCI_EXP_LNKCAP_WIDTH	0x003f0	/* Maximum Link Width */
#define  LS_PCI_EXP_LNKCAP_ASPM	0x00c00	/* Active State Power Management */
#define  LS_PCI_EXP_LNKCAP_L0S	0x07000	/* L0s Exit Latency */
#define  LS_PCI_EXP_LNKCAP_L1	0x38000	/* L1 Exit Latency */
#define  LS_PCI_EXP_LNKCAP_CLOCKPM	0x40000	/* Clock Power Management */
#define  LS_PCI_EXP_LNKCAP_SURPRISE 0x80000 /* Surprise Down Error Reporting */
#define  LS_PCI_EXP_LNKCAP_DLLA	0x100000 /* Data Link Layer Active Reporting */
#define  LS_PCI_EXP_LNKCAP_LBNC	0x200000 /* Link Bandwidth Notification Capability */
#define  LS_PCI_EXP_LNKCAP_AOC 	0x400000 /* ASPM Optionality Compliance */
#define  LS_PCI_EXP_LNKCAP_PORT	0xff000000 /* Port Number */
#define LS_PCI_EXP_LNKCTL		0x10	/* Link Control */
#define  LS_PCI_EXP_LNKCTL_ASPM	0x0003	/* ASPM Control */
#define  LS_PCI_EXP_LNKCTL_RCB	0x0008	/* Read Completion Boundary */
#define  LS_PCI_EXP_LNKCTL_DISABLE	0x0010	/* Link Disable */
#define  LS_PCI_EXP_LNKCTL_RETRAIN	0x0020	/* Retrain Link */
#define  LS_PCI_EXP_LNKCTL_CLOCK	0x0040	/* Common Clock Configuration */
#define  LS_PCI_EXP_LNKCTL_XSYNCH	0x0080	/* Extended Synch */
#define  LS_PCI_EXP_LNKCTL_CLOCKPM	0x0100	/* Clock Power Management */
#define  LS_PCI_EXP_LNKCTL_HWAUTWD	0x0200	/* Hardware Autonomous Width Disable */
#define  LS_PCI_EXP_LNKCTL_BWMIE	0x0400	/* Bandwidth Mgmt Interrupt Enable */
#define  LS_PCI_EXP_LNKCTL_AUTBWIE	0x0800	/* Autonomous Bandwidth Mgmt Interrupt Enable */
#define LS_PCI_EXP_LNKSTA		0x12	/* Link Status */
#define  LS_PCI_EXP_LNKSTA_SPEED	0x000f	/* Negotiated Link Speed */
#define  LS_PCI_EXP_LNKSTA_WIDTH	0x03f0	/* Negotiated Link Width */
#define  LS_PCI_EXP_LNKSTA_TR_ERR	0x0400	/* Training Error (obsolete) */
#define  LS_PCI_EXP_LNKSTA_TRAIN	0x0800	/* Link Training */
#define  LS_PCI_EXP_LNKSTA_SL_CLK	0x1000	/* Slot Clock Configuration */
#define  LS_PCI_EXP_LNKSTA_DL_ACT	0x2000	/* Data Link Layer in DL_Active State */
#define  LS_PCI_EXP_LNKSTA_BWMGMT	0x4000	/* Bandwidth Mgmt Status */
#define  LS_PCI_EXP_LNKSTA_AUTBW	0x8000	/* Autonomous Bandwidth Mgmt Status */
#define LS_PCI_EXP_SLTCAP		0x14	/* Slot Capabilities */
#define  LS_PCI_EXP_SLTCAP_ATNB	0x0001	/* Attention Button Present */
#define  LS_PCI_EXP_SLTCAP_PWRC	0x0002	/* Power Controller Present */
#define  LS_PCI_EXP_SLTCAP_MRL	0x0004	/* MRL Sensor Present */
#define  LS_PCI_EXP_SLTCAP_ATNI	0x0008	/* Attention Indicator Present */
#define  LS_PCI_EXP_SLTCAP_PWRI	0x0010	/* Power Indicator Present */
#define  LS_PCI_EXP_SLTCAP_HPS	0x0020	/* Hot-Plug Surprise */
#define  LS_PCI_EXP_SLTCAP_HPC	0x0040	/* Hot-Plug Capable */
#define  LS_PCI_EXP_SLTCAP_PWR_VAL	0x00007f80 /* Slot Power Limit Value */
#define  LS_PCI_EXP_SLTCAP_PWR_SCL	0x00018000 /* Slot Power Limit Scale */
#define  LS_PCI_EXP_SLTCAP_INTERLOCK 0x020000 /* Electromechanical Interlock Present */
#define  LS_PCI_EXP_SLTCAP_NOCMDCOMP 0x040000 /* No Command Completed Support */
#define  LS_PCI_EXP_SLTCAP_PSN	0xfff80000 /* Physical Slot Number */
#define LS_PCI_EXP_SLTCTL		0x18	/* Slot Control */
#define  LS_PCI_EXP_SLTCTL_ATNB	0x0001	/* Attention Button Pressed Enable */
#define  LS_PCI_EXP_SLTCTL_PWRF	0x0002	/* Power Fault Detected Enable */
#define  LS_PCI_EXP_SLTCTL_MRLS	0x0004	/* MRL Sensor Changed Enable */
#define  LS_PCI_EXP_SLTCTL_PRSD	0x0008	/* Presence Detect Changed Enable */
#define  LS_PCI_EXP_SLTCTL_CMDC	0x0010	/* Command Completed Interrupt Enable */
#define  LS_PCI_EXP_SLTCTL_HPIE	0x0020	/* Hot-Plug Interrupt Enable */
#define  LS_PCI_EXP_SLTCTL_ATNI	0x00c0	/* Attention Indicator Control */
#define  LS_PCI_EXP_SLTCTL_PWRI	0x0300	/* Power Indicator Control */
#define  LS_PCI_EXP_SLTCTL_PWRC	0x0400	/* Power Controller Control */
#define  LS_PCI_EXP_SLTCTL_INTERLOCK 0x0800 /* Electromechanical Interlock Control */
#define  LS_PCI_EXP_SLTCTL_LLCHG	0x1000	/* Data Link Layer State Changed Enable */
#define LS_PCI_EXP_SLTSTA		0x1a	/* Slot Status */
#define  LS_PCI_EXP_SLTSTA_ATNB	0x0001	/* Attention Button Pressed */
#define  LS_PCI_EXP_SLTSTA_PWRF	0x0002	/* Power Fault Detected */
#define  LS_PCI_EXP_SLTSTA_MRLS	0x0004	/* MRL Sensor Changed */
#define  LS_PCI_EXP_SLTSTA_PRSD	0x0008	/* Presence Detect Changed */
#define  LS_PCI_EXP_SLTSTA_CMDC	0x0010	/* Command Completed */
#define  LS_PCI_EXP_SLTSTA_MRL_ST	0x0020	/* MRL Sensor State */
#define  LS_PCI_EXP_SLTSTA_PRES	0x0040	/* Presence Detect State */
#define  LS_PCI_EXP_SLTSTA_INTERLOCK 0x0080 /* Electromechanical Interlock Status */
#define  LS_PCI_EXP_SLTSTA_LLCHG	0x0100	/* Data Link Layer State Changed */
#define LS_PCI_EXP_RTCTL		0x1c	/* Root Control */
#define  LS_PCI_EXP_RTCTL_SECEE	0x0001	/* System Error on Correctable Error */
#define  LS_PCI_EXP_RTCTL_SENFEE	0x0002	/* System Error on Non-Fatal Error */
#define  LS_PCI_EXP_RTCTL_SEFEE	0x0004	/* System Error on Fatal Error */
#define  LS_PCI_EXP_RTCTL_PMEIE	0x0008	/* PME Interrupt Enable */
#define  LS_PCI_EXP_RTCTL_CRSVIS	0x0010	/* Configuration Request Retry Status Visible to SW */
#define LS_PCI_EXP_RTCAP		0x1e	/* Root Capabilities */
#define  LS_PCI_EXP_RTCAP_CRSVIS	0x0001	/* Configuration Request Retry Status Visible to SW */
#define LS_PCI_EXP_RTSTA		0x20	/* Root Status */
#define  LS_PCI_EXP_RTSTA_PME_REQID   0x0000ffff /* PME Requester ID */
#define  LS_PCI_EXP_RTSTA_PME_STATUS  0x00010000 /* PME Status */
#define  LS_PCI_EXP_RTSTA_PME_PENDING 0x00020000 /* PME is Pending */
#define LS_PCI_EXP_DEVCAP2			0x24	/* Device capabilities 2 */
#define  LS_PCI_EXP_DEVCAP2_LTR		0x0800	/* LTR supported */
#define  LS_PCI_EXP_DEVCAP2_OBFF(x)	(((x) >> 18) & 3) /* OBFF supported */
#define LS_PCI_EXP_DEVCTL2			0x28	/* Device Control */
#define  LS_PCI_EXP_DEV2_TIMEOUT_RANGE(x)	((x) & 0xf) /* Completion Timeout Ranges Supported */
#define  LS_PCI_EXP_DEV2_TIMEOUT_VALUE(x)	((x) & 0xf) /* Completion Timeout Value */
#define  LS_PCI_EXP_DEV2_TIMEOUT_DIS	0x0010	/* Completion Timeout Disable Supported */
#define  LS_PCI_EXP_DEV2_ATOMICOP_REQUESTER_EN	0x0040	/* AtomicOp RequesterEnable */
#define  LS_PCI_EXP_DEV2_ATOMICOP_EGRESS_BLOCK	0x0080	/* AtomicOp Egress Blocking */
#define  LS_PCI_EXP_DEV2_ARI		0x0020	/* ARI Forwarding */
#define  LS_PCI_EXP_DEVCAP2_ATOMICOP_ROUTING	0x0040	/* AtomicOp Routing Supported */
#define  LS_PCI_EXP_DEVCAP2_32BIT_ATOMICOP_COMP	0x0080	/* 32bit AtomicOp Completer Supported */
#define  LS_PCI_EXP_DEVCAP2_64BIT_ATOMICOP_COMP	0x0100	/* 64bit AtomicOp Completer Supported */
#define  LS_PCI_EXP_DEVCAP2_128BIT_CAS_COMP	0x0200	/* 128bit CAS Completer Supported */
#define  LS_PCI_EXP_DEV2_LTR		0x0400	/* LTR enabled */
#define  LS_PCI_EXP_DEV2_OBFF(x)		(((x) >> 13) & 3) /* OBFF enabled */
#define LS_PCI_EXP_DEVSTA2			0x2a	/* Device Status */
#define LS_PCI_EXP_LNKCAP2			0x2c	/* Link Capabilities */
#define LS_PCI_EXP_LNKCTL2			0x30	/* Link Control */
#define  LS_PCI_EXP_LNKCTL2_SPEED(x)	((x) & 0xf) /* Target Link Speed */
#define  LS_PCI_EXP_LNKCTL2_CMPLNC		0x0010	/* Enter Compliance */
#define  LS_PCI_EXP_LNKCTL2_SPEED_DIS	0x0020	/* Hardware Autonomous Speed Disable */
#define  LS_PCI_EXP_LNKCTL2_DEEMPHASIS(x)	(((x) >> 6) & 1) /* Selectable De-emphasis */
#define  LS_PCI_EXP_LNKCTL2_MARGIN(x)	(((x) >> 7) & 7) /* Transmit Margin */
#define  LS_PCI_EXP_LNKCTL2_MOD_CMPLNC	0x0400	/* Enter Modified Compliance */
#define  LS_PCI_EXP_LNKCTL2_CMPLNC_SOS	0x0800	/* Compliance SOS */
#define  LS_PCI_EXP_LNKCTL2_COM_DEEMPHASIS(x) (((x) >> 12) & 0xf) /* Compliance De-emphasis */
#define LS_PCI_EXP_LNKSTA2			0x32	/* Link Status */
#define  LS_PCI_EXP_LINKSTA2_DEEMPHASIS(x)	((x) & 1)	/* Current De-emphasis Level */
#define  LS_PCI_EXP_LINKSTA2_EQU_COMP	0x02	/* Equalization Complete */
#define  LS_PCI_EXP_LINKSTA2_EQU_PHASE1	0x04	/* Equalization Phase 1 Successful */
#define  LS_PCI_EXP_LINKSTA2_EQU_PHASE2	0x08	/* Equalization Phase 2 Successful */
#define  LS_PCI_EXP_LINKSTA2_EQU_PHASE3	0x10	/* Equalization Phase 3 Successful */
#define  LS_PCI_EXP_LINKSTA2_EQU_REQ	0x20	/* Link Equalization Request */
#define LS_PCI_EXP_SLTCAP2			0x34	/* Slot Capabilities */
#define LS_PCI_EXP_SLTCTL2			0x38	/* Slot Control */
#define LS_PCI_EXP_SLTSTA2			0x3a	/* Slot Status */
#pragma pack(1)
#define FLAG(x,y) ((x & y) ? "+" : "-")
#define FLAGX(x,y) ((x & y) ? 1 : 0)
typedef struct _PciCapbility {
  UINT32        Signature;
  UINT8         CapId;
  UINT16        Offset;
  CHAR8         *pName;
  VOID          *ptr;
  LIST_ENTRY    Link;
} PciCapbility;

#define PCI_CAP_SIGNATURE  SIGNATURE_32 ('P', 'C', 'A', 'P')
//
// CR Macro used to get the device capbility
//
#define PCI_CAP_FROM_LINK(a)  CR (a, PciCapbility, Link, PCI_CAP_SIGNATURE)


typedef struct _PciVidDid {
  CHAR8   *pVidName;
  CHAR8   *pDidName;
}  PciVidDid;


typedef struct _PciDevice {
  UINT32        		                    Signature;
  EFI_HANDLE			                    Handle;
  EFI_PCI_IO_PROTOCOL                       *This;
  UINT8                                     *pData;
  LIST_ENTRY    		                    Link;
  LIST_ENTRY                                List;
  LIST_ENTRY    		                    CapList;
} PciDevice;

#define PCI_DEVICE_SIGNATURE  SIGNATURE_32 ('P', 'C', 'I', 'D')

// CR Macro used to get the device
//
#define PCI_DEVICE_FROM_LINK(a)  CR (a, PciDevice, Link, PCI_DEVICE_SIGNATURE)

#define LSPCI_BDF_TO_U32(a,b,c) ((UINT32)(((a&0xff)<<16)|((b&0xff)<<8)|(c&0xff)))
#define LSPCI_U32_B(a) ((UINT8)(a >> 16))
#define LSPCI_U32_D(b) ((UINT8)(b >> 8))
#define LSPCI_U32_F(c) ((UINT8)(c))

#pragma pack() 
VOID
Lspci_Xml_Write (
  IN XML_ELEMENT *pElement
  );
#endif