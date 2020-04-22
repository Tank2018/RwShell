
#include "PciId.h"

PciVendorString mVendorList[] = {


  {0x0001,"SafeNet (wrong ID)"},

  {0x0010,"Allied Telesis, Inc (Wrong ID)"},

  {0x001c,"PEAK-System Technik GmbH"},

  {0x003d,"Lockheed Martin-Marietta Corp"},

  {0x0059,"Tiger Jet Network Inc. (Wrong ID)"},

  {0x0070,"Hauppauge computer works Inc."},

  {0x0071,"Nebula Electronics Ltd."},

  {0x0095,"Silicon Image, Inc. (Wrong ID)"},

  {0x00a7,"Teles AG (Wrong ID)"},

  {0x0100,"Ncipher Corp Ltd"},

  {0x0123,"General Dynamics"},

  {0x018a,"LevelOne"},

  {0x021b,"Compaq Computer Corporation"},

  {0x0270,"Hauppauge computer works Inc. (Wrong ID)"},

  {0x0291,"Davicom Semiconductor, Inc. (Wrong ID)"},

  {0x02ac,"SpeedStream"},

  {0x02e0,"XFX Pine Group Inc. (Wrong ID)"},

  {0x0303,"Hewlett-Packard Company (Wrong ID)"},

  {0x0308,"ZyXEL Communications Corporation (Wrong ID)"},

  {0x0315,"SK-Electronics Co., Ltd."},

  {0x0357,"TTTech Computertechnik AG (Wrong ID)"},

  {0x0432,"SCM Microsystems, Inc."},

  {0x0675,"Dynalink"},

  {0x0721,"Sapphire, Inc."},

  {0x0777,"Ubiquiti Networks, Inc."},

  {0x0795,"Wired Inc."},

  {0x07d1,"D-Link System Inc"},

  {0x0925,"VIA Technologies, Inc. (Wrong ID)"},

  {0x0a89,"BREA Technologies Inc"},

  {0x0b0b,"Rhino Equipment Corp."},

  {0x0e11,"Compaq Computer Corporation"},

  {0x0e55,"HaSoTec GmbH"},

  {0x0eac,"SHF Communication Technologies AG"},

  {0x0f62,"Acrox Technologies Co., Ltd."},

  {0x1000,"LSI Logic / Symbios Logic"},

  {0x1001,"Kolter Electronic"},

  {0x1002,"Advanced Micro Devices, Inc. [AMD/ATI]"},

  {0x1003,"ULSI Systems"},

  {0x1004,"VLSI Technology Inc"},

  {0x1005,"Avance Logic Inc. [ALI]"},

  {0x1006,"Reply Group"},

  {0x1007,"NetFrame Systems Inc"},

  {0x1008,"Epson"},

  {0x100a,"Phoenix Technologies"},

  {0x100b,"National Semiconductor Corporation"},

  {0x100c,"Tseng Labs Inc"},

  {0x100d,"AST Research Inc"},

  {0x100e,"Weitek"},

  {0x1010,"Video Logic, Ltd."},

  {0x1011,"Digital Equipment Corporation"},

  {0x1012,"Micronics Computers Inc"},

  {0x1013,"Cirrus Logic"},

  {0x1014,"IBM"},

  {0x1015,"LSI Logic Corp of Canada"},

  {0x1016,"ICL Personal Systems"},

  {0x1017,"SPEA Software AG"},

  {0x1018,"Unisys Systems"},

  {0x1019,"Elitegroup Computer Systems"},

  {0x101a,"AT&T GIS (NCR)"},

  {0x101b,"Vitesse Semiconductor"},

  {0x101c,"Western Digital"},

  {0x101d,"Maxim Integrated Products"},

  {0x101e,"American Megatrends Inc."},

  {0x101f,"PictureTel"},

  {0x1020,"Hitachi Computer Products"},

  {0x1021,"OKI Electric Industry Co. Ltd."},

  {0x1022,"Advanced Micro Devices, Inc. [AMD]"},

  {0x1023,"Trident Microsystems"},

  {0x1024,"Zenith Data Systems"},

  {0x1025,"Acer Incorporated [ALI]"},

  {0x1028,"Dell"},

  {0x1029,"Siemens Nixdorf IS"},

  {0x102a,"LSI Logic"},

  {0x102b,"Matrox Electronics Systems Ltd."},

  {0x102c,"Chips and Technologies"},

  {0x102d,"Wyse Technology Inc."},

  {0x102e,"Olivetti Advanced Technology"},

  {0x102f,"Toshiba America"},

  {0x1030,"TMC Research"},

  {0x1031,"Miro Computer Products AG"},

  {0x1032,"Compaq"},

  {0x1033,"NEC Corporation"},

  {0x1034,"Framatome Connectors USA Inc."},

  {0x1035,"Comp. & Comm. Research Lab"},

  {0x1036,"Future Domain Corp."},

  {0x1037,"Hitachi Micro Systems"},

  {0x1038,"AMP, Inc"},

  {0x1039,"Silicon Integrated Systems [SiS]"},

  {0x103a,"Seiko Epson Corporation"},

  {0x103b,"Tatung Corp. Of America"},

  {0x103c,"Hewlett-Packard Company"},

  {0x103e,"Solliday Engineering"},

  {0x103f,"Synopsys/Logic Modeling Group"},

  {0x1040,"Accelgraphics Inc."},

  {0x1041,"Computrend"},

  {0x1042,"Micron"},

  {0x1043,"ASUSTeK Computer Inc."},

  {0x1044,"Adaptec (formerly DPT)"},

  {0x1045,"OPTi Inc."},

  {0x1046,"IPC Corporation, Ltd."},

  {0x1047,"Genoa Systems Corp"},

  {0x1048,"Elsa AG"},

  {0x1049,"Fountain Technologies, Inc."},

  {0x104a,"STMicroelectronics"},

  {0x104b,"BusLogic"},

  {0x104c,"Texas Instruments"},

  {0x104d,"Sony Corporation"},

  {0x104e,"Oak Technology, Inc"},

  {0x104f,"Co-time Computer Ltd"},

  {0x1050,"Winbond Electronics Corp"},

  {0x1051,"Anigma, Inc."},

  {0x1052,"?Young Micro Systems"},

  {0x1053,"Young Micro Systems"},

  {0x1054,"Hitachi, Ltd"},

  {0x1055,"Efar Microsystems"},

  {0x1056,"ICL"},

  {0x1057,"Motorola"},

  {0x1058,"Electronics & Telecommunications RSH"},

  {0x1059,"Kontron"},

  {0x105a,"Promise Technology, Inc."},

  {0x105b,"Foxconn International, Inc."},

  {0x105c,"Wipro Infotech Limited"},

  {0x105d,"Number 9 Computer Company"},

  {0x105e,"Vtech Computers Ltd"},

  {0x105f,"Infotronic America Inc"},

  {0x1060,"United Microelectronics [UMC]"},

  {0x1061,"I.I.T."},

  {0x1062,"Maspar Computer Corp"},

  {0x1063,"Ocean Office Automation"},

  {0x1064,"Alcatel"},

  {0x1065,"Texas Microsystems"},

  {0x1066,"PicoPower Technology"},

  {0x1067,"Mitsubishi Electric"},

  {0x1068,"Diversified Technology"},

  {0x1069,"Mylex Corporation"},

  {0x106a,"Aten Research Inc"},

  {0x106b,"Apple Inc."},

  {0x106c,"Hynix Semiconductor"},

  {0x106d,"Sequent Computer Systems"},

  {0x106e,"DFI, Inc"},

  {0x106f,"City Gate Development Ltd"},

  {0x1070,"Daewoo Telecom Ltd"},

  {0x1071,"Mitac"},

  {0x1072,"GIT Co Ltd"},

  {0x1073,"Yamaha Corporation"},

  {0x1074,"NexGen Microsystems"},

  {0x1075,"Advanced Integrations Research"},

  {0x1076,"Chaintech Computer Co. Ltd"},

  {0x1077,"QLogic Corp."},

  {0x1078,"Cyrix Corporation"},

  {0x1079,"I-Bus"},

  {0x107a,"NetWorth"},

  {0x107b,"Gateway, Inc."},

  {0x107c,"LG Electronics [Lucky Goldstar Co. Ltd]"},

  {0x107d,"LeadTek Research Inc."},

  {0x107e,"Interphase Corporation"},

  {0x107f,"Data Technology Corporation"},

  {0x1080,"Contaq Microsystems"},

  {0x1081,"Supermac Technology"},

  {0x1082,"EFA Corporation of America"},

  {0x1083,"Forex Computer Corporation"},

  {0x1084,"Parador"},

  {0x1086,"J. Bond Computer Systems"},

  {0x1087,"Cache Computer"},

  {0x1088,"Microcomputer Systems (M) Son"},

  {0x1089,"Data General Corporation"},

  {0x108a,"SBS Technologies"},

  {0x108c,"Oakleigh Systems Inc."},

  {0x108d,"Olicom"},

  {0x108e,"Oracle/SUN"},

  {0x108f,"Systemsoft"},

  {0x1090,"Compro Computer Services, Inc."},

  {0x1091,"Intergraph Corporation"},

  {0x1092,"Diamond Multimedia Systems"},

  {0x1093,"National Instruments"},

  {0x1094,"First International Computers [FIC]"},

  {0x1095,"Silicon Image, Inc."},

  {0x1096,"Alacron"},

  {0x1097,"Appian Technology"},

  {0x1098,"Quantum Designs (H.K.) Ltd"},

  {0x1099,"Samsung Electronics Co., Ltd"},

  {0x109a,"Packard Bell"},

  {0x109b,"Gemlight Computer Ltd."},

  {0x109c,"Megachips Corporation"},

  {0x109d,"Zida Technologies Ltd."},

  {0x109e,"Brooktree Corporation"},

  {0x109f,"Trigem Computer Inc."},

  {0x10a0,"Meidensha Corporation"},

  {0x10a1,"Juko Electronics Ind. Co. Ltd"},

  {0x10a2,"Quantum Corporation"},

  {0x10a3,"Everex Systems Inc"},

  {0x10a4,"Globe Manufacturing Sales"},

  {0x10a5,"Smart Link Ltd."},

  {0x10a6,"Informtech Industrial Ltd."},

  {0x10a7,"Benchmarq Microelectronics"},

  {0x10a8,"Sierra Semiconductor"},

  {0x10a9,"Silicon Graphics Intl. Corp."},

  {0x10aa,"ACC Microelectronics"},

  {0x10ab,"Digicom"},

  {0x10ac,"Honeywell IAC"},

  {0x10ad,"Symphony Labs"},

  {0x10ae,"Cornerstone Technology"},

  {0x10af,"Micro Computer Systems Inc"},

  {0x10b0,"CardExpert Technology"},

  {0x10b1,"Cabletron Systems Inc"},

  {0x10b2,"Raytheon Company"},

  {0x10b3,"Databook Inc"},

  {0x10b4,"STB Systems Inc"},

  {0x10b5,"PLX Technology, Inc."},

  {0x10b6,"Madge Networks"},

  {0x10b7,"3Com Corporation"},

  {0x10b8,"Standard Microsystems Corp [SMC]"},

  {0x10b9,"ULi Electronics Inc."},

  {0x10ba,"Mitsubishi Electric Corp."},

  {0x10bb,"Dapha Electronics Corporation"},

  {0x10bc,"Advanced Logic Research"},

  {0x10bd,"Surecom Technology"},

  {0x10be,"Tseng Labs International Co."},

  {0x10bf,"Most Inc"},

  {0x10c0,"Boca Research Inc."},

  {0x10c1,"ICM Co., Ltd."},

  {0x10c2,"Auspex Systems Inc."},

  {0x10c3,"Samsung Semiconductors, Inc."},

  {0x10c4,"Award Software International Inc."},

  {0x10c5,"Xerox Corporation"},

  {0x10c6,"Rambus Inc."},

  {0x10c7,"Media Vision"},

  {0x10c8,"Neomagic Corporation"},

  {0x10c9,"Dataexpert Corporation"},

  {0x10ca,"Fujitsu Microelectr., Inc."},

  {0x10cb,"Omron Corporation"},

  {0x10cc,"Mai Logic Incorporated"},

  {0x10cd,"Advanced System Products, Inc"},

  {0x10ce,"Radius"},

  {0x10cf,"Fujitsu Limited."},

  {0x10d1,"FuturePlus Systems Corp."},

  {0x10d2,"Molex Incorporated"},

  {0x10d3,"Jabil Circuit Inc"},

  {0x10d4,"Hualon Microelectronics"},

  {0x10d5,"Autologic Inc."},

  {0x10d6,"Cetia"},

  {0x10d7,"BCM Advanced Research"},

  {0x10d8,"Advanced Peripherals Labs"},

  {0x10d9,"Macronix, Inc. [MXIC]"},

  {0x10da,"Compaq IPG-Austin"},

  {0x10db,"Rohm LSI Systems, Inc."},

  {0x10dc,"CERN/ECP/EDU"},

  {0x10dd,"Evans & Sutherland"},

  {0x10de,"NVIDIA Corporation"},

  {0x10df,"Emulex Corporation"},

  {0x10e0,"Integrated Micro Solutions Inc."},

  {0x10e1,"Tekram Technology Co.,Ltd."},

  {0x10e2,"Aptix Corporation"},

  {0x10e3,"Tundra Semiconductor Corp."},

  {0x10e4,"Tandem Computers"},

  {0x10e5,"Micro Industries Corporation"},

  {0x10e6,"Gainbery Computer Products Inc."},

  {0x10e7,"Vadem"},

  {0x10e8,"Applied Micro Circuits Corp."},

  {0x10e9,"Alps Electric Co., Ltd."},

  {0x10ea,"Integraphics"},

  {0x10eb,"Artists Graphics"},

  {0x10ec,"Realtek Semiconductor Co., Ltd."},

  {0x10ed,"Ascii Corporation"},

  {0x10ee,"Xilinx Corporation"},

  {0x10ef,"Racore Computer Products, Inc."},

  {0x10f0,"Peritek Corporation"},

  {0x10f1,"Tyan Computer"},

  {0x10f2,"Achme Computer, Inc."},

  {0x10f3,"Alaris, Inc."},

  {0x10f4,"S-MOS Systems, Inc."},

  {0x10f5,"NKK Corporation"},

  {0x10f6,"Creative Electronic Systems SA"},

  {0x10f7,"Matsushita Electric Industrial Co., Ltd."},

  {0x10f8,"Altos India Ltd"},

  {0x10f9,"PC Direct"},

  {0x10fa,"Truevision"},

  {0x10fb,"Thesys Gesellschaft fuer Mikroelektronik mbH"},

  {0x10fc,"I-O Data Device, Inc."},

  {0x10fd,"Soyo Computer, Inc"},

  {0x10fe,"Fast Multimedia AG"},

  {0x10ff,"NCube"},

  {0x1100,"Jazz Multimedia"},

  {0x1101,"Initio Corporation"},

  {0x1102,"Creative Labs"},

  {0x1103,"HighPoint Technologies, Inc."},

  {0x1104,"RasterOps Corp."},

  {0x1105,"Sigma Designs, Inc."},

  {0x1106,"VIA Technologies, Inc."},

  {0x1107,"Stratus Computers"},

  {0x1108,"Proteon, Inc."},

  {0x1109,"Cogent Data Technologies, Inc."},

  {0x110a,"Siemens AG"},

  {0x110b,"Chromatic Research Inc."},

  {0x110c,"Mini-Max Technology, Inc."},

  {0x110d,"Znyx Advanced Systems"},

  {0x110e,"CPU Technology"},

  {0x110f,"Ross Technology"},

  {0x1110,"Powerhouse Systems"},

  {0x1111,"Santa Cruz Operation"},

  {0x1112,"Osicom Technologies Inc"},

  {0x1113,"Accton Technology Corporation"},

  {0x1114,"Atmel Corporation"},

  {0x1115,"3D Labs"},

  {0x1116,"Data Translation"},

  {0x1117,"Datacube, Inc"},

  {0x1118,"Berg Electronics"},

  {0x1119,"ICP Vortex Computersysteme GmbH"},

  {0x111a,"Efficient Networks, Inc"},

  {0x111b,"Teledyne Electronic Systems"},

  {0x111c,"Tricord Systems Inc."},

  {0x111d,"Integrated Device Technology, Inc. [IDT]"},

  {0x111e,"Eldec"},

  {0x111f,"Precision Digital Images"},

  {0x1120,"Dell EMC"},

  {0x1121,"Zilog"},

  {0x1122,"Multi-tech Systems, Inc."},

  {0x1123,"Excellent Design, Inc."},

  {0x1124,"Leutron Vision AG"},

  {0x1125,"Eurocore"},

  {0x1126,"Vigra"},

  {0x1127,"FORE Systems Inc"},

  {0x1129,"Firmworks"},

  {0x112a,"Hermes Electronics Company, Ltd."},

  {0x112b,"Linotype - Hell AG"},

  {0x112c,"Zenith Data Systems"},

  {0x112d,"Ravicad"},

  {0x112e,"Infomedia Microelectronics Inc."},

  {0x112f,"Dalsa Inc."},

  {0x1130,"Computervision"},

  {0x1131,"Philips Semiconductors"},

  {0x1132,"Mitel Corp."},

  {0x1133,"Dialogic Corporation"},

  {0x1134,"Mercury Computer Systems"},

  {0x1135,"Fuji Xerox Co Ltd"},

  {0x1136,"Momentum Data Systems"},

  {0x1137,"Cisco Systems Inc"},

  {0x1138,"Ziatech Corporation"},

  {0x1139,"Dynamic Pictures, Inc"},

  {0x113a,"FWB Inc"},

  {0x113b,"Network Computing Devices"},

  {0x113c,"Cyclone Microsystems, Inc."},

  {0x113d,"Leading Edge Products Inc"},

  {0x113e,"Sanyo Electric Co - Computer Engineering Dept"},

  {0x113f,"Equinox Systems, Inc."},

  {0x1140,"Intervoice Inc"},

  {0x1141,"Crest Microsystem Inc"},

  {0x1142,"Alliance Semiconductor Corporation"},

  {0x1143,"NetPower, Inc"},

  {0x1144,"Cincinnati Milacron"},

  {0x1145,"Workbit Corporation"},

  {0x1146,"Force Computers"},

  {0x1147,"Interface Corp"},

  {0x1148,"SysKonnect"},

  {0x1149,"Win System Corporation"},

  {0x114a,"VMIC"},

  {0x114b,"Canopus Co., Ltd"},

  {0x114c,"Annabooks"},

  {0x114d,"IC Corporation"},

  {0x114e,"Nikon Systems Inc"},

  {0x114f,"Digi International"},

  {0x1150,"Thinking Machines Corp"},

  {0x1151,"JAE Electronics Inc."},

  {0x1152,"Megatek"},

  {0x1153,"Land Win Electronic Corp"},

  {0x1154,"Melco Inc"},

  {0x1155,"Pine Technology Ltd"},

  {0x1156,"Periscope Engineering"},

  {0x1157,"Avsys Corporation"},

  {0x1158,"Voarx R & D Inc"},

  {0x1159,"Mutech Corp"},

  {0x115a,"Harlequin Ltd"},

  {0x115b,"Parallax Graphics"},

  {0x115c,"Photron Ltd."},

  {0x115d,"Xircom"},

  {0x115e,"Peer Protocols Inc"},

  {0x115f,"Maxtor Corporation"},

  {0x1160,"Megasoft Inc"},

  {0x1161,"PFU Limited"},

  {0x1162,"OA Laboratory Co Ltd"},

  {0x1163,"Rendition"},

  {0x1164,"Advanced Peripherals Technologies"},

  {0x1165,"Imagraph Corporation"},

  {0x1166,"Broadcom"},

  {0x1167,"Mutoh Industries Inc"},

  {0x1168,"Thine Electronics Inc"},

  {0x1169,"Centre for Development of Advanced Computing"},

  {0x116a,"Luminex Software, Inc."},

  {0x116b,"Connectware Inc"},

  {0x116c,"Intelligent Resources Integrated Systems"},

  {0x116d,"Martin-Marietta"},

  {0x116e,"Electronics for Imaging"},

  {0x116f,"Workstation Technology"},

  {0x1170,"Inventec Corporation"},

  {0x1171,"Loughborough Sound Images Plc"},

  {0x1172,"Altera Corporation"},

  {0x1173,"Adobe Systems, Inc"},

  {0x1174,"Bridgeport Machines"},

  {0x1175,"Mitron Computer Inc."},

  {0x1176,"SBE Incorporated"},

  {0x1177,"Silicon Engineering"},

  {0x1178,"Alfa, Inc."},

  {0x1179,"Toshiba America Info Systems"},

  {0x117a,"A-Trend Technology"},

  {0x117b,"L G Electronics, Inc."},

  {0x117c,"ATTO Technology, Inc."},

  {0x117d,"Becton & Dickinson"},

  {0x117e,"T/R Systems"},

  {0x117f,"Integrated Circuit Systems"},

  {0x1180,"Ricoh Co Ltd"},

  {0x1181,"Telmatics International"},

  {0x1183,"Fujikura Ltd"},

  {0x1184,"Forks Inc"},

  {0x1185,"Dataworld International Ltd"},

  {0x1186,"D-Link System Inc"},

  {0x1187,"Advanced Technology Laboratories, Inc."},

  {0x1188,"Shima Seiki Manufacturing Ltd."},

  {0x1189,"Matsushita Electronics Co Ltd"},

  {0x118a,"Hilevel Technology"},

  {0x118b,"Hypertec Pty Limited"},

  {0x118c,"Corollary, Inc"},

  {0x118d,"BitFlow Inc"},

  {0x118e,"Hermstedt GmbH"},

  {0x118f,"Green Logic"},

  {0x1190,"Tripace"},

  {0x1191,"Artop Electronic Corp"},

  {0x1192,"Densan Company Ltd"},

  {0x1193,"Zeitnet Inc."},

  {0x1194,"Toucan Technology"},

  {0x1195,"Ratoc System Inc"},

  {0x1196,"Hytec Electronics Ltd"},

  {0x1197,"Gage Applied Sciences, Inc."},

  {0x1198,"Lambda Systems Inc"},

  {0x1199,"Attachmate Corporation"},

  {0x119a,"Mind Share, Inc."},

  {0x119b,"Omega Micro Inc."},

  {0x119c,"Information Technology Inst."},

  {0x119d,"Bug, Inc. Sapporo Japan"},

  {0x119e,"Fujitsu Microelectronics Ltd."},

  {0x119f,"Bull HN Information Systems"},

  {0x11a0,"Convex Computer Corporation"},

  {0x11a1,"Hamamatsu Photonics K.K."},

  {0x11a2,"Sierra Research and Technology"},

  {0x11a3,"Deuretzbacher GmbH & Co. Eng. KG"},

  {0x11a4,"Barco Graphics NV"},

  {0x11a5,"Microunity Systems Eng. Inc"},

  {0x11a6,"Pure Data Ltd."},

  {0x11a7,"Power Computing Corp."},

  {0x11a8,"Systech Corp."},

  {0x11a9,"InnoSys Inc."},

  {0x11aa,"Actel"},

  {0x11ab,"Marvell Technology Group Ltd."},

  {0x11ac,"Canon Information Systems Research Aust."},

  {0x11ad,"Lite-On Communications Inc"},

  {0x11ae,"Aztech System Ltd"},

  {0x11af,"Avid Technology Inc."},

  {0x11b0,"V3 Semiconductor Inc."},

  {0x11b1,"Apricot Computers"},

  {0x11b2,"Eastman Kodak"},

  {0x11b3,"Barr Systems Inc."},

  {0x11b4,"Leitch Technology International"},

  {0x11b5,"Radstone Technology Plc"},

  {0x11b6,"United Video Corp"},

  {0x11b7,"Motorola"},

  {0x11b8,"XPoint Technologies, Inc"},

  {0x11b9,"Pathlight Technology Inc."},

  {0x11ba,"Videotron Corp"},

  {0x11bb,"Pyramid Technology"},

  {0x11bc,"Network Peripherals Inc"},

  {0x11bd,"Pinnacle Systems Inc."},

  {0x11be,"International Microcircuits Inc"},

  {0x11bf,"Astrodesign, Inc."},

  {0x11c0,"Hewlett Packard"},

  {0x11c1,"LSI Corporation"},

  {0x11c2,"Sand Microelectronics"},

  {0x11c3,"NEC Corporation"},

  {0x11c4,"Document Technologies, Inc"},

  {0x11c5,"Shiva Corporation"},

  {0x11c6,"Dainippon Screen Mfg. Co. Ltd"},

  {0x11c7,"D.C.M. Data Systems"},

  {0x11c8,"Dolphin Interconnect Solutions AS"},

  {0x11c9,"Magma"},

  {0x11ca,"LSI Systems, Inc"},

  {0x11cb,"Specialix Research Ltd."},

  {0x11cc,"Michels & Kleberhoff Computer GmbH"},

  {0x11cd,"HAL Computer Systems, Inc."},

  {0x11ce,"Netaccess"},

  {0x11cf,"Pioneer Electronic Corporation"},

  {0x11d0,"Lockheed Martin Federal Systems-Manassas"},

  {0x11d1,"Auravision"},

  {0x11d2,"Intercom Inc."},

  {0x11d3,"Trancell Systems Inc"},

  {0x11d4,"Analog Devices"},

  {0x11d5,"Ikon Corporation"},

  {0x11d6,"Tekelec Telecom"},

  {0x11d7,"Trenton Technology, Inc."},

  {0x11d8,"Image Technologies Development"},

  {0x11d9,"TEC Corporation"},

  {0x11da,"Novell"},

  {0x11db,"Sega Enterprises Ltd"},

  {0x11dc,"Questra Corporation"},

  {0x11dd,"Crosfield Electronics Limited"},

  {0x11de,"Zoran Corporation"},

  {0x11df,"New Wave PDG"},

  {0x11e0,"Cray Communications A/S"},

  {0x11e1,"GEC Plessey Semi Inc."},

  {0x11e2,"Samsung Information Systems America"},

  {0x11e3,"Quicklogic Corporation"},

  {0x11e4,"Second Wave Inc"},

  {0x11e5,"IIX Consulting"},

  {0x11e6,"Mitsui-Zosen System Research"},

  {0x11e7,"Toshiba America, Elec. Company"},

  {0x11e8,"Digital Processing Systems Inc."},

  {0x11e9,"Highwater Designs Ltd."},

  {0x11ea,"Elsag Bailey"},

  {0x11eb,"Formation Inc."},

  {0x11ec,"Coreco Inc"},

  {0x11ed,"Mediamatics"},

  {0x11ee,"Dome Imaging Systems Inc"},

  {0x11ef,"Nicolet Technologies B.V."},

  {0x11f0,"Compu-Shack"},

  {0x11f1,"Symbios Logic Inc"},

  {0x11f2,"Picture Tel Japan K.K."},

  {0x11f3,"Keithley Metrabyte"},

  {0x11f4,"Kinetic Systems Corporation"},

  {0x11f5,"Computing Devices International"},

  {0x11f6,"Compex"},

  {0x11f7,"Scientific Atlanta"},

  {0x11f8,"PMC-Sierra Inc."},

  {0x11f9,"I-Cube Inc"},

  {0x11fa,"Kasan Electronics Company, Ltd."},

  {0x11fb,"Datel Inc"},

  {0x11fc,"Silicon Magic"},

  {0x11fd,"High Street Consultants"},

  {0x11fe,"Comtrol Corporation"},

  {0x11ff,"Scion Corporation"},

  {0x1200,"CSS Corporation"},

  {0x1201,"Vista Controls Corp"},

  {0x1202,"Network General Corp."},

  {0x1203,"Bayer Corporation, Agfa Division"},

  {0x1204,"Lattice Semiconductor Corporation"},

  {0x1205,"Array Corporation"},

  {0x1206,"Amdahl Corporation"},

  {0x1208,"Parsytec GmbH"},

  {0x1209,"SCI Systems Inc"},

  {0x120a,"Synaptel"},

  {0x120b,"Adaptive Solutions"},

  {0x120c,"Technical Corp."},

  {0x120d,"Compression Labs, Inc."},

  {0x120e,"Cyclades Corporation"},

  {0x120f,"Essential Communications"},

  {0x1210,"Hyperparallel Technologies"},

  {0x1211,"Braintech Inc"},

  {0x1212,"Kingston Technology Corp."},

  {0x1213,"Applied Intelligent Systems, Inc."},

  {0x1214,"Performance Technologies, Inc."},

  {0x1215,"Interware Co., Ltd"},

  {0x1216,"Purup Prepress A/S"},

  {0x1217,"O2 Micro, Inc."},

  {0x1218,"Hybricon Corp."},

  {0x1219,"First Virtual Corporation"},

  {0x121a,"3Dfx Interactive, Inc."},

  {0x121b,"Advanced Telecommunications Modules"},

  {0x121c,"Nippon Texaco., Ltd"},

  {0x121d,"LiPPERT ADLINK Technology GmbH"},

  {0x121e,"CSPI"},

  {0x121f,"Arcus Technology, Inc."},

  {0x1220,"Ariel Corporation"},

  {0x1221,"Contec Co., Ltd"},

  {0x1222,"Ancor Communications, Inc."},

  {0x1223,"Artesyn Communication Products"},

  {0x1224,"Interactive Images"},

  {0x1225,"Power I/O, Inc."},

  {0x1227,"Tech-Source"},

  {0x1228,"Norsk Elektro Optikk A/S"},

  {0x1229,"Data Kinesis Inc."},

  {0x122a,"Integrated Telecom"},

  {0x122b,"LG Industrial Systems Co., Ltd"},

  {0x122c,"Sican GmbH"},

  {0x122d,"Aztech System Ltd"},

  {0x122e,"Xyratex"},

  {0x122f,"Andrew Corporation"},

  {0x1230,"Fishcamp Engineering"},

  {0x1231,"Woodward McCoach, Inc."},

  {0x1232,"GPT Limited"},

  {0x1233,"Bus-Tech, Inc."},

  {0x1235,"Risq Modular Systems, Inc."},

  {0x1236,"Sigma Designs Corporation"},

  {0x1237,"Alta Technology Corporation"},

  {0x1238,"Adtran"},

  {0x1239,"3DO Company"},

  {0x123a,"Visicom Laboratories, Inc."},

  {0x123b,"Seeq Technology, Inc."},

  {0x123c,"Century Systems, Inc."},

  {0x123d,"Engineering Design Team, Inc."},

  {0x123e,"Simutech, Inc."},

  {0x123f,"LSI Logic"},

  {0x1240,"Marathon Technologies Corp."},

  {0x1241,"DSC Communications"},

  {0x1242,"JNI Corporation"},

  {0x1243,"Delphax"},

  {0x1244,"AVM GmbH"},

  {0x1245,"A.P.D., S.A."},

  {0x1246,"Dipix Technologies, Inc."},

  {0x1247,"Xylon Research, Inc."},

  {0x1248,"Central Data Corporation"},

  {0x1249,"Samsung Electronics Co., Ltd."},

  {0x124a,"AEG Electrocom GmbH"},

  {0x124b,"SBS/Greenspring Modular I/O"},

  {0x124c,"Solitron Technologies, Inc."},

  {0x124d,"Stallion Technologies, Inc."},

  {0x124e,"Cylink"},

  {0x124f,"Infortrend Technology, Inc."},

  {0x1250,"Hitachi Microcomputer System Ltd"},

  {0x1251,"VLSI Solutions Oy"},

  {0x1253,"Guzik Technical Enterprises"},

  {0x1254,"Linear Systems Ltd."},

  {0x1255,"Optibase Ltd"},

  {0x1256,"Perceptive Solutions, Inc."},

  {0x1257,"Vertex Networks, Inc."},

  {0x1258,"Gilbarco, Inc."},

  {0x1259,"Allied Telesis"},

  {0x125a,"ABB Power Systems"},

  {0x125b,"Asix Electronics Corporation"},

  {0x125c,"Aurora Technologies, Inc."},

  {0x125d,"ESS Technology"},

  {0x125e,"Specialvideo Engineering SRL"},

  {0x125f,"Concurrent Technologies, Inc."},

  {0x1260,"Intersil Corporation"},

  {0x1261,"Matsushita-Kotobuki Electronics Industries, Ltd."},

  {0x1262,"ES Computer Company, Ltd."},

  {0x1263,"Sonic Solutions"},

  {0x1264,"Aval Nagasaki Corporation"},

  {0x1265,"Casio Computer Co., Ltd."},

  {0x1266,"Microdyne Corporation"},

  {0x1267,"S. A. Telecommunications"},

  {0x1268,"Tektronix"},

  {0x1269,"Thomson-CSF/TTM"},

  {0x126a,"Lexmark International, Inc."},

  {0x126b,"Adax, Inc."},

  {0x126c,"Northern Telecom"},

  {0x126d,"Splash Technology, Inc."},

  {0x126e,"Sumitomo Metal Industries, Ltd."},

  {0x126f,"Silicon Motion, Inc."},

  {0x1270,"Olympus Optical Co., Ltd."},

  {0x1271,"GW Instruments"},

  {0x1272,"Telematics International"},

  {0x1273,"Hughes Network Systems"},

  {0x1274,"Ensoniq"},

  {0x1275,"Network Appliance Corporation"},

  {0x1276,"Switched Network Technologies, Inc."},

  {0x1277,"Comstream"},

  {0x1278,"Transtech Parallel Systems Ltd."},

  {0x1279,"Transmeta Corporation"},

  {0x127a,"Rockwell International"},

  {0x127b,"Pixera Corporation"},

  {0x127c,"Crosspoint Solutions, Inc."},

  {0x127d,"Vela Research"},

  {0x127e,"Winnov, L.P."},

  {0x127f,"Fujifilm"},

  {0x1280,"Photoscript Group Ltd."},

  {0x1281,"Yokogawa Electric Corporation"},

  {0x1282,"Davicom Semiconductor, Inc."},

  {0x1283,"Integrated Technology Express, Inc."},

  {0x1284,"Sahara Networks, Inc."},

  {0x1285,"Platform Technologies, Inc."},

  {0x1286,"Mazet GmbH"},

  {0x1287,"M-Pact, Inc."},

  {0x1288,"Timestep Corporation"},

  {0x1289,"AVC Technology, Inc."},

  {0x128a,"Asante Technologies, Inc."},

  {0x128b,"Transwitch Corporation"},

  {0x128c,"Retix Corporation"},

  {0x128d,"G2 Networks, Inc."},

  {0x128e,"Hoontech Corporation/Samho Multi Tech Ltd."},

  {0x128f,"Tateno Dennou, Inc."},

  {0x1290,"Sord Computer Corporation"},

  {0x1291,"NCS Computer Italia"},

  {0x1292,"Tritech Microelectronics Inc"},

  {0x1293,"Media Reality Technology"},

  {0x1294,"Rhetorex, Inc."},

  {0x1295,"Imagenation Corporation"},

  {0x1296,"Kofax Image Products"},

  {0x1297,"Holco Enterprise Co, Ltd/Shuttle Computer"},

  {0x1298,"Spellcaster Telecommunications Inc."},

  {0x1299,"Knowledge Technology Lab."},

  {0x129a,"VMetro, inc."},

  {0x129b,"Image Access"},

  {0x129c,"Jaycor"},

  {0x129d,"Compcore Multimedia, Inc."},

  {0x129e,"Victor Company of Japan, Ltd."},

  {0x129f,"OEC Medical Systems, Inc."},

  {0x12a0,"Allen-Bradley Company"},

  {0x12a1,"Simpact Associates, Inc."},

  {0x12a2,"Newgen Systems Corporation"},

  {0x12a3,"Lucent Technologies"},

  {0x12a4,"NTT Electronics Technology Company"},

  {0x12a5,"Vision Dynamics Ltd."},

  {0x12a6,"Scalable Networks, Inc."},

  {0x12a7,"AMO GmbH"},

  {0x12a8,"News Datacom"},

  {0x12a9,"Xiotech Corporation"},

  {0x12aa,"SDL Communications, Inc."},

  {0x12ab,"YUAN High-Tech Development Co., Ltd."},

  {0x12ac,"Measurex Corporation"},

  {0x12ad,"Multidata GmbH"},

  {0x12ae,"Alteon Networks Inc."},

  {0x12af,"TDK USA Corp"},

  {0x12b0,"Jorge Scientific Corp"},

  {0x12b1,"GammaLink"},

  {0x12b2,"General Signal Networks"},

  {0x12b3,"Inter-Face Co Ltd"},

  {0x12b4,"FutureTel Inc"},

  {0x12b5,"Granite Systems Inc."},

  {0x12b6,"Natural Microsystems"},

  {0x12b7,"Cognex Modular Vision Systems Div. - Acumen Inc."},

  {0x12b8,"Korg"},

  {0x12b9,"3Com Corp, Modem Division"},

  {0x12ba,"BittWare, Inc."},

  {0x12bb,"Nippon Unisoft Corporation"},

  {0x12bc,"Array Microsystems"},

  {0x12bd,"Computerm Corp."},

  {0x12be,"Anchor Chips Inc."},

  {0x12bf,"Fujifilm Microdevices"},

  {0x12c0,"Infimed"},

  {0x12c1,"GMM Research Corp"},

  {0x12c2,"Mentec Limited"},

  {0x12c3,"Holtek Microelectronics Inc"},

  {0x12c4,"Connect Tech Inc"},

  {0x12c5,"Picture Elements Incorporated"},

  {0x12c6,"Mitani Corporation"},

  {0x12c7,"Dialogic Corp"},

  {0x12c8,"G Force Co, Ltd"},

  {0x12c9,"Gigi Operations"},

  {0x12ca,"Integrated Computing Engines"},

  {0x12cb,"Antex Electronics Corporation"},

  {0x12cc,"Pluto Technologies International"},

  {0x12cd,"Aims Lab"},

  {0x12ce,"Netspeed Inc."},

  {0x12cf,"Prophet Systems, Inc."},

  {0x12d0,"GDE Systems, Inc."},

  {0x12d1,"PSITech"},

  {0x12d2,"NVidia / SGS Thomson (Joint Venture)"},

  {0x12d3,"Vingmed Sound A/S"},

  {0x12d4,"Ulticom (Formerly DGM&S)"},

  {0x12d5,"Equator Technologies Inc"},

  {0x12d6,"Analogic Corp"},

  {0x12d7,"Biotronic SRL"},

  {0x12d8,"Pericom Semiconductor"},

  {0x12d9,"Aculab PLC"},

  {0x12da,"True Time Inc."},

  {0x12db,"Annapolis Micro Systems, Inc"},

  {0x12dc,"Symicron Computer Communication Ltd."},

  {0x12dd,"Management Graphics"},

  {0x12de,"Rainbow Technologies"},

  {0x12df,"SBS Technologies Inc"},

  {0x12e0,"Chase Research"},

  {0x12e1,"Nintendo Co, Ltd"},

  {0x12e2,"Datum Inc. Bancomm-Timing Division"},

  {0x12e3,"Imation Corp - Medical Imaging Systems"},

  {0x12e4,"Brooktrout Technology Inc"},

  {0x12e5,"Apex Semiconductor Inc"},

  {0x12e6,"Cirel Systems"},

  {0x12e7,"Sunsgroup Corporation"},

  {0x12e8,"Crisc Corp"},

  {0x12e9,"GE Spacenet"},

  {0x12ea,"Zuken"},

  {0x12eb,"Aureal Semiconductor"},

  {0x12ec,"3A International, Inc."},

  {0x12ed,"Optivision Inc."},

  {0x12ee,"Orange Micro"},

  {0x12ef,"Vienna Systems"},

  {0x12f0,"Pentek"},

  {0x12f1,"Sorenson Vision Inc"},

  {0x12f2,"Gammagraphx, Inc."},

  {0x12f3,"Radstone Technology"},

  {0x12f4,"Megatel"},

  {0x12f5,"Forks"},

  {0x12f6,"Dawson France"},

  {0x12f7,"Cognex"},

  {0x12f8,"Electronic Design GmbH"},

  {0x12f9,"Four Fold Ltd"},

  {0x12fb,"Spectrum Signal Processing"},

  {0x12fc,"Capital Equipment Corp"},

  {0x12fd,"I2S"},

  {0x12fe,"ESD Electronic System Design GmbH"},

  {0x12ff,"Lexicon"},

  {0x1300,"Harman International Industries Inc"},

  {0x1302,"Computer Sciences Corp"},

  {0x1303,"Innovative Integration"},

  {0x1304,"Juniper Networks"},

  {0x1305,"Netphone, Inc"},

  {0x1306,"Duet Technologies"},

  {0x1307,"Measurement Computing"},

  {0x1308,"Jato Technologies Inc."},

  {0x1309,"AB Semiconductor Ltd"},

  {0x130a,"Mitsubishi Electric Microcomputer"},

  {0x130b,"Colorgraphic Communications Corp"},

  {0x130c,"Ambex Technologies, Inc"},

  {0x130d,"Accelerix Inc"},

  {0x130e,"Yamatake-Honeywell Co. Ltd"},

  {0x130f,"Advanet Inc"},

  {0x1310,"Gespac"},

  {0x1311,"Videoserver, Inc"},

  {0x1312,"Acuity Imaging, Inc"},

  {0x1313,"Yaskawa Electric Co."},

  {0x1315,"Wavesat"},

  {0x1316,"Teradyne Inc"},

  {0x1317,"ADMtek"},

  {0x1318,"Packet Engines Inc."},

  {0x1319,"Fortemedia, Inc"},

  {0x131a,"Finisar Corp."},

  {0x131c,"Nippon Electro-Sensory Devices Corp"},

  {0x131d,"Sysmic, Inc."},

  {0x131e,"Xinex Networks Inc"},

  {0x131f,"Siig Inc"},

  {0x1320,"Crypto AG"},

  {0x1321,"Arcobel Graphics BV"},

  {0x1322,"MTT Co., Ltd"},

  {0x1323,"Dome Inc"},

  {0x1324,"Sphere Communications"},

  {0x1325,"Salix Technologies, Inc"},

  {0x1326,"Seachange international"},

  {0x1327,"Voss scientific"},

  {0x1328,"quadrant international"},

  {0x1329,"Productivity Enhancement"},

  {0x132a,"Microcom Inc."},

  {0x132b,"Broadband Technologies"},

  {0x132c,"Micrel Inc"},

  {0x132d,"Integrated Silicon Solution, Inc."},

  {0x1330,"MMC Networks"},

  {0x1331,"RadiSys Corporation"},

  {0x1332,"Micro Memory"},

  {0x1334,"Redcreek Communications, Inc"},

  {0x1335,"Videomail, Inc"},

  {0x1337,"Third Planet Publishing"},

  {0x1338,"BT Electronics"},

  {0x133a,"Vtel Corp"},

  {0x133b,"Softcom Microsystems"},

  {0x133c,"Holontech Corp"},

  {0x133d,"SS Technologies"},

  {0x133e,"Virtual Computer Corp"},

  {0x133f,"SCM Microsystems"},

  {0x1340,"Atalla Corp"},

  {0x1341,"Kyoto Microcomputer Co"},

  {0x1342,"Promax Systems Inc"},

  {0x1343,"Phylon Communications Inc"},

  {0x1344,"Micron Technology Inc"},

  {0x1345,"Arescom Inc"},

  {0x1347,"Odetics"},

  {0x1349,"Sumitomo Electric Industries, Ltd."},

  {0x134a,"DTC Technology Corp."},

  {0x134b,"ARK Research Corp."},

  {0x134c,"Chori Joho System Co. Ltd"},

  {0x134d,"PCTel Inc"},

  {0x134e,"CSTI"},

  {0x134f,"Algo System Co Ltd"},

  {0x1350,"Systec Co. Ltd"},

  {0x1351,"Sonix Inc"},

  {0x1353,"Vierling Communication SAS"},

  {0x1354,"Dwave System Inc"},

  {0x1355,"Kratos Analytical Ltd"},

  {0x1356,"The Logical Co"},

  {0x1359,"Prisa Networks"},

  {0x135a,"Brain Boxes"},

  {0x135b,"Giganet Inc"},

  {0x135c,"Quatech Inc"},

  {0x135d,"ABB Network Partner AB"},

  {0x135e,"Sealevel Systems Inc"},

  {0x135f,"I-Data International A-S"},

  {0x1360,"Meinberg Funkuhren"},

  {0x1361,"Soliton Systems K.K."},

  {0x1362,"Fujifacom Corporation"},

  {0x1363,"Phoenix Technology Ltd"},

  {0x1364,"ATM Communications Inc"},

  {0x1365,"Hypercope GmbH"},

  {0x1366,"Teijin Seiki Co. Ltd"},

  {0x1367,"Hitachi Zosen Corporation"},

  {0x1368,"Skyware Corporation"},

  {0x1369,"Digigram"},

  {0x136a,"High Soft Tech"},

  {0x136b,"Kawasaki Steel Corporation"},

  {0x136c,"Adtek System Science Co Ltd"},

  {0x136d,"Gigalabs Inc"},

  {0x136f,"Applied Magic Inc"},

  {0x1370,"ATL Products"},

  {0x1371,"CNet Technology Inc"},

  {0x1373,"Silicon Vision Inc"},

  {0x1374,"Silicom Ltd."},

  {0x1375,"Argosystems Inc"},

  {0x1376,"LMC"},

  {0x1377,"Electronic Equipment Production & Distribution GmbH"},

  {0x1378,"Telemann Co. Ltd"},

  {0x1379,"Asahi Kasei Microsystems Co Ltd"},

  {0x137a,"Mark of the Unicorn Inc"},

  {0x137b,"PPT Vision"},

  {0x137c,"Iwatsu Electric Co Ltd"},

  {0x137d,"Dynachip Corporation"},

  {0x137e,"Patriot Scientific Corporation"},

  {0x137f,"Japan Satellite Systems Inc"},

  {0x1380,"Sanritz Automation Co Ltd"},

  {0x1381,"Brains Co. Ltd"},

  {0x1382,"Marian - Electronic & Software"},

  {0x1383,"Controlnet Inc"},

  {0x1384,"Reality Simulation Systems Inc"},

  {0x1385,"Netgear"},

  {0x1386,"Video Domain Technologies"},

  {0x1387,"Systran Corp"},

  {0x1388,"Hitachi Information Technology Co Ltd"},

  {0x1389,"Applicom International"},

  {0x138a,"Fusion Micromedia Corp"},

  {0x138b,"Tokimec Inc"},

  {0x138c,"Silicon Reality"},

  {0x138d,"Future Techno Designs pte Ltd"},

  {0x138e,"Basler GmbH"},

  {0x138f,"Patapsco Designs Inc"},

  {0x1390,"Concept Development Inc"},

  {0x1391,"Development Concepts Inc"},

  {0x1392,"Medialight Inc"},

  {0x1393,"Moxa Technologies Co Ltd"},

  {0x1394,"Level One Communications"},

  {0x1395,"Ambicom Inc"},

  {0x1396,"Cipher Systems Inc"},

  {0x1397,"Cologne Chip Designs GmbH"},

  {0x1398,"Clarion co. Ltd"},

  {0x1399,"Rios systems Co Ltd"},

  {0x139a,"Alacritech Inc"},

  {0x139b,"Mediasonic Multimedia Systems Ltd"},

  {0x139c,"Quantum 3d Inc"},

  {0x139d,"EPL limited"},

  {0x139e,"Media4"},

  {0x139f,"Aethra s.r.l."},

  {0x13a0,"Crystal Group Inc"},

  {0x13a1,"Kawasaki Heavy Industries Ltd"},

  {0x13a2,"Ositech Communications Inc"},

  {0x13a3,"Hifn Inc."},

  {0x13a4,"Rascom Inc"},

  {0x13a5,"Audio Digital Imaging Inc"},

  {0x13a6,"Videonics Inc"},

  {0x13a7,"Teles AG"},

  {0x13a8,"Exar Corp."},

  {0x13a9,"Siemens Medical Systems, Ultrasound Group"},

  {0x13aa,"Broadband Networks Inc"},

  {0x13ab,"Arcom Control Systems Ltd"},

  {0x13ac,"Motion Media Technology Ltd"},

  {0x13ad,"Nexus Inc"},

  {0x13ae,"ALD Technology Ltd"},

  {0x13af,"T.Sqware"},

  {0x13b0,"Maxspeed Corp"},

  {0x13b1,"Tamura corporation"},

  {0x13b2,"Techno Chips Co. Ltd"},

  {0x13b3,"Lanart Corporation"},

  {0x13b4,"Wellbean Co Inc"},

  {0x13b5,"ARM"},

  {0x13b6,"Dlog GmbH"},

  {0x13b7,"Logic Devices Inc"},

  {0x13b8,"Nokia Telecommunications oy"},

  {0x13b9,"Elecom Co Ltd"},

  {0x13ba,"Oxford Instruments"},

  {0x13bb,"Sanyo Technosound Co Ltd"},

  {0x13bc,"Bitran Corporation"},

  {0x13bd,"Sharp corporation"},

  {0x13be,"Miroku Jyoho Service Co. Ltd"},

  {0x13bf,"Sharewave Inc"},

  {0x13c0,"Microgate Corporation"},

  {0x13c1,"3ware Inc"},

  {0x13c2,"Technotrend Systemtechnik GmbH"},

  {0x13c3,"Janz Computer AG"},

  {0x13c4,"Phase Metrics"},

  {0x13c5,"Alphi Technology Corp"},

  {0x13c6,"Condor Engineering Inc"},

  {0x13c7,"Blue Chip Technology Ltd"},

  {0x13c8,"Apptech Inc"},

  {0x13c9,"Eaton Corporation"},

  {0x13ca,"Iomega Corporation"},

  {0x13cb,"Yano Electric Co Ltd"},

  {0x13cc,"Metheus Corporation"},

  {0x13cd,"Compatible Systems Corporation"},

  {0x13ce,"Cocom A/S"},

  {0x13cf,"Studio Audio & Video Ltd"},

  {0x13d0,"Techsan Electronics Co Ltd"},

  {0x13d1,"Abocom Systems Inc"},

  {0x13d2,"Shark Multimedia Inc"},

  {0x13d4,"Graphics Microsystems Inc"},

  {0x13d5,"Media 100 Inc"},

  {0x13d6,"K.I. Technology Co Ltd"},

  {0x13d7,"Toshiba Engineering Corporation"},

  {0x13d8,"Phobos corporation"},

  {0x13d9,"Apex PC Solutions Inc"},

  {0x13da,"Intresource Systems pte Ltd"},

  {0x13db,"Janich & Klass Computertechnik GmbH"},

  {0x13dc,"Netboost Corporation"},

  {0x13dd,"Multimedia Bundle Inc"},

  {0x13de,"ABB Robotics Products AB"},

  {0x13df,"E-Tech Inc"},

  {0x13e0,"GVC Corporation"},

  {0x13e1,"Silicom Multimedia Systems Inc"},

  {0x13e2,"Dynamics Research Corporation"},

  {0x13e3,"Nest Inc"},

  {0x13e4,"Calculex Inc"},

  {0x13e5,"Telesoft Design Ltd"},

  {0x13e6,"Argosy research Inc"},

  {0x13e7,"NAC Incorporated"},

  {0x13e8,"Chip Express Corporation"},

  {0x13e9,"Intraserver Technology Inc"},

  {0x13ea,"Dallas Semiconductor"},

  {0x13eb,"Hauppauge Computer Works Inc"},

  {0x13ec,"Zydacron Inc"},

  {0x13ed,"Raytheion E-Systems"},

  {0x13ee,"Hayes Microcomputer Products Inc"},

  {0x13ef,"Coppercom Inc"},

  {0x13f0,"Sundance Technology Inc / IC Plus Corp"},

  {0x13f1,"Oce' - Technologies B.V."},

  {0x13f2,"Ford Microelectronics Inc"},

  {0x13f3,"Mcdata Corporation"},

  {0x13f4,"Troika Networks, Inc."},

  {0x13f5,"Kansai Electric Co. Ltd"},

  {0x13f6,"C-Media Electronics Inc"},

  {0x13f7,"Wildfire Communications"},

  {0x13f8,"Ad Lib Multimedia Inc"},

  {0x13f9,"NTT Advanced Technology Corp."},

  {0x13fa,"Pentland Systems Ltd"},

  {0x13fb,"Aydin Corp"},

  {0x13fc,"Computer Peripherals International"},

  {0x13fd,"Micro Science Inc"},

  {0x13fe,"Advantech Co. Ltd"},

  {0x13ff,"Silicon Spice Inc"},

  {0x1400,"Artx Inc"},

  {0x1401,"CR-Systems A/S"},

  {0x1402,"Meilhaus Electronic GmbH"},

  {0x1403,"Ascor Inc"},

  {0x1404,"Fundamental Software Inc"},

  {0x1405,"Excalibur Systems Inc"},

  {0x1406,"Oce' Printing Systems GmbH"},

  {0x1407,"Lava Computer mfg Inc"},

  {0x1408,"Aloka Co. Ltd"},

  {0x1409,"Timedia Technology Co Ltd"},

  {0x140a,"DSP Research Inc"},

  {0x140b,"Abaco Systems, Inc."},

  {0x140c,"Elmic Systems Inc"},

  {0x140d,"Matsushita Electric Works Ltd"},

  {0x140e,"Goepel Electronic GmbH"},

  {0x140f,"Salient Systems Corp"},

  {0x1410,"Midas lab Inc"},

  {0x1411,"Ikos Systems Inc"},

  {0x1412,"VIA Technologies Inc."},

  {0x1413,"Addonics"},

  {0x1414,"Microsoft Corporation"},

  {0x1415,"Oxford Semiconductor Ltd"},

  {0x1416,"Multiwave Innovation pte Ltd"},

  {0x1417,"Convergenet Technologies Inc"},

  {0x1418,"Kyushu electronics systems Inc"},

  {0x1419,"Excel Switching Corp"},

  {0x141a,"Apache Micro Peripherals Inc"},

  {0x141b,"Zoom Telephonics Inc"},

  {0x141d,"Digitan Systems Inc"},

  {0x141e,"Fanuc Ltd"},

  {0x141f,"Visiontech Ltd"},

  {0x1420,"Psion Dacom plc"},

  {0x1421,"Ads Technologies Inc"},

  {0x1422,"Ygrec Systems Co Ltd"},

  {0x1423,"Custom Technology Corp."},

  {0x1424,"Videoserver Connections"},

  {0x1425,"Chelsio Communications Inc"},

  {0x1426,"Storage Technology Corp."},

  {0x1427,"Better On-Line Solutions"},

  {0x1428,"Edec Co Ltd"},

  {0x1429,"Unex Technology Corp."},

  {0x142a,"Kingmax Technology Inc"},

  {0x142b,"Radiolan"},

  {0x142c,"Minton Optic Industry Co Ltd"},

  {0x142d,"Pix stream Inc"},

  {0x142e,"Vitec Multimedia"},

  {0x142f,"Radicom Research Inc"},

  {0x1430,"ITT Aerospace/Communications Division"},

  {0x1431,"Gilat Satellite Networks"},

  {0x1432,"Edimax Computer Co."},

  {0x1433,"Eltec Elektronik GmbH"},

  {0x1435,"RTD Embedded Technologies, Inc."},

  {0x1436,"CIS Technology Inc"},

  {0x1437,"Nissin Inc Co"},

  {0x1438,"Atmel-dream"},

  {0x1439,"Outsource Engineering & Mfg. Inc"},

  {0x143a,"Stargate Solutions Inc"},

  {0x143b,"Canon Research Center, America"},

  {0x143c,"Amlogic Inc"},

  {0x143d,"Tamarack Microelectronics Inc"},

  {0x143e,"Jones Futurex Inc"},

  {0x143f,"Lightwell Co Ltd - Zax Division"},

  {0x1440,"ALGOL Corp."},

  {0x1441,"AGIE Ltd"},

  {0x1442,"Phoenix Contact GmbH & Co."},

  {0x1443,"Unibrain S.A."},

  {0x1444,"TRW"},

  {0x1445,"Logical DO Ltd"},

  {0x1446,"Graphin Co Ltd"},

  {0x1447,"AIM GmBH"},

  {0x1448,"Alesis Studio Electronics"},

  {0x1449,"TUT Systems Inc"},

  {0x144a,"Adlink Technology"},

  {0x144b,"Verint Systems Inc."},

  {0x144c,"Catalina Research Inc"},

  {0x144d,"Samsung Electronics Co Ltd"},

  {0x144e,"OLITEC"},

  {0x144f,"Askey Computer Corp."},

  {0x1450,"Octave Communications Ind."},

  {0x1451,"SP3D Chip Design GmBH"},

  {0x1453,"MYCOM Inc"},

  {0x1454,"Altiga Networks"},

  {0x1455,"Logic Plus Plus Inc"},

  {0x1456,"Advanced Hardware Architectures"},

  {0x1457,"Nuera Communications Inc"},

  {0x1458,"Gigabyte Technology Co., Ltd"},

  {0x1459,"DOOIN Electronics"},

  {0x145a,"Escalate Networks Inc"},

  {0x145b,"PRAIM SRL"},

  {0x145c,"Cryptek"},

  {0x145d,"Gallant Computer Inc"},

  {0x145e,"Aashima Technology B.V."},

  {0x145f,"Baldor Electric Company"},

  {0x1460,"DYNARC INC"},

  {0x1461,"Avermedia Technologies Inc"},

  {0x1462,"Micro-Star International Co., Ltd. [MSI]"},

  {0x1463,"Fast Corporation"},

  {0x1464,"Interactive Circuits & Systems Ltd"},

  {0x1465,"GN NETTEST Telecom DIV."},

  {0x1466,"Designpro Inc."},

  {0x1467,"DIGICOM SPA"},

  {0x1468,"AMBIT Microsystem Corp."},

  {0x1469,"Cleveland Motion Controls"},

  {0x146a,"Aeroflex"},

  {0x146b,"Parascan Technologies Ltd"},

  {0x146c,"Ruby Tech Corp."},

  {0x146d,"Tachyon, INC."},

  {0x146e,"Williams Electronics Games, Inc."},

  {0x146f,"Multi Dimensional Consulting Inc"},

  {0x1470,"Bay Networks"},

  {0x1471,"Integrated Telecom Express Inc"},

  {0x1472,"DAIKIN Industries, Ltd"},

  {0x1473,"ZAPEX Technologies Inc"},

  {0x1474,"Doug Carson & Associates"},

  {0x1475,"PICAZO Communications"},

  {0x1476,"MORTARA Instrument Inc"},

  {0x1477,"Net Insight"},

  {0x1478,"DIATREND Corporation"},

  {0x1479,"TORAY Industries Inc"},

  {0x147a,"FORMOSA Industrial Computing"},

  {0x147b,"ABIT Computer Corp."},

  {0x147c,"AWARE, Inc."},

  {0x147d,"Interworks Computer Products"},

  {0x147e,"Matsushita Graphic Communication Systems, Inc."},

  {0x147f,"NIHON UNISYS, Ltd."},

  {0x1480,"SCII Telecom"},

  {0x1481,"BIOPAC Systems Inc"},

  {0x1482,"ISYTEC - Integrierte Systemtechnik GmBH"},

  {0x1483,"LABWAY Corporation"},

  {0x1484,"Logic Corporation"},

  {0x1485,"ERMA - Electronic GmBH"},

  {0x1486,"L3 Communications Telemetry & Instrumentation"},

  {0x1487,"MARQUETTE Medical Systems"},

  {0x1489,"KYE Systems Corporation"},

  {0x148a,"OPTO"},

  {0x148b,"INNOMEDIALOGIC Inc."},

  {0x148c,"Tul Corporation / PowerColor"},

  {0x148d,"DIGICOM Systems, Inc."},

  {0x148e,"OSI Plus Corporation"},

  {0x148f,"Plant Equipment, Inc."},

  {0x1490,"Stone Microsystems PTY Ltd."},

  {0x1491,"ZEAL Corporation"},

  {0x1492,"Time Logic Corporation"},

  {0x1493,"MAKER Communications"},

  {0x1494,"WINTOP Technology, Inc."},

  {0x1495,"TOKAI Communications Industry Co. Ltd"},

  {0x1496,"JOYTECH Computer Co., Ltd."},

  {0x1497,"SMA Regelsysteme GmBH"},

  {0x1498,"TEWS Technologies GmbH"},

  {0x1499,"EMTEC CO., Ltd"},

  {0x149a,"ANDOR Technology Ltd"},

  {0x149b,"SEIKO Instruments Inc"},

  {0x149c,"OVISLINK Corp."},

  {0x149d,"NEWTEK Inc"},

  {0x149e,"Mapletree Networks Inc."},

  {0x149f,"LECTRON Co Ltd"},

  {0x14a0,"SOFTING GmBH"},

  {0x14a1,"Systembase Co Ltd"},

  {0x14a2,"Millennium Engineering Inc"},

  {0x14a3,"Maverick Networks"},

  {0x14a4,"Lite-On Technology Corporation"},

  {0x14a5,"XIONICS Document Technologies Inc"},

  {0x14a6,"INOVA Computers GmBH & Co KG"},

  {0x14a7,"MYTHOS Systems Inc"},

  {0x14a8,"FEATRON Technologies Corporation"},

  {0x14a9,"HIVERTEC Inc"},

  {0x14aa,"Advanced MOS Technology Inc"},

  {0x14ab,"Mentor Graphics Corp."},

  {0x14ac,"Novaweb Technologies Inc"},

  {0x14ad,"Time Space Radio AB"},

  {0x14ae,"CTI, Inc"},

  {0x14af,"Guillemot Corporation"},

  {0x14b0,"BST Communication Technology Ltd"},

  {0x14b1,"Nextcom K.K."},

  {0x14b2,"ENNOVATE Networks Inc"},

  {0x14b3,"XPEED Inc"},

  {0x14b4,"PHILIPS Business Electronics B.V."},

  {0x14b5,"Creamware GmBH"},

  {0x14b6,"Quantum Data Corp."},

  {0x14b7,"PROXIM Inc"},

  {0x14b8,"Techsoft Technology Co Ltd"},

  {0x14b9,"Cisco Aironet Wireless Communications"},

  {0x14ba,"INTERNIX Inc."},

  {0x14bb,"SEMTECH Corporation"},

  {0x14bc,"Globespan Semiconductor Inc."},

  {0x14bd,"CARDIO Control N.V."},

  {0x14be,"L3 Communications"},

  {0x14bf,"SPIDER Communications Inc."},

  {0x14c0,"COMPAL Electronics Inc"},

  {0x14c1,"MYRICOM Inc."},

  {0x14c2,"DTK Computer"},

  {0x14c3,"MEDIATEK Corp."},

  {0x14c4,"IWASAKI Information Systems Co Ltd"},

  {0x14c5,"Automation Products AB"},

  {0x14c6,"Data Race Inc"},

  {0x14c7,"Modular Technology Holdings Ltd"},

  {0x14c8,"Turbocomm Tech. Inc."},

  {0x14c9,"ODIN Telesystems Inc"},

  {0x14ca,"PE Logic Corp."},

  {0x14cb,"Billionton Systems Inc"},

  {0x14cc,"NAKAYO Telecommunications Inc"},

  {0x14cd,"Universal Global Scientific Industrial Co.,Ltd"},

  {0x14ce,"Whistle Communications"},

  {0x14cf,"TEK Microsystems Inc."},

  {0x14d0,"Ericsson Axe R & D"},

  {0x14d1,"Computer Hi-Tech Co Ltd"},

  {0x14d2,"Titan Electronics Inc"},

  {0x14d3,"CIRTECH (UK) Ltd"},

  {0x14d4,"Panacom Technology Corp"},

  {0x14d5,"Nitsuko Corporation"},

  {0x14d6,"Accusys Inc"},

  {0x14d7,"Hirakawa Hewtech Corp"},

  {0x14d8,"HOPF Elektronik GmBH"},

  {0x14d9,"Alliance Semiconductor Corporation"},

  {0x14da,"National Aerospace Laboratories"},

  {0x14db,"AFAVLAB Technology Inc"},

  {0x14dc,"Amplicon Liveline Ltd"},

  {0x14dd,"Boulder Design Labs Inc"},

  {0x14de,"Applied Integration Corporation"},

  {0x14df,"ASIC Communications Corp"},

  {0x14e1,"INVERTEX"},

  {0x14e2,"INFOLIBRIA"},

  {0x14e3,"AMTELCO"},

  {0x14e4,"Broadcom Limited"},

  {0x14e5,"Pixelfusion Ltd"},

  {0x14e6,"SHINING Technology Inc"},

  {0x14e7,"3CX"},

  {0x14e8,"RAYCER Inc"},

  {0x14e9,"GARNETS System CO Ltd"},

  {0x14ea,"Planex Communications, Inc"},

  {0x14eb,"SEIKO EPSON Corp"},

  {0x14ec,"Agilent Technologies"},

  {0x14ed,"DATAKINETICS Ltd"},

  {0x14ee,"MASPRO KENKOH Corp"},

  {0x14ef,"CARRY Computer ENG. CO Ltd"},

  {0x14f0,"CANON RESEACH CENTRE FRANCE"},

  {0x14f1,"Conexant Systems, Inc."},

  {0x14f2,"MOBILITY Electronics"},

  {0x14f3,"BroadLogic"},

  {0x14f4,"TOKYO Electronic Industry CO Ltd"},

  {0x14f5,"SOPAC Ltd"},

  {0x14f6,"COYOTE Technologies LLC"},

  {0x14f7,"WOLF Technology Inc"},

  {0x14f8,"AUDIOCODES Inc"},

  {0x14f9,"AG COMMUNICATIONS"},

  {0x14fa,"WANDEL & GOLTERMANN"},

  {0x14fb,"TRANSAS MARINE (UK) Ltd"},

  {0x14fc,"Quadrics Ltd"},

  {0x14fd,"JAPAN Computer Industry Inc"},

  {0x14fe,"ARCHTEK TELECOM Corp"},

  {0x14ff,"TWINHEAD INTERNATIONAL Corp"},

  {0x1500,"DELTA Electronics, Inc"},

  {0x1501,"BANKSOFT CANADA Ltd"},

  {0x1502,"MITSUBISHI ELECTRIC LOGISTICS SUPPORT Co Ltd"},

  {0x1503,"KAWASAKI LSI USA Inc"},

  {0x1504,"KAISER Electronics"},

  {0x1505,"ITA INGENIEURBURO FUR TESTAUFGABEN GmbH"},

  {0x1506,"CHAMELEON Systems Inc"},

  {0x1507,"Motorola ?? / HTEC"},

  {0x1508,"HONDA CONNECTORS/MHOTRONICS Inc"},

  {0x1509,"FIRST INTERNATIONAL Computer Inc"},

  {0x150a,"FORVUS RESEARCH Inc"},

  {0x150b,"YAMASHITA Systems Corp"},

  {0x150c,"KYOPAL CO Ltd"},

  {0x150d,"WARPSPPED Inc"},

  {0x150e,"C-PORT Corp"},

  {0x150f,"INTEC GmbH"},

  {0x1510,"BEHAVIOR TECH Computer Corp"},

  {0x1511,"CENTILLIUM Technology Corp"},

  {0x1512,"ROSUN Technologies Inc"},

  {0x1513,"Raychem"},

  {0x1514,"TFL LAN Inc"},

  {0x1515,"Advent design"},

  {0x1516,"MYSON Technology Inc"},

  {0x1517,"ECHOTEK Corp"},

  {0x1518,"Kontron"},

  {0x1519,"TELEFON AKTIEBOLAGET LM Ericsson"},

  {0x151a,"Globetek"},

  {0x151b,"COMBOX Ltd"},

  {0x151c,"DIGITAL AUDIO LABS Inc"},

  {0x151d,"Fujitsu Computer Products Of America"},

  {0x151e,"MATRIX Corp"},

  {0x151f,"TOPIC SEMICONDUCTOR Corp"},

  {0x1520,"CHAPLET System Inc"},

  {0x1521,"BELL Corp"},

  {0x1522,"MainPine Ltd"},

  {0x1523,"MUSIC Semiconductors"},

  {0x1524,"ENE Technology Inc"},

  {0x1525,"IMPACT Technologies"},

  {0x1526,"ISS, Inc"},

  {0x1527,"SOLECTRON"},

  {0x1528,"ACKSYS"},

  {0x1529,"AMERICAN MICROSystems Inc"},

  {0x152a,"QUICKTURN DESIGN Systems"},

  {0x152b,"FLYTECH Technology CO Ltd"},

  {0x152c,"MACRAIGOR Systems LLC"},

  {0x152d,"QUANTA Computer Inc"},

  {0x152e,"MELEC Inc"},

  {0x152f,"PHILIPS - CRYPTO"},

  {0x1530,"ACQIS Technology Inc"},

  {0x1531,"CHRYON Corp"},

  {0x1532,"ECHELON Corp"},

  {0x1533,"BALTIMORE"},

  {0x1534,"ROAD Corp"},

  {0x1535,"EVERGREEN Technologies Inc"},

  {0x1536,"ACTIS Computer"},

  {0x1537,"DATALEX COMMUNCATIONS"},

  {0x1538,"ARALION Inc"},

  {0x1539,"ATELIER INFORMATIQUES et ELECTRONIQUE ETUDES S.A."},

  {0x153a,"ONO SOKKI"},

  {0x153b,"TERRATEC Electronic GmbH"},

  {0x153c,"ANTAL Electronic"},

  {0x153d,"FILANET Corp"},

  {0x153e,"TECHWELL Inc"},

  {0x153f,"MIPS Technologies, Inc."},

  {0x1540,"PROVIDEO MULTIMEDIA Co Ltd"},

  {0x1541,"MACHONE Communications"},

  {0x1542,"Concurrent Real-Time"},

  {0x1543,"SILICON Laboratories"},

  {0x1544,"DCM DATA Systems"},

  {0x1545,"VISIONTEK"},

  {0x1546,"IOI Technology Corp"},

  {0x1547,"MITUTOYO Corp"},

  {0x1548,"JET PROPULSION Laboratory"},

  {0x1549,"INTERCONNECT Systems Solutions"},

  {0x154a,"MAX Technologies Inc"},

  {0x154b,"COMPUTEX Co Ltd"},

  {0x154c,"VISUAL Technology Inc"},

  {0x154d,"PAN INTERNATIONAL Industrial Corp"},

  {0x154e,"SERVOTEST Ltd"},

  {0x154f,"STRATABEAM Technology"},

  {0x1550,"OPEN NETWORK Co Ltd"},

  {0x1551,"SMART Electronic DEVELOPMENT GmBH"},

  {0x1552,"RACAL AIRTECH Ltd"},

  {0x1553,"CHICONY Electronics Co Ltd"},

  {0x1554,"PROLINK Microsystems Corp"},

  {0x1555,"GESYTEC GmBH"},

  {0x1556,"PLDA"},

  {0x1557,"MEDIASTAR Co Ltd"},

  {0x1558,"CLEVO/KAPOK Computer"},

  {0x1559,"SI LOGIC Ltd"},

  {0x155a,"INNOMEDIA Inc"},

  {0x155b,"PROTAC INTERNATIONAL Corp"},

  {0x155c,"Cemax-Icon Inc"},

  {0x155d,"Mac System Co Ltd"},

  {0x155e,"LP Elektronik GmbH"},

  {0x155f,"Perle Systems Ltd"},

  {0x1560,"Terayon Communications Systems"},

  {0x1561,"Viewgraphics Inc"},

  {0x1562,"Symbol Technologies"},

  {0x1563,"A-Trend Technology Co Ltd"},

  {0x1564,"Yamakatsu Electronics Industry Co Ltd"},

  {0x1565,"Biostar Microtech Int'l Corp"},

  {0x1566,"Ardent Technologies Inc"},

  {0x1567,"Jungsoft"},

  {0x1568,"DDK Electronics Inc"},

  {0x1569,"Palit Microsystems Inc."},

  {0x156a,"Avtec Systems"},

  {0x156b,"2wire Inc"},

  {0x156c,"Vidac Electronics GmbH"},

  {0x156d,"Alpha-Top Corp"},

  {0x156e,"Alfa Inc"},

  {0x156f,"M-Systems Flash Disk Pioneers Ltd"},

  {0x1570,"Lecroy Corp"},

  {0x1571,"Contemporary Controls"},

  {0x1572,"Otis Elevator Company"},

  {0x1573,"Lattice - Vantis"},

  {0x1574,"Fairchild Semiconductor"},

  {0x1575,"Voltaire Advanced Data Security Ltd"},

  {0x1576,"Viewcast COM"},

  {0x1578,"HITT"},

  {0x1579,"Dual Technology Corp"},

  {0x157a,"Japan Elecronics Ind Inc"},

  {0x157b,"Star Multimedia Corp"},

  {0x157c,"Eurosoft (UK)"},

  {0x157d,"Gemflex Networks"},

  {0x157e,"Transition Networks"},

  {0x157f,"PX Instruments Technology Ltd"},

  {0x1580,"Primex Aerospace Co"},

  {0x1581,"SEH Computertechnik GmbH"},

  {0x1582,"Cytec Corp"},

  {0x1583,"Inet Technologies Inc"},

  {0x1584,"Uniwill Computer Corp"},

  {0x1585,"Logitron"},

  {0x1586,"Lancast Inc"},

  {0x1587,"Konica Corp"},

  {0x1588,"Solidum Systems Corp"},

  {0x1589,"Atlantek Microsystems Pty Ltd"},

  {0x158a,"Digalog Systems Inc"},

  {0x158b,"Allied Data Technologies"},

  {0x158c,"Hitachi Semiconductor & Devices Sales Co Ltd"},

  {0x158d,"Point Multimedia Systems"},

  {0x158e,"Lara Technology Inc"},

  {0x158f,"Ditect Coop"},

  {0x1590,"Hewlett Packard Enterprise"},

  {0x1591,"ARN"},

  {0x1592,"Syba Tech Ltd"},

  {0x1593,"Bops Inc"},

  {0x1594,"Netgame Ltd"},

  {0x1595,"Diva Systems Corp"},

  {0x1596,"Folsom Research Inc"},

  {0x1597,"Memec Design Services"},

  {0x1598,"Granite Microsystems"},

  {0x1599,"Delta Electronics Inc"},

  {0x159a,"General Instrument"},

  {0x159b,"Faraday Technology Corp"},

  {0x159c,"Stratus Computer Systems"},

  {0x159d,"Ningbo Harrison Electronics Co Ltd"},

  {0x159e,"A-Max Technology Co Ltd"},

  {0x159f,"Galea Network Security"},

  {0x15a0,"Compumaster SRL"},

  {0x15a1,"Geocast Network Systems"},

  {0x15a2,"Catalyst Enterprises Inc"},

  {0x15a3,"Italtel"},

  {0x15a4,"X-Net OY"},

  {0x15a5,"Toyota Macs Inc"},

  {0x15a6,"Sunlight Ultrasound Technologies Ltd"},

  {0x15a7,"SSE Telecom Inc"},

  {0x15a8,"Shanghai Communications Technologies Center"},

  {0x15aa,"Moreton Bay"},

  {0x15ab,"Bluesteel Networks Inc"},

  {0x15ac,"North Atlantic Instruments"},

  {0x15ad,"VMware"},

  {0x15ae,"Amersham Pharmacia Biotech"},

  {0x15b0,"Zoltrix International Ltd"},

  {0x15b1,"Source Technology Inc"},

  {0x15b2,"Mosaid Technologies Inc"},

  {0x15b3,"Mellanox Technologies"},

  {0x15b4,"CCI/TRIAD"},

  {0x15b5,"Cimetrics Inc"},

  {0x15b6,"Texas Memory Systems Inc"},

  {0x15b7,"Sandisk Corp"},

  {0x15b8,"ADDI-DATA GmbH"},

  {0x15b9,"Maestro Digital Communications"},

  {0x15ba,"Impacct Technology Corp"},

  {0x15bb,"Portwell Inc"},

  {0x15bc,"Agilent Technologies"},

  {0x15bd,"DFI Inc"},

  {0x15be,"Sola Electronics"},

  {0x15bf,"High Tech Computer Corp (HTC)"},

  {0x15c0,"BVM Ltd"},

  {0x15c1,"Quantel"},

  {0x15c2,"Newer Technology Inc"},

  {0x15c3,"Taiwan Mycomp Co Ltd"},

  {0x15c4,"EVSX Inc"},

  {0x15c5,"Procomp Informatics Ltd"},

  {0x15c6,"Technical University of Budapest"},

  {0x15c7,"Tateyama System Laboratory Co Ltd"},

  {0x15c8,"Penta Media Co Ltd"},

  {0x15c9,"Serome Technology Inc"},

  {0x15ca,"Bitboys OY"},

  {0x15cb,"AG Electronics Ltd"},

  {0x15cc,"Hotrail Inc"},

  {0x15cd,"Dreamtech Co Ltd"},

  {0x15ce,"Genrad Inc"},

  {0x15cf,"Hilscher GmbH"},

  {0x15d1,"Infineon Technologies AG"},

  {0x15d2,"FIC (First International Computer Inc)"},

  {0x15d3,"NDS Technologies Israel Ltd"},

  {0x15d4,"Iwill Corp"},

  {0x15d5,"Tatung Co"},

  {0x15d6,"Entridia Corp"},

  {0x15d7,"Rockwell-Collins Inc"},

  {0x15d8,"Cybernetics Technology Co Ltd"},

  {0x15d9,"Super Micro Computer Inc"},

  {0x15da,"Cyberfirm Inc"},

  {0x15db,"Applied Computing Systems Inc"},

  {0x15dc,"Litronic Inc"},

  {0x15dd,"Sigmatel Inc"},

  {0x15de,"Malleable Technologies Inc"},

  {0x15df,"Infinilink Corp"},

  {0x15e0,"Cacheflow Inc"},

  {0x15e1,"Voice Technologies Group Inc"},

  {0x15e2,"Quicknet Technologies Inc"},

  {0x15e3,"Networth Technologies Inc"},

  {0x15e4,"VSN Systemen BV"},

  {0x15e5,"Valley technologies Inc"},

  {0x15e6,"Agere Inc"},

  {0x15e7,"Get Engineering Corp"},

  {0x15e8,"National Datacomm Corp"},

  {0x15e9,"Pacific Digital Corp"},

  {0x15ea,"Tokyo Denshi Sekei K.K."},

  {0x15eb,"DResearch Digital Media Systems GmbH"},

  {0x15ec,"Beckhoff GmbH"},

  {0x15ed,"Macrolink Inc"},

  {0x15ee,"In Win Development Inc"},

  {0x15ef,"Intelligent Paradigm Inc"},

  {0x15f0,"B-Tree Systems Inc"},

  {0x15f1,"Times N Systems Inc"},

  {0x15f2,"Diagnostic Instruments Inc"},

  {0x15f3,"Digitmedia Corp"},

  {0x15f4,"Valuesoft"},

  {0x15f5,"Power Micro Research"},

  {0x15f6,"Extreme Packet Device Inc"},

  {0x15f7,"Banctec"},

  {0x15f8,"Koga Electronics Co"},

  {0x15f9,"Zenith Electronics Corp"},

  {0x15fa,"J.P. Axzam Corp"},

  {0x15fb,"Zilog Inc"},

  {0x15fc,"Techsan Electronics Co Ltd"},

  {0x15fd,"N-CUBED.NET"},

  {0x15fe,"Kinpo Electronics Inc"},

  {0x15ff,"Fastpoint Technologies Inc"},

  {0x1600,"Northrop Grumman - Canada Ltd"},

  {0x1601,"Tenta Technology"},

  {0x1602,"Prosys-tec Inc"},

  {0x1603,"Nokia Wireless Communications"},

  {0x1604,"Central System Research Co Ltd"},

  {0x1605,"Pairgain Technologies"},

  {0x1606,"Europop AG"},

  {0x1607,"Lava Semiconductor Manufacturing Inc"},

  {0x1608,"Automated Wagering International"},

  {0x1609,"Scimetric Instruments Inc"},

  {0x1612,"Telesynergy Research Inc."},

  {0x1618,"Stone Ridge Technology"},

  {0x1619,"FarSite Communications Ltd"},

  {0x161f,"Rioworks"},

  {0x1626,"TDK Semiconductor Corp."},

  {0x1629,"Kongsberg Spacetec AS"},

  {0x1631,"Packard Bell B.V."},

  {0x1638,"Standard Microsystems Corp [SMC]"},

  {0x163c,"Smart Link Ltd."},

  {0x1641,"MKNet Corp."},

  {0x1642,"Bitland(ShenZhen) Information Technology Co., Ltd."},

  {0x1657,"Brocade Communications Systems, Inc."},

  {0x165a,"Epix Inc"},

  {0x165c,"Gidel Ltd."},

  {0x165d,"Hsing Tech. Enterprise Co., Ltd."},

  {0x165f,"Linux Media Labs, LLC"},

  {0x1661,"Worldspace Corp."},

  {0x1668,"Actiontec Electronics Inc"},

  {0x166d,"Broadcom Corporation"},

  {0x1677,"Bernecker + Rainer"},

  {0x1678,"NetEffect"},

  {0x1679,"Tokyo Electron Device Ltd."},

  {0x167b,"ZyDAS Technology Corp."},

  {0x167d,"Samsung Electro-Mechanics Co., Ltd."},

  {0x167e,"ONNTO Corp."},

  {0x1681,"Hercules"},

  {0x1682,"XFX Pine Group Inc."},

  {0x1688,"CastleNet Technology Inc."},

  {0x168c,"Qualcomm Atheros"},

  {0x1695,"EPoX Computer Co., Ltd."},

  {0x169c,"Netcell Corporation"},

  {0x169d,"Club-3D VB (Wrong ID)"},

  {0x16a5,"Tekram Technology Co.,Ltd."},

  {0x16ab,"Global Sun Technology Inc"},

  {0x16ae,"SafeNet Inc"},

  {0x16af,"SparkLAN Communications, Inc."},

  {0x16b4,"Aspex Semiconductor Ltd"},

  {0x16b8,"Sonnet Technologies, Inc."},

  {0x16be,"Creatix Polymedia GmbH"},

  {0x16c3,"Synopsys, Inc."},

  {0x16c6,"Micrel-Kendin"},

  {0x16c8,"Octasic Inc."},

  {0x16c9,"EONIC B.V. The Netherlands"},

  {0x16ca,"CENATEK Inc"},

  {0x16cd,"Advantech Co. Ltd"},

  {0x16ce,"Roland Corp."},

  {0x16d5,"Acromag, Inc."},

  {0x16da,"Advantech Co., Ltd."},

  {0x16df,"PIKA Technologies Inc."},

  {0x16e2,"Geotest-MTS"},

  {0x16e3,"European Space Agency"},

  {0x16e5,"Intellon Corp."},

  {0x16ec,"U.S. Robotics"},

  {0x16ed,"Sycron N. V."},

  {0x16f2,"ETAS GmbH"},

  {0x16f3,"Jetway Information Co., Ltd."},

  {0x16f4,"Vweb Corp"},

  {0x16f6,"VideoTele.com, Inc."},

  {0x1702,"Internet Machines Corporation (IMC)"},

  {0x1705,"Digital First, Inc."},

  {0x170b,"NetOctave"},

  {0x170c,"YottaYotta Inc."},

  {0x1719,"EZChip Technologies"},

  {0x1725,"Vitesse Semiconductor"},

  {0x172a,"Accelerated Encryption"},

  {0x1734,"Fujitsu Technology Solutions"},

  {0x1735,"Aten International Co. Ltd."},

  {0x1737,"Linksys"},

  {0x173b,"Altima (nee Broadcom)"},

  {0x1743,"Peppercon AG"},

  {0x1745,"ViXS Systems, Inc."},

  {0x1749,"RLX Technologies"},

  {0x174b,"PC Partner Limited / Sapphire Technology"},

  {0x174d,"WellX Telecom SA"},

  {0x175c,"AudioScience Inc"},

  {0x175e,"Sanera Systems, Inc."},

  {0x1760,"TEDIA spol. s r. o."},

  {0x1771,"InnoVISION Multimedia Ltd."},

  {0x1775,"GE Intelligent Platforms"},

  {0x177d,"Cavium, Inc."},

  {0x1787,"Hightech Information System Ltd."},

  {0x1789,"Ennyah Technologies Corp."},

  {0x1796,"Research Centre Juelich"},

  {0x1797,"Intersil Techwell"},

  {0x1799,"Belkin"},

  {0x179a,"id Quantique"},

  {0x179c,"Data Patterns"},

  {0x17a0,"Genesys Logic, Inc"},

  {0x17aa,"Lenovo"},

  {0x17ab,"Phillips Components"},

  {0x17af,"Hightech Information System Ltd."},

  {0x17b3,"Hawking Technologies"},

  {0x17b4,"Indra Networks, Inc."},

  {0x17c0,"Wistron Corp."},

  {0x17c2,"Newisys, Inc."},

  {0x17cb,"Qualcomm"},

  {0x17cc,"NetChip Technology, Inc"},

  {0x17cd,"Cadence Design Systems, Inc."},

  {0x17cf,"Z-Com, Inc."},

  {0x17d3,"Areca Technology Corp."},

  {0x17d5,"Exar Corp."},

  {0x17db,"Cray Inc"},

  {0x17de,"KWorld Computer Co. Ltd."},

  {0x17df,"Dini Group"},

  {0x17e4,"Sectra AB"},

  {0x17e6,"Entropic Communications Inc."},

  {0x17ee,"Connect Components Ltd"},

  {0x17f2,"Albatron Corp."},

  {0x17f3,"RDC Semiconductor, Inc."},

  {0x17f7,"Topdek Semiconductor Inc."},

  {0x17f9,"Gemtek Technology Co., Ltd"},

  {0x17fc,"IOGEAR, Inc."},

  {0x17fe,"InProComm Inc."},

  {0x17ff,"Benq Corporation"},

  {0x1800,"Qualcore Logic Inc."},

  {0x1803,"ProdaSafe GmbH"},

  {0x1805,"Euresys S.A."},

  {0x1809,"Lumanate, Inc."},

  {0x1813,"Ambient Technologies Inc"},

  {0x1814,"Ralink corp."},

  {0x1815,"Devolo AG"},

  {0x1820,"InfiniCon Systems Inc."},

  {0x1822,"Twinhan Technology Co. Ltd"},

  {0x182d,"SiteCom Europe BV"},

  {0x182e,"Raza Microelectronics, Inc."},

  {0x182f,"Broadcom"},

  {0x1830,"Credence Systems Corporation"},

  {0x183b,"MikroM GmbH"},

  {0x1846,"Alcatel-Lucent"},

  {0x1849,"ASRock Incorporation"},

  {0x184a,"Thales Computers"},

  {0x1850,"Advantest Corporation"},

  {0x1851,"Microtune, Inc."},

  {0x1852,"Anritsu Corp."},

  {0x1853,"SMSC Automotive Infotainment System Group"},

  {0x1854,"LG Electronics, Inc."},

  {0x185b,"Compro Technology, Inc."},

  {0x185f,"Wistron NeWeb Corp."},

  {0x1864,"SilverBack"},

  {0x1867,"Topspin Communications"},

  {0x186c,"Humusoft, s.r.o."},

  {0x186f,"WiNRADiO Communications"},

  {0x1876,"L-3 Communications"},

  {0x187e,"ZyXEL Communications Corporation"},

  {0x1885,"Avvida Systems Inc."},

  {0x1888,"Varisys Ltd"},

  {0x188a,"Ample Communications, Inc"},

  {0x1890,"Egenera, Inc."},

  {0x1894,"KNC One"},

  {0x1896,"B&B Electronics Manufacturing Company, Inc."},

  {0x1897,"AMtek"},

  {0x18a1,"Astute Networks Inc."},

  {0x18a2,"Stretch Inc."},

  {0x18a3,"AT&T"},

  {0x18ac,"DViCO Corporation"},

  {0x18b8,"Ammasso"},

  {0x18bc,"GeCube Technologies, Inc."},

  {0x18c3,"Micronas Semiconductor Holding AG"},

  {0x18c8,"Cray Inc"},

  {0x18c9,"ARVOO Engineering BV"},

  {0x18ca,"XGI Technology Inc. (eXtreme Graphics Innovation)"},

  {0x18d2,"Sitecom Europe BV (Wrong ID)"},

  {0x18d4,"Celestica"},

  {0x18d8,"Dialogue Technology Corp."},

  {0x18dd,"Artimi Inc"},

  {0x18df,"LeWiz Communications"},

  {0x18e6,"MPL AG"},

  {0x18eb,"Advance Multimedia Internet Technology, Inc."},

  {0x18ec,"Cesnet, z.s.p.o."},

  {0x18ee,"Chenming Mold Ind. Corp."},

  {0x18f1,"Spectrum GmbH"},

  {0x18f4,"Napatech A/S"},

  {0x18f6,"NextIO"},

  {0x18f7,"Commtech, Inc."},

  {0x18fb,"Resilience Corporation"},

  {0x1904,"Hangzhou Silan Microelectronics Co., Ltd."},

  {0x1905,"Micronas USA, Inc."},

  {0x1912,"Renesas Technology Corp."},

  {0x1919,"Soltek Computer Inc."},

  {0x1923,"Sangoma Technologies Corp."},

  {0x1924,"Solarflare Communications"},

  {0x192a,"BiTMICRO Networks Inc."},

  {0x192e,"TransDimension"},

  {0x1931,"Option N.V."},

  {0x1932,"DiBcom"},

  {0x193c,"MAXIM Integrated Products"},

  {0x193f,"AHA Products Group"},

  {0x1942,"ClearSpeed Technology plc"},

  {0x1947,"C-guys, Inc."},

  {0x1948,"Alpha Networks Inc."},

  {0x194a,"DapTechnology B.V."},

  {0x1954,"One Stop Systems, Inc."},

  {0x1957,"Freescale Semiconductor Inc"},

  {0x1958,"Faster Technology, LLC."},

  {0x1959,"PA Semi, Inc"},

  {0x1966,"Orad Hi-Tec Systems"},

  {0x1969,"Qualcomm Atheros"},

  {0x196a,"Sensory Networks Inc."},

  {0x196d,"Club-3D BV"},

  {0x1971,"AGEIA Technologies, Inc."},

  {0x1974,"Eberspaecher Electronics"},

  {0x1976,"TRENDnet"},

  {0x1977,"Parsec"},

  {0x197b,"JMicron Technology Corp."},

  {0x1982,"Distant Early Warning Communications Inc"},

  {0x1989,"Montilio Inc."},

  {0x198a,"Nallatech Ltd."},

  {0x1993,"Innominate Security Technologies AG"},

  {0x1999,"A-Logics"},

  {0x199a,"Pulse-LINK, Inc."},

  {0x199d,"Xsigo Systems"},

  {0x199f,"Auvitek"},

  {0x19a2,"Emulex Corporation"},

  {0x19a8,"DAQDATA GmbH"},

  {0x19ac,"Kasten Chase Applied Research"},

  {0x19ae,"Progeny Systems Corporation"},

  {0x19ba,"ZyXEL Communications Corp."},

  {0x19c1,"Exegy Inc."},

  {0x19d1,"Motorola Expedience"},

  {0x19d4,"Quixant Limited"},

  {0x19da,"ZOTAC International (MCO) Ltd."},

  {0x19de,"Pico Computing"},

  {0x19e2,"Vector Informatik GmbH"},

  {0x19e3,"DDRdrive LLC"},

  {0x19e5,"Huawei Technologies Co., Ltd."},

  {0x19e7,"NET (Network Equipment Technologies)"},

  {0x19ee,"Netronome Systems, Inc."},

  {0x19f1,"BFG Tech"},

  {0x19ff,"Eclipse Electronic Systems, Inc."},

  {0x1a03,"ASPEED Technology, Inc."},

  {0x1a07,"Kvaser AB"},

  {0x1a08,"Sierra semiconductor"},

  {0x1a0e,"DekTec Digital Video B.V."},

  {0x1a17,"Force10 Networks, Inc."},

  {0x1a1d,"GFaI e.V."},

  {0x1a1e,"3Leaf Systems, Inc."},

  {0x1a22,"Ambric Inc."},

  {0x1a29,"Fortinet, Inc."},

  {0x1a2b,"Ascom AG"},

  {0x1a30,"Lantiq"},

  {0x1a32,"Quanta Microsystems, Inc"},

  {0x1a3b,"AzureWave"},

  {0x1a41,"Tilera Corp."},

  {0x1a4a,"SLAC National Accelerator Lab PPA-REG"},

  {0x1a51,"Hectronic AB"},

  {0x1a55,"Rohde & Schwarz DVS GmbH"},

  {0x1a56,"Bigfoot Networks, Inc."},

  {0x1a57,"Highly Reliable Systems"},

  {0x1a58,"Razer USA Ltd."},

  {0x1a5d,"Celoxica"},

  {0x1a5e,"Aprius Inc."},

  {0x1a5f,"System TALKS Inc."},

  {0x1a68,"VirtenSys Limited"},

  {0x1a71,"XenSource, Inc."},

  {0x1a73,"Violin Memory, Inc"},

  {0x1a76,"Wavesat"},

  {0x1a77,"Lightfleet Corporation"},

  {0x1a78,"Virident Systems Inc."},

  {0x1a84,"Commex Technologies"},

  {0x1a88,"MEN Mikro Elektronik"},

  {0x1a8a,"StarBridge, Inc."},

  {0x1a8c,"Verigy Pte. Ltd."},

  {0x1a8e,"DRS Technologies"},

  {0x1aa8,"Ciprico, Inc."},

  {0x1aae,"Global Velocity, Inc."},

  {0x1ab6,"CalDigit, Inc."},

  {0x1ab8,"Parallels, Inc."},

  {0x1ab9,"Espia Srl"},

  {0x1ac8,"Aeroflex Gaisler"},

  {0x1acc,"Point of View BV"},

  {0x1ad7,"Spectracom Corporation"},

  {0x1ade,"Spin Master Ltd."},

  {0x1ae0,"Google, Inc."},

  {0x1ae7,"First Wise Media GmbH"},

  {0x1ae8,"Silicon Software GmbH"},

  {0x1ae9,"Wilocity Ltd."},

  {0x1aea,"Alcor Micro"},

  {0x1aec,"Wolfson Microelectronics"},

  {0x1aed,"SanDisk"},

  {0x1aee,"Caustic Graphics Inc."},

  {0x1af4,"Red Hat, Inc"},

  {0x1af5,"Netezza Corp."},

  {0x1afa,"J & W Electronics Co., Ltd."},

  {0x1b03,"Magnum Semiconductor, Inc,"},

  {0x1b08,"MSC Technologies GmbH"},

  {0x1b0a,"Pegatron"},

  {0x1b13,"Jaton Corp"},

  {0x1b1a,"K&F Computing Research Co."},

  {0x1b21,"ASMedia Technology Inc."},

  {0x1b2c,"Opal-RT Technologies Inc."},

  {0x1b36,"Red Hat, Inc."},

  {0x1b37,"Signal Processing Devices Sweden AB"},

  {0x1b39,"sTec, Inc."},

  {0x1b3a,"Westar Display Technologies"},

  {0x1b3e,"Teradata Corp."},

  {0x1b40,"Schooner Information Technology, Inc."},

  {0x1b47,"Numascale AS"},

  {0x1b4b,"Marvell Technology Group Ltd."},

  {0x1b55,"NetUP Inc."},

  {0x1b66,"Deltacast"},

  {0x1b6f,"Etron Technology, Inc."},

  {0x1b73,"Fresco Logic"},

  {0x1b74,"OpenVox Communication Co. Ltd."},

  {0x1b79,"Absolute Analysis"},

  {0x1b85,"OCZ Technology Group, Inc."},

  {0x1b94,"Signatec / Dynamic Signals Corp"},

  {0x1b96,"Western Digital"},

  {0x1b9a,"XAVi Technologies Corp."},

  {0x1bad,"ReFLEX CES"},

  {0x1bb0,"SimpliVity Corporation"},

  {0x1bb1,"Seagate Technology PLC"},

  {0x1bb3,"Bluecherry"},

  {0x1bb5,"Quantenna Communications, Inc."},

  {0x1bbf,"Maxeler Technologies Ltd."},

  {0x1bd0,"Astronics Corporation"},

  {0x1bd4,"Inspur Electronic Information Industry Co., Ltd."},

  {0x1bee,"IXXAT Automation GmbH"},

  {0x1bef,"Lantiq"},

  {0x1bf4,"VTI Instruments Corporation"},

  {0x1bfd,"EeeTOP"},

  {0x1c09,"CSP, Inc."},

  {0x1c1c,"Symphony"},

  {0x1c28,"Lite-On IT Corp. / Plextor"},

  {0x1c2c,"Fiberblaze"},

  {0x1c32,"Highland Technology, Inc."},

  {0x1c33,"Daktronics, Inc"},

  {0x1c3b,"Accensus, LLC"},

  {0x1c44,"Enmotus Inc"},

  {0x1c58,"HGST, Inc."},

  {0x1c5f,"Beijing Memblaze Technology Co. Ltd."},

  {0x1c63,"Science and Research Centre of Computer Technology (JSC \"NICEVT\")"},

  {0x1c7e,"TTTech Computertechnik AG"},

  {0x1c7f,"Elektrobit Austria GmbH"},

  {0x1c8a,"TSF5 Corporation"},

  {0x1cb1,"Collion UG & Co.KG"},

  {0x1cb8,"Dawning Information Industry Co., Ltd."},

  {0x1cc5,"Embedded Intelligence, Inc."},

  {0x1cc7,"Radian Memory Systems Inc."},

  {0x1cd2,"SesKion GmbH"},

  {0x1cd7,"Nanjing Magewell Electronics Co., Ltd."},

  {0x1cdd,"secunet Security Networks AG"},

  {0x1ce4,"Exablaze"},

  {0x1cf7,"Subspace Dynamics"},

  {0x1d00,"Pure Storage"},

  {0x1d18,"RME"},

  {0x1d1d,"CNEX Labs"},

  {0x1d21,"Allo"},

  {0x1d26,"Kalray Inc."},

  {0x1d40,"Techman Electronics (Changshu) Co., Ltd."},

  {0x1d44,"DPT"},

  {0x1d49,"Lenovo"},

  {0x1d4c,"Diamanti, Inc."},

  {0x1d5c,"Fantasia Trading LLC"},

  {0x1d61,"Technobox, Inc."},

  {0x1d62,"Nebbiolo Technologies"},

  {0x1d65,"Imagine Communications Corp."},

  {0x1d6c,"Atomic Rules LLC"},

  {0x1d78,"DERA"},

  {0x1d7c,"Aerotech, Inc."},

  {0x1d87,"Rockchip Inc. RK3399 PCI Express Root Port"},

  {0x1d8f,"Enyx"},

  {0x1d95,"Graphcore Ltd"},

  {0x1da1,"Teko Telecom S.r.l."},

  {0x1da2,"Sapphire Technology Limited"},

  {0x1de1,"Tekram Technology Co.,Ltd."},

  {0x1fc0,"Ascom (Finland) Oy"},

  {0x1fc1,"QLogic, Corp."},

  {0x1fc9,"Tehuti Networks Ltd."},

  {0x1fcc,"StreamLabs"},

  {0x1fce,"Cognio Inc."},

  {0x1fd4,"SUNIX Co., Ltd."},

  {0x2000,"Smart Link Ltd."},

  {0x2001,"Temporal Research Ltd"},

  {0x2003,"Smart Link Ltd."},

  {0x2004,"Smart Link Ltd."},

  {0x20f4,"TRENDnet"},

  {0x2116,"ZyDAS Technology Corp."},

  {0x21c3,"21st Century Computer Corp."},

  {0x2304,"Colorgraphic Communications Corp."},

  {0x2348,"Racore"},

  {0x2646,"Kingston Technologies"},

  {0x270b,"Xantel Corporation"},

  {0x270f,"Chaintech Computer Co. Ltd"},

  {0x2711,"AVID Technology Inc."},

  {0x2955,"Connectix Virtual PC"},

  {0x2a15,"3D Vision"},

  {0x2bd8,"ROPEX Industrie-Elektronik GmbH"},

  {0x3000,"Hansol Electronics Inc."},

  {0x3112,"Satelco Ingenieria S.A."},

  {0x3130,"AUDIOTRAK"},

  {0x3142,"Post Impression Systems."},

  {0x31ab,"Zonet"},

  {0x3388,"Hint Corp"},

  {0x3411,"Quantum Designs (H.K.) Inc"},

  {0x3442,"Bihl+Wiedemann GmbH"},

  {0x3475,"Arastra Inc."},

  {0x3513,"ARCOM Control Systems Ltd"},

  {0x37d9,"ITD Firm ltd."},

  {0x3842,"eVga.com. Corp."},

  {0x38ef,"4Links"},

  {0x3d3d,"3DLabs"},

  {0x4005,"Avance Logic Inc."},

  {0x4033,"Addtron Technology Co, Inc."},

  {0x4040,"NetXen Incorporated"},

  {0x4143,"Digital Equipment Corp"},

  {0x4144,"Alpha Data"},

  {0x4150,"ONA Electroerosion"},

  {0x415a,"Auzentech, Inc."},

  {0x416c,"Aladdin Knowledge Systems"},

  {0x4254,"DVBSky"},

  {0x4321,"Tata Power Strategic Electronics Division"},

  {0x4348,"WCH.CN"},

  {0x434e,"CAST Navigation LLC"},

  {0x4444,"Internext Compression Inc"},

  {0x4468,"Bridgeport machines"},

  {0x4594,"Cogetec Informatique Inc"},

  {0x45fb,"Baldor Electric Company"},

  {0x4624,"Budker Institute of Nuclear Physics"},

  {0x4651,"TXIC"},

  {0x4680,"Umax Computer Corp"},

  {0x4843,"Hercules Computer Technology Inc"},

  {0x4916,"RedCreek Communications Inc"},

  {0x4943,"Growth Networks"},

  {0x494f,"ACCES I/O Products, Inc."},

  {0x4978,"Axil Computer Inc"},

  {0x4a14,"NetVin"},

  {0x4b10,"Buslogic Inc."},

  {0x4c48,"LUNG HWA Electronics"},

  {0x4c53,"SBS Technologies"},

  {0x4ca1,"Seanix Technology Inc"},

  {0x4d51,"MediaQ Inc."},

  {0x4d54,"Microtechnica Co Ltd"},

  {0x4d56,"MATRIX VISION GmbH"},

  {0x4ddc,"ILC Data Device Corp"},

  {0x5045,"University of Toronto"},

  {0x5046,"GemTek Technology Corporation"},

  {0x5053,"Voyetra Technologies"},

  {0x50b2,"TerraTec Electronic GmbH"},

  {0x5136,"S S Technologies"},

  {0x5143,"Qualcomm Inc"},

  {0x5145,"Ensoniq (Old)"},

  {0x5168,"Animation Technologies Inc."},

  {0x5301,"Alliance Semiconductor Corp."},

  {0x5333,"S3 Graphics Ltd."},

  {0x5431,"AuzenTech, Inc."},

  {0x544c,"Teralogic Inc"},

  {0x544d,"TBS Technologies"},

  {0x5452,"SCANLAB AG"},

  {0x5455,"Technische University Berlin"},

  {0x5456,"GoTView"},

  {0x5519,"Cnet Technologies, Inc."},

  {0x5544,"Dunord Technologies"},

  {0x5555,"Genroco, Inc"},

  {0x5646,"Vector Fabrics BV"},

  {0x5654,"VoiceTronix Pty Ltd"},

  {0x5678,"Dawicontrol Computersysteme GmbH"},

  {0x5700,"Netpower"},

  {0x5845,"X-ES, Inc."},

  {0x584d,"AuzenTech Co., Ltd."},

  {0x5851,"Exacq Technologies"},

  {0x5853,"XenSource, Inc."},

  {0x5854,"GoTView"},

  {0x5ace,"Beholder International Ltd."},

  {0x631c,"SmartInfra Ltd"},

  {0x6356,"UltraStor"},

  {0x6374,"c't Magazin fuer Computertechnik"},

  {0x6409,"Logitec Corp."},

  {0x6549,"Teradici Corp."},

  {0x6666,"Decision Computer International Co."},

  {0x6688,"Zycoo Co., Ltd"},

  {0x6900,"Red Hat, Inc."},

  {0x7063,"pcHDTV"},

  {0x7284,"HT OMEGA Inc."},

  {0x7401,"EndRun Technologies"},

  {0x7470,"TP-LINK Technologies Co., Ltd."},

  {0x7604,"O.N. Electronic Co Ltd."},

  {0x7bde,"MIDAC Corporation"},

  {0x7fed,"PowerTV"},

  {0x8008,"Quancom Electronic GmbH"},

  {0x807d,"Asustek Computer, Inc."},

  {0x8086,"Intel Corporation"},

  {0x80ee,"InnoTek Systemberatung GmbH"},

  {0x8322,"Sodick America Corp."},

  {0x8384,"SigmaTel"},

  {0x8401,"TRENDware International Inc."},

  {0x8686,"ScaleMP"},

  {0x8800,"Trigem Computer Inc."},

  {0x8866,"T-Square Design Inc."},

  {0x8888,"Silicon Magic"},

  {0x8912,"TRX"},

  {0x8c4a,"Winbond"},

  {0x8e0e,"Computone Corporation"},

  {0x8e2e,"KTI"},

  {0x9004,"Adaptec"},

  {0x9005,"Adaptec"},

  {0x907f,"Atronics"},

  {0x919a,"Gigapixel Corp"},

  {0x9412,"Holtek"},

  {0x9413,"Softlogic Co., Ltd."},

  {0x9618,"JusonTech Corporation"},

  {0x9699,"Omni Media Technology Inc"},

  {0x9710,"MosChip Semiconductor Technology Ltd."},

  {0x9850,"3Com (wrong ID)"},

  {0x9902,"Stargen Inc."},

  {0xa0a0,"AOPEN Inc."},

  {0xa0f1,"UNISYS Corporation"},

  {0xa200,"NEC Corporation"},

  {0xa259,"Hewlett Packard"},

  {0xa25b,"Hewlett Packard GmbH PL24-MKT"},

  {0xa304,"Sony"},

  {0xa727,"3Com Corporation"},

  {0xaa00,"iTuner"},

  {0xaa01,"iTuner"},

  {0xaa02,"iTuner"},

  {0xaa03,"iTuner"},

  {0xaa04,"iTuner"},

  {0xaa05,"iTuner"},

  {0xaa06,"iTuner"},

  {0xaa07,"iTuner"},

  {0xaa08,"iTuner"},

  {0xaa09,"iTuner"},

  {0xaa0a,"iTuner"},

  {0xaa0b,"iTuner"},

  {0xaa0c,"iTuner"},

  {0xaa0d,"iTuner"},

  {0xaa0e,"iTuner"},

  {0xaa0f,"iTuner"},

  {0xaa42,"Scitex Digital Video"},

  {0xaa55,"Ncomputing X300 PCI-Engine"},

  {0xaaaa,"Adnaco Technology Inc."},

  {0xabcd,"Vadatech Inc."},

  {0xac1e,"Digital Receiver Technology Inc"},

  {0xac3d,"Actuality Systems"},

  {0xad00,"Alta Data Technologies LLC"},

  {0xaecb,"Adrienne Electronics Corporation"},

  {0xaffe,"Sirrix AG security technologies"},

  {0xb100,"OpenVox Communication Co. Ltd."},

  {0xb10b,"Uakron PCI Project"},

  {0xb1b3,"Shiva Europe Limited"},

  {0xb1d9,"ATCOM Technology co., LTD."},

  {0xbd11,"Pinnacle Systems, Inc. (Wrong ID)"},

  {0xbdbd,"Blackmagic Design"},

  {0xc001,"TSI Telsys"},

  {0xc0a9,"Micron/Crucial Technology"},

  {0xc0de,"Motorola"},

  {0xc0fe,"Motion Engineering, Inc."},

  {0xca50,"Varian Australia Pty Ltd"},

  {0xcace,"CACE Technologies, Inc."},

  {0xcaed,"Canny Edge"},

  {0xcafe,"Chrysalis-ITS"},

  {0xcccc,"Catapult Communications"},

  {0xccec,"Curtiss-Wright Controls Embedded Computing"},

  {0xcddd,"Tyzx, Inc."},

  {0xceba,"KEBA AG"},

  {0xd161,"Digium, Inc."},

  {0xd4d4,"Dy4 Systems Inc"},

  {0xd531,"I+ME ACTIA GmbH"},

  {0xd84d,"Exsys"},

  {0xdada,"Datapath Limited"},

  {0xdb10,"Diablo Technologies"},

  {0xdc93,"Dawicontrol GmbH"},

  {0xdcba,"Dynamic Engineering"},

  {0xdd01,"Digital Devices GmbH"},

  {0xdead,"Indigita Corporation"},

  {0xdeaf,"Middle Digital Inc."},

  {0xdeda,"XIMEA"},

  {0xe000,"Winbond"},

  {0xe159,"Tiger Jet Network Inc."},

  {0xe1c5,"Elcus"},

  {0xe4bf,"EKF Elektronik GmbH"},

  {0xe4e4,"Xorcom"},

  {0xe55e,"Essence Technology, Inc."},

  {0xea01,"Eagle Technology"},

  {0xea60,"RME"},

  {0xeabb,"Aashima Technology B.V."},

  {0xeace,"Endace Measurement Systems, Ltd"},

  {0xec80,"Belkin Corporation"},

  {0xecc0,"Echo Digital Audio Corporation"},

  {0xedd8,"ARK Logic Inc"},

  {0xf043,"ASUSTeK Computer Inc. (Wrong ID)"},

  {0xf05b,"Foxconn International, Inc. (Wrong ID)"},

  {0xf1d0,"AJA Video"},

  {0xf5f5,"F5 Networks, Inc."},

  {0xf849,"ASRock Incorporation (Wrong ID)"},

  {0xfa57,"Interagon AS"},

  {0xfab7,"Fabric7 Systems, Inc."},

  {0xfebd,"Ultraview Corp."},

  {0xfeda,"Broadcom Inc"},

  {0xfede,"Fedetec Inc."},

  {0xfffd,"XenSource, Inc."},

  {0xfffe,"VMWare Inc (temporary ID)"},

  {0xffff,"Illegal Vendor ID"}

};

PciDeviceString mDeviceList[] = {

  {0x0010,0x8139,"AT-2500TX V3 Ethernet"},

  {0x001c,0x0001,"PCAN-PCI CAN-Bus controller"},

  {0x0070,0x7801,"WinTV HVR-1800 MCE"},

  {0x0095,0x0680,"Ultra ATA/133 IDE RAID CONTROLLER CARD"},

  {0x018a,0x0106,"FPC-0106TX misprogrammed [RTL81xx]"},

  {0x021b,0x8139,"HNE-300 (RealTek RTL8139c) [iPaq Networking]"},

  {0x02ac,0x1012,"1012 PCMCIA 10/100 Ethernet Card [RTL81xx]"},

  {0x0357,0x000a,"TTP-Monitoring Card V2.0"},

  {0x0432,0x0001,"Pluto2 DVB-T Receiver for PCMCIA [EasyWatch MobilSet]"},

  {0x0675,0x1700,"IS64PH ISDN Adapter"},

  {0x0675,0x1702,"IS64PH ISDN Adapter"},

  {0x0675,0x1703,"ISDN Adapter (PCI Bus, DV, W)"},

  {0x0675,0x1704,"ISDN Adapter (PCI Bus, D, C)"},

  {0x0795,0x6663,"Butane II (MPEG2 encoder board)"},

  {0x0795,0x6666,"MediaPress (MPEG2 encoder board)"},

  {0x0b0b,0x0105,"R1T1"},

  {0x0b0b,0x0205,"R4FXO"},

  {0x0b0b,0x0206,"RCB4FXO 4-channel FXO analog telphony card"},

  {0x0b0b,0x0305,"R4T1"},

  {0x0b0b,0x0405,"R8FXX"},

  {0x0b0b,0x0406,"RCB8FXX 8-channel modular analog telphony card"},

  {0x0b0b,0x0505,"R24FXX"},

  {0x0b0b,0x0506,"RCB24FXS 24-Channel FXS analog telphony card"},

  {0x0b0b,0x0605,"R2T1"},

  {0x0b0b,0x0705,"R24FXS"},

  {0x0b0b,0x0706,"RCB24FXO 24-Channel FXO analog telphony card"},

  {0x0b0b,0x0905,"R1T3 Single T3 Digital Telephony Card"},

  {0x0b0b,0x0906,"RCB24FXX 24-channel modular analog telphony card"},

  {0x0b0b,0x0a06,"RCB672FXX 672-channel modular analog telphony card"},

  {0x0e11,0x0001,"PCI to EISA Bridge"},

  {0x0e11,0x0002,"PCI to ISA Bridge"},

  {0x0e11,0x0046,"Smart Array 64xx"},

  {0x0e11,0x0049,"NC7132 Gigabit Upgrade Module"},

  {0x0e11,0x004a,"NC6136 Gigabit Server Adapter"},

  {0x0e11,0x005a,"Remote Insight II board - Lights-Out"},

  {0x0e11,0x007c,"NC7770 1000BaseTX"},

  {0x0e11,0x007d,"NC6770 1000BaseTX"},

  {0x0e11,0x0085,"NC7780 1000BaseTX"},

  {0x0e11,0x00b1,"Remote Insight II board - PCI device"},

  {0x0e11,0x00bb,"NC7760"},

  {0x0e11,0x00ca,"NC7771"},

  {0x0e11,0x00cb,"NC7781"},

  {0x0e11,0x00cf,"NC7772"},

  {0x0e11,0x00d0,"NC7782"},

  {0x0e11,0x00d1,"NC7783"},

  {0x0e11,0x00e3,"NC7761"},

  {0x0e11,0x0508,"Netelligent 4/16 Token Ring"},

  {0x0e11,0x1000,"Triflex/Pentium Bridge, Model 1000"},

  {0x0e11,0x2000,"Triflex/Pentium Bridge, Model 2000"},

  {0x0e11,0x3032,"QVision 1280/p"},

  {0x0e11,0x3033,"QVision 1280/p"},

  {0x0e11,0x3034,"QVision 1280/p"},

  {0x0e11,0x4000,"4000 [Triflex]"},

  {0x0e11,0x4040,"Integrated Array"},

  {0x0e11,0x4048,"Compaq Raid LC2"},

  {0x0e11,0x4050,"Smart Array 4200"},

  {0x0e11,0x4051,"Smart Array 4250ES"},

  {0x0e11,0x4058,"Smart Array 431"},

  {0x0e11,0x4070,"Smart Array 5300"},

  {0x0e11,0x4080,"Smart Array 5i"},

  {0x0e11,0x4082,"Smart Array 532"},

  {0x0e11,0x4083,"Smart Array 5312"},

  {0x0e11,0x4091,"Smart Array 6i"},

  {0x0e11,0x409a,"Smart Array 641"},

  {0x0e11,0x409b,"Smart Array 642"},

  {0x0e11,0x409c,"Smart Array 6400"},

  {0x0e11,0x409d,"Smart Array 6400 EM"},

  {0x0e11,0x6010,"HotPlug PCI Bridge 6010"},

  {0x0e11,0x7020,"USB Controller"},

  {0x0e11,0xa0ec,"Fibre Channel Host Controller"},

  {0x0e11,0xa0f0,"Advanced System Management Controller"},

  {0x0e11,0xa0f3,"Triflex PCI to ISA Bridge"},

  {0x0e11,0xa0f7,"PCI Hotplug Controller"},

  {0x0e11,0xa0f8,"ZFMicro Chipset USB"},

  {0x0e11,0xa0fc,"FibreChannel HBA Tachyon"},

  {0x0e11,0xae10,"Smart-2/P RAID Controller"},

  {0x0e11,0xae29,"MIS-L"},

  {0x0e11,0xae2a,"MPC"},

  {0x0e11,0xae2b,"MIS-E"},

  {0x0e11,0xae31,"System Management Controller"},

  {0x0e11,0xae32,"Netelligent 10/100 TX PCI UTP"},

  {0x0e11,0xae33,"Triflex Dual EIDE Controller"},

  {0x0e11,0xae34,"Netelligent 10 T PCI UTP"},

  {0x0e11,0xae35,"Integrated NetFlex-3/P"},

  {0x0e11,0xae40,"Netelligent Dual 10/100 TX PCI UTP"},

  {0x0e11,0xae43,"Netelligent Integrated 10/100 TX UTP"},

  {0x0e11,0xae69,"CETUS-L"},

  {0x0e11,0xae6c,"Northstar"},

  {0x0e11,0xae6d,"NorthStar CPU to PCI Bridge"},

  {0x0e11,0xb011,"Netelligent 10/100 TX Embedded UTP"},

  {0x0e11,0xb012,"Netelligent 10 T/2 PCI UTP/Coax"},

  {0x0e11,0xb01e,"NC3120 Fast Ethernet NIC"},

  {0x0e11,0xb01f,"NC3122 Fast Ethernet NIC"},

  {0x0e11,0xb02f,"NC1120 Ethernet NIC"},

  {0x0e11,0xb030,"Netelligent 10/100 TX UTP"},

  {0x0e11,0xb04a,"10/100 TX PCI Intel WOL UTP Controller"},

  {0x0e11,0xb060,"Smart Array 5300 Controller"},

  {0x0e11,0xb0c6,"NC3161 Fast Ethernet NIC"},

  {0x0e11,0xb0c7,"NC3160 Fast Ethernet NIC"},

  {0x0e11,0xb0d7,"NC3121 Fast Ethernet NIC"},

  {0x0e11,0xb0dd,"NC3131 Fast Ethernet NIC"},

  {0x0e11,0xb0de,"NC3132 Fast Ethernet Module"},

  {0x0e11,0xb0df,"NC6132 Gigabit Module"},

  {0x0e11,0xb0e0,"NC6133 Gigabit Module"},

  {0x0e11,0xb0e1,"NC3133 Fast Ethernet Module"},

  {0x0e11,0xb123,"NC6134 Gigabit NIC"},

  {0x0e11,0xb134,"NC3163 Fast Ethernet NIC"},

  {0x0e11,0xb13c,"NC3162 Fast Ethernet NIC"},

  {0x0e11,0xb144,"NC3123 Fast Ethernet NIC"},

  {0x0e11,0xb163,"NC3134 Fast Ethernet NIC"},

  {0x0e11,0xb164,"NC3165 Fast Ethernet Upgrade Module"},

  {0x0e11,0xb178,"Smart Array 5i/532"},

  {0x0e11,0xb1a4,"NC7131 Gigabit Server Adapter"},

  {0x0e11,0xb200,"Memory Hot-Plug Controller"},

  {0x0e11,0xb203,"Integrated Lights Out Controller"},

  {0x0e11,0xb204,"Integrated Lights Out  Processor"},

  {0x0e11,0xc000,"Remote Insight Lights-Out Edition"},

  {0x0e11,0xf130,"NetFlex-3/P ThunderLAN 1.0"},

  {0x0e11,0xf150,"NetFlex-3/P ThunderLAN 2.3"},

  {0x0eac,0x0008,"Ethernet Powerlink Managing Node 01"},

  {0x1000,0x0001,"53c810"},

  {0x1000,0x0002,"53c820"},

  {0x1000,0x0003,"53c825"},

  {0x1000,0x0004,"53c815"},

  {0x1000,0x0005,"53c810AP"},

  {0x1000,0x0006,"53c860"},

  {0x1000,0x000a,"53c1510"},

  {0x1000,0x000b,"53C896/897"},

  {0x1000,0x000c,"53c895"},

  {0x1000,0x000d,"53c885"},

  {0x1000,0x000f,"53c875"},

  {0x1000,0x0010,"53C1510"},

  {0x1000,0x0012,"53c895a"},

  {0x1000,0x0013,"53c875a"},

  {0x1000,0x0014,"MegaRAID Tri-Mode SAS3516"},

  {0x1000,0x0015,"MegaRAID Tri-Mode SAS3416"},

  {0x1000,0x0016,"MegaRAID Tri-Mode SAS3508"},

  {0x1000,0x0017,"MegaRAID Tri-Mode SAS3408"},

  {0x1000,0x001b,"MegaRAID Tri-Mode SAS3504"},

  {0x1000,0x001c,"MegaRAID Tri-Mode SAS3404"},

  {0x1000,0x0020,"53c1010 Ultra3 SCSI Adapter"},

  {0x1000,0x0021,"53c1010 66MHz  Ultra3 SCSI Adapter"},

  {0x1000,0x002f,"MegaRAID SAS 2208 IOV [Thunderbolt]"},

  {0x1000,0x0030,"53c1030 PCI-X Fusion-MPT Dual Ultra320 SCSI"},

  {0x1000,0x0031,"53c1030ZC PCI-X Fusion-MPT Dual Ultra320 SCSI"},

  {0x1000,0x0032,"53c1035 PCI-X Fusion-MPT Dual Ultra320 SCSI"},

  {0x1000,0x0033,"1030ZC_53c1035 PCI-X Fusion-MPT Dual Ultra320 SCSI"},

  {0x1000,0x0040,"53c1035 PCI-X Fusion-MPT Dual Ultra320 SCSI"},

  {0x1000,0x0041,"53C1035ZC PCI-X Fusion-MPT Dual Ultra320 SCSI"},

  {0x1000,0x0050,"SAS1064 PCI-X Fusion-MPT SAS"},

  {0x1000,0x0052,"MegaRAID SAS-3 3216/3224 [Cutlass]"},

  {0x1000,0x0053,"MegaRAID SAS-3 3216/3224 [Cutlass]"},

  {0x1000,0x0054,"SAS1068 PCI-X Fusion-MPT SAS"},

  {0x1000,0x0055,"SAS1068 PCI-X Fusion-MPT SAS"},

  {0x1000,0x0056,"SAS1064ET PCI-Express Fusion-MPT SAS"},

  {0x1000,0x0057,"M1064E MegaRAID SAS"},

  {0x1000,0x0058,"SAS1068E PCI-Express Fusion-MPT SAS"},

  {0x1000,0x0059,"MegaRAID SAS 8208ELP/8208ELP"},

  {0x1000,0x005a,"SAS1066E PCI-Express Fusion-MPT SAS"},

  {0x1000,0x005b,"MegaRAID SAS 2208 [Thunderbolt]"},

  {0x1000,0x005c,"SAS1064A PCI-X Fusion-MPT SAS"},

  {0x1000,0x005d,"MegaRAID SAS-3 3108 [Invader]"},

  {0x1000,0x005e,"SAS1066 PCI-X Fusion-MPT SAS"},

  {0x1000,0x005f,"MegaRAID SAS-3 3008 [Fury]"},

  {0x1000,0x0060,"MegaRAID SAS 1078"},

  {0x1000,0x0062,"SAS1078 PCI-Express Fusion-MPT SAS"},

  {0x1000,0x0064,"SAS2116 PCI-Express Fusion-MPT SAS-2 [Meteor]"},

  {0x1000,0x0065,"SAS2116 PCI-Express Fusion-MPT SAS-2 [Meteor]"},

  {0x1000,0x006e,"SAS2308 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0070,"SAS2004 PCI-Express Fusion-MPT SAS-2 [Spitfire]"},

  {0x1000,0x0071,"MR SAS HBA 2004"},

  {0x1000,0x0072,"SAS2008 PCI-Express Fusion-MPT SAS-2 [Falcon]"},

  {0x1000,0x0073,"MegaRAID SAS 2008 [Falcon]"},

  {0x1000,0x0074,"SAS2108 PCI-Express Fusion-MPT SAS-2 [Liberator]"},

  {0x1000,0x0076,"SAS2108 PCI-Express Fusion-MPT SAS-2 [Liberator]"},

  {0x1000,0x0077,"SAS2108 PCI-Express Fusion-MPT SAS-2 [Liberator]"},

  {0x1000,0x0079,"MegaRAID SAS 2108 [Liberator]"},

  {0x1000,0x007c,"MegaRAID SAS 1078DE"},

  {0x1000,0x007e,"SSS6200 PCI-Express Flash SSD"},

  {0x1000,0x0080,"SAS2208 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0081,"SAS2208 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0082,"SAS2208 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0083,"SAS2208 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0084,"SAS2208 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0085,"SAS2208 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0086,"SAS2308 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x0087,"SAS2308 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x008f,"53c875J"},

  {0x1000,0x0090,"SAS3108 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x0091,"SAS3108 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x0094,"SAS3108 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x0095,"SAS3108 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x0096,"SAS3004 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x0097,"SAS3008 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00ab,"SAS3516 Fusion-MPT Tri-Mode RAID On Chip (ROC)"},

  {0x1000,0x00ac,"SAS3416 Fusion-MPT Tri-Mode I/O Controller Chip (IOC)"},

  {0x1000,0x00ae,"SAS3508 Fusion-MPT Tri-Mode RAID On Chip (ROC)"},

  {0x1000,0x00af,"SAS3408 Fusion-MPT Tri-Mode I/O Controller Chip (IOC)"},

  {0x1000,0x00be,"SAS3504 Fusion-MPT Tri-Mode RAID On Chip (ROC)"},

  {0x1000,0x00bf,"SAS3404 Fusion-MPT Tri-Mode I/O Controller Chip (IOC)"},

  {0x1000,0x00c0,"SAS3324 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c1,"SAS3324 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c2,"SAS3324 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c3,"SAS3324 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c4,"SAS3224 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c5,"SAS3316 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c6,"SAS3316 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c7,"SAS3316 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c8,"SAS3316 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00c9,"SAS3216 PCI-Express Fusion-MPT SAS-3"},

  {0x1000,0x00ce,"MegaRAID SAS-3 3316 [Intruder]"},

  {0x1000,0x00cf,"MegaRAID SAS-3 3324 [Intruder]"},

  {0x1000,0x00d0,"SAS3716 Fusion-MPT Tri-Mode RAID Controller Chip (ROC)"},

  {0x1000,0x00d1,"SAS3616 Fusion-MPT Tri-Mode I/O Controller Chip (IOC)"},

  {0x1000,0x00d3,"MegaRAID Tri-Mode SAS3716W"},

  {0x1000,0x0407,"MegaRAID"},

  {0x1000,0x0408,"MegaRAID"},

  {0x1000,0x0409,"MegaRAID"},

  {0x1000,0x0411,"MegaRAID SAS 1068"},

  {0x1000,0x0413,"MegaRAID SAS 1068 [Verde ZCR]"},

  {0x1000,0x0621,"FC909 Fibre Channel Adapter"},

  {0x1000,0x0622,"FC929 Fibre Channel Adapter"},

  {0x1000,0x0623,"FC929 LAN"},

  {0x1000,0x0624,"FC919 Fibre Channel Adapter"},

  {0x1000,0x0625,"FC919 LAN"},

  {0x1000,0x0626,"FC929X Fibre Channel Adapter"},

  {0x1000,0x0627,"FC929X LAN"},

  {0x1000,0x0628,"FC919X Fibre Channel Adapter"},

  {0x1000,0x0629,"FC919X LAN"},

  {0x1000,0x0640,"FC949X Fibre Channel Adapter"},

  {0x1000,0x0642,"FC939X Fibre Channel Adapter"},

  {0x1000,0x0646,"FC949ES Fibre Channel Adapter"},

  {0x1000,0x0701,"83C885 NT50 DigitalScape Fast Ethernet"},

  {0x1000,0x0702,"Yellowfin G-NIC gigabit ethernet"},

  {0x1000,0x0804,"SA2010"},

  {0x1000,0x0805,"SA2010ZC"},

  {0x1000,0x0806,"SA2020"},

  {0x1000,0x0807,"SA2020ZC"},

  {0x1000,0x0901,"61C102"},

  {0x1000,0x1000,"63C815"},

  {0x1000,0x1960,"MegaRAID"},

  {0x1000,0x3050,"SAS2008 PCI-Express Fusion-MPT SAS-2"},

  {0x1000,0x6001,"DX1 Multiformat Broadcast HD/SD Encoder/Decoder"},

  {0x1001,0x0010,"PCI 1616 Measurement card with 32 digital I/O lines"},

  {0x1001,0x0011,"OPTO-PCI Opto-Isolated digital I/O board"},

  {0x1001,0x0012,"PCI-AD/DA Analogue I/O board"},

  {0x1001,0x0013,"PCI-OPTO-RELAIS Digital I/O board with relay outputs"},

  {0x1001,0x0014,"PCI-Counter/Timer Counter Timer board"},

  {0x1001,0x0015,"PCI-DAC416 Analogue output board"},

  {0x1001,0x0016,"PCI-MFB Analogue I/O board"},

  {0x1001,0x0017,"PROTO-3 PCI Prototyping board"},

  {0x1001,0x9100,"INI-9100/9100W SCSI Host"},

  {0x1002,0x1304,"Kaveri"},

  {0x1002,0x1305,"Kaveri"},

  {0x1002,0x1306,"Kaveri"},

  {0x1002,0x1307,"Kaveri"},

  {0x1002,0x1308,"Kaveri HDMI/DP Audio Controller"},

  {0x1002,0x1309,"Kaveri [Radeon R6/R7 Graphics]"},

  {0x1002,0x130a,"Kaveri [Radeon R6 Graphics]"},

  {0x1002,0x130b,"Kaveri [Radeon R4 Graphics]"},

  {0x1002,0x130c,"Kaveri [Radeon R7 Graphics]"},

  {0x1002,0x130d,"Kaveri [Radeon R6 Graphics]"},

  {0x1002,0x130e,"Kaveri [Radeon R5 Graphics]"},

  {0x1002,0x130f,"Kaveri [Radeon R7 Graphics]"},

  {0x1002,0x1310,"Kaveri"},

  {0x1002,0x1311,"Kaveri"},

  {0x1002,0x1312,"Kaveri"},

  {0x1002,0x1313,"Kaveri [Radeon R7 Graphics]"},

  {0x1002,0x1314,"Wrestler HDMI Audio"},

  {0x1002,0x1315,"Kaveri [Radeon R5 Graphics]"},

  {0x1002,0x1316,"Kaveri [Radeon R5 Graphics]"},

  {0x1002,0x1317,"Kaveri"},

  {0x1002,0x1318,"Kaveri [Radeon R5 Graphics]"},

  {0x1002,0x131b,"Kaveri [Radeon R4 Graphics]"},

  {0x1002,0x131c,"Kaveri [Radeon R7 Graphics]"},

  {0x1002,0x131d,"Kaveri [Radeon R6 Graphics]"},

  {0x1002,0x1714,"BeaverCreek HDMI Audio [Radeon HD 6500D and 6400G-6600G series]"},

  {0x1002,0x3150,"RV380/M24 [Mobility Radeon X600]"},

  {0x1002,0x3151,"RV380 GL [FireMV 2400]"},

  {0x1002,0x3152,"RV370/M22 [Mobility Radeon X300]"},

  {0x1002,0x3154,"RV380/M24 GL [Mobility FireGL V3200]"},

  {0x1002,0x3155,"RV380 GL [FireMV 2400]"},

  {0x1002,0x3171,"RV380 GL [FireMV 2400] (Secondary)"},

  {0x1002,0x3e50,"RV380 [Radeon X600]"},

  {0x1002,0x3e54,"RV380 GL [FireGL V3200]"},

  {0x1002,0x3e70,"RV380 [Radeon X600] (Secondary)"},

  {0x1002,0x4136,"RS100 [Mobility IGP 320M]"},

  {0x1002,0x4137,"RS200 [Radeon IGP 340]"},

  {0x1002,0x4144,"R300 [Radeon 9500]"},

  {0x1002,0x4146,"R300 [Radeon 9700 PRO]"},

  {0x1002,0x4147,"R300 GL [FireGL Z1]"},

  {0x1002,0x4148,"R350 [Radeon 9800/9800 SE]"},

  {0x1002,0x4150,"RV350 [Radeon 9550/9600/X1050 Series]"},

  {0x1002,0x4151,"RV350 [Radeon 9600 Series]"},

  {0x1002,0x4152,"RV360 [Radeon 9600/X1050 Series]"},

  {0x1002,0x4153,"RV350 [Radeon 9550]"},

  {0x1002,0x4154,"RV350 GL [FireGL T2]"},

  {0x1002,0x4155,"RV350 [Radeon 9600]"},

  {0x1002,0x4157,"RV350 GL [FireGL T2]"},

  {0x1002,0x4158,"68800AX [Graphics Ultra Pro PCI]"},

  {0x1002,0x4164,"R300 [Radeon 9500 PRO] (Secondary)"},

  {0x1002,0x4165,"R300 [Radeon 9700 PRO] (Secondary)"},

  {0x1002,0x4166,"R300 [Radeon 9700 PRO] (Secondary)"},

  {0x1002,0x4168,"RV350 [Radeon 9800 SE] (Secondary)"},

  {0x1002,0x4170,"RV350 [Radeon 9550/9600/X1050 Series] (Secondary)"},

  {0x1002,0x4171,"RV350 [Radeon 9600] (Secondary)"},

  {0x1002,0x4172,"RV350 [Radeon 9600/X1050 Series] (Secondary)"},

  {0x1002,0x4173,"RV350 [Radeon 9550] (Secondary)"},

  {0x1002,0x4242,"R200 [All-In-Wonder Radeon 8500 DV]"},

  {0x1002,0x4243,"R200 PCI Bridge [All-in-Wonder Radeon 8500DV]"},

  {0x1002,0x4336,"RS100 [Radeon IGP 320M]"},

  {0x1002,0x4337,"RS200M [Radeon IGP 330M/340M/345M/350M]"},

  {0x1002,0x4341,"IXP150 AC'97 Audio Controller"},

  {0x1002,0x4342,"IXP200 3COM 3C920B Ethernet Controller"},

  {0x1002,0x4345,"EHCI USB Controller"},

  {0x1002,0x4347,"OHCI USB Controller #1"},

  {0x1002,0x4348,"OHCI USB Controller #2"},

  {0x1002,0x4349,"Dual Channel Bus Master PCI IDE Controller"},

  {0x1002,0x434d,"IXP AC'97 Modem"},

  {0x1002,0x4353,"SMBus"},

  {0x1002,0x4354,"215CT [Mach64 CT PCI]"},

  {0x1002,0x4358,"210888CX [Mach64 CX]"},

  {0x1002,0x4361,"IXP SB300 AC'97 Audio Controller"},

  {0x1002,0x4363,"SMBus"},

  {0x1002,0x436e,"436E Serial ATA Controller"},

  {0x1002,0x4370,"IXP SB400 AC'97 Audio Controller"},

  {0x1002,0x4371,"IXP SB4x0 PCI-PCI Bridge"},

  {0x1002,0x4372,"IXP SB4x0 SMBus Controller"},

  {0x1002,0x4373,"IXP SB4x0 USB2 Host Controller"},

  {0x1002,0x4374,"IXP SB4x0 USB Host Controller"},

  {0x1002,0x4375,"IXP SB4x0 USB Host Controller"},

  {0x1002,0x4376,"IXP SB4x0 IDE Controller"},

  {0x1002,0x4377,"IXP SB4x0 PCI-ISA Bridge"},

  {0x1002,0x4378,"IXP SB400 AC'97 Modem Controller"},

  {0x1002,0x4379,"IXP SB4x0 Serial ATA Controller"},

  {0x1002,0x437a,"IXP SB400 Serial ATA Controller"},

  {0x1002,0x437b,"IXP SB4x0 High Definition Audio Controller"},

  {0x1002,0x4380,"SB600 Non-Raid-5 SATA"},

  {0x1002,0x4381,"SB600 SATA Controller (RAID 5 mode)"},

  {0x1002,0x4382,"SB600 AC97 Audio"},

  {0x1002,0x4383,"SBx00 Azalia (Intel HDA)"},

  {0x1002,0x4384,"SBx00 PCI to PCI Bridge"},

  {0x1002,0x4385,"SBx00 SMBus Controller"},

  {0x1002,0x4386,"SB600 USB Controller (EHCI)"},

  {0x1002,0x4387,"SB600 USB (OHCI0)"},

  {0x1002,0x4388,"SB600 USB (OHCI1)"},

  {0x1002,0x4389,"SB600 USB (OHCI2)"},

  {0x1002,0x438a,"SB600 USB (OHCI3)"},

  {0x1002,0x438b,"SB600 USB (OHCI4)"},

  {0x1002,0x438c,"SB600 IDE"},

  {0x1002,0x438d,"SB600 PCI to LPC Bridge"},

  {0x1002,0x438e,"SB600 AC97 Modem"},

  {0x1002,0x4390,"SB7x0/SB8x0/SB9x0 SATA Controller [IDE mode]"},

  {0x1002,0x4391,"SB7x0/SB8x0/SB9x0 SATA Controller [AHCI mode]"},

  {0x1002,0x4392,"SB7x0/SB8x0/SB9x0 SATA Controller [Non-RAID5 mode]"},

  {0x1002,0x4393,"SB7x0/SB8x0/SB9x0 SATA Controller [RAID5 mode]"},

  {0x1002,0x4394,"SB7x0/SB8x0/SB9x0 SATA Controller [AHCI mode]"},

  {0x1002,0x4395,"SB8x0/SB9x0 SATA Controller [Storage mode]"},

  {0x1002,0x4396,"SB7x0/SB8x0/SB9x0 USB EHCI Controller"},

  {0x1002,0x4397,"SB7x0/SB8x0/SB9x0 USB OHCI0 Controller"},

  {0x1002,0x4398,"SB7x0 USB OHCI1 Controller"},

  {0x1002,0x4399,"SB7x0/SB8x0/SB9x0 USB OHCI2 Controller"},

  {0x1002,0x439c,"SB7x0/SB8x0/SB9x0 IDE Controller"},

  {0x1002,0x439d,"SB7x0/SB8x0/SB9x0 LPC host controller"},

  {0x1002,0x43a0,"SB700/SB800/SB900 PCI to PCI bridge (PCIE port 0)"},

  {0x1002,0x43a1,"SB700/SB800/SB900 PCI to PCI bridge (PCIE port 1)"},

  {0x1002,0x43a2,"SB900 PCI to PCI bridge (PCIE port 2)"},

  {0x1002,0x43a3,"SB900 PCI to PCI bridge (PCIE port 3)"},

  {0x1002,0x4437,"RS250 [Mobility Radeon 7000 IGP]"},

  {0x1002,0x4554,"210888ET [Mach64 ET]"},

  {0x1002,0x4654,"Mach64 VT"},

  {0x1002,0x4742,"3D Rage PRO AGP 2X"},

  {0x1002,0x4744,"3D Rage PRO AGP 1X"},

  {0x1002,0x4749,"3D Rage PRO PCI"},

  {0x1002,0x474d,"Rage XL AGP 2X"},

  {0x1002,0x474e,"Rage XC AGP"},

  {0x1002,0x474f,"Rage XL"},

  {0x1002,0x4750,"3D Rage Pro PCI"},

  {0x1002,0x4752,"Rage XL PCI"},

  {0x1002,0x4753,"Rage XC"},

  {0x1002,0x4754,"3D Rage II/II+ PCI [Mach64 GT]"},

  {0x1002,0x4755,"Mach64 GTB [3D Rage II+ DVD]"},

  {0x1002,0x4756,"3D Rage IIC PCI [Mach64 GT IIC]"},

  {0x1002,0x4757,"3D Rage IIC AGP"},

  {0x1002,0x4758,"210888GX [Mach64 GX PCI]"},

  {0x1002,0x4759,"3D Rage IIC PCI"},

  {0x1002,0x475a,"3D Rage IIC AGP"},

  {0x1002,0x4966,"RV250 [Radeon 9000 Series]"},

  {0x1002,0x496e,"RV250 [Radeon 9000] (Secondary)"},

  {0x1002,0x4a49,"R420 [Radeon X800 PRO/GTO AGP]"},

  {0x1002,0x4a4a,"R420 [Radeon X800 GT AGP]"},

  {0x1002,0x4a4b,"R420 [Radeon X800 AGP Series]"},

  {0x1002,0x4a4d,"R420 GL [FireGL X3-256]"},

  {0x1002,0x4a4e,"RV420/M18 [Mobility Radeon 9800]"},

  {0x1002,0x4a4f,"R420 [Radeon X850 AGP]"},

  {0x1002,0x4a50,"R420 [Radeon X800 XT Platinum Edition AGP]"},

  {0x1002,0x4a54,"R420 [Radeon X800 VE AGP]"},

  {0x1002,0x4a69,"R420 [Radeon X800 PRO/GTO] (Secondary)"},

  {0x1002,0x4a6a,"R420 [Radeon X800] (Secondary)"},

  {0x1002,0x4a6b,"R420 [Radeon X800 XT AGP] (Secondary)"},

  {0x1002,0x4a70,"R420 [Radeon X800 XT Platinum Edition AGP] (Secondary)"},

  {0x1002,0x4a74,"R420 [Radeon X800 VE] (Secondary)"},

  {0x1002,0x4b49,"R481 [Radeon X850 XT AGP]"},

  {0x1002,0x4b4b,"R481 [Radeon X850 PRO AGP]"},

  {0x1002,0x4b4c,"R481 [Radeon X850 XT Platinum Edition AGP]"},

  {0x1002,0x4b69,"R481 [Radeon X850 XT AGP] (Secondary)"},

  {0x1002,0x4b6b,"R481 [Radeon X850 PRO AGP] (Secondary)"},

  {0x1002,0x4b6c,"R481 [Radeon X850 XT Platinum Edition AGP] (Secondary)"},

  {0x1002,0x4c42,"3D Rage LT PRO AGP 2X"},

  {0x1002,0x4c46,"Rage Mobility 128 AGP 2X/Mobility M3"},

  {0x1002,0x4c47,"3D Rage IIC PCI / Mobility Radeon 7500/7500C"},

  {0x1002,0x4c49,"3D Rage LT PRO PCI"},

  {0x1002,0x4c4d,"Rage Mobility AGP 2x Series"},

  {0x1002,0x4c50,"3D Rage LT PRO PCI"},

  {0x1002,0x4c52,"Rage Mobility-M1 PCI"},

  {0x1002,0x4c54,"264LT [Mach64 LT]"},

  {0x1002,0x4c57,"RV200/M7 [Mobility Radeon 7500]"},

  {0x1002,0x4c58,"RV200/M7 GL [Mobility FireGL 7800]"},

  {0x1002,0x4c59,"RV100/M6 [Rage/Radeon Mobility Series]"},

  {0x1002,0x4c66,"RV250/M9 GL [Mobility FireGL 9000/Radeon 9000]"},

  {0x1002,0x4c6e,"RV250/M9 [Mobility Radeon 9000] (Secondary)"},

  {0x1002,0x4d46,"Rage Mobility 128 AGP 4X/Mobility M4"},

  {0x1002,0x4d52,"Theater 550 PRO PCI [ATI TV Wonder 550]"},

  {0x1002,0x4d53,"Theater 550 PRO PCIe"},

  {0x1002,0x4e44,"R300 [Radeon 9700/9700 PRO]"},

  {0x1002,0x4e45,"R300 [Radeon 9500 PRO/9700]"},

  {0x1002,0x4e46,"R300 [Radeon 9600 TX]"},

  {0x1002,0x4e47,"R300 GL [FireGL X1]"},

  {0x1002,0x4e48,"R350 [Radeon 9800 Series]"},

  {0x1002,0x4e49,"R350 [Radeon 9800]"},

  {0x1002,0x4e4a,"R360 [Radeon 9800 XXL/XT]"},

  {0x1002,0x4e4b,"R350 GL [FireGL X2 AGP Pro]"},

  {0x1002,0x4e50,"RV350/M10 / RV360/M11 [Mobility Radeon 9600 (PRO) / 9700]"},

  {0x1002,0x4e51,"RV350 [Radeon 9550/9600/X1050 Series]"},

  {0x1002,0x4e52,"RV350/M10 [Mobility Radeon 9500/9700 SE]"},

  {0x1002,0x4e54,"RV350/M10 GL [Mobility FireGL T2]"},

  {0x1002,0x4e56,"RV360/M12 [Mobility Radeon 9550]"},

  {0x1002,0x4e64,"R300 [Radeon 9700 PRO] (Secondary)"},

  {0x1002,0x4e65,"R300 [Radeon 9500 PRO] (Secondary)"},

  {0x1002,0x4e66,"RV350 [Radeon 9600] (Secondary)"},

  {0x1002,0x4e67,"R300 GL [FireGL X1] (Secondary)"},

  {0x1002,0x4e68,"R350 [Radeon 9800 PRO] (Secondary)"},

  {0x1002,0x4e69,"R350 [Radeon 9800] (Secondary)"},

  {0x1002,0x4e6a,"RV350 [Radeon 9800 XT] (Secondary)"},

  {0x1002,0x4e71,"RV350/M10 [Mobility Radeon 9600] (Secondary)"},

  {0x1002,0x4f72,"RV250 [Radeon 9000 Series]"},

  {0x1002,0x4f73,"RV250 [Radeon 9000 Series] (Secondary)"},

  {0x1002,0x5044,"All-In-Wonder 128 PCI"},

  {0x1002,0x5046,"Rage 128 PRO AGP 4x TMDS"},

  {0x1002,0x5050,"Rage128 [Xpert 128 PCI]"},

  {0x1002,0x5052,"Rage 128 PRO AGP 4X TMDS"},

  {0x1002,0x5144,"R100 [Radeon 7200 / All-In-Wonder Radeon]"},

  {0x1002,0x5148,"R200 GL [FireGL 8800]"},

  {0x1002,0x514c,"R200 [Radeon 8500/8500 LE]"},

  {0x1002,0x514d,"R200 [Radeon 9100]"},

  {0x1002,0x5157,"RV200 [Radeon 7500/7500 LE]"},

  {0x1002,0x5159,"RV100 [Radeon 7000 / Radeon VE]"},

  {0x1002,0x515e,"ES1000"},

  {0x1002,0x5245,"Rage 128 GL PCI"},

  {0x1002,0x5246,"Rage Fury/Xpert 128/Xpert 2000 AGP 2x"},

  {0x1002,0x524b,"Rage 128 VR PCI"},

  {0x1002,0x524c,"Rage 128 VR AGP"},

  {0x1002,0x5346,"Rage 128 SF/4x AGP 2x"},

  {0x1002,0x534d,"Rage 128 4X AGP 4x"},

  {0x1002,0x5354,"Mach 64 VT"},

  {0x1002,0x5446,"Rage 128 PRO Ultra AGP 4x"},

  {0x1002,0x5452,"Rage 128 PRO Ultra4XL VR-R AGP"},

  {0x1002,0x5460,"RV370/M22 [Mobility Radeon X300]"},

  {0x1002,0x5461,"RV370/M22 [Mobility Radeon X300]"},

  {0x1002,0x5462,"RV380/M24C [Mobility Radeon X600 SE]"},

  {0x1002,0x5464,"RV370/M22 GL [Mobility FireGL V3100]"},

  {0x1002,0x5549,"R423 [Radeon X800 GTO]"},

  {0x1002,0x554a,"R423 [Radeon X800 XT Platinum Edition]"},

  {0x1002,0x554b,"R423 [Radeon X800 GT/SE]"},

  {0x1002,0x554d,"R430 [Radeon X800 XL]"},

  {0x1002,0x554e,"R430 [All-In-Wonder X800 GT]"},

  {0x1002,0x554f,"R430 [Radeon X800]"},

  {0x1002,0x5550,"R423 GL [FireGL V7100]"},

  {0x1002,0x5551,"R423 GL [FireGL V5100]"},

  {0x1002,0x5569,"R423 [Radeon X800 PRO] (Secondary)"},

  {0x1002,0x556b,"R423 [Radeon X800 GT] (Secondary)"},

  {0x1002,0x556d,"R430 [Radeon X800 XL] (Secondary)"},

  {0x1002,0x556f,"R430 [Radeon X800] (Secondary)"},

  {0x1002,0x5571,"R423 GL [FireGL V5100] (Secondary)"},

  {0x1002,0x564b,"RV410/M26 GL [Mobility FireGL V5000]"},

  {0x1002,0x564f,"RV410/M26 [Mobility Radeon X700 XL]"},

  {0x1002,0x5652,"RV410/M26 [Mobility Radeon X700]"},

  {0x1002,0x5653,"RV410/M26 [Mobility Radeon X700]"},

  {0x1002,0x5654,"264VT [Mach64 VT]"},

  {0x1002,0x5655,"264VT3 [Mach64 VT3]"},

  {0x1002,0x5656,"264VT4 [Mach64 VT4]"},

  {0x1002,0x5657,"RV410 [Radeon X550 XTX / X700]"},

  {0x1002,0x5830,"RS300 Host Bridge"},

  {0x1002,0x5831,"RS300 Host Bridge"},

  {0x1002,0x5832,"RS300 Host Bridge"},

  {0x1002,0x5833,"RS300 Host Bridge"},

  {0x1002,0x5834,"RS300 [Radeon 9100 IGP]"},

  {0x1002,0x5835,"RS300M [Mobility Radeon 9100 IGP]"},

  {0x1002,0x5838,"RS300 AGP Bridge"},

  {0x1002,0x5854,"RS480 [Radeon Xpress 200 Series] (Secondary)"},

  {0x1002,0x5874,"RS480 [Radeon Xpress 1150] (Secondary)"},

  {0x1002,0x5940,"RV280 [Radeon 9200 PRO] (Secondary)"},

  {0x1002,0x5941,"RV280 [Radeon 9200] (Secondary)"},

  {0x1002,0x5944,"RV280 [Radeon 9200 SE PCI]"},

  {0x1002,0x5950,"RS480/RS482/RS485 Host Bridge"},

  {0x1002,0x5951,"RX480/RX482 Host Bridge"},

  {0x1002,0x5952,"RD580 Host Bridge"},

  {0x1002,0x5954,"RS480 [Radeon Xpress 200 Series]"},

  {0x1002,0x5955,"RS480M [Mobility Radeon Xpress 200]"},

  {0x1002,0x5956,"RD790 Host Bridge"},

  {0x1002,0x5957,"RX780/RX790 Host Bridge"},

  {0x1002,0x5958,"RD780 Host Bridge"},

  {0x1002,0x5960,"RV280 [Radeon 9200 PRO]"},

  {0x1002,0x5961,"RV280 [Radeon 9200]"},

  {0x1002,0x5962,"RV280 [Radeon 9200]"},

  {0x1002,0x5964,"RV280 [Radeon 9200 SE]"},

  {0x1002,0x5965,"RV280 GL [FireMV 2200 PCI]"},

  {0x1002,0x5974,"RS482/RS485 [Radeon Xpress 1100/1150]"},

  {0x1002,0x5975,"RS482M [Mobility Radeon Xpress 200]"},

  {0x1002,0x5978,"RX780/RD790 PCI to PCI bridge (external gfx0 port A)"},

  {0x1002,0x5979,"RD790 PCI to PCI bridge (external gfx0 port B)"},

  {0x1002,0x597a,"RD790 PCI to PCI bridge (PCI express gpp port A)"},

  {0x1002,0x597b,"RX780/RD790 PCI to PCI bridge (PCI express gpp port B)"},

  {0x1002,0x597c,"RD790 PCI to PCI bridge (PCI express gpp port C)"},

  {0x1002,0x597d,"RX780/RD790 PCI to PCI bridge (PCI express gpp port D)"},

  {0x1002,0x597e,"RD790 PCI to PCI bridge (PCI express gpp port E)"},

  {0x1002,0x597f,"RD790 PCI to PCI bridge (PCI express gpp port F)"},

  {0x1002,0x5980,"RD790 PCI to PCI bridge (external gfx1 port A)"},

  {0x1002,0x5981,"RD790 PCI to PCI bridge (external gfx1 port B)"},

  {0x1002,0x5982,"RD790 PCI to PCI bridge (NB-SB link)"},

  {0x1002,0x5a10,"RD890 Northbridge only dual slot (2x16) PCI-e GFX Hydra part"},

  {0x1002,0x5a11,"RD890 Northbridge only single slot PCI-e GFX Hydra part"},

  {0x1002,0x5a12,"RD890 Northbridge only dual slot (2x8) PCI-e GFX Hydra part"},

  {0x1002,0x5a13,"RD890S/SR5650 Host Bridge"},

  {0x1002,0x5a14,"RD9x0/RX980 Host Bridge"},

  {0x1002,0x5a15,"RD890 PCI to PCI bridge (PCI express gpp port A)"},

  {0x1002,0x5a16,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GFX port 0)"},

  {0x1002,0x5a17,"RD890/RD9x0 PCI to PCI bridge (PCI Express GFX port 1)"},

  {0x1002,0x5a18,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GPP Port 0)"},

  {0x1002,0x5a19,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GPP Port 1)"},

  {0x1002,0x5a1a,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GPP Port 2)"},

  {0x1002,0x5a1b,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GPP Port 3)"},

  {0x1002,0x5a1c,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GPP Port 4)"},

  {0x1002,0x5a1d,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GPP Port 5)"},

  {0x1002,0x5a1e,"RD890/RD9x0/RX980 PCI to PCI bridge (PCI Express GPP2 Port 0)"},

  {0x1002,0x5a1f,"RD890/RD990 PCI to PCI bridge (PCI Express GFX2 port 0)"},

  {0x1002,0x5a20,"RD890/RD990 PCI to PCI bridge (PCI Express GFX2 port 1)"},

  {0x1002,0x5a23,"RD890S/RD990 I/O Memory Management Unit (IOMMU)"},

  {0x1002,0x5a31,"RC410 Host Bridge"},

  {0x1002,0x5a33,"RS400 Host Bridge"},

  {0x1002,0x5a34,"RS4xx PCI Express Port [ext gfx]"},

  {0x1002,0x5a36,"RC4xx/RS4xx PCI Express Port 1"},

  {0x1002,0x5a37,"RC4xx/RS4xx PCI Express Port 2"},

  {0x1002,0x5a38,"RC4xx/RS4xx PCI Express Port 3"},

  {0x1002,0x5a39,"RC4xx/RS4xx PCI Express Port 4"},

  {0x1002,0x5a3f,"RC4xx/RS4xx PCI Bridge [int gfx]"},

  {0x1002,0x5a41,"RS400 [Radeon Xpress 200]"},

  {0x1002,0x5a42,"RS400M [Radeon Xpress 200M]"},

  {0x1002,0x5a61,"RC410 [Radeon Xpress 200/1100]"},

  {0x1002,0x5a62,"RC410M [Mobility Radeon Xpress 200M]"},

  {0x1002,0x5b60,"RV370 [Radeon X300]"},

  {0x1002,0x5b62,"RV370 [Radeon X600/X600 SE]"},

  {0x1002,0x5b63,"RV370 [Radeon X300/X550/X1050 Series]"},

  {0x1002,0x5b64,"RV370 GL [FireGL V3100]"},

  {0x1002,0x5b65,"RV370 GL [FireMV 2200]"},

  {0x1002,0x5b66,"RV370X"},

  {0x1002,0x5b70,"RV370 [Radeon X300 SE]"},

  {0x1002,0x5b72,"RV380 [Radeon X300/X550/X1050 Series] (Secondary)"},

  {0x1002,0x5b73,"RV370 [Radeon X300/X550/X1050 Series] (Secondary)"},

  {0x1002,0x5b74,"RV370 GL [FireGL V3100] (Secondary)"},

  {0x1002,0x5b75,"RV370 GL [FireMV 2200] (Secondary)"},

  {0x1002,0x5c61,"RV280/M9+ [Mobility Radeon 9200 AGP]"},

  {0x1002,0x5c63,"RV280/M9+ [Mobility Radeon 9200 AGP]"},

  {0x1002,0x5d44,"RV280 [Radeon 9200 SE] (Secondary)"},

  {0x1002,0x5d45,"RV280 GL [FireMV 2200 PCI] (Secondary)"},

  {0x1002,0x5d48,"R423/M28 [Mobility Radeon X800 XT]"},

  {0x1002,0x5d49,"R423/M28 GL [Mobility FireGL V5100]"},

  {0x1002,0x5d4a,"R423/M28 [Mobility Radeon X800]"},

  {0x1002,0x5d4d,"R480 [Radeon X850 XT Platinum Edition]"},

  {0x1002,0x5d4e,"R480 [Radeon X850 SE]"},

  {0x1002,0x5d4f,"R480 [Radeon X800 GTO]"},

  {0x1002,0x5d50,"R480 GL [FireGL V7200]"},

  {0x1002,0x5d52,"R480 [Radeon X850 XT]"},

  {0x1002,0x5d57,"R423 [Radeon X800 XT]"},

  {0x1002,0x5d6d,"R480 [Radeon X850 XT Platinum Edition] (Secondary)"},

  {0x1002,0x5d6f,"R480 [Radeon X800 GTO] (Secondary)"},

  {0x1002,0x5d72,"R480 [Radeon X850 XT] (Secondary)"},

  {0x1002,0x5d77,"R423 [Radeon X800 XT] (Secondary)"},

  {0x1002,0x5e48,"RV410 GL [FireGL V5000]"},

  {0x1002,0x5e49,"RV410 [Radeon X700 Series]"},

  {0x1002,0x5e4a,"RV410 [Radeon X700 XT]"},

  {0x1002,0x5e4b,"RV410 [Radeon X700 PRO]"},

  {0x1002,0x5e4c,"RV410 [Radeon X700 SE]"},

  {0x1002,0x5e4d,"RV410 [Radeon X700]"},

  {0x1002,0x5e4f,"RV410 [Radeon X700]"},

  {0x1002,0x5e6b,"RV410 [Radeon X700 PRO] (Secondary)"},

  {0x1002,0x5e6d,"RV410 [Radeon X700] (Secondary)"},

  {0x1002,0x5f57,"R423 [Radeon X800 XT]"},

  {0x1002,0x6600,"Mars [Radeon HD 8670A/8670M/8750M]"},

  {0x1002,0x6601,"Mars [Radeon HD 8730M]"},

  {0x1002,0x6602,"Mars"},

  {0x1002,0x6603,"Mars"},

  {0x1002,0x6604,"Opal XT [Radeon R7 M265]"},

  {0x1002,0x6605,"Opal PRO [Radeon R7 M260]"},

  {0x1002,0x6606,"Mars XTX [Radeon HD 8790M]"},

  {0x1002,0x6607,"Mars LE [Radeon HD 8530M / R5 M240]"},

  {0x1002,0x6608,"Oland GL [FirePro W2100]"},

  {0x1002,0x6610,"Oland XT [Radeon HD 8670 / R7 250/350]"},

  {0x1002,0x6611,"Oland [Radeon HD 8570 / R7 240/340 OEM]"},

  {0x1002,0x6613,"Oland PRO [Radeon R7 240/340]"},

  {0x1002,0x6620,"Mars"},

  {0x1002,0x6621,"Mars PRO"},

  {0x1002,0x6623,"Mars"},

  {0x1002,0x6631,"Oland"},

  {0x1002,0x6640,"Saturn XT [FirePro M6100]"},

  {0x1002,0x6641,"Saturn PRO [Radeon HD 8930M]"},

  {0x1002,0x6646,"Bonaire XT [Radeon R9 M280X]"},

  {0x1002,0x6647,"Bonaire PRO [Radeon R9 M270X]"},

  {0x1002,0x6649,"Bonaire [FirePro W5100]"},

  {0x1002,0x6650,"Bonaire"},

  {0x1002,0x6651,"Bonaire"},

  {0x1002,0x6658,"Bonaire XTX [Radeon R7 260X/360]"},

  {0x1002,0x665c,"Bonaire XT [Radeon HD 7790/8770 / R7 360 / R9 260/360 OEM]"},

  {0x1002,0x665d,"Bonaire [Radeon R7 200 Series]"},

  {0x1002,0x665f,"Tobago PRO [Radeon R7 360 / R9 360 OEM]"},

  {0x1002,0x6660,"Sun XT [Radeon HD 8670A/8670M/8690M / R5 M330 / M430]"},

  {0x1002,0x6663,"Sun PRO [Radeon HD 8570A/8570M]"},

  {0x1002,0x6664,"Jet XT [Radeon R5 M240]"},

  {0x1002,0x6665,"Jet PRO [Radeon R5 M230]"},

  {0x1002,0x6667,"Jet ULT [Radeon R5 M230]"},

  {0x1002,0x666f,"Sun LE [Radeon HD 8550M / R5 M230]"},

  {0x1002,0x6704,"Cayman PRO GL [FirePro V7900]"},

  {0x1002,0x6707,"Cayman LE GL [FirePro V5900]"},

  {0x1002,0x6718,"Cayman XT [Radeon HD 6970]"},

  {0x1002,0x6719,"Cayman PRO [Radeon HD 6950]"},

  {0x1002,0x671c,"Antilles [Radeon HD 6990]"},

  {0x1002,0x671d,"Antilles [Radeon HD 6990]"},

  {0x1002,0x671f,"Cayman CE [Radeon HD 6930]"},

  {0x1002,0x6720,"Blackcomb [Radeon HD 6970M/6990M]"},

  {0x1002,0x6738,"Barts XT [Radeon HD 6870]"},

  {0x1002,0x6739,"Barts PRO [Radeon HD 6850]"},

  {0x1002,0x673e,"Barts LE [Radeon HD 6790]"},

  {0x1002,0x6740,"Whistler [Radeon HD 6730M/6770M/7690M XT]"},

  {0x1002,0x6741,"Whistler [Radeon HD 6630M/6650M/6750M/7670M/7690M]"},

  {0x1002,0x6742,"Whistler LE [Radeon HD 6610M/7610M]"},

  {0x1002,0x6743,"Whistler [Radeon E6760]"},

  {0x1002,0x6749,"Turks GL [FirePro V4900]"},

  {0x1002,0x674a,"Turks GL [FirePro V3900]"},

  {0x1002,0x6750,"Onega [Radeon HD 6650A/7650A]"},

  {0x1002,0x6751,"Turks [Radeon HD 7650A/7670A]"},

  {0x1002,0x6758,"Turks XT [Radeon HD 6670/7670]"},

  {0x1002,0x6759,"Turks PRO [Radeon HD 6570/7570/8550]"},

  {0x1002,0x675b,"Turks [Radeon HD 7600 Series]"},

  {0x1002,0x675d,"Turks PRO [Radeon HD 7570]"},

  {0x1002,0x675f,"Turks LE [Radeon HD 5570/6510/7510/8510]"},

  {0x1002,0x6760,"Seymour [Radeon HD 6400M/7400M Series]"},

  {0x1002,0x6761,"Seymour LP [Radeon HD 6430M]"},

  {0x1002,0x6763,"Seymour [Radeon E6460]"},

  {0x1002,0x6764,"Seymour [Radeon HD 6400M Series]"},

  {0x1002,0x6765,"Seymour [Radeon HD 6400M Series]"},

  {0x1002,0x6766,"Caicos"},

  {0x1002,0x6767,"Caicos"},

  {0x1002,0x6768,"Caicos"},

  {0x1002,0x6770,"Caicos [Radeon HD 6450A/7450A]"},

  {0x1002,0x6771,"Caicos XTX [Radeon HD 8490 / R5 235X OEM]"},

  {0x1002,0x6772,"Caicos [Radeon HD 7450A]"},

  {0x1002,0x6778,"Caicos XT [Radeon HD 7470/8470 / R5 235/310 OEM]"},

  {0x1002,0x6779,"Caicos [Radeon HD 6450/7450/8450 / R5 230 OEM]"},

  {0x1002,0x677b,"Caicos PRO [Radeon HD 7450]"},

  {0x1002,0x6780,"Tahiti XT GL [FirePro W9000]"},

  {0x1002,0x6784,"Tahiti [FirePro Series Graphics Adapter]"},

  {0x1002,0x6788,"Tahiti [FirePro Series Graphics Adapter]"},

  {0x1002,0x678a,"Tahiti PRO GL [FirePro Series]"},

  {0x1002,0x6798,"Tahiti XT [Radeon HD 7970/8970 OEM / R9 280X]"},

  {0x1002,0x6799,"New Zealand [Radeon HD 7900 Series]"},

  {0x1002,0x679a,"Tahiti PRO [Radeon HD 7950/8950 OEM / R9 280]"},

  {0x1002,0x679b,"Malta [Radeon HD 7990]"},

  {0x1002,0x679e,"Tahiti LE [Radeon HD 7870 XT]"},

  {0x1002,0x679f,"Tahiti"},

  {0x1002,0x67a0,"Hawaii XT GL [FirePro W9100]"},

  {0x1002,0x67a1,"Hawaii PRO GL [FirePro W8100]"},

  {0x1002,0x67a2,"Hawaii GL"},

  {0x1002,0x67a8,"Hawaii"},

  {0x1002,0x67a9,"Hawaii"},

  {0x1002,0x67aa,"Hawaii"},

  {0x1002,0x67b0,"Hawaii XT / Grenada XT [Radeon R9 290X/390X]"},

  {0x1002,0x67b1,"Hawaii PRO [Radeon R9 290/390]"},

  {0x1002,0x67b9,"Vesuvius [Radeon R9 295X2]"},

  {0x1002,0x67be,"Hawaii LE"},

  {0x1002,0x67c0,"Ellesmere [Radeon Pro WX 7100]"},

  {0x1002,0x67c4,"Ellesmere [Radeon Pro WX 7100]"},

  {0x1002,0x67c7,"Ellesmere [Radeon Pro WX 5100]"},

  {0x1002,0x67ca,"Ellesmere [Polaris10]"},

  {0x1002,0x67cc,"Ellesmere [Polaris10]"},

  {0x1002,0x67cf,"Ellesmere [Polaris10]"},

  {0x1002,0x67df,"Ellesmere [Radeon RX 470/480/580]"},

  {0x1002,0x67e0,"Baffin [Polaris11]"},

  {0x1002,0x67e1,"Baffin [Polaris11]"},

  {0x1002,0x67e3,"Baffin [Radeon Pro WX 4100]"},

  {0x1002,0x67e8,"Baffin [Polaris11]"},

  {0x1002,0x67e9,"Baffin [Polaris11]"},

  {0x1002,0x67eb,"Baffin [Polaris11]"},

  {0x1002,0x67ef,"Baffin [Radeon RX 460]"},

  {0x1002,0x67ff,"Baffin [Radeon RX 560]"},

  {0x1002,0x6800,"Wimbledon XT [Radeon HD 7970M]"},

  {0x1002,0x6801,"Neptune XT [Radeon HD 8970M]"},

  {0x1002,0x6802,"Wimbledon"},

  {0x1002,0x6806,"Neptune"},

  {0x1002,0x6808,"Pitcairn XT GL [FirePro W7000]"},

  {0x1002,0x6809,"Pitcairn LE GL [FirePro W5000]"},

  {0x1002,0x6810,"Curacao XT / Trinidad XT [Radeon R7 370 / R9 270X/370X]"},

  {0x1002,0x6811,"Curacao PRO [Radeon R7 370 / R9 270/370 OEM]"},

  {0x1002,0x6816,"Pitcairn"},

  {0x1002,0x6817,"Pitcairn"},

  {0x1002,0x6818,"Pitcairn XT [Radeon HD 7870 GHz Edition]"},

  {0x1002,0x6819,"Pitcairn PRO [Radeon HD 7850 / R7 265 / R9 270 1024SP]"},

  {0x1002,0x6820,"Venus XTX [Radeon HD 8890M / R9 M275X/M375X]"},

  {0x1002,0x6821,"Venus XT [Radeon HD 8870M / R9 M270X/M370X]"},

  {0x1002,0x6822,"Venus PRO [Radeon E8860]"},

  {0x1002,0x6823,"Venus PRO [Radeon HD 8850M / R9 M265X]"},

  {0x1002,0x6825,"Heathrow XT [Radeon HD 7870M]"},

  {0x1002,0x6826,"Chelsea LP [Radeon HD 7700M Series]"},

  {0x1002,0x6827,"Heathrow PRO [Radeon HD 7850M/8850M]"},

  {0x1002,0x6828,"Cape Verde PRO [FirePro W600]"},

  {0x1002,0x6829,"Cape Verde"},

  {0x1002,0x682a,"Venus PRO"},

  {0x1002,0x682b,"Venus LE [Radeon HD 8830M]"},

  {0x1002,0x682c,"Cape Verde GL [FirePro W4100]"},

  {0x1002,0x682d,"Chelsea XT GL [FirePro M4000]"},

  {0x1002,0x682f,"Chelsea LP [Radeon HD 7730M]"},

  {0x1002,0x6830,"Cape Verde [Radeon HD 7800M Series]"},

  {0x1002,0x6831,"Cape Verde [AMD Radeon HD 7700M Series]"},

  {0x1002,0x6835,"Cape Verde PRX [Radeon R9 255 OEM]"},

  {0x1002,0x6837,"Cape Verde LE [Radeon HD 7730/8730]"},

  {0x1002,0x683d,"Cape Verde XT [Radeon HD 7770/8760 / R7 250X]"},

  {0x1002,0x683f,"Cape Verde PRO [Radeon HD 7750/8740 / R7 250E]"},

  {0x1002,0x6840,"Thames [Radeon HD 7500M/7600M Series]"},

  {0x1002,0x6841,"Thames [Radeon HD 7550M/7570M/7650M]"},

  {0x1002,0x6842,"Thames LE [Radeon HD 7000M Series]"},

  {0x1002,0x6843,"Thames [Radeon HD 7670M]"},

  {0x1002,0x6863,"Vega 10 [Radeon Vega Frontier Edition]"},

  {0x1002,0x687f,"Vega [Radeon RX Vega]"},

  {0x1002,0x6888,"Cypress XT [FirePro V8800]"},

  {0x1002,0x6889,"Cypress PRO [FirePro V7800]"},

  {0x1002,0x688a,"Cypress XT [FirePro V9800]"},

  {0x1002,0x688c,"Cypress XT GL [FireStream 9370]"},

  {0x1002,0x688d,"Cypress PRO GL [FireStream 9350]"},

  {0x1002,0x6898,"Cypress XT [Radeon HD 5870]"},

  {0x1002,0x6899,"Cypress PRO [Radeon HD 5850]"},

  {0x1002,0x689b,"Cypress PRO [Radeon HD 6800 Series]"},

  {0x1002,0x689c,"Hemlock [Radeon HD 5970]"},

  {0x1002,0x689d,"Hemlock [Radeon HD 5970]"},

  {0x1002,0x689e,"Cypress LE [Radeon HD 5830]"},

  {0x1002,0x68a0,"Broadway XT [Mobility Radeon HD 5870]"},

  {0x1002,0x68a1,"Broadway PRO [Mobility Radeon HD 5850]"},

  {0x1002,0x68a8,"Granville [Radeon HD 6850M/6870M]"},

  {0x1002,0x68a9,"Juniper XT [FirePro V5800]"},

  {0x1002,0x68b8,"Juniper XT [Radeon HD 5770]"},

  {0x1002,0x68b9,"Juniper LE [Radeon HD 5670 640SP Edition]"},

  {0x1002,0x68ba,"Juniper XT [Radeon HD 6770]"},

  {0x1002,0x68be,"Juniper PRO [Radeon HD 5750]"},

  {0x1002,0x68bf,"Juniper PRO [Radeon HD 6750]"},

  {0x1002,0x68c0,"Madison [Mobility Radeon HD 5730 / 6570M]"},

  {0x1002,0x68c1,"Madison [Mobility Radeon HD 5650/5750 / 6530M/6550M]"},

  {0x1002,0x68c7,"Madison [Mobility Radeon HD 5570/6550A]"},

  {0x1002,0x68c8,"Redwood XT GL [FirePro V4800]"},

  {0x1002,0x68c9,"Redwood PRO GL [FirePro V3800]"},

  {0x1002,0x68d8,"Redwood XT [Radeon HD 5670/5690/5730]"},

  {0x1002,0x68d9,"Redwood PRO [Radeon HD 5550/5570/5630/6510/6610/7570]"},

  {0x1002,0x68da,"Redwood LE [Radeon HD 5550/5570/5630/6390/6490/7570]"},

  {0x1002,0x68de,"Redwood"},

  {0x1002,0x68e0,"Park [Mobility Radeon HD 5430/5450/5470]"},

  {0x1002,0x68e1,"Park [Mobility Radeon HD 5430]"},

  {0x1002,0x68e4,"Robson CE [Radeon HD 6370M/7370M]"},

  {0x1002,0x68e5,"Robson LE [Radeon HD 6330M]"},

  {0x1002,0x68e8,"Cedar"},

  {0x1002,0x68e9,"Cedar [ATI FirePro (FireGL) Graphics Adapter]"},

  {0x1002,0x68f1,"Cedar GL [FirePro 2460]"},

  {0x1002,0x68f2,"Cedar GL [FirePro 2270]"},

  {0x1002,0x68f8,"Cedar [Radeon HD 7300 Series]"},

  {0x1002,0x68f9,"Cedar [Radeon HD 5000/6000/7350/8350 Series]"},

  {0x1002,0x68fa,"Cedar [Radeon HD 7350/8350 / R5 220]"},

  {0x1002,0x68fe,"Cedar LE"},

  {0x1002,0x6900,"Topaz XT [Radeon R7 M260/M265 / M340/M360 / M440/M445]"},

  {0x1002,0x6901,"Topaz PRO [Radeon R5 M255]"},

  {0x1002,0x6907,"Meso XT [Radeon R5 M315]"},

  {0x1002,0x6921,"Amethyst XT [Radeon R9 M295X]"},

  {0x1002,0x6929,"Tonga XT GL [FirePro S7150]"},

  {0x1002,0x692b,"Tonga PRO GL [FirePro W7100]"},

  {0x1002,0x692f,"Tonga XTV GL [FirePro S7150V]"},

  {0x1002,0x6938,"Tonga XT / Amethyst XT [Radeon R9 380X / R9 M295X]"},

  {0x1002,0x6939,"Tonga PRO [Radeon R9 285/380]"},

  {0x1002,0x6980,"Polaris12"},

  {0x1002,0x6981,"Polaris12"},

  {0x1002,0x6985,"Lexa XT [Radeon PRO WX 3100]"},

  {0x1002,0x6986,"Polaris12"},

  {0x1002,0x6987,"Polaris12"},

  {0x1002,0x6995,"Lexa XT [Radeon PRO WX 2100]"},

  {0x1002,0x699f,"Lexa PRO [Radeon RX 550]"},

  {0x1002,0x700f,"RS100 AGP Bridge"},

  {0x1002,0x7010,"RS200/RS250 AGP Bridge"},

  {0x1002,0x7100,"R520 [Radeon X1800 XT]"},

  {0x1002,0x7101,"R520/M58 [Mobility Radeon X1800 XT]"},

  {0x1002,0x7102,"R520/M58 [Mobility Radeon X1800]"},

  {0x1002,0x7104,"R520 GL [FireGL V7200]"},

  {0x1002,0x7109,"R520 [Radeon X1800 XL]"},

  {0x1002,0x710a,"R520 [Radeon X1800 GTO]"},

  {0x1002,0x710b,"R520 [Radeon X1800 GTO]"},

  {0x1002,0x7120,"R520 [Radeon X1800] (Secondary)"},

  {0x1002,0x7124,"R520 GL [FireGL V7200] (Secondary)"},

  {0x1002,0x7129,"R520 [Radeon X1800] (Secondary)"},

  {0x1002,0x7140,"RV515 [Radeon X1300/X1550/X1600 Series]"},

  {0x1002,0x7142,"RV515 PRO [Radeon X1300/X1550 Series]"},

  {0x1002,0x7143,"RV505 [Radeon X1300/X1550 Series]"},

  {0x1002,0x7145,"RV515/M54 [Mobility Radeon X1400]"},

  {0x1002,0x7146,"RV515 [Radeon X1300/X1550]"},

  {0x1002,0x7147,"RV505 [Radeon X1550 64-bit]"},

  {0x1002,0x7149,"RV515/M52 [Mobility Radeon X1300]"},

  {0x1002,0x714a,"RV515/M52 [Mobility Radeon X1300]"},

  {0x1002,0x7152,"RV515 GL [FireGL V3300]"},

  {0x1002,0x7153,"RV515 GL [FireGL V3350]"},

  {0x1002,0x715f,"RV505 CE [Radeon X1550 64-bit]"},

  {0x1002,0x7162,"RV515 PRO [Radeon X1300/X1550 Series] (Secondary)"},

  {0x1002,0x7163,"RV505 [Radeon X1550 Series] (Secondary)"},

  {0x1002,0x7166,"RV515 [Radeon X1300/X1550 Series] (Secondary)"},

  {0x1002,0x7167,"RV515 [Radeon X1550 64-bit] (Secondary)"},

  {0x1002,0x7172,"RV515 GL [FireGL V3300] (Secondary)"},

  {0x1002,0x7173,"RV515 GL [FireGL V3350] (Secondary)"},

  {0x1002,0x7181,"RV516 [Radeon X1600/X1650 Series]"},

  {0x1002,0x7183,"RV516 [Radeon X1300/X1550 Series]"},

  {0x1002,0x7186,"RV516/M64 [Mobility Radeon X1450]"},

  {0x1002,0x7187,"RV516 [Radeon X1300/X1550 Series]"},

  {0x1002,0x7188,"RV516/M64-S [Mobility Radeon X2300]"},

  {0x1002,0x718a,"RV516/M64 [Mobility Radeon X2300]"},

  {0x1002,0x718b,"RV516/M62 [Mobility Radeon X1350]"},

  {0x1002,0x718c,"RV516/M62-CSP64 [Mobility Radeon X1350]"},

  {0x1002,0x718d,"RV516/M64-CSP128 [Mobility Radeon X1450]"},

  {0x1002,0x7193,"RV516 [Radeon X1550 Series]"},

  {0x1002,0x7196,"RV516/M62-S [Mobility Radeon X1350]"},

  {0x1002,0x719b,"RV516 GL [FireMV 2250]"},

  {0x1002,0x719f,"RV516 [Radeon X1550 Series]"},

  {0x1002,0x71a0,"RV516 [Radeon X1300/X1550 Series] (Secondary)"},

  {0x1002,0x71a1,"RV516 [Radeon X1600/X1650 Series] (Secondary)"},

  {0x1002,0x71a3,"RV516 [Radeon X1300/X1550 Series] (Secondary)"},

  {0x1002,0x71a7,"RV516 [Radeon X1300/X1550 Series] (Secondary)"},

  {0x1002,0x71bb,"RV516 GL [FireMV 2250] (Secondary)"},

  {0x1002,0x71c0,"RV530 [Radeon X1600 XT/X1650 GTO]"},

  {0x1002,0x71c1,"RV535 [Radeon X1650 PRO]"},

  {0x1002,0x71c2,"RV530 [Radeon X1600 PRO]"},

  {0x1002,0x71c4,"RV530/M56 GL [Mobility FireGL V5200]"},

  {0x1002,0x71c5,"RV530/M56-P [Mobility Radeon X1600]"},

  {0x1002,0x71c6,"RV530LE [Radeon X1600/X1650 PRO]"},

  {0x1002,0x71c7,"RV535 [Radeon X1650 PRO]"},

  {0x1002,0x71ce,"RV530 [Radeon X1300 XT/X1600 PRO]"},

  {0x1002,0x71d2,"RV530 GL [FireGL V3400]"},

  {0x1002,0x71d4,"RV530/M66 GL [Mobility FireGL V5250]"},

  {0x1002,0x71d5,"RV530/M66-P [Mobility Radeon X1700]"},

  {0x1002,0x71d6,"RV530/M66-XT [Mobility Radeon X1700]"},

  {0x1002,0x71de,"RV530/M66 [Mobility Radeon X1700/X2500]"},

  {0x1002,0x71e0,"RV530 [Radeon X1600] (Secondary)"},

  {0x1002,0x71e1,"RV535 [Radeon X1650 PRO] (Secondary)"},

  {0x1002,0x71e2,"RV530 [Radeon X1600] (Secondary)"},

  {0x1002,0x71e6,"RV530 [Radeon X1650] (Secondary)"},

  {0x1002,0x71e7,"RV535 [Radeon X1650 PRO] (Secondary)"},

  {0x1002,0x71f2,"RV530 GL [FireGL V3400] (Secondary)"},

  {0x1002,0x7210,"RV550/M71 [Mobility Radeon HD 2300]"},

  {0x1002,0x7211,"RV550/M71 [Mobility Radeon X2300 HD]"},

  {0x1002,0x7240,"R580+ [Radeon X1950 XTX]"},

  {0x1002,0x7244,"R580+ [Radeon X1950 XT]"},

  {0x1002,0x7248,"R580 [Radeon X1950]"},

  {0x1002,0x7249,"R580 [Radeon X1900 XT]"},

  {0x1002,0x724b,"R580 [Radeon X1900 GT]"},

  {0x1002,0x724e,"R580 GL [FireGL V7350]"},

  {0x1002,0x7269,"R580 [Radeon X1900 XT] (Secondary)"},

  {0x1002,0x726b,"R580 [Radeon X1900 GT] (Secondary)"},

  {0x1002,0x726e,"R580 [AMD Stream Processor] (Secondary)"},

  {0x1002,0x7280,"RV570 [Radeon X1950 PRO]"},

  {0x1002,0x7288,"RV570 [Radeon X1950 GT]"},

  {0x1002,0x7291,"RV560 [Radeon X1650 XT]"},

  {0x1002,0x7293,"RV560 [Radeon X1650 GT]"},

  {0x1002,0x72a0,"RV570 [Radeon X1950 PRO] (Secondary)"},

  {0x1002,0x72a8,"RV570 [Radeon X1950 GT] (Secondary)"},

  {0x1002,0x72b1,"RV560 [Radeon X1650 XT] (Secondary)"},

  {0x1002,0x72b3,"RV560 [Radeon X1650 GT] (Secondary)"},

  {0x1002,0x7300,"Fiji [Radeon R9 FURY / NANO Series]"},

  {0x1002,0x7833,"RS350 Host Bridge"},

  {0x1002,0x7834,"RS350 [Radeon 9100 PRO/XT IGP]"},

  {0x1002,0x7835,"RS350M [Mobility Radeon 9000 IGP]"},

  {0x1002,0x7838,"RS350 AGP Bridge"},

  {0x1002,0x7910,"RS690 Host Bridge"},

  {0x1002,0x7911,"RS690 Host Bridge"},

  {0x1002,0x7912,"RS690 PCI to PCI Bridge (Internal gfx)"},

  {0x1002,0x7913,"RS690 PCI to PCI Bridge (PCI Express Graphics Port 0)"},

  {0x1002,0x7915,"RS690 PCI to PCI Bridge (PCI Express Port 1)"},

  {0x1002,0x7916,"RS690 PCI to PCI Bridge (PCI Express Port 2)"},

  {0x1002,0x7917,"RS690 PCI to PCI Bridge (PCI Express Port 3)"},

  {0x1002,0x7919,"RS690 HDMI Audio [Radeon Xpress 1200 Series]"},

  {0x1002,0x791e,"RS690 [Radeon X1200]"},

  {0x1002,0x791f,"RS690M [Radeon Xpress 1200/1250/1270]"},

  {0x1002,0x7930,"RS600 Host Bridge"},

  {0x1002,0x7932,"RS600 PCI to PCI Bridge (Internal gfx)"},

  {0x1002,0x7933,"RS600 PCI to PCI Bridge (PCI Express Graphics Port 0)"},

  {0x1002,0x7935,"RS600 PCI to PCI Bridge (PCI Express Port 1)"},

  {0x1002,0x7936,"RS600 PCI to PCI Bridge (PCI Express Port 2)"},

  {0x1002,0x7937,"RS690 PCI to PCI Bridge (PCI Express Port 3)"},

  {0x1002,0x793b,"RS600 HDMI Audio [Radeon Xpress 1250]"},

  {0x1002,0x793f,"RS690M [Radeon Xpress 1200/1250/1270] (Secondary)"},

  {0x1002,0x7941,"RS600 [Radeon Xpress 1250]"},

  {0x1002,0x7942,"RS600M [Radeon Xpress 1250]"},

  {0x1002,0x796e,"RS740 [Radeon 2100]"},

  {0x1002,0x9400,"R600 [Radeon HD 2900 PRO/XT]"},

  {0x1002,0x9401,"R600 [Radeon HD 2900 XT]"},

  {0x1002,0x9403,"R600 [Radeon HD 2900 PRO]"},

  {0x1002,0x9405,"R600 [Radeon HD 2900 GT]"},

  {0x1002,0x940a,"R600 GL [FireGL V8650]"},

  {0x1002,0x940b,"R600 GL [FireGL V8600]"},

  {0x1002,0x940f,"R600 GL [FireGL V7600]"},

  {0x1002,0x9440,"RV770 [Radeon HD 4870]"},

  {0x1002,0x9441,"R700 [Radeon HD 4870 X2]"},

  {0x1002,0x9442,"RV770 [Radeon HD 4850]"},

  {0x1002,0x9443,"R700 [Radeon HD 4850 X2]"},

  {0x1002,0x9444,"RV770 GL [FirePro V8750]"},

  {0x1002,0x9446,"RV770 GL [FirePro V7760]"},

  {0x1002,0x944a,"RV770/M98L [Mobility Radeon HD 4850]"},

  {0x1002,0x944b,"RV770/M98 [Mobility Radeon HD 4850 X2]"},

  {0x1002,0x944c,"RV770 LE [Radeon HD 4830]"},

  {0x1002,0x944e,"RV770 CE [Radeon HD 4710]"},

  {0x1002,0x9450,"RV770 GL [FireStream 9270]"},

  {0x1002,0x9452,"RV770 GL [FireStream 9250]"},

  {0x1002,0x9456,"RV770 GL [FirePro V8700]"},

  {0x1002,0x945a,"RV770/M98-XT [Mobility Radeon HD 4870]"},

  {0x1002,0x9460,"RV790 [Radeon HD 4890]"},

  {0x1002,0x9462,"RV790 [Radeon HD 4860]"},

  {0x1002,0x946a,"RV770 GL [FirePro M7750]"},

  {0x1002,0x9480,"RV730/M96 [Mobility Radeon HD 4650/5165]"},

  {0x1002,0x9488,"RV730/M96-XT [Mobility Radeon HD 4670]"},

  {0x1002,0x9489,"RV730/M96 GL [Mobility FireGL V5725]"},

  {0x1002,0x9490,"RV730 XT [Radeon HD 4670]"},

  {0x1002,0x9491,"RV730/M96-CSP [Radeon E4690]"},

  {0x1002,0x9495,"RV730 [Radeon HD 4600 AGP Series]"},

  {0x1002,0x9498,"RV730 PRO [Radeon HD 4650]"},

  {0x1002,0x949c,"RV730 GL [FirePro V7750]"},

  {0x1002,0x949e,"RV730 GL [FirePro V5700]"},

  {0x1002,0x949f,"RV730 GL [FirePro V3750]"},

  {0x1002,0x94a0,"RV740/M97 [Mobility Radeon HD 4830]"},

  {0x1002,0x94a1,"RV740/M97-XT [Mobility Radeon HD 4860]"},

  {0x1002,0x94a3,"RV740/M97 GL [FirePro M7740]"},

  {0x1002,0x94b3,"RV740 PRO [Radeon HD 4770]"},

  {0x1002,0x94b4,"RV740 PRO [Radeon HD 4750]"},

  {0x1002,0x94c1,"RV610 [Radeon HD 2400 PRO/XT]"},

  {0x1002,0x94c3,"RV610 [Radeon HD 2400 PRO]"},

  {0x1002,0x94c4,"RV610 LE [Radeon HD 2400 PRO AGP]"},

  {0x1002,0x94c5,"RV610 [Radeon HD 2400 LE]"},

  {0x1002,0x94c7,"RV610 [Radeon HD 2350]"},

  {0x1002,0x94c8,"RV610/M74 [Mobility Radeon HD 2400 XT]"},

  {0x1002,0x94c9,"RV610/M72-S [Mobility Radeon HD 2400]"},

  {0x1002,0x94cb,"RV610 [Radeon E2400]"},

  {0x1002,0x94cc,"RV610 LE [Radeon HD 2400 PRO PCI]"},

  {0x1002,0x9500,"RV670 [Radeon HD 3850 X2]"},

  {0x1002,0x9501,"RV670 [Radeon HD 3870]"},

  {0x1002,0x9504,"RV670/M88 [Mobility Radeon HD 3850]"},

  {0x1002,0x9505,"RV670 [Radeon HD 3690/3850]"},

  {0x1002,0x9506,"RV670/M88 [Mobility Radeon HD 3850 X2]"},

  {0x1002,0x9507,"RV670 [Radeon HD 3830]"},

  {0x1002,0x9508,"RV670/M88-XT [Mobility Radeon HD 3870]"},

  {0x1002,0x9509,"RV670/M88 [Mobility Radeon HD 3870 X2]"},

  {0x1002,0x950f,"R680 [Radeon HD 3870 X2]"},

  {0x1002,0x9511,"RV670 GL [FireGL V7700]"},

  {0x1002,0x9513,"RV670 [Radeon HD 3850 X2]"},

  {0x1002,0x9515,"RV670 PRO [Radeon HD 3850 AGP]"},

  {0x1002,0x9519,"RV670 GL [FireStream 9170]"},

  {0x1002,0x9540,"RV710 [Radeon HD 4550]"},

  {0x1002,0x954f,"RV710 [Radeon HD 4350/4550]"},

  {0x1002,0x9552,"RV710/M92 [Mobility Radeon HD 4330/4350/4550]"},

  {0x1002,0x9553,"RV710/M92 [Mobility Radeon HD 4530/4570/545v]"},

  {0x1002,0x9555,"RV710/M92 [Mobility Radeon HD 4350/4550]"},

  {0x1002,0x9557,"RV711 GL [FirePro RG220]"},

  {0x1002,0x955f,"RV710/M92 [Mobility Radeon HD 4330]"},

  {0x1002,0x9580,"RV630 [Radeon HD 2600 PRO]"},

  {0x1002,0x9581,"RV630/M76 [Mobility Radeon HD 2600]"},

  {0x1002,0x9583,"RV630/M76 [Mobility Radeon HD 2600 XT/2700]"},

  {0x1002,0x9586,"RV630 XT [Radeon HD 2600 XT AGP]"},

  {0x1002,0x9587,"RV630 PRO [Radeon HD 2600 PRO AGP]"},

  {0x1002,0x9588,"RV630 XT [Radeon HD 2600 XT]"},

  {0x1002,0x9589,"RV630 PRO [Radeon HD 2600 PRO]"},

  {0x1002,0x958a,"RV630 [Radeon HD 2600 X2]"},

  {0x1002,0x958b,"RV630/M76 [Mobility Radeon HD 2600 XT]"},

  {0x1002,0x958c,"RV630 GL [FireGL V5600]"},

  {0x1002,0x958d,"RV630 GL [FireGL V3600]"},

  {0x1002,0x9591,"RV635/M86 [Mobility Radeon HD 3650]"},

  {0x1002,0x9593,"RV635/M86 [Mobility Radeon HD 3670]"},

  {0x1002,0x9595,"RV635/M86 GL [Mobility FireGL V5700]"},

  {0x1002,0x9596,"RV635 PRO [Radeon HD 3650 AGP]"},

  {0x1002,0x9597,"RV635 PRO [Radeon HD 3650 AGP]"},

  {0x1002,0x9598,"RV635 [Radeon HD 3650/3750/4570/4580]"},

  {0x1002,0x9599,"RV635 PRO [Radeon HD 3650 AGP]"},

  {0x1002,0x95c0,"RV620 PRO [Radeon HD 3470]"},

  {0x1002,0x95c2,"RV620/M82 [Mobility Radeon HD 3410/3430]"},

  {0x1002,0x95c4,"RV620/M82 [Mobility Radeon HD 3450/3470]"},

  {0x1002,0x95c5,"RV620 LE [Radeon HD 3450]"},

  {0x1002,0x95c6,"RV620 LE [Radeon HD 3450 AGP]"},

  {0x1002,0x95c9,"RV620 LE [Radeon HD 3450 PCI]"},

  {0x1002,0x95cc,"RV620 GL [FirePro V3700]"},

  {0x1002,0x95cd,"RV620 [FirePro 2450]"},

  {0x1002,0x95cf,"RV620 GL [FirePro 2260]"},

  {0x1002,0x960f,"RS780 HDMI Audio [Radeon 3000/3100 / HD 3200/3300]"},

  {0x1002,0x9610,"RS780 [Radeon HD 3200]"},

  {0x1002,0x9611,"RS780C [Radeon 3100]"},

  {0x1002,0x9612,"RS780M [Mobility Radeon HD 3200]"},

  {0x1002,0x9613,"RS780MC [Mobility Radeon HD 3100]"},

  {0x1002,0x9614,"RS780D [Radeon HD 3300]"},

  {0x1002,0x9616,"RS780L [Radeon 3000]"},

  {0x1002,0x9640,"BeaverCreek [Radeon HD 6550D]"},

  {0x1002,0x9641,"BeaverCreek [Radeon HD 6620G]"},

  {0x1002,0x9642,"Sumo [Radeon HD 6370D]"},

  {0x1002,0x9643,"Sumo [Radeon HD 6380G]"},

  {0x1002,0x9644,"Sumo [Radeon HD 6410D]"},

  {0x1002,0x9645,"Sumo [Radeon HD 6410D]"},

  {0x1002,0x9647,"BeaverCreek [Radeon HD 6520G]"},

  {0x1002,0x9648,"Sumo [Radeon HD 6480G]"},

  {0x1002,0x9649,"Sumo [Radeon HD 6480G]"},

  {0x1002,0x964a,"BeaverCreek [Radeon HD 6530D]"},

  {0x1002,0x964b,"Sumo"},

  {0x1002,0x964c,"Sumo"},

  {0x1002,0x964e,"Sumo"},

  {0x1002,0x964f,"Sumo"},

  {0x1002,0x970f,"RS880 HDMI Audio [Radeon HD 4200 Series]"},

  {0x1002,0x9710,"RS880 [Radeon HD 4200]"},

  {0x1002,0x9712,"RS880M [Mobility Radeon HD 4225/4250]"},

  {0x1002,0x9713,"RS880M [Mobility Radeon HD 4100]"},

  {0x1002,0x9714,"RS880 [Radeon HD 4290]"},

  {0x1002,0x9715,"RS880 [Radeon HD 4250]"},

  {0x1002,0x9802,"Wrestler [Radeon HD 6310]"},

  {0x1002,0x9803,"Wrestler [Radeon HD 6310]"},

  {0x1002,0x9804,"Wrestler [Radeon HD 6250]"},

  {0x1002,0x9805,"Wrestler [Radeon HD 6250]"},

  {0x1002,0x9806,"Wrestler [Radeon HD 6320]"},

  {0x1002,0x9807,"Wrestler [Radeon HD 6290]"},

  {0x1002,0x9808,"Wrestler [Radeon HD 7340]"},

  {0x1002,0x9809,"Wrestler [Radeon HD 7310]"},

  {0x1002,0x980a,"Wrestler [Radeon HD 7290]"},

  {0x1002,0x9830,"Kabini [Radeon HD 8400 / R3 Series]"},

  {0x1002,0x9831,"Kabini [Radeon HD 8400E]"},

  {0x1002,0x9832,"Kabini [Radeon HD 8330]"},

  {0x1002,0x9833,"Kabini [Radeon HD 8330E]"},

  {0x1002,0x9834,"Kabini [Radeon HD 8210]"},

  {0x1002,0x9835,"Kabini [Radeon HD 8310E]"},

  {0x1002,0x9836,"Kabini [Radeon HD 8280 / R3 Series]"},

  {0x1002,0x9837,"Kabini [Radeon HD 8280E]"},

  {0x1002,0x9838,"Kabini [Radeon HD 8240 / R3 Series]"},

  {0x1002,0x9839,"Kabini [Radeon HD 8180]"},

  {0x1002,0x983d,"Temash [Radeon HD 8250/8280G]"},

  {0x1002,0x9840,"Kabini HDMI/DP Audio"},

  {0x1002,0x9850,"Mullins [Radeon R3 Graphics]"},

  {0x1002,0x9851,"Mullins [Radeon R4/R5 Graphics]"},

  {0x1002,0x9852,"Mullins [Radeon R2 Graphics]"},

  {0x1002,0x9853,"Mullins [Radeon R2 Graphics]"},

  {0x1002,0x9854,"Mullins [Radeon R3E Graphics]"},

  {0x1002,0x9855,"Mullins [Radeon R6 Graphics]"},

  {0x1002,0x9856,"Mullins [Radeon R1E/R2E Graphics]"},

  {0x1002,0x9857,"Mullins [Radeon APU XX-2200M with R2 Graphics]"},

  {0x1002,0x9858,"Mullins"},

  {0x1002,0x9859,"Mullins"},

  {0x1002,0x985a,"Mullins"},

  {0x1002,0x985b,"Mullins"},

  {0x1002,0x985c,"Mullins"},

  {0x1002,0x985d,"Mullins"},

  {0x1002,0x985e,"Mullins"},

  {0x1002,0x985f,"Mullins"},

  {0x1002,0x9874,"Carrizo"},

  {0x1002,0x9900,"Trinity [Radeon HD 7660G]"},

  {0x1002,0x9901,"Trinity [Radeon HD 7660D]"},

  {0x1002,0x9902,"Trinity HDMI Audio Controller"},

  {0x1002,0x9903,"Trinity [Radeon HD 7640G]"},

  {0x1002,0x9904,"Trinity [Radeon HD 7560D]"},

  {0x1002,0x9905,"Trinity [FirePro A300 Series Graphics]"},

  {0x1002,0x9906,"Trinity [FirePro A300 Series Graphics]"},

  {0x1002,0x9907,"Trinity [Radeon HD 7620G]"},

  {0x1002,0x9908,"Trinity [Radeon HD 7600G]"},

  {0x1002,0x9909,"Trinity [Radeon HD 7500G]"},

  {0x1002,0x990a,"Trinity [Radeon HD 7500G]"},

  {0x1002,0x990b,"Richland [Radeon HD 8650G]"},

  {0x1002,0x990c,"Richland [Radeon HD 8670D]"},

  {0x1002,0x990d,"Richland [Radeon HD 8550G]"},

  {0x1002,0x990e,"Richland [Radeon HD 8570D]"},

  {0x1002,0x990f,"Richland [Radeon HD 8610G]"},

  {0x1002,0x9910,"Trinity [Radeon HD 7660G]"},

  {0x1002,0x9913,"Trinity [Radeon HD 7640G]"},

  {0x1002,0x9917,"Trinity [Radeon HD 7620G]"},

  {0x1002,0x9918,"Trinity [Radeon HD 7600G]"},

  {0x1002,0x9919,"Trinity [Radeon HD 7500G]"},

  {0x1002,0x9920,"Liverpool [Playstation 4 APU]"},

  {0x1002,0x9921,"Liverpool HDMI/DP Audio Controller"},

  {0x1002,0x9990,"Trinity [Radeon HD 7520G]"},

  {0x1002,0x9991,"Trinity [Radeon HD 7540D]"},

  {0x1002,0x9992,"Trinity [Radeon HD 7420G]"},

  {0x1002,0x9993,"Trinity [Radeon HD 7480D]"},

  {0x1002,0x9994,"Trinity [Radeon HD 7400G]"},

  {0x1002,0x9995,"Richland [Radeon HD 8450G]"},

  {0x1002,0x9996,"Richland [Radeon HD 8470D]"},

  {0x1002,0x9997,"Richland [Radeon HD 8350G]"},

  {0x1002,0x9998,"Richland [Radeon HD 8370D]"},

  {0x1002,0x9999,"Richland [Radeon HD 8510G]"},

  {0x1002,0x999a,"Richland [Radeon HD 8410G]"},

  {0x1002,0x999b,"Richland [Radeon HD 8310G]"},

  {0x1002,0x999c,"Richland"},

  {0x1002,0x999d,"Richland [Radeon HD 8550D]"},

  {0x1002,0x99a0,"Trinity [Radeon HD 7520G]"},

  {0x1002,0x99a2,"Trinity [Radeon HD 7420G]"},

  {0x1002,0x99a4,"Trinity [Radeon HD 7400G]"},

  {0x1002,0xaa00,"R600 HDMI Audio [Radeon HD 2900 GT/PRO/XT]"},

  {0x1002,0xaa01,"RV635 HDMI Audio [Radeon HD 3650/3730/3750]"},

  {0x1002,0xaa08,"RV630 HDMI Audio [Radeon HD 2600 PRO/XT / HD 3610]"},

  {0x1002,0xaa10,"RV610 HDMI Audio [Radeon HD 2350 PRO / 2400 PRO/XT / HD 3410]"},

  {0x1002,0xaa18,"RV670/680 HDMI Audio [Radeon HD 3690/3800 Series]"},

  {0x1002,0xaa20,"RV635 HDMI Audio [Radeon HD 3650/3730/3750]"},

  {0x1002,0xaa28,"RV620 HDMI Audio [Radeon HD 3450/3470/3550/3570]"},

  {0x1002,0xaa30,"RV770 HDMI Audio [Radeon HD 4850/4870]"},

  {0x1002,0xaa38,"RV710/730 HDMI Audio [Radeon HD 4000 series]"},

  {0x1002,0xaa50,"Cypress HDMI Audio [Radeon HD 5830/5850/5870 / 6850/6870 Rebrand]"},

  {0x1002,0xaa58,"Juniper HDMI Audio [Radeon HD 5700 Series]"},

  {0x1002,0xaa60,"Redwood HDMI Audio [Radeon HD 5000 Series]"},

  {0x1002,0xaa68,"Cedar HDMI Audio [Radeon HD 5400/6300/7300 Series]"},

  {0x1002,0xaa80,"Cayman/Antilles HDMI Audio [Radeon HD 6930/6950/6970/6990]"},

  {0x1002,0xaa88,"Barts HDMI Audio [Radeon HD 6790/6850/6870 / 7720 OEM]"},

  {0x1002,0xaa90,"Turks HDMI Audio [Radeon HD 6500/6600 / 6700M Series]"},

  {0x1002,0xaa98,"Caicos HDMI Audio [Radeon HD 6450 / 7450/8450/8490 OEM / R5 230/235/235X OEM]"},

  {0x1002,0xaaa0,"Tahiti HDMI Audio [Radeon HD 7870 XT / 7950/7970]"},

  {0x1002,0xaab0,"Cape Verde/Pitcairn HDMI Audio [Radeon HD 7700/7800 Series]"},

  {0x1002,0xaac0,"Tobago HDMI Audio [Radeon R7 360 / R9 360 OEM]"},

  {0x1002,0xaac8,"Hawaii HDMI Audio [Radeon R9 290/290X / 390/390X]"},

  {0x1002,0xaad8,"Tonga HDMI Audio [Radeon R9 285/380]"},

  {0x1002,0xaae8,"Fiji HDMI/DP Audio [Radeon R9 Nano / FURY/FURY X]"},

  {0x1002,0xac00,"Theater 600 Pro"},

  {0x1002,0xac02,"TV Wonder HD 600 PCIe"},

  {0x1002,0xac12,"Theater HD T507 (DVB-T) TV tuner/capture device"},

  {0x1002,0xcab0,"RS100 Host Bridge"},

  {0x1002,0xcab2,"RS200 Host Bridge"},

  {0x1002,0xcab3,"RS250 Host Bridge"},

  {0x1002,0xcbb2,"RS200 Host Bridge"},

  {0x1003,0x0201,"US201"},

  {0x1004,0x0005,"82C592-FC1"},

  {0x1004,0x0006,"82C593-FC1"},

  {0x1004,0x0007,"82C594-AFC2"},

  {0x1004,0x0008,"82C596/7 [Wildcat]"},

  {0x1004,0x0009,"82C597-AFC2"},

  {0x1004,0x000c,"82C541 [Lynx]"},

  {0x1004,0x000d,"82C543 [Lynx]"},

  {0x1004,0x0101,"82C532"},

  {0x1004,0x0102,"82C534 [Eagle]"},

  {0x1004,0x0103,"82C538"},

  {0x1004,0x0104,"82C535"},

  {0x1004,0x0105,"82C147"},

  {0x1004,0x0200,"82C975"},

  {0x1004,0x0280,"82C925"},

  {0x1004,0x0304,"QSound ThunderBird PCI Audio"},

  {0x1004,0x0305,"QSound ThunderBird PCI Audio Gameport"},

  {0x1004,0x0306,"QSound ThunderBird PCI Audio Support Registers"},

  {0x1004,0x0307,"SAA7785 ThunderBird PCI Audio"},

  {0x1004,0x0308,"SAA7785 ThunderBird PCI Audio Gameport"},

  {0x1004,0x0702,"VAS96011 [Golden Gate II]"},

  {0x1004,0x0703,"Tollgate"},

  {0x1005,0x2064,"ALG2032/2064"},

  {0x1005,0x2128,"ALG2364A"},

  {0x1005,0x2301,"ALG2301"},

  {0x1005,0x2302,"ALG2302"},

  {0x1005,0x2364,"ALG2364"},

  {0x1005,0x2464,"ALG2364A"},

  {0x1005,0x2501,"ALG2564A/25128A"},

  {0x100b,0x0001,"DP83810"},

  {0x100b,0x0002,"87415/87560 IDE"},

  {0x100b,0x000e,"87560 Legacy I/O"},

  {0x100b,0x000f,"FireWire Controller"},

  {0x100b,0x0011,"NS87560 National PCI System I/O"},

  {0x100b,0x0012,"USB Controller"},

  {0x100b,0x0020,"DP83815 (MacPhyter) Ethernet Controller"},

  {0x100b,0x0021,"PC87200 PCI to ISA Bridge"},

  {0x100b,0x0022,"DP83820 10/100/1000 Ethernet Controller"},

  {0x100b,0x0028,"Geode GX2 Host Bridge"},

  {0x100b,0x002a,"CS5535 South Bridge"},

  {0x100b,0x002b,"CS5535 ISA bridge"},

  {0x100b,0x002d,"CS5535 IDE"},

  {0x100b,0x002e,"CS5535 Audio"},

  {0x100b,0x002f,"CS5535 USB"},

  {0x100b,0x0030,"Geode GX2 Graphics Processor"},

  {0x100b,0x0035,"DP83065 [Saturn] 10/100/1000 Ethernet Controller"},

  {0x100b,0x0500,"SCx200 Bridge"},

  {0x100b,0x0501,"SCx200 SMI"},

  {0x100b,0x0502,"SCx200, SC1100 IDE controller"},

  {0x100b,0x0503,"SCx200, SC1100 Audio Controller"},

  {0x100b,0x0504,"SCx200 Video"},

  {0x100b,0x0505,"SCx200 XBus"},

  {0x100b,0x0510,"SC1100 Bridge"},

  {0x100b,0x0511,"SC1100 SMI & ACPI"},

  {0x100b,0x0515,"SC1100 XBus"},

  {0x100b,0xd001,"87410 IDE"},

  {0x100c,0x3202,"ET4000/W32p rev A"},

  {0x100c,0x3205,"ET4000/W32p rev B"},

  {0x100c,0x3206,"ET4000/W32p rev C"},

  {0x100c,0x3207,"ET4000/W32p rev D"},

  {0x100c,0x3208,"ET6000"},

  {0x100c,0x4702,"ET6300"},

  {0x100e,0x9000,"P9000 Viper"},

  {0x100e,0x9001,"P9000 Viper"},

  {0x100e,0x9002,"P9000 Viper"},

  {0x100e,0x9100,"P9100 Viper Pro/SE"},

  {0x1011,0x0001,"DECchip 21050"},

  {0x1011,0x0002,"DECchip 21040 [Tulip]"},

  {0x1011,0x0004,"DECchip 21030 [TGA]"},

  {0x1011,0x0007,"NVRAM [Zephyr NVRAM]"},

  {0x1011,0x0008,"KZPSA [KZPSA]"},

  {0x1011,0x0009,"DECchip 21140 [FasterNet]"},

  {0x1011,0x000a,"21230 Video Codec"},

  {0x1011,0x000d,"PBXGB [TGA2]"},

  {0x1011,0x000f,"DEFPA FDDI PCI-to-PDQ Interface Chip [PFI]"},

  {0x1011,0x0014,"DECchip 21041 [Tulip Pass 3]"},

  {0x1011,0x0016,"DGLPB [OPPO]"},

  {0x1011,0x0017,"PV-PCI Graphics Controller (ZLXp-L)"},

  {0x1011,0x0018,"Memory Channel interface"},

  {0x1011,0x0019,"DECchip 21142/43"},

  {0x1011,0x001a,"Farallon PN9000SX Gigabit Ethernet"},

  {0x1011,0x0021,"DECchip 21052"},

  {0x1011,0x0022,"DECchip 21150"},

  {0x1011,0x0023,"DECchip 21150"},

  {0x1011,0x0024,"DECchip 21152"},

  {0x1011,0x0025,"DECchip 21153"},

  {0x1011,0x0026,"DECchip 21154"},

  {0x1011,0x0034,"56k Modem Cardbus"},

  {0x1011,0x0045,"DECchip 21553"},

  {0x1011,0x0046,"DECchip 21554"},

  {0x1011,0x1065,"StrongARM DC21285"},

  {0x1013,0x0038,"GD 7548"},

  {0x1013,0x0040,"GD 7555 Flat Panel GUI Accelerator"},

  {0x1013,0x004c,"GD 7556 Video/Graphics LCD/CRT Ctrlr"},

  {0x1013,0x00a0,"GD 5430/40 [Alpine]"},

  {0x1013,0x00a2,"GD 5432 [Alpine]"},

  {0x1013,0x00a4,"GD 5434-4 [Alpine]"},

  {0x1013,0x00a8,"GD 5434-8 [Alpine]"},

  {0x1013,0x00ac,"GD 5436 [Alpine]"},

  {0x1013,0x00b0,"GD 5440"},

  {0x1013,0x00b8,"GD 5446"},

  {0x1013,0x00bc,"GD 5480"},

  {0x1013,0x00d0,"GD 5462"},

  {0x1013,0x00d2,"GD 5462 [Laguna I]"},

  {0x1013,0x00d4,"GD 5464 [Laguna]"},

  {0x1013,0x00d5,"GD 5464 BD [Laguna]"},

  {0x1013,0x00d6,"GD 5465 [Laguna]"},

  {0x1013,0x00e8,"GD 5436U"},

  {0x1013,0x1100,"CL 6729"},

  {0x1013,0x1110,"PD 6832 PCMCIA/CardBus Ctrlr"},

  {0x1013,0x1112,"PD 6834 PCMCIA/CardBus Ctrlr"},

  {0x1013,0x1113,"PD 6833 PCMCIA/CardBus Ctrlr"},

  {0x1013,0x1200,"GD 7542 [Nordic]"},

  {0x1013,0x1202,"GD 7543 [Viking]"},

  {0x1013,0x1204,"GD 7541 [Nordic Light]"},

  {0x1013,0x4000,"MD 5620 [CLM Data Fax Voice]"},

  {0x1013,0x4400,"CD 4400"},

  {0x1013,0x6001,"CS 4610/11 [CrystalClear SoundFusion Audio Accelerator]"},

  {0x1013,0x6003,"CS 4614/22/24/30 [CrystalClear SoundFusion Audio Accelerator]"},

  {0x1013,0x6004,"CS 4614/22/24 [CrystalClear SoundFusion Audio Accelerator]"},

  {0x1013,0x6005,"Crystal CS4281 PCI Audio"},

  {0x1014,0x0002,"PCI to MCA Bridge"},

  {0x1014,0x0005,"Processor to I/O Controller [Alta Lite]"},

  {0x1014,0x0007,"Processor to I/O Controller [Alta MP]"},

  {0x1014,0x000a,"PCI to ISA Bridge (IBM27-82376) [Fire Coral]"},

  {0x1014,0x0017,"CPU to PCI Bridge"},

  {0x1014,0x0018,"TR Auto LANstreamer"},

  {0x1014,0x001b,"GXT-150P"},

  {0x1014,0x001c,"Carrera"},

  {0x1014,0x001d,"SCSI-2 FAST PCI Adapter (82G2675)"},

  {0x1014,0x0020,"GXT1000 Graphics Adapter"},

  {0x1014,0x0022,"PCI to PCI Bridge (IBM27-82351)"},

  {0x1014,0x002d,"Processor to I/O Controller [Python]"},

  {0x1014,0x002e,"SCSI RAID Adapter [ServeRAID]"},

  {0x1014,0x0031,"2 Port Serial Adapter"},

  {0x1014,0x0036,"PCI to 32-bit LocalBus Bridge [Miami]"},

  {0x1014,0x0037,"PowerPC to PCI Bridge (IBM27-82660)"},

  {0x1014,0x003a,"CPU to PCI Bridge"},

  {0x1014,0x003c,"GXT250P/GXT255P Graphics Adapter"},

  {0x1014,0x003e,"16/4 Token ring UTP/STP controller"},

  {0x1014,0x0045,"SSA Adapter"},

  {0x1014,0x0046,"MPIC interrupt controller"},

  {0x1014,0x0047,"PCI to PCI Bridge"},

  {0x1014,0x0048,"PCI to PCI Bridge"},

  {0x1014,0x0049,"Warhead SCSI Controller"},

  {0x1014,0x004e,"ATM Controller (14104e00)"},

  {0x1014,0x004f,"ATM Controller (14104f00)"},

  {0x1014,0x0050,"ATM Controller (14105000)"},

  {0x1014,0x0053,"25 MBit ATM Controller"},

  {0x1014,0x0054,"GXT500P/GXT550P Graphics Adapter"},

  {0x1014,0x0057,"MPEG PCI Bridge"},

  {0x1014,0x0058,"SSA Adapter [Advanced SerialRAID/X]"},

  {0x1014,0x005e,"GXT800P Graphics Adapter"},

  {0x1014,0x007c,"ATM Controller (14107c00)"},

  {0x1014,0x007d,"3780IDSP [MWave]"},

  {0x1014,0x008b,"EADS PCI to PCI Bridge"},

  {0x1014,0x008e,"GXT3000P Graphics Adapter"},

  {0x1014,0x0090,"GXT 3000P"},

  {0x1014,0x0091,"SSA Adapter"},

  {0x1014,0x0095,"20H2999 PCI Docking Bridge"},

  {0x1014,0x0096,"Chukar chipset SCSI controller"},

  {0x1014,0x009f,"PCI 4758 Cryptographic Accelerator"},

  {0x1014,0x00a5,"ATM Controller (1410a500)"},

  {0x1014,0x00a6,"ATM 155MBPS MM Controller (1410a600)"},

  {0x1014,0x00b7,"GXT2000P Graphics Adapter"},

  {0x1014,0x00b8,"GXT2000P Graphics Adapter"},

  {0x1014,0x00be,"ATM 622MBPS Controller (1410be00)"},

  {0x1014,0x00dc,"Advanced Systems Management Adapter (ASMA)"},

  {0x1014,0x00fc,"CPC710 Dual Bridge and Memory Controller (PCI-64)"},

  {0x1014,0x0105,"CPC710 Dual Bridge and Memory Controller (PCI-32)"},

  {0x1014,0x010f,"Remote Supervisor Adapter (RSA)"},

  {0x1014,0x0142,"Yotta Video Compositor Input"},

  {0x1014,0x0144,"Yotta Video Compositor Output"},

  {0x1014,0x0156,"405GP PLB to PCI Bridge"},

  {0x1014,0x015e,"622Mbps ATM PCI Adapter"},

  {0x1014,0x0160,"64bit/66MHz PCI ATM 155 MMF"},

  {0x1014,0x016e,"GXT4000P Graphics Adapter"},

  {0x1014,0x0170,"GXT6000P Graphics Adapter"},

  {0x1014,0x017d,"GXT300P Graphics Adapter"},

  {0x1014,0x0180,"Snipe chipset SCSI controller"},

  {0x1014,0x0188,"EADS-X PCI-X to PCI-X Bridge"},

  {0x1014,0x01a7,"PCI-X to PCI-X Bridge"},

  {0x1014,0x01bd,"ServeRAID Controller"},

  {0x1014,0x01c1,"64bit/66MHz PCI ATM 155 UTP"},

  {0x1014,0x01e6,"Cryptographic Accelerator"},

  {0x1014,0x01ef,"PowerPC 440GP PCI Bridge"},

  {0x1014,0x01ff,"10/100 Mbps Ethernet"},

  {0x1014,0x0219,"Multiport Serial Adapter"},

  {0x1014,0x021b,"GXT6500P Graphics Adapter"},

  {0x1014,0x021c,"GXT4500P Graphics Adapter"},

  {0x1014,0x0233,"GXT135P Graphics Adapter"},

  {0x1014,0x028c,"Citrine chipset SCSI controller"},

  {0x1014,0x02a1,"Calgary PCI-X Host Bridge"},

  {0x1014,0x02bd,"Obsidian chipset SCSI controller"},

  {0x1014,0x0302,"Winnipeg PCI-X Host Bridge"},

  {0x1014,0x0308,"CalIOC2 PCI-E Root Port"},

  {0x1014,0x0311,"FC 5740/1954 4-Port 10/100/1000 Base-TX PCI-X Adapter for POWER"},

  {0x1014,0x0314,"ZISC 036 Neural accelerator card"},

  {0x1014,0x032d,"Axon - Cell Companion Chip"},

  {0x1014,0x0339,"Obsidian-E PCI-E SCSI controller"},

  {0x1014,0x033d,"PCI-E IPR SAS Adapter (FPGA)"},

  {0x1014,0x034a,"PCI-E IPR SAS Adapter (ASIC)"},

  {0x1014,0x03dc,"POWER8 Host Bridge (PHB3)"},

  {0x1014,0x044b,"GenWQE Accelerator Adapter"},

  {0x1014,0x04aa,"Flash Adapter 90 (PCIe2 0.9TB)"},

  {0x1014,0x04da,"PCI-E IPR SAS+ Adapter (ASIC)"},

  {0x1014,0x04ed,"Internal Shared Memory (ISM) virtual PCI device"},

  {0x1014,0x3022,"QLA3022 Network Adapter"},

  {0x1014,0x4022,"QLA3022 Network Adapter"},

  {0x1014,0xffff,"MPIC-2 interrupt controller"},

  {0x1017,0x5343,"SPEA 3D Accelerator"},

  {0x101a,0x0005,"100VG ethernet"},

  {0x101a,0x0007,"BYNET BIC4G/2C/2G"},

  {0x101a,0x0009,"PQS Memory Controller"},

  {0x101a,0x000a,"BYNET BPCI Adapter"},

  {0x101a,0x000b,"BYNET 4 Port BYA Switch (BYA4P)"},

  {0x101a,0x000c,"BYNET 4 Port BYA Switch (BYA4G)"},

  {0x101a,0x0010,"NCR AMC Memory Controller"},

  {0x101a,0x1dc1,"BYNET BIC2M/BIC4M/BYA4M"},

  {0x101a,0x1fa8,"BYNET Multi-port BIC Adapter (XBIC Based)"},

  {0x101b,0x0452,"VSC452 [SuperBMC]"},

  {0x101c,0x0193,"33C193A"},

  {0x101c,0x0196,"33C196A"},

  {0x101c,0x0197,"33C197A"},

  {0x101c,0x0296,"33C296A"},

  {0x101c,0x3193,"7193"},

  {0x101c,0x3197,"7197"},

  {0x101c,0x3296,"33C296A"},

  {0x101c,0x4296,"34C296"},

  {0x101c,0x9710,"Pipeline 9710"},

  {0x101c,0x9712,"Pipeline 9712"},

  {0x101c,0xc24a,"90C"},

  {0x101e,0x0009,"MegaRAID 428 Ultra RAID Controller (rev 03)"},

  {0x101e,0x1960,"MegaRAID"},

  {0x101e,0x9010,"MegaRAID 428 Ultra RAID Controller"},

  {0x101e,0x9030,"EIDE Controller"},

  {0x101e,0x9031,"EIDE Controller"},

  {0x101e,0x9032,"EIDE & SCSI Controller"},

  {0x101e,0x9033,"SCSI Controller"},

  {0x101e,0x9040,"Multimedia card"},

  {0x101e,0x9060,"MegaRAID 434 Ultra GT RAID Controller"},

  {0x101e,0x9063,"MegaRAC"},

  {0x1022,0x1100,"K8 [Athlon64/Opteron] HyperTransport Technology Configuration"},

  {0x1022,0x1101,"K8 [Athlon64/Opteron] Address Map"},

  {0x1022,0x1102,"K8 [Athlon64/Opteron] DRAM Controller"},

  {0x1022,0x1103,"K8 [Athlon64/Opteron] Miscellaneous Control"},

  {0x1022,0x1200,"Family 10h Processor HyperTransport Configuration"},

  {0x1022,0x1201,"Family 10h Processor Address Map"},

  {0x1022,0x1202,"Family 10h Processor DRAM Controller"},

  {0x1022,0x1203,"Family 10h Processor Miscellaneous Control"},

  {0x1022,0x1204,"Family 10h Processor Link Control"},

  {0x1022,0x1300,"Family 11h Processor HyperTransport Configuration"},

  {0x1022,0x1301,"Family 11h Processor Address Map"},

  {0x1022,0x1302,"Family 11h Processor DRAM Controller"},

  {0x1022,0x1303,"Family 11h Processor Miscellaneous Control"},

  {0x1022,0x1304,"Family 11h Processor Link Control"},

  {0x1022,0x1400,"Family 15h (Models 10h-1fh) Processor Function 0"},

  {0x1022,0x1401,"Family 15h (Models 10h-1fh) Processor Function 1"},

  {0x1022,0x1402,"Family 15h (Models 10h-1fh) Processor Function 2"},

  {0x1022,0x1403,"Family 15h (Models 10h-1fh) Processor Function 3"},

  {0x1022,0x1404,"Family 15h (Models 10h-1fh) Processor Function 4"},

  {0x1022,0x1405,"Family 15h (Models 10h-1fh) Processor Function 5"},

  {0x1022,0x1410,"Family 15h (Models 10h-1fh) Processor Root Complex"},

  {0x1022,0x1412,"Family 15h (Models 10h-1fh) Processor Root Port"},

  {0x1022,0x1413,"Family 15h (Models 10h-1fh) Processor Root Port"},

  {0x1022,0x1414,"Family 15h (Models 10h-1fh) Processor Root Port"},

  {0x1022,0x1415,"Family 15h (Models 10h-1fh) Processor Root Port"},

  {0x1022,0x1416,"Family 15h (Models 10h-1fh) Processor Root Port"},

  {0x1022,0x1417,"Family 15h (Models 10h-1fh) Processor Root Port"},

  {0x1022,0x1418,"Family 15h (Models 10h-1fh) Processor Root Port"},

  {0x1022,0x1419,"Family 15h (Models 10h-1fh) I/O Memory Management Unit"},

  {0x1022,0x141a,"Family 15h (Models 30h-3fh) Processor Function 0"},

  {0x1022,0x141b,"Family 15h (Models 30h-3fh) Processor Function 1"},

  {0x1022,0x141c,"Family 15h (Models 30h-3fh) Processor Function 2"},

  {0x1022,0x141d,"Family 15h (Models 30h-3fh) Processor Function 3"},

  {0x1022,0x141e,"Family 15h (Models 30h-3fh) Processor Function 4"},

  {0x1022,0x141f,"Family 15h (Models 30h-3fh) Processor Function 5"},

  {0x1022,0x1422,"Family 15h (Models 30h-3fh) Processor Root Complex"},

  {0x1022,0x1423,"Family 15h (Models 30h-3fh) I/O Memory Management Unit"},

  {0x1022,0x1426,"Family 15h (Models 30h-3fh) Processor Root Port"},

  {0x1022,0x1436,"Liverpool Processor Root Complex"},

  {0x1022,0x1437,"Liverpool I/O Memory Management Unit"},

  {0x1022,0x1438,"Liverpool Processor Root Port"},

  {0x1022,0x1439,"Family 16h Processor Functions 5:1"},

  {0x1022,0x145b,"Zeppelin Non-Transparent Bridge"},

  {0x1022,0x145c,"USB3 Host Controller"},

  {0x1022,0x1510,"Family 14h Processor Root Complex"},

  {0x1022,0x1512,"Family 14h Processor Root Port"},

  {0x1022,0x1513,"Family 14h Processor Root Port"},

  {0x1022,0x1514,"Family 14h Processor Root Port"},

  {0x1022,0x1515,"Family 14h Processor Root Port"},

  {0x1022,0x1516,"Family 14h Processor Root Port"},

  {0x1022,0x1530,"Family 16h Processor Function 0"},

  {0x1022,0x1531,"Family 16h Processor Function 1"},

  {0x1022,0x1532,"Family 16h Processor Function 2"},

  {0x1022,0x1533,"Family 16h Processor Function 3"},

  {0x1022,0x1534,"Family 16h Processor Function 4"},

  {0x1022,0x1535,"Family 16h Processor Function 5"},

  {0x1022,0x1536,"Family 16h Processor Root Complex"},

  {0x1022,0x1538,"Family 16h Processor Function 0"},

  {0x1022,0x1600,"Family 15h Processor Function 0"},

  {0x1022,0x1601,"Family 15h Processor Function 1"},

  {0x1022,0x1602,"Family 15h Processor Function 2"},

  {0x1022,0x1603,"Family 15h Processor Function 3"},

  {0x1022,0x1604,"Family 15h Processor Function 4"},

  {0x1022,0x1605,"Family 15h Processor Function 5"},

  {0x1022,0x1700,"Family 12h/14h Processor Function 0"},

  {0x1022,0x1701,"Family 12h/14h Processor Function 1"},

  {0x1022,0x1702,"Family 12h/14h Processor Function 2"},

  {0x1022,0x1703,"Family 12h/14h Processor Function 3"},

  {0x1022,0x1704,"Family 12h/14h Processor Function 4"},

  {0x1022,0x1705,"Family 12h Processor Root Complex"},

  {0x1022,0x1707,"Family 12h Processor Root Port"},

  {0x1022,0x1708,"Family 12h Processor Root Port"},

  {0x1022,0x1709,"Family 12h Processor Root Port"},

  {0x1022,0x170a,"Family 12h Processor Root Port"},

  {0x1022,0x170b,"Family 12h Processor Root Port"},

  {0x1022,0x170c,"Family 12h Processor Root Port"},

  {0x1022,0x170d,"Family 12h Processor Root Port"},

  {0x1022,0x1716,"Family 12h/14h Processor Function 5"},

  {0x1022,0x1718,"Family 12h/14h Processor Function 6"},

  {0x1022,0x1719,"Family 12h/14h Processor Function 7"},

  {0x1022,0x2000,"79c970 [PCnet32 LANCE]"},

  {0x1022,0x2001,"79c978 [HomePNA]"},

  {0x1022,0x2003,"Am 1771 MBW [Alchemy]"},

  {0x1022,0x2020,"53c974 [PCscsi]"},

  {0x1022,0x2040,"79c974"},

  {0x1022,0x2080,"CS5536 [Geode companion] Host Bridge"},

  {0x1022,0x2081,"Geode LX Video"},

  {0x1022,0x2082,"Geode LX AES Security Block"},

  {0x1022,0x208f,"CS5536 GeodeLink PCI South Bridge"},

  {0x1022,0x2090,"CS5536 [Geode companion] ISA"},

  {0x1022,0x2091,"CS5536 [Geode companion] FLASH"},

  {0x1022,0x2093,"CS5536 [Geode companion] Audio"},

  {0x1022,0x2094,"CS5536 [Geode companion] OHC"},

  {0x1022,0x2095,"CS5536 [Geode companion] EHC"},

  {0x1022,0x2096,"CS5536 [Geode companion] UDC"},

  {0x1022,0x2097,"CS5536 [Geode companion] UOC"},

  {0x1022,0x209a,"CS5536 [Geode companion] IDE"},

  {0x1022,0x3000,"ELanSC520 Microcontroller"},

  {0x1022,0x43a0,"Hudson PCI to PCI bridge (PCIE port 0)"},

  {0x1022,0x43a1,"Hudson PCI to PCI bridge (PCIE port 1)"},

  {0x1022,0x43a2,"Hudson PCI to PCI bridge (PCIE port 2)"},

  {0x1022,0x43a3,"Hudson PCI to PCI bridge (PCIE port 3)"},

  {0x1022,0x43bb,"USB 3.1 XHCI Controller"},

  {0x1022,0x7006,"AMD-751 [Irongate] System Controller"},

  {0x1022,0x7007,"AMD-751 [Irongate] AGP Bridge"},

  {0x1022,0x700a,"AMD-IGR4 AGP Host to PCI Bridge"},

  {0x1022,0x700b,"AMD-IGR4 PCI to PCI Bridge"},

  {0x1022,0x700c,"AMD-760 MP [IGD4-2P] System Controller"},

  {0x1022,0x700d,"AMD-760 MP [IGD4-2P] AGP Bridge"},

  {0x1022,0x700e,"AMD-760 [IGD4-1P] System Controller"},

  {0x1022,0x700f,"AMD-760 [IGD4-1P] AGP Bridge"},

  {0x1022,0x7400,"AMD-755 [Cobra] ISA"},

  {0x1022,0x7401,"AMD-755 [Cobra] IDE"},

  {0x1022,0x7403,"AMD-755 [Cobra] ACPI"},

  {0x1022,0x7404,"AMD-755 [Cobra] USB"},

  {0x1022,0x7408,"AMD-756 [Viper] ISA"},

  {0x1022,0x7409,"AMD-756 [Viper] IDE"},

  {0x1022,0x740b,"AMD-756 [Viper] ACPI"},

  {0x1022,0x740c,"AMD-756 [Viper] USB"},

  {0x1022,0x7410,"AMD-766 [ViperPlus] ISA"},

  {0x1022,0x7411,"AMD-766 [ViperPlus] IDE"},

  {0x1022,0x7413,"AMD-766 [ViperPlus] ACPI"},

  {0x1022,0x7414,"AMD-766 [ViperPlus] USB"},

  {0x1022,0x7440,"AMD-768 [Opus] ISA"},

  {0x1022,0x7441,"AMD-768 [Opus] IDE"},

  {0x1022,0x7443,"AMD-768 [Opus] ACPI"},

  {0x1022,0x7445,"AMD-768 [Opus] Audio"},

  {0x1022,0x7446,"AMD-768 [Opus] MC97 Modem"},

  {0x1022,0x7448,"AMD-768 [Opus] PCI"},

  {0x1022,0x7449,"AMD-768 [Opus] USB"},

  {0x1022,0x7450,"AMD-8131 PCI-X Bridge"},

  {0x1022,0x7451,"AMD-8131 PCI-X IOAPIC"},

  {0x1022,0x7454,"AMD-8151 System Controller"},

  {0x1022,0x7455,"AMD-8151 AGP Bridge"},

  {0x1022,0x7458,"AMD-8132 PCI-X Bridge"},

  {0x1022,0x7459,"AMD-8132 PCI-X IOAPIC"},

  {0x1022,0x7460,"AMD-8111 PCI"},

  {0x1022,0x7461,"AMD-8111 USB"},

  {0x1022,0x7462,"AMD-8111 Ethernet"},

  {0x1022,0x7463,"AMD-8111 USB EHCI"},

  {0x1022,0x7464,"AMD-8111 USB OHCI"},

  {0x1022,0x7468,"AMD-8111 LPC"},

  {0x1022,0x7469,"AMD-8111 IDE"},

  {0x1022,0x746a,"AMD-8111 SMBus 2.0"},

  {0x1022,0x746b,"AMD-8111 ACPI"},

  {0x1022,0x746d,"AMD-8111 AC97 Audio"},

  {0x1022,0x746e,"AMD-8111 MC97 Modem"},

  {0x1022,0x756b,"AMD-8111 ACPI"},

  {0x1022,0x7800,"FCH SATA Controller [IDE mode]"},

  {0x1022,0x7801,"FCH SATA Controller [AHCI mode]"},

  {0x1022,0x7802,"FCH SATA Controller [RAID mode]"},

  {0x1022,0x7803,"FCH SATA Controller [RAID mode]"},

  {0x1022,0x7804,"FCH SATA Controller [AHCI mode]"},

  {0x1022,0x7805,"FCH SATA Controller [RAID mode]"},

  {0x1022,0x7806,"FCH SD Flash Controller"},

  {0x1022,0x7807,"FCH USB OHCI Controller"},

  {0x1022,0x7808,"FCH USB EHCI Controller"},

  {0x1022,0x7809,"FCH USB OHCI Controller"},

  {0x1022,0x780b,"FCH SMBus Controller"},

  {0x1022,0x780c,"FCH IDE Controller"},

  {0x1022,0x780d,"FCH Azalia Controller"},

  {0x1022,0x780e,"FCH LPC Bridge"},

  {0x1022,0x780f,"FCH PCI Bridge"},

  {0x1022,0x7812,"FCH USB XHCI Controller"},

  {0x1022,0x7813,"FCH SD Flash Controller"},

  {0x1022,0x7814,"FCH USB XHCI Controller"},

  {0x1022,0x7900,"FCH SATA Controller [IDE mode]"},

  {0x1022,0x7901,"FCH SATA Controller [AHCI mode]"},

  {0x1022,0x7902,"FCH SATA Controller [RAID mode]"},

  {0x1022,0x7903,"FCH SATA Controller [RAID mode]"},

  {0x1022,0x7904,"FCH SATA Controller [AHCI mode]"},

  {0x1022,0x7906,"FCH SD Flash Controller"},

  {0x1022,0x7908,"FCH USB EHCI Controller"},

  {0x1022,0x790b,"FCH SMBus Controller"},

  {0x1022,0x790e,"FCH LPC Bridge"},

  {0x1022,0x790f,"FCH PCI Bridge"},

  {0x1022,0x7914,"FCH USB XHCI Controller"},

  {0x1022,0x9600,"RS780 Host Bridge"},

  {0x1022,0x9601,"RS880 Host Bridge"},

  {0x1022,0x9602,"RS780/RS880 PCI to PCI bridge (int gfx)"},

  {0x1022,0x9603,"RS780 PCI to PCI bridge (ext gfx port 0)"},

  {0x1022,0x9604,"RS780/RS880 PCI to PCI bridge (PCIE port 0)"},

  {0x1022,0x9605,"RS780/RS880 PCI to PCI bridge (PCIE port 1)"},

  {0x1022,0x9606,"RS780 PCI to PCI bridge (PCIE port 2)"},

  {0x1022,0x9607,"RS780/RS880 PCI to PCI bridge (PCIE port 3)"},

  {0x1022,0x9608,"RS780/RS880 PCI to PCI bridge (PCIE port 4)"},

  {0x1022,0x9609,"RS780/RS880 PCI to PCI bridge (PCIE port 5)"},

  {0x1022,0x960a,"RS780 PCI to PCI bridge (NB-SB link)"},

  {0x1022,0x960b,"RS780 PCI to PCI bridge (ext gfx port 1)"},

  {0x1023,0x0194,"82C194"},

  {0x1023,0x2000,"4DWave DX"},

  {0x1023,0x2001,"4DWave NX"},

  {0x1023,0x2100,"CyberBlade XP4m32"},

  {0x1023,0x2200,"XGI Volari XP5"},

  {0x1023,0x8400,"CyberBlade/i7"},

  {0x1023,0x8420,"CyberBlade/i7d"},

  {0x1023,0x8500,"CyberBlade/i1"},

  {0x1023,0x8520,"CyberBlade i1"},

  {0x1023,0x8620,"CyberBlade/i1"},

  {0x1023,0x8820,"CyberBlade XPAi1"},

  {0x1023,0x9320,"TGUI 9320"},

  {0x1023,0x9350,"GUI Accelerator"},

  {0x1023,0x9360,"Flat panel GUI Accelerator"},

  {0x1023,0x9382,"Cyber 9382 [Reference design]"},

  {0x1023,0x9383,"Cyber 9383 [Reference design]"},

  {0x1023,0x9385,"Cyber 9385 [Reference design]"},

  {0x1023,0x9386,"Cyber 9386"},

  {0x1023,0x9388,"Cyber 9388"},

  {0x1023,0x9397,"Cyber 9397"},

  {0x1023,0x939a,"Cyber 9397DVD"},

  {0x1023,0x9420,"TGUI 9420"},

  {0x1023,0x9430,"TGUI 9430"},

  {0x1023,0x9440,"TGUI 9440"},

  {0x1023,0x9460,"TGUI 9460"},

  {0x1023,0x9470,"TGUI 9470"},

  {0x1023,0x9520,"Cyber 9520"},

  {0x1023,0x9525,"Cyber 9525"},

  {0x1023,0x9540,"Cyber 9540"},

  {0x1023,0x9660,"TGUI 9660/938x/968x"},

  {0x1023,0x9680,"TGUI 9680"},

  {0x1023,0x9682,"TGUI 9682"},

  {0x1023,0x9683,"TGUI 9683"},

  {0x1023,0x9685,"ProVIDIA 9685"},

  {0x1023,0x9750,"3DImage 9750"},

  {0x1023,0x9753,"TGUI 9753"},

  {0x1023,0x9754,"TGUI 9754"},

  {0x1023,0x9759,"TGUI 975"},

  {0x1023,0x9783,"TGUI 9783"},

  {0x1023,0x9785,"TGUI 9785"},

  {0x1023,0x9850,"3DImage 9850"},

  {0x1023,0x9880,"Blade 3D PCI/AGP"},

  {0x1023,0x9910,"CyberBlade/XP"},

  {0x1023,0x9930,"CyberBlade/XPm"},

  {0x1023,0x9960,"CyberBlade XP2"},

  {0x1025,0x1435,"M1435"},

  {0x1025,0x1445,"M1445"},

  {0x1025,0x1449,"M1449"},

  {0x1025,0x1451,"M1451"},

  {0x1025,0x1461,"M1461"},

  {0x1025,0x1489,"M1489"},

  {0x1025,0x1511,"M1511"},

  {0x1025,0x1512,"ALI M1512 Aladdin"},

  {0x1025,0x1513,"M1513"},

  {0x1025,0x1521,"ALI M1521 Aladdin III CPU Bridge"},

  {0x1025,0x1523,"ALI M1523 ISA Bridge"},

  {0x1025,0x1531,"M1531 Northbridge [Aladdin IV/IV+]"},

  {0x1025,0x1533,"M1533 PCI-to-ISA Bridge"},

  {0x1025,0x1535,"M1535 PCI Bridge + Super I/O + FIR"},

  {0x1025,0x1541,"M1541 Northbridge [Aladdin V]"},

  {0x1025,0x1542,"M1542 Northbridge [Aladdin V]"},

  {0x1025,0x1543,"M1543 PCI-to-ISA Bridge + Super I/O + FIR"},

  {0x1025,0x1561,"M1561 Northbridge [Aladdin 7]"},

  {0x1025,0x1621,"M1621 Northbridge [Aladdin-Pro II]"},

  {0x1025,0x1631,"M1631 Northbridge+3D Graphics [Aladdin TNT2]"},

  {0x1025,0x1641,"M1641 Northbridge [Aladdin-Pro IV]"},

  {0x1025,0x1647,"M1647 [MaGiK1] PCI North Bridge"},

  {0x1025,0x1671,"M1671 Northbridge [ALADDiN-P4]"},

  {0x1025,0x1672,"Northbridge [CyberALADDiN-P4]"},

  {0x1025,0x3141,"M3141"},

  {0x1025,0x3143,"M3143"},

  {0x1025,0x3145,"M3145"},

  {0x1025,0x3147,"M3147"},

  {0x1025,0x3149,"M3149"},

  {0x1025,0x3151,"M3151"},

  {0x1025,0x3307,"M3307 MPEG-I Video Controller"},

  {0x1025,0x3309,"M3309 MPEG-II Video w/ Software Audio Decoder"},

  {0x1025,0x3321,"M3321 MPEG-II Audio/Video Decoder"},

  {0x1025,0x5212,"M4803"},

  {0x1025,0x5215,"ALI PCI EIDE Controller"},

  {0x1025,0x5217,"M5217H"},

  {0x1025,0x5219,"M5219"},

  {0x1025,0x5225,"M5225"},

  {0x1025,0x5229,"M5229"},

  {0x1025,0x5235,"M5235"},

  {0x1025,0x5237,"M5237 PCI USB Host Controller"},

  {0x1025,0x5240,"EIDE Controller"},

  {0x1025,0x5241,"PCMCIA Bridge"},

  {0x1025,0x5242,"General Purpose Controller"},

  {0x1025,0x5243,"PCI to PCI Bridge Controller"},

  {0x1025,0x5244,"Floppy Disk Controller"},

  {0x1025,0x5247,"M1541 PCI to PCI Bridge"},

  {0x1025,0x5251,"M5251 P1394 Controller"},

  {0x1025,0x5427,"PCI to AGP Bridge"},

  {0x1025,0x5451,"M5451 PCI AC-Link Controller Audio Device"},

  {0x1025,0x5453,"M5453 PCI AC-Link Controller Modem Device"},

  {0x1025,0x7101,"M7101 PCI PMU Power Management Controller"},

  {0x1025,0x9602,"AMD RS780/RS880 PCI to PCI bridge (int gfx)"},

  {0x1028,0x0001,"PowerEdge Expandable RAID Controller 2/Si"},

  {0x1028,0x0002,"PowerEdge Expandable RAID Controller 3/Di"},

  {0x1028,0x0003,"PowerEdge Expandable RAID Controller 3/Si"},

  {0x1028,0x0004,"PowerEdge Expandable RAID Controller 3/Di [Iguana]"},

  {0x1028,0x0006,"PowerEdge Expandable RAID Controller 3/Di"},

  {0x1028,0x0007,"Remote Access Card III"},

  {0x1028,0x0008,"Remote Access Card III"},

  {0x1028,0x0009,"Remote Access Card III: BMC/SMIC device not present"},

  {0x1028,0x000a,"PowerEdge Expandable RAID Controller 3/Di"},

  {0x1028,0x000c,"Embedded Remote Access or ERA/O"},

  {0x1028,0x000d,"Embedded Remote Access: BMC/SMIC device"},

  {0x1028,0x000e,"PowerEdge Expandable RAID controller 4/Di"},

  {0x1028,0x000f,"PowerEdge Expandable RAID controller 4/Di"},

  {0x1028,0x0010,"Remote Access Card 4"},

  {0x1028,0x0011,"Remote Access Card 4 Daughter Card"},

  {0x1028,0x0012,"Remote Access Card 4 Daughter Card Virtual UART"},

  {0x1028,0x0013,"PowerEdge Expandable RAID controller 4"},

  {0x1028,0x0014,"Remote Access Card 4 Daughter Card SMIC interface"},

  {0x1028,0x0015,"PowerEdge Expandable RAID controller 5"},

  {0x1028,0x0016,"PowerEdge Expandable RAID controller S300"},

  {0x1028,0x0073,"NV-RAM Adapter"},

  {0x102a,0x0010,"ASPEN"},

  {0x102a,0x001f,"AHA-2940U2/U2W /7890/7891 SCSI Controllers"},

  {0x102a,0x00c5,"AIC-7899 U160/m SCSI Controller"},

  {0x102a,0x00cf,"AIC-7899P U160/m"},

  {0x102b,0x0010,"MGA-I [Impression?]"},

  {0x102b,0x0100,"MGA 1064SG [Mystique]"},

  {0x102b,0x0518,"MGA-II [Athena]"},

  {0x102b,0x0519,"MGA 2064W [Millennium]"},

  {0x102b,0x051a,"MGA 1064SG [Mystique]"},

  {0x102b,0x051b,"MGA 2164W [Millennium II]"},

  {0x102b,0x051e,"MGA 1064SG [Mystique] AGP"},

  {0x102b,0x051f,"MGA 2164W [Millennium II] AGP"},

  {0x102b,0x0520,"MGA G200"},

  {0x102b,0x0521,"MGA G200 AGP"},

  {0x102b,0x0522,"MGA G200e [Pilot] ServerEngines (SEP1)"},

  {0x102b,0x0525,"MGA G400/G450"},

  {0x102b,0x0527,"Parhelia"},

  {0x102b,0x0528,"Parhelia"},

  {0x102b,0x0530,"MGA G200EV"},

  {0x102b,0x0532,"MGA G200eW WPCM450"},

  {0x102b,0x0533,"MGA G200EH"},

  {0x102b,0x0534,"G200eR2"},

  {0x102b,0x0540,"M91XX"},

  {0x102b,0x0550,"SV2"},

  {0x102b,0x0d10,"MGA Ultima/Impression"},

  {0x102b,0x1000,"MGA G100 [Productiva]"},

  {0x102b,0x1001,"MGA G100 [Productiva] AGP"},

  {0x102b,0x2007,"MGA Mistral"},

  {0x102b,0x2527,"Millennium G550"},

  {0x102b,0x2537,"Millenium P650/P750"},

  {0x102b,0x2538,"Millenium P650 PCIe"},

  {0x102b,0x2539,"Millennium P690"},

  {0x102b,0x4164,"Morphis QxT frame grabber"},

  {0x102b,0x43b4,"Morphis Qxt encoding engine"},

  {0x102b,0x4510,"Morphis COM port"},

  {0x102b,0x4536,"VIA Framegrabber"},

  {0x102b,0x4686,"Concord GX (customized Intel 82541)"},

  {0x102b,0x475b,"Solios eCL/XCL-B frame grabber"},

  {0x102b,0x475d,"Vio frame grabber family"},

  {0x102b,0x475f,"Solios (single-Full) CL frame grabber"},

  {0x102b,0x47a1,"Solios eA/XA frame grabber"},

  {0x102b,0x47a2,"Solios COM port"},

  {0x102b,0x47c1,"Solios (dual-Base/single-Medium) CL frame grabber"},

  {0x102b,0x47c2,"Solios COM port"},

  {0x102b,0x4949,"Radient frame grabber family"},

  {0x102b,0x4cdc,"Morphis JPEG2000 accelerator"},

  {0x102b,0x4f54,"Morphis (e)Quad frame grabber"},

  {0x102b,0x4fc5,"Morphis (e)Dual frame grabber"},

  {0x102b,0x5e10,"Morphis aux I/O"},

  {0x102b,0x6573,"Shark 10/100 Multiport SwitchNIC"},

  {0x102c,0x00b8,"F64310"},

  {0x102c,0x00c0,"F69000 HiQVideo"},

  {0x102c,0x00d0,"F65545"},

  {0x102c,0x00d8,"F65545"},

  {0x102c,0x00dc,"F65548"},

  {0x102c,0x00e0,"F65550"},

  {0x102c,0x00e4,"F65554"},

  {0x102c,0x00e5,"F65555 HiQVPro"},

  {0x102c,0x00f0,"F68554"},

  {0x102c,0x00f4,"F68554 HiQVision"},

  {0x102c,0x00f5,"F68555"},

  {0x102c,0x0c30,"F69030"},

  {0x102d,0x50dc,"3328 Audio"},

  {0x102f,0x0009,"r4x00"},

  {0x102f,0x000a,"TX3927 MIPS RISC PCI Controller"},

  {0x102f,0x0020,"ATM Meteor 155"},

  {0x102f,0x0030,"TC35815CF PCI 10/100 Mbit Ethernet Controller"},

  {0x102f,0x0031,"TC35815CF PCI 10/100 Mbit Ethernet Controller with WOL"},

  {0x102f,0x0032,"TC35815CF PCI 10/100 Mbit Ethernet Controller on TX4939"},

  {0x102f,0x0105,"TC86C001 [goku-s] IDE"},

  {0x102f,0x0106,"TC86C001 [goku-s] USB 1.1 Host"},

  {0x102f,0x0107,"TC86C001 [goku-s] USB Device Controller"},

  {0x102f,0x0108,"TC86C001 [goku-s] I2C/SIO/GPIO Controller"},

  {0x102f,0x0180,"TX4927/38 MIPS RISC PCI Controller"},

  {0x102f,0x0181,"TX4925 MIPS RISC PCI Controller"},

  {0x102f,0x0182,"TX4937 MIPS RISC PCI Controller"},

  {0x102f,0x01b4,"Celleb platform IDE interface"},

  {0x102f,0x01b5,"SCC USB 2.0 EHCI controller"},

  {0x102f,0x01b6,"SCC USB 1.1 OHCI controller"},

  {0x1031,0x5601,"DC20 ASIC"},

  {0x1031,0x5607,"Video I/O & motion JPEG compressor"},

  {0x1031,0x5631,"Media 3D"},

  {0x1031,0x6057,"MiroVideo DC10/DC30+"},

  {0x1033,0x0001,"PCI to 486-like bus Bridge"},

  {0x1033,0x0002,"PCI to VL98 Bridge"},

  {0x1033,0x0003,"ATM Controller"},

  {0x1033,0x0004,"R4000 PCI Bridge"},

  {0x1033,0x0005,"PCI to 486-like bus Bridge"},

  {0x1033,0x0006,"PC-9800 Graphic Accelerator"},

  {0x1033,0x0007,"PCI to UX-Bus Bridge"},

  {0x1033,0x0008,"PC-9800 Graphic Accelerator"},

  {0x1033,0x0009,"PCI to PC9800 Core-Graph Bridge"},

  {0x1033,0x0016,"PCI to VL Bridge"},

  {0x1033,0x001a,"[Nile II]"},

  {0x1033,0x0021,"Vrc4373 [Nile I]"},

  {0x1033,0x0029,"PowerVR PCX1"},

  {0x1033,0x002a,"PowerVR 3D"},

  {0x1033,0x002c,"Star Alpha 2"},

  {0x1033,0x002d,"PCI to C-bus Bridge"},

  {0x1033,0x0035,"OHCI USB Controller"},

  {0x1033,0x003b,"PCI to C-bus Bridge"},

  {0x1033,0x003e,"NAPCCARD Cardbus Controller"},

  {0x1033,0x0046,"PowerVR PCX2 [midas]"},

  {0x1033,0x005a,"Vrc5074 [Nile 4]"},

  {0x1033,0x0063,"uPD72862 [Firewarden] IEEE1394 OHCI 1.0 Link Controller"},

  {0x1033,0x0067,"PowerVR Neon 250 Chipset"},

  {0x1033,0x0072,"uPD72874 IEEE1394 OHCI 1.1 3-port PHY-Link Ctrlr"},

  {0x1033,0x0074,"56k Voice Modem"},

  {0x1033,0x009b,"Vrc5476"},

  {0x1033,0x00a5,"VRC4173"},

  {0x1033,0x00a6,"VRC5477 AC97"},

  {0x1033,0x00cd,"uPD72870 [Firewarden] IEEE1394a OHCI 1.0 Link/3-port PHY Controller"},

  {0x1033,0x00ce,"uPD72871 [Firewarden] IEEE1394a OHCI 1.0 Link/1-port PHY Controller"},

  {0x1033,0x00df,"Vr4131"},

  {0x1033,0x00e0,"uPD72010x USB 2.0 Controller"},

  {0x1033,0x00e7,"uPD72873 [Firewarden] IEEE1394a OHCI 1.1 Link/2-port PHY Controller"},

  {0x1033,0x00f2,"uPD72874 [Firewarden] IEEE1394a OHCI 1.1 Link/3-port PHY Controller"},

  {0x1033,0x00f3,"uPD6113x Multimedia Decoder/Processor [EMMA2]"},

  {0x1033,0x010c,"VR7701"},

  {0x1033,0x0125,"uPD720400 PCI Express - PCI/PCI-X Bridge"},

  {0x1033,0x013a,"Dual Tuner/MPEG Encoder"},

  {0x1033,0x0194,"uPD720200 USB 3.0 Host Controller"},

  {0x1033,0x01e7,"uPD72873 [Firewarden] IEEE1394a OHCI 1.1 Link/2-port PHY Controller"},

  {0x1033,0x01f2,"uPD72874 [Firewarden] IEEE1394a OHCI 1.1 Link/3-port PHY Controller"},

  {0x1039,0x0001,"AGP Port (virtual PCI-to-PCI bridge)"},

  {0x1039,0x0002,"AGP Port (virtual PCI-to-PCI bridge)"},

  {0x1039,0x0003,"AGP Port (virtual PCI-to-PCI bridge)"},

  {0x1039,0x0004,"PCI-to-PCI bridge"},

  {0x1039,0x0006,"85C501/2/3"},

  {0x1039,0x0008,"SiS85C503/5513 (LPC Bridge)"},

  {0x1039,0x0009,"5595 Power Management Controller"},

  {0x1039,0x000a,"PCI-to-PCI bridge"},

  {0x1039,0x0016,"SiS961/2/3 SMBus controller"},

  {0x1039,0x0018,"SiS85C503/5513 (LPC Bridge)"},

  {0x1039,0x0163,"163 802.11b/g Wireless LAN Adapter"},

  {0x1039,0x0180,"RAID bus controller 180 SATA/PATA  [SiS]"},

  {0x1039,0x0181,"SATA"},

  {0x1039,0x0182,"182 SATA/RAID Controller"},

  {0x1039,0x0186,"AHCI Controller (0106)"},

  {0x1039,0x0190,"190 Ethernet Adapter"},

  {0x1039,0x0191,"191 Gigabit Ethernet Adapter"},

  {0x1039,0x0200,"5597/5598/6326 VGA"},

  {0x1039,0x0204,"82C204"},

  {0x1039,0x0205,"SG86C205"},

  {0x1039,0x0300,"300/305 PCI/AGP VGA Display Adapter"},

  {0x1039,0x0310,"315H PCI/AGP VGA Display Adapter"},

  {0x1039,0x0315,"315 PCI/AGP VGA Display Adapter"},

  {0x1039,0x0325,"315PRO PCI/AGP VGA Display Adapter"},

  {0x1039,0x0330,"330 [Xabre] PCI/AGP VGA Display Adapter"},

  {0x1039,0x0406,"85C501/2"},

  {0x1039,0x0496,"85C496"},

  {0x1039,0x0530,"530 Host"},

  {0x1039,0x0540,"540 Host"},

  {0x1039,0x0550,"550 Host"},

  {0x1039,0x0597,"5513C"},

  {0x1039,0x0601,"85C601"},

  {0x1039,0x0620,"620 Host"},

  {0x1039,0x0630,"630 Host"},

  {0x1039,0x0633,"633 Host"},

  {0x1039,0x0635,"635 Host"},

  {0x1039,0x0645,"SiS645 Host & Memory & AGP Controller"},

  {0x1039,0x0646,"SiS645DX Host & Memory & AGP Controller"},

  {0x1039,0x0648,"645xx"},

  {0x1039,0x0649,"SiS649 Host"},

  {0x1039,0x0650,"650/M650 Host"},

  {0x1039,0x0651,"651 Host"},

  {0x1039,0x0655,"655 Host"},

  {0x1039,0x0660,"660 Host"},

  {0x1039,0x0661,"661FX/M661FX/M661MX Host"},

  {0x1039,0x0662,"662 Host"},

  {0x1039,0x0671,"671MX"},

  {0x1039,0x0730,"730 Host"},

  {0x1039,0x0733,"733 Host"},

  {0x1039,0x0735,"735 Host"},

  {0x1039,0x0740,"740 Host"},

  {0x1039,0x0741,"741/741GX/M741 Host"},

  {0x1039,0x0745,"745 Host"},

  {0x1039,0x0746,"746 Host"},

  {0x1039,0x0755,"755 Host"},

  {0x1039,0x0760,"760/M760 Host"},

  {0x1039,0x0761,"761/M761 Host"},

  {0x1039,0x0900,"SiS900 PCI Fast Ethernet"},

  {0x1039,0x0961,"SiS961 [MuTIOL Media IO]"},

  {0x1039,0x0962,"SiS962 [MuTIOL Media IO] LPC Controller"},

  {0x1039,0x0963,"SiS963 [MuTIOL Media IO] LPC Controller"},

  {0x1039,0x0964,"SiS964 [MuTIOL Media IO] LPC Controller"},

  {0x1039,0x0965,"SiS965 [MuTIOL Media IO]"},

  {0x1039,0x0966,"SiS966 [MuTIOL Media IO]"},

  {0x1039,0x0968,"SiS968 [MuTIOL Media IO]"},

  {0x1039,0x1180,"SATA Controller / IDE mode"},

  {0x1039,0x1182,"SATA Controller / RAID mode"},

  {0x1039,0x1183,"SATA Controller / IDE mode"},

  {0x1039,0x1184,"AHCI Controller / RAID mode"},

  {0x1039,0x1185,"AHCI IDE Controller (0106)"},

  {0x1039,0x3602,"83C602"},

  {0x1039,0x5107,"5107"},

  {0x1039,0x5300,"SiS540 PCI Display Adapter"},

  {0x1039,0x5315,"550 PCI/AGP VGA Display Adapter"},

  {0x1039,0x5401,"486 PCI Chipset"},

  {0x1039,0x5511,"5511/5512"},

  {0x1039,0x5513,"5513 IDE Controller"},

  {0x1039,0x5517,"5517"},

  {0x1039,0x5571,"5571"},

  {0x1039,0x5581,"5581 Pentium Chipset"},

  {0x1039,0x5582,"5582"},

  {0x1039,0x5591,"5591/5592 Host"},

  {0x1039,0x5596,"5596 Pentium Chipset"},

  {0x1039,0x5597,"5597 [SiS5582]"},

  {0x1039,0x5600,"5600 Host"},

  {0x1039,0x6204,"Video decoder & MPEG interface"},

  {0x1039,0x6205,"VGA Controller"},

  {0x1039,0x6236,"6236 3D-AGP"},

  {0x1039,0x6300,"630/730 PCI/AGP VGA Display Adapter"},

  {0x1039,0x6306,"530/620 PCI/AGP VGA Display Adapter"},

  {0x1039,0x6325,"65x/M650/740 PCI/AGP VGA Display Adapter"},

  {0x1039,0x6326,"86C326 5598/6326"},

  {0x1039,0x6330,"661/741/760 PCI/AGP or 662/761Gx PCIE VGA Display Adapter"},

  {0x1039,0x6350,"770/670 PCIE VGA Display Adapter"},

  {0x1039,0x6351,"771/671 PCIE VGA Display Adapter"},

  {0x1039,0x7001,"USB 1.1 Controller"},

  {0x1039,0x7002,"USB 2.0 Controller"},

  {0x1039,0x7007,"FireWire Controller"},

  {0x1039,0x7012,"SiS7012 AC'97 Sound Controller"},

  {0x1039,0x7013,"AC'97 Modem Controller"},

  {0x1039,0x7016,"SiS7016 PCI Fast Ethernet Adapter"},

  {0x1039,0x7018,"SiS PCI Audio Accelerator"},

  {0x1039,0x7019,"SiS7019 Audio Accelerator"},

  {0x1039,0x7502,"Azalia Audio Controller"},

  {0x103c,0x1005,"A4977A Visualize EG"},

  {0x103c,0x1008,"Visualize FX"},

  {0x103c,0x1028,"Tach TL Fibre Channel Host Adapter"},

  {0x103c,0x1029,"Tach XL2 Fibre Channel Host Adapter"},

  {0x103c,0x102a,"Tach TS Fibre Channel Host Adapter"},

  {0x103c,0x1030,"J2585A DeskDirect 10/100VG NIC"},

  {0x103c,0x1031,"J2585B HP 10/100VG PCI LAN Adapter"},

  {0x103c,0x1040,"J2973A DeskDirect 10BaseT NIC"},

  {0x103c,0x1041,"J2585B DeskDirect 10/100 NIC"},

  {0x103c,0x1042,"J2970A DeskDirect 10BaseT/2 NIC"},

  {0x103c,0x1048,"Diva Serial [GSP] Multiport UART"},

  {0x103c,0x1054,"PCI Local Bus Adapter"},

  {0x103c,0x1064,"79C970 PCnet Ethernet Controller"},

  {0x103c,0x108b,"Visualize FXe"},

  {0x103c,0x10c1,"NetServer Smart IRQ Router"},

  {0x103c,0x10ed,"TopTools Remote Control"},

  {0x103c,0x10f0,"rio System Bus Adapter"},

  {0x103c,0x10f1,"rio I/O Controller"},

  {0x103c,0x1219,"NetServer PCI Hot-Plug Controller"},

  {0x103c,0x121a,"NetServer SMIC Controller"},

  {0x103c,0x121b,"NetServer Legacy COM Port Decoder"},

  {0x103c,0x121c,"NetServer PCI COM Port Decoder"},

  {0x103c,0x1229,"zx1 System Bus Adapter"},

  {0x103c,0x122a,"zx1 I/O Controller"},

  {0x103c,0x122e,"PCI-X Local Bus Adapter"},

  {0x103c,0x127b,"sx1000 System Bus Adapter"},

  {0x103c,0x127c,"sx1000 I/O Controller"},

  {0x103c,0x1290,"Auxiliary Diva Serial Port"},

  {0x103c,0x1291,"Auxiliary Diva Serial Port"},

  {0x103c,0x12b4,"zx1 QuickSilver AGP8x Local Bus Adapter"},

  {0x103c,0x12eb,"sx2000 System Bus Adapter"},

  {0x103c,0x12ec,"sx2000 I/O Controller"},

  {0x103c,0x12ee,"PCI-X 2.0 Local Bus Adapter"},

  {0x103c,0x1302,"RMP-3 Shared Memory Driver"},

  {0x103c,0x1303,"RMP-3 (Remote Management Processor)"},

  {0x103c,0x2910,"E2910A PCIBus Exerciser"},

  {0x103c,0x2925,"E2925A 32 Bit, 33 MHzPCI Exerciser & Analyzer"},

  {0x103c,0x3206,"Adaptec Embedded Serial ATA HostRAID"},

  {0x103c,0x3220,"Smart Array P600"},

  {0x103c,0x3230,"Smart Array Controller"},

  {0x103c,0x3238,"Smart Array E200i (SAS Controller)"},

  {0x103c,0x3239,"Smart Array Gen9 Controllers"},

  {0x103c,0x323a,"Smart Array G6 controllers"},

  {0x103c,0x323b,"Smart Array Gen8 Controllers"},

  {0x103c,0x323c,"Smart Array Gen8+ Controllers"},

  {0x103c,0x3300,"Integrated Lights-Out Standard Virtual USB Controller"},

  {0x103c,0x3301,"Integrated Lights-Out Standard Serial Port"},

  {0x103c,0x3302,"Integrated Lights-Out Standard KCS Interface"},

  {0x103c,0x3305,"Integrated Lights-Out (iLO2) Controller"},

  {0x103c,0x3306,"Integrated Lights-Out Standard Slave Instrumentation & System Support"},

  {0x103c,0x3307,"Integrated Lights-Out Standard Management Processor Support and Messaging"},

  {0x103c,0x3308,"Integrated Lights-Out Standard MS Watchdog Timer"},

  {0x103c,0x402f,"PCIe Root Port"},

  {0x103c,0x4030,"zx2 System Bus Adapter"},

  {0x103c,0x4031,"zx2 I/O Controller"},

  {0x103c,0x4037,"PCIe Local Bus Adapter"},

  {0x103c,0x403b,"PCIe Root Port"},

  {0x1042,0x1000,"PC Tech RZ1000"},

  {0x1042,0x1001,"PC Tech RZ1001"},

  {0x1042,0x3000,"Samurai_0"},

  {0x1042,0x3010,"Samurai_1"},

  {0x1042,0x3020,"Samurai_IDE"},

  {0x1043,0x0464,"Radeon R9 270x GPU"},

  {0x1043,0x0675,"ISDNLink P-IN100-ST-D"},

  {0x1043,0x13a0,"Transformer Book T101HA-GR030R"},

  {0x1043,0x9602,"AMD RS780/RS880 PCI to PCI bridge (int gfx)"},

  {0x1044,0x1012,"Domino RAID Engine"},

  {0x1044,0xa400,"SmartCache/Raid I-IV Controller"},

  {0x1044,0xa500,"PCI Bridge"},

  {0x1044,0xa501,"SmartRAID V Controller"},

  {0x1044,0xa511,"SmartRAID V Controller"},

  {0x1044,0xc066,"3010S Ultra3 Dual Channel"},

  {0x1045,0xa0f8,"82C750 [Vendetta] USB Controller"},

  {0x1045,0xc101,"92C264"},

  {0x1045,0xc178,"92C178"},

  {0x1045,0xc556,"82X556 [Viper]"},

  {0x1045,0xc557,"82C557 [Viper-M]"},

  {0x1045,0xc558,"82C558 [Viper-M ISA+IDE]"},

  {0x1045,0xc567,"82C750 [Vendetta], device 0"},

  {0x1045,0xc568,"82C750 [Vendetta], device 1"},

  {0x1045,0xc569,"82C579 [Viper XPress+ Chipset]"},

  {0x1045,0xc621,"82C621 [Viper-M/N+]"},

  {0x1045,0xc700,"82C700 [FireStar]"},

  {0x1045,0xc701,"82C701 [FireStar Plus]"},

  {0x1045,0xc814,"82C814 [Firebridge 1]"},

  {0x1045,0xc822,"82C822"},

  {0x1045,0xc824,"82C824"},

  {0x1045,0xc825,"82C825 [Firebridge 2]"},

  {0x1045,0xc832,"82C832"},

  {0x1045,0xc861,"82C861"},

  {0x1045,0xc881,"82C881 [FireLink] 1394 OHCI Link Controller"},

  {0x1045,0xc895,"82C895"},

  {0x1045,0xc935,"EV1935 ECTIVA MachOne PCIAudio"},

  {0x1045,0xd568,"82C825 [Firebridge 2]"},

  {0x1045,0xd721,"IDE [FireStar]"},

  {0x1048,0x0c60,"Gladiac MX"},

  {0x1048,0x0d22,"Quadro4 900XGL [ELSA GLoria4 900XGL]"},

  {0x1048,0x1000,"QuickStep 1000"},

  {0x1048,0x3000,"QuickStep 3000"},

  {0x1048,0x8901,"Gloria XL"},

  {0x104a,0x0008,"STG 2000X"},

  {0x104a,0x0009,"STG 1764X"},

  {0x104a,0x0010,"STG4000 [3D Prophet Kyro Series]"},

  {0x104a,0x0201,"STPC Vega Northbridge"},

  {0x104a,0x0209,"STPC Consumer/Industrial North- and Southbridge"},

  {0x104a,0x020a,"STPC Atlas/ConsumerS/Consumer IIA Northbridge"},

  {0x104a,0x020b,"STPC Consumer II ISA Bridge"},

  {0x104a,0x0210,"STPC Atlas ISA Bridge"},

  {0x104a,0x021a,"STPC Consumer S Southbridge"},

  {0x104a,0x021b,"STPC Consumer IIA Southbridge"},

  {0x104a,0x0220,"STPC Industrial PCI to PCCard bridge"},

  {0x104a,0x0228,"STPC Atlas IDE"},

  {0x104a,0x0229,"STPC Vega IDE"},

  {0x104a,0x0230,"STPC Atlas/Vega OHCI USB Controller"},

  {0x104a,0x0238,"STPC Vega LAN"},

  {0x104a,0x0500,"ST70137 [Unicorn] ADSL DMT Transceiver"},

  {0x104a,0x0564,"STPC Client Northbridge"},

  {0x104a,0x0981,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x104a,0x1746,"STG 1764X"},

  {0x104a,0x2774,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x104a,0x3520,"MPEG-II decoder card"},

  {0x104a,0x55cc,"STPC Client Southbridge"},

  {0x104b,0x0140,"BT-946C (old) [multimaster  01]"},

  {0x104b,0x1040,"BT-946C (BA80C30) [MultiMaster 10]"},

  {0x104b,0x8130,"Flashpoint LT"},

  {0x104c,0x0500,"100 MBit LAN Controller"},

  {0x104c,0x0508,"TMS380C2X Compressor Interface"},

  {0x104c,0x1000,"Eagle i/f AS"},

  {0x104c,0x104c,"PCI1510 PC card Cardbus Controller"},

  {0x104c,0x3d04,"TVP4010 [Permedia]"},

  {0x104c,0x3d07,"TVP4020 [Permedia 2]"},

  {0x104c,0x8000,"PCILynx/PCILynx2 IEEE 1394 Link Layer Controller"},

  {0x104c,0x8009,"TSB12LV22 IEEE-1394 Controller"},

  {0x104c,0x8017,"PCI4410 FireWire Controller"},

  {0x104c,0x8019,"TSB12LV23 IEEE-1394 Controller"},

  {0x104c,0x8020,"TSB12LV26 IEEE-1394 Controller (Link)"},

  {0x104c,0x8021,"TSB43AA22 IEEE-1394 Controller (PHY/Link Integrated)"},

  {0x104c,0x8022,"TSB43AB22 IEEE-1394a-2000 Controller (PHY/Link) [iOHCI-Lynx]"},

  {0x104c,0x8023,"TSB43AB22A IEEE-1394a-2000 Controller (PHY/Link) [iOHCI-Lynx]"},

  {0x104c,0x8024,"TSB43AB23 IEEE-1394a-2000 Controller (PHY/Link)"},

  {0x104c,0x8025,"TSB82AA2 IEEE-1394b Link Layer Controller"},

  {0x104c,0x8026,"TSB43AB21 IEEE-1394a-2000 Controller (PHY/Link)"},

  {0x104c,0x8027,"PCI4451 IEEE-1394 Controller"},

  {0x104c,0x8029,"PCI4510 IEEE-1394 Controller"},

  {0x104c,0x802b,"PCI7410,7510,7610 OHCI-Lynx Controller"},

  {0x104c,0x802e,"PCI7x20 1394a-2000 OHCI Two-Port PHY/Link-Layer Controller"},

  {0x104c,0x8031,"PCIxx21/x515 Cardbus Controller"},

  {0x104c,0x8032,"OHCI Compliant IEEE 1394 Host Controller"},

  {0x104c,0x8033,"PCIxx21 Integrated FlashMedia Controller"},

  {0x104c,0x8034,"PCI6411/6421/6611/6621/7411/7421/7611/7621 Secure Digital Controller"},

  {0x104c,0x8035,"PCI6411/6421/6611/6621/7411/7421/7611/7621 Smart Card Controller"},

  {0x104c,0x8036,"PCI6515 Cardbus Controller"},

  {0x104c,0x8038,"PCI6515 SmartCard Controller"},

  {0x104c,0x8039,"PCIxx12 Cardbus Controller"},

  {0x104c,0x803a,"PCIxx12 OHCI Compliant IEEE 1394 Host Controller"},

  {0x104c,0x803b,"5-in-1 Multimedia Card Reader (SD/MMC/MS/MS PRO/xD)"},

  {0x104c,0x803c,"PCIxx12 SDA Standard Compliant SD Host Controller"},

  {0x104c,0x803d,"PCIxx12 GemCore based SmartCard controller"},

  {0x104c,0x8101,"TSB43DB42 IEEE-1394a-2000 Controller (PHY/Link)"},

  {0x104c,0x8201,"PCI1620 Firmware Loading Function"},

  {0x104c,0x8204,"PCI7410/7510/7610 PCI Firmware Loading Function"},

  {0x104c,0x8231,"XIO2000(A)/XIO2200A PCI Express-to-PCI Bridge"},

  {0x104c,0x8232,"XIO3130 PCI Express Switch (Upstream)"},

  {0x104c,0x8233,"XIO3130 PCI Express Switch (Downstream)"},

  {0x104c,0x8235,"XIO2200A IEEE-1394a-2000 Controller (PHY/Link)"},

  {0x104c,0x823e,"XIO2213A/B/XIO2221 PCI Express to PCI Bridge [Cheetah Express]"},

  {0x104c,0x823f,"XIO2213A/B/XIO2221 IEEE-1394b OHCI Controller [Cheetah Express]"},

  {0x104c,0x8240,"XIO2001 PCI Express-to-PCI Bridge"},

  {0x104c,0x8241,"TUSB73x0 SuperSpeed USB 3.0 xHCI Host Controller"},

  {0x104c,0x8400,"ACX 100 22Mbps Wireless Interface"},

  {0x104c,0x8401,"ACX 100 22Mbps Wireless Interface"},

  {0x104c,0x8888,"Multicore DSP+ARM KeyStone II SOC"},

  {0x104c,0x9000,"Wireless Interface (of unknown type)"},

  {0x104c,0x9065,"TMS320DM642"},

  {0x104c,0x9066,"ACX 111 54Mbps Wireless Interface"},

  {0x104c,0xa001,"TDC1570"},

  {0x104c,0xa100,"TDC1561"},

  {0x104c,0xa102,"TNETA1575 HyperSAR Plus w/PCI Host i/f & UTOPIA i/f"},

  {0x104c,0xa106,"TMS320C6414 TMS320C6415 TMS320C6416"},

  {0x104c,0xac10,"PCI1050"},

  {0x104c,0xac11,"PCI1053"},

  {0x104c,0xac12,"PCI1130"},

  {0x104c,0xac13,"PCI1031"},

  {0x104c,0xac15,"PCI1131"},

  {0x104c,0xac16,"PCI1250"},

  {0x104c,0xac17,"PCI1220"},

  {0x104c,0xac18,"PCI1260"},

  {0x104c,0xac19,"PCI1221"},

  {0x104c,0xac1a,"PCI1210"},

  {0x104c,0xac1b,"PCI1450"},

  {0x104c,0xac1c,"PCI1225"},

  {0x104c,0xac1d,"PCI1251A"},

  {0x104c,0xac1e,"PCI1211"},

  {0x104c,0xac1f,"PCI1251B"},

  {0x104c,0xac20,"TI 2030"},

  {0x104c,0xac21,"PCI2031"},

  {0x104c,0xac22,"PCI2032 PCI Docking Bridge"},

  {0x104c,0xac23,"PCI2250 PCI-to-PCI Bridge"},

  {0x104c,0xac28,"PCI2050 PCI-to-PCI Bridge"},

  {0x104c,0xac2c,"PCI2060 PCI-to-PCI Bridge"},

  {0x104c,0xac30,"PCI1260 PC card Cardbus Controller"},

  {0x104c,0xac40,"PCI4450 PC card Cardbus Controller"},

  {0x104c,0xac41,"PCI4410 PC card Cardbus Controller"},

  {0x104c,0xac42,"PCI4451 PC card Cardbus Controller"},

  {0x104c,0xac44,"PCI4510 PC card Cardbus Controller"},

  {0x104c,0xac46,"PCI4520 PC card Cardbus Controller"},

  {0x104c,0xac47,"PCI7510 PC card Cardbus Controller"},

  {0x104c,0xac48,"PCI7610 PC Card Cardbus Controller"},

  {0x104c,0xac49,"PCI7410 PC Card Cardbus Controller"},

  {0x104c,0xac4a,"PCI7510/7610 CardBus Bridge"},

  {0x104c,0xac4b,"PCI7610 SD/MMC controller"},

  {0x104c,0xac4c,"PCI7610 Memory Stick controller"},

  {0x104c,0xac50,"PCI1410 PC card Cardbus Controller"},

  {0x104c,0xac51,"PCI1420 PC card Cardbus Controller"},

  {0x104c,0xac52,"PCI1451 PC card Cardbus Controller"},

  {0x104c,0xac53,"PCI1421 PC card Cardbus Controller"},

  {0x104c,0xac54,"PCI1620 PC Card Controller"},

  {0x104c,0xac55,"PCI1520 PC card Cardbus Controller"},

  {0x104c,0xac56,"PCI1510 PC card Cardbus Controller"},

  {0x104c,0xac60,"PCI2040 PCI to DSP Bridge Controller"},

  {0x104c,0xac8d,"PCI 7620"},

  {0x104c,0xac8e,"PCI7420 CardBus Controller"},

  {0x104c,0xac8f,"PCI7420/7620 SD/MS-Pro Controller"},

  {0x104c,0xb001,"TMS320C6424"},

  {0x104c,0xfe00,"FireWire Host Controller"},

  {0x104c,0xfe03,"12C01A FireWire Host Controller"},

  {0x104d,0x8004,"DTL-H2500 [Playstation development board]"},

  {0x104d,0x8009,"CXD1947Q i.LINK Controller"},

  {0x104d,0x8039,"CXD3222 i.LINK Controller"},

  {0x104d,0x8056,"Rockwell HCF 56K modem"},

  {0x104d,0x808a,"Memory Stick Controller"},

  {0x104d,0x81ce,"SxS Pro memory card"},

  {0x104d,0x905c,"SxS Pro memory card"},

  {0x104d,0x907f,"SxS Pro+ memory card"},

  {0x104d,0x908f,"Aeolia ACPI"},

  {0x104d,0x909e,"Aeolia Ethernet Controller (Marvell Yukon 2 Family)"},

  {0x104d,0x909f,"Aeolia SATA AHCI Controller"},

  {0x104d,0x90a0,"Aeolia SD/MMC Host Controller"},

  {0x104d,0x90a1,"Aeolia PCI Express Glue and Miscellaneous Devices"},

  {0x104d,0x90a2,"Aeolia DMA Controller"},

  {0x104d,0x90a3,"Aeolia Memory (DDR3/SPM)"},

  {0x104d,0x90a4,"Aeolia USB 3.0 xHCI Host Controller"},

  {0x104d,0x90bc,"SxS Pro+ memory card"},

  {0x104e,0x0017,"OTI-64017"},

  {0x104e,0x0107,"OTI-107 [Spitfire]"},

  {0x104e,0x0109,"Video Adapter"},

  {0x104e,0x0111,"OTI-64111 [Spitfire]"},

  {0x104e,0x0217,"OTI-64217"},

  {0x104e,0x0317,"OTI-64317"},

  {0x1050,0x0001,"W83769F"},

  {0x1050,0x0033,"W89C33D 802.11 a/b/g BB/MAC"},

  {0x1050,0x0105,"W82C105"},

  {0x1050,0x0840,"W89C840"},

  {0x1050,0x0940,"W89C940"},

  {0x1050,0x5a5a,"W89C940F"},

  {0x1050,0x6692,"W6692"},

  {0x1050,0x9921,"W99200F MPEG-1 Video Encoder"},

  {0x1050,0x9922,"W99200F/W9922PF MPEG-1/2 Video Encoder"},

  {0x1050,0x9970,"W9970CF"},

  {0x1054,0x3009,"2Gbps Fibre Channel to PCI HBA 3009"},

  {0x1054,0x300a,"4Gbps Fibre Channel to PCI-X HBA 300a"},

  {0x1054,0x300b,"4Gbps Fibre Channel to PCI-X HBA 300b"},

  {0x1054,0x300f,"ColdFusion 3 Chipset Processor to I/O Controller"},

  {0x1054,0x3010,"ColdFusion 3 Chipset Memory Controller Hub"},

  {0x1054,0x3011,"ColdFusion 3e Chipset Processor to I/O Controller"},

  {0x1054,0x3012,"ColdFusion 3e Chipset Memory Controller Hub"},

  {0x1054,0x3017,"Unassigned Hitachi Shared FC Device 3017"},

  {0x1054,0x301b,"Virtual VGA Device"},

  {0x1054,0x301d,"PCIe-to-PCIe Bridge with Virtualization IO Assist Feature"},

  {0x1054,0x3020,"FIVE-EX based Fibre Channel to PCIe HBA"},

  {0x1054,0x302c,"M001 PCI Express Switch Upstream Port"},

  {0x1054,0x302d,"M001 PCI Express Switch Downstream Port"},

  {0x1054,0x3070,"Hitachi FIVE-FX Fibre Channel to PCIe HBA"},

  {0x1054,0x3505,"SH7751 PCI Controller (PCIC)"},

  {0x1054,0x350e,"SH7751R PCI Controller (PCIC)"},

  {0x1055,0x9130,"SLC90E66 [Victory66] IDE"},

  {0x1055,0x9460,"SLC90E66 [Victory66] ISA"},

  {0x1055,0x9462,"SLC90E66 [Victory66] USB"},

  {0x1055,0x9463,"SLC90E66 [Victory66] ACPI"},

  {0x1055,0xe420,"LAN9420/LAN9420i"},

  {0x1057,0x0001,"MPC105 [Eagle]"},

  {0x1057,0x0002,"MPC106 [Grackle]"},

  {0x1057,0x0003,"MPC8240 [Kahlua]"},

  {0x1057,0x0004,"MPC107"},

  {0x1057,0x0006,"MPC8245 [Unity]"},

  {0x1057,0x0008,"MPC8540"},

  {0x1057,0x0009,"MPC8560"},

  {0x1057,0x0012,"MPC8548 [PowerQUICC III]"},

  {0x1057,0x0100,"MC145575 [HFC-PCI]"},

  {0x1057,0x0431,"KTI829c 100VG"},

  {0x1057,0x1073,"Nokia N770"},

  {0x1057,0x1219,"Nokia N800"},

  {0x1057,0x1801,"DSP56301 Digital Signal Processor"},

  {0x1057,0x18c0,"MPC8265A/8266/8272"},

  {0x1057,0x18c1,"MPC8271/MPC8272"},

  {0x1057,0x3052,"SM56 Data Fax Modem"},

  {0x1057,0x3410,"DSP56361 Digital Signal Processor"},

  {0x1057,0x4801,"Raven"},

  {0x1057,0x4802,"Falcon"},

  {0x1057,0x4803,"Hawk"},

  {0x1057,0x4806,"CPX8216"},

  {0x1057,0x4d68,"20268"},

  {0x1057,0x5600,"SM56 PCI Modem"},

  {0x1057,0x5608,"Wildcard X100P"},

  {0x1057,0x5803,"MPC5200"},

  {0x1057,0x5806,"MCF54 Coldfire"},

  {0x1057,0x5808,"MPC8220"},

  {0x1057,0x5809,"MPC5200B"},

  {0x1057,0x6400,"MPC190 Security Processor (S1 family, encryption)"},

  {0x1057,0x6405,"MPC184 Security Processor (S1 family)"},

  {0x105a,0x0d30,"PDC20265 (FastTrak100 Lite/Ultra100)"},

  {0x105a,0x0d38,"20263"},

  {0x105a,0x1275,"20275"},

  {0x105a,0x3318,"PDC20318 (SATA150 TX4)"},

  {0x105a,0x3319,"PDC20319 (FastTrak S150 TX4)"},

  {0x105a,0x3371,"PDC20371 (FastTrak S150 TX2plus)"},

  {0x105a,0x3373,"PDC20378 (FastTrak 378/SATA 378)"},

  {0x105a,0x3375,"PDC20375 (SATA150 TX2plus)"},

  {0x105a,0x3376,"PDC20376 (FastTrak 376)"},

  {0x105a,0x3515,"PDC40719 [FastTrak TX4300/TX4310]"},

  {0x105a,0x3519,"PDC40519 (FastTrak TX4200)"},

  {0x105a,0x3570,"PDC20771 [FastTrak TX2300]"},

  {0x105a,0x3571,"PDC20571 (FastTrak TX2200)"},

  {0x105a,0x3574,"PDC20579 SATAII 150 IDE Controller"},

  {0x105a,0x3577,"PDC40779 (SATA 300 779)"},

  {0x105a,0x3d17,"PDC40718 (SATA 300 TX4)"},

  {0x105a,0x3d18,"PDC20518/PDC40518 (SATAII 150 TX4)"},

  {0x105a,0x3d73,"PDC40775 (SATA 300 TX2plus)"},

  {0x105a,0x3d75,"PDC20575 (SATAII150 TX2plus)"},

  {0x105a,0x3f20,"PDC42819 [FastTrak TX2650/TX4650]"},

  {0x105a,0x4302,"80333 [SuperTrak EX4350]"},

  {0x105a,0x4d30,"PDC20267 (FastTrak100/Ultra100)"},

  {0x105a,0x4d33,"20246"},

  {0x105a,0x4d38,"PDC20262 (FastTrak66/Ultra66)"},

  {0x105a,0x4d68,"PDC20268 [Ultra100 TX2]"},

  {0x105a,0x4d69,"20269"},

  {0x105a,0x5275,"PDC20276 (MBFastTrak133 Lite)"},

  {0x105a,0x5300,"DC5300"},

  {0x105a,0x6268,"PDC20270 (FastTrak100 LP/TX2/TX4)"},

  {0x105a,0x6269,"PDC20271 (FastTrak TX2000)"},

  {0x105a,0x6300,"PDC81731 [FastTrak SX8300]"},

  {0x105a,0x6621,"PDC20621 (FastTrak S150 SX4/FastTrak SX4000 lite)"},

  {0x105a,0x6622,"PDC20621 [SATA150 SX4] 4 Channel IDE RAID Controller"},

  {0x105a,0x6624,"PDC20621 [FastTrak SX4100]"},

  {0x105a,0x6626,"PDC20618 (Ultra 618)"},

  {0x105a,0x6629,"PDC20619 (FastTrak TX4000)"},

  {0x105a,0x7275,"PDC20277 (SBFastTrak133 Lite)"},

  {0x105a,0x8002,"SATAII150 SX8"},

  {0x105a,0x8350,"80333 [SuperTrak EX8350/EX16350], 80331 [SuperTrak EX8300/EX16300]"},

  {0x105a,0x8650,"81384 [SuperTrak EX SAS and SATA RAID Controller]"},

  {0x105a,0x8760,"PM8010 [SuperTrak EX SAS and SATA 6G RAID Controller]"},

  {0x105a,0xc350,"80333 [SuperTrak EX12350]"},

  {0x105a,0xe350,"80333 [SuperTrak EX24350]"},

  {0x105d,0x2309,"Imagine 128"},

  {0x105d,0x2339,"Imagine 128-II"},

  {0x105d,0x493d,"Imagine 128 T2R [Ticket to Ride]"},

  {0x105d,0x5348,"Revolution 4"},

  {0x1060,0x0001,"UM82C881"},

  {0x1060,0x0002,"UM82C886"},

  {0x1060,0x0101,"UM8673F"},

  {0x1060,0x0881,"UM8881"},

  {0x1060,0x0886,"UM8886F"},

  {0x1060,0x0891,"UM8891A"},

  {0x1060,0x1001,"UM886A"},

  {0x1060,0x673a,"UM8886BF"},

  {0x1060,0x673b,"EIDE Master/DMA"},

  {0x1060,0x8710,"UM8710"},

  {0x1060,0x886a,"UM8886A"},

  {0x1060,0x8881,"UM8881F"},

  {0x1060,0x8886,"UM8886F"},

  {0x1060,0x888a,"UM8886A"},

  {0x1060,0x8891,"UM8891A"},

  {0x1060,0x9017,"UM9017F"},

  {0x1060,0x9018,"UM9018"},

  {0x1060,0x9026,"UM9026"},

  {0x1060,0xe881,"UM8881N"},

  {0x1060,0xe886,"UM8886N"},

  {0x1060,0xe88a,"UM8886N"},

  {0x1060,0xe891,"UM8891N"},

  {0x1061,0x0001,"AGX016"},

  {0x1061,0x0002,"IIT3204/3501"},

  {0x1064,0x1102,"Dynamite 2840 (ADSL PCI modem)"},

  {0x1066,0x0001,"PT86C521 [Vesuvius v1] Host Bridge"},

  {0x1066,0x0002,"PT86C523 [Vesuvius v3] PCI-ISA Bridge Master"},

  {0x1066,0x0003,"PT86C524 [Nile] PCI-to-PCI Bridge"},

  {0x1066,0x0004,"PT86C525 [Nile-II] PCI-to-PCI Bridge"},

  {0x1066,0x0005,"National PC87550 System Controller"},

  {0x1066,0x8002,"PT86C523 [Vesuvius v3] PCI-ISA Bridge Slave"},

  {0x1067,0x0301,"AccelGraphics AccelECLIPSE"},

  {0x1067,0x0304,"AccelGALAXY A2100 [OEM Evans & Sutherland]"},

  {0x1067,0x0308,"Tornado 3000 [OEM Evans & Sutherland]"},

  {0x1067,0x1002,"VG500 [VolumePro Volume Rendering Accelerator]"},

  {0x1069,0x0001,"DAC960P"},

  {0x1069,0x0002,"DAC960PD"},

  {0x1069,0x0010,"DAC960PG"},

  {0x1069,0x0020,"DAC960LA"},

  {0x1069,0x0050,"AcceleRAID 352/170/160 support Device"},

  {0x1069,0xb166,"AcceleRAID 600/500/400/Sapphire support Device"},

  {0x1069,0xba55,"eXtremeRAID 1100 support Device"},

  {0x1069,0xba56,"eXtremeRAID 2000/3000 support Device"},

  {0x1069,0xba57,"eXtremeRAID 4000/5000 support Device"},

  {0x106b,0x0001,"Bandit PowerPC host bridge"},

  {0x106b,0x0002,"Grand Central I/O"},

  {0x106b,0x0003,"Control Video"},

  {0x106b,0x0004,"PlanB Video-In"},

  {0x106b,0x0007,"O'Hare I/O"},

  {0x106b,0x000c,"DOS on Mac"},

  {0x106b,0x000e,"Hydra Mac I/O"},

  {0x106b,0x0010,"Heathrow Mac I/O"},

  {0x106b,0x0017,"Paddington Mac I/O"},

  {0x106b,0x0018,"UniNorth FireWire"},

  {0x106b,0x0019,"KeyLargo USB"},

  {0x106b,0x001e,"UniNorth Internal PCI"},

  {0x106b,0x001f,"UniNorth PCI"},

  {0x106b,0x0020,"UniNorth AGP"},

  {0x106b,0x0021,"UniNorth GMAC (Sun GEM)"},

  {0x106b,0x0022,"KeyLargo Mac I/O"},

  {0x106b,0x0024,"UniNorth/Pangea GMAC (Sun GEM)"},

  {0x106b,0x0025,"KeyLargo/Pangea Mac I/O"},

  {0x106b,0x0026,"KeyLargo/Pangea USB"},

  {0x106b,0x0027,"UniNorth/Pangea AGP"},

  {0x106b,0x0028,"UniNorth/Pangea PCI"},

  {0x106b,0x0029,"UniNorth/Pangea Internal PCI"},

  {0x106b,0x002d,"UniNorth 1.5 AGP"},

  {0x106b,0x002e,"UniNorth 1.5 PCI"},

  {0x106b,0x002f,"UniNorth 1.5 Internal PCI"},

  {0x106b,0x0030,"UniNorth/Pangea FireWire"},

  {0x106b,0x0031,"UniNorth 2 FireWire"},

  {0x106b,0x0032,"UniNorth 2 GMAC (Sun GEM)"},

  {0x106b,0x0033,"UniNorth 2 ATA/100"},

  {0x106b,0x0034,"UniNorth 2 AGP"},

  {0x106b,0x0035,"UniNorth 2 PCI"},

  {0x106b,0x0036,"UniNorth 2 Internal PCI"},

  {0x106b,0x003b,"UniNorth/Intrepid ATA/100"},

  {0x106b,0x003e,"KeyLargo/Intrepid Mac I/O"},

  {0x106b,0x003f,"KeyLargo/Intrepid USB"},

  {0x106b,0x0040,"K2 KeyLargo USB"},

  {0x106b,0x0041,"K2 KeyLargo Mac/IO"},

  {0x106b,0x0042,"K2 FireWire"},

  {0x106b,0x0043,"K2 ATA/100"},

  {0x106b,0x0045,"K2 HT-PCI Bridge"},

  {0x106b,0x0046,"K2 HT-PCI Bridge"},

  {0x106b,0x0047,"K2 HT-PCI Bridge"},

  {0x106b,0x0048,"K2 HT-PCI Bridge"},

  {0x106b,0x0049,"K2 HT-PCI Bridge"},

  {0x106b,0x004a,"CPC945 HT Bridge"},

  {0x106b,0x004b,"U3 AGP"},

  {0x106b,0x004c,"K2 GMAC (Sun GEM)"},

  {0x106b,0x004f,"Shasta Mac I/O"},

  {0x106b,0x0050,"Shasta IDE"},

  {0x106b,0x0051,"Shasta (Sun GEM)"},

  {0x106b,0x0052,"Shasta Firewire"},

  {0x106b,0x0053,"Shasta PCI Bridge"},

  {0x106b,0x0054,"Shasta PCI Bridge"},

  {0x106b,0x0055,"Shasta PCI Bridge"},

  {0x106b,0x0056,"U4 PCIe"},

  {0x106b,0x0057,"U3 HT Bridge"},

  {0x106b,0x0058,"U3L AGP Bridge"},

  {0x106b,0x0059,"U3H AGP Bridge"},

  {0x106b,0x005b,"CPC945 PCIe Bridge"},

  {0x106b,0x0066,"Intrepid2 AGP Bridge"},

  {0x106b,0x0067,"Intrepid2 PCI Bridge"},

  {0x106b,0x0068,"Intrepid2 PCI Bridge"},

  {0x106b,0x0069,"Intrepid2 ATA/100"},

  {0x106b,0x006a,"Intrepid2 Firewire"},

  {0x106b,0x006b,"Intrepid2 GMAC (Sun GEM)"},

  {0x106b,0x0074,"U4 HT Bridge"},

  {0x106b,0x1645,"Broadcom NetXtreme BCM5701 Gigabit Ethernet"},

  {0x106b,0x2001,"PCI Express SSD"},

  {0x106c,0x8139,"8139c 100BaseTX Ethernet Controller"},

  {0x106c,0x8801,"Dual Pentium ISA/PCI Motherboard"},

  {0x106c,0x8802,"PowerPC ISA/PCI Motherboard"},

  {0x106c,0x8803,"Dual Window Graphics Accelerator"},

  {0x106c,0x8804,"LAN Controller"},

  {0x106c,0x8805,"100-BaseT LAN"},

  {0x1071,0x8160,"Mitac 8060B Mobile Platform"},

  {0x1073,0x0001,"3D GUI Accelerator"},

  {0x1073,0x0002,"YGV615 [RPA3 3D-Graphics Controller]"},

  {0x1073,0x0003,"YMF-740"},

  {0x1073,0x0004,"YMF-724"},

  {0x1073,0x0005,"DS1 Audio"},

  {0x1073,0x0006,"DS1 Audio"},

  {0x1073,0x0008,"DS1 Audio"},

  {0x1073,0x000a,"DS1L Audio"},

  {0x1073,0x000c,"YMF-740C [DS-1L Audio Controller]"},

  {0x1073,0x000d,"YMF-724F [DS-1 Audio Controller]"},

  {0x1073,0x0010,"YMF-744B [DS-1S Audio Controller]"},

  {0x1073,0x0012,"YMF-754 [DS-1E Audio Controller]"},

  {0x1073,0x0020,"DS-1 Audio"},

  {0x1073,0x1000,"SW1000XG [XG Factory]"},

  {0x1073,0x2000,"DS2416 Digital Mixing Card"},

  {0x1074,0x4e78,"82c500/1"},

  {0x1077,0x1016,"ISP10160 Single Channel Ultra3 SCSI Processor"},

  {0x1077,0x1020,"ISP1020 Fast-wide SCSI"},

  {0x1077,0x1022,"ISP1022 Fast-wide SCSI"},

  {0x1077,0x1080,"ISP1080 SCSI Host Adapter"},

  {0x1077,0x1216,"ISP12160 Dual Channel Ultra3 SCSI Processor"},

  {0x1077,0x1240,"ISP1240 SCSI Host Adapter"},

  {0x1077,0x1280,"ISP1280 SCSI Host Adapter"},

  {0x1077,0x1634,"FastLinQ QL45000 Series 40GbE Controller"},

  {0x1077,0x1644,"FastLinQ QL45000 Series 100GbE Controller"},

  {0x1077,0x1656,"FastLinQ QL45000 Series 25GbE Controller"},

  {0x1077,0x165c,"FastLinQ QL45000 Series 40GbE Controller (FCoE)"},

  {0x1077,0x165e,"FastLinQ QL45000 Series 40GbE Controller (iSCSI)"},

  {0x1077,0x1664,"FastLinQ QL45000 Series Gigabit Ethernet Controller (SR-IOV VF)"},

  {0x1077,0x2020,"ISP2020A Fast!SCSI Basic Adapter"},

  {0x1077,0x2031,"ISP8324-based 16Gb Fibre Channel to PCI Express Adapter"},

  {0x1077,0x2071,"ISP2714-based 16/32Gb Fibre Channel to PCIe Adapter"},

  {0x1077,0x2100,"QLA2100 64-bit Fibre Channel Adapter"},

  {0x1077,0x2200,"QLA2200 64-bit Fibre Channel Adapter"},

  {0x1077,0x2261,"ISP2722-based 16/32Gb Fibre Channel to PCIe Adapter"},

  {0x1077,0x2300,"QLA2300 64-bit Fibre Channel Adapter"},

  {0x1077,0x2312,"ISP2312-based 2Gb Fibre Channel to PCI-X HBA"},

  {0x1077,0x2322,"ISP2322-based 2Gb Fibre Channel to PCI-X HBA"},

  {0x1077,0x2422,"ISP2422-based 4Gb Fibre Channel to PCI-X HBA"},

  {0x1077,0x2432,"ISP2432-based 4Gb Fibre Channel to PCI Express HBA"},

  {0x1077,0x2532,"ISP2532-based 8Gb Fibre Channel to PCI Express HBA"},

  {0x1077,0x3022,"ISP4022-based Ethernet NIC"},

  {0x1077,0x3032,"ISP4032-based Ethernet IPv6 NIC"},

  {0x1077,0x4010,"ISP4010-based iSCSI TOE HBA"},

  {0x1077,0x4022,"ISP4022-based iSCSI TOE HBA"},

  {0x1077,0x4032,"ISP4032-based iSCSI TOE IPv6 HBA"},

  {0x1077,0x5432,"SP232-based 4Gb Fibre Channel to PCI Express HBA"},

  {0x1077,0x6312,"SP202-based 2Gb Fibre Channel to PCI-X HBA"},

  {0x1077,0x6322,"SP212-based 2Gb Fibre Channel to PCI-X HBA"},

  {0x1077,0x7220,"IBA7220 InfiniBand HCA"},

  {0x1077,0x7322,"IBA7322 QDR InfiniBand HCA"},

  {0x1077,0x8000,"10GbE Converged Network Adapter (TCP/IP Networking)"},

  {0x1077,0x8001,"10GbE Converged Network Adapter (FCoE)"},

  {0x1077,0x8020,"cLOM8214 1/10GbE Controller"},

  {0x1077,0x8021,"8200 Series 10GbE Converged Network Adapter (FCoE)"},

  {0x1077,0x8022,"8200 Series 10GbE Converged Network Adapter (iSCSI)"},

  {0x1077,0x8030,"ISP8324 1/10GbE Converged Network Controller"},

  {0x1077,0x8031,"8300 Series 10GbE Converged Network Adapter (FCoE)"},

  {0x1077,0x8032,"8300 Series 10GbE Converged Network Adapter (iSCSI)"},

  {0x1077,0x8070,"FastLinQ QL41000 Series 10/25/40/50GbE Controller"},

  {0x1077,0x8080,"FastLinQ QL41000 Series 10/25/40/50GbE Controller (FCoE)"},

  {0x1077,0x8084,"FastLinQ QL41000 Series 10/25/40/50GbE Controller (iSCSI)"},

  {0x1077,0x8090,"FastLinQ QL41000 Series Gigabit Ethernet Controller (SR-IOV VF)"},

  {0x1077,0x8430,"ISP8324 1/10GbE Converged Network Controller (NIC VF)"},

  {0x1077,0x8431,"8300 Series 10GbE Converged Network Adapter (FCoE VF)"},

  {0x1077,0x8432,"ISP2432M-based 10GbE Converged Network Adapter (CNA)"},

  {0x1078,0x0001,"PCI Master"},

  {0x1078,0x0002,"5520 [Cognac]"},

  {0x1078,0x0100,"5530 Legacy [Kahlua]"},

  {0x1078,0x0101,"5530 SMI [Kahlua]"},

  {0x1078,0x0102,"5530 IDE [Kahlua]"},

  {0x1078,0x0103,"5530 Audio [Kahlua]"},

  {0x1078,0x0104,"5530 Video [Kahlua]"},

  {0x1078,0x0400,"ZFMicro PCI Bridge"},

  {0x1078,0x0401,"ZFMicro Chipset SMI"},

  {0x1078,0x0402,"ZFMicro Chipset IDE"},

  {0x1078,0x0403,"ZFMicro Expansion Bus"},

  {0x107e,0x0001,"5515 ATM Adapter [Flipper]"},

  {0x107e,0x0002,"100 VG AnyLan Controller"},

  {0x107e,0x0004,"5526 Fibre Channel Host Adapter"},

  {0x107e,0x0005,"x526 Fibre Channel Host Adapter"},

  {0x107e,0x0008,"5525/5575 ATM Adapter (155 Mbit) [Atlantic]"},

  {0x107e,0x9003,"5535-4P-BRI-ST"},

  {0x107e,0x9007,"5535-4P-BRI-U"},

  {0x107e,0x9008,"5535-1P-SR"},

  {0x107e,0x900c,"5535-1P-SR-ST"},

  {0x107e,0x900e,"5535-1P-SR-U"},

  {0x107e,0x9011,"5535-1P-PRI"},

  {0x107e,0x9013,"5535-2P-PRI"},

  {0x107e,0x9023,"5536-4P-BRI-ST"},

  {0x107e,0x9027,"5536-4P-BRI-U"},

  {0x107e,0x9031,"5536-1P-PRI"},

  {0x107e,0x9033,"5536-2P-PRI"},

  {0x107f,0x0802,"SL82C105"},

  {0x1080,0x0600,"82C599"},

  {0x1080,0xc691,"Cypress CY82C691"},

  {0x1080,0xc693,"82c693"},

  {0x1081,0x0d47,"Radius PCI to NuBUS Bridge"},

  {0x1083,0x0001,"FR710"},

  {0x108a,0x0001,"VME Bridge Model 617"},

  {0x108a,0x0010,"VME Bridge Model 618"},

  {0x108a,0x0040,"dataBLIZZARD"},

  {0x108a,0x3000,"VME Bridge Model 2706"},

  {0x108d,0x0001,"Token-Ring 16/4 PCI Adapter (3136/3137)"},

  {0x108d,0x0002,"16/4 Token Ring"},

  {0x108d,0x0004,"RapidFire OC-3139/3140 Token-Ring 16/4 PCI Adapter"},

  {0x108d,0x0005,"GoCard 3250 Token-Ring 16/4 CardBus PC Card"},

  {0x108d,0x0006,"OC-3530 RapidFire Token-Ring 100"},

  {0x108d,0x0007,"RapidFire 3141 Token-Ring 16/4 PCI Fiber Adapter"},

  {0x108d,0x0008,"RapidFire 3540 HSTR 100/16/4 PCI Adapter"},

  {0x108d,0x0011,"OC-2315"},

  {0x108d,0x0012,"OC-2325"},

  {0x108d,0x0013,"OC-2183/2185"},

  {0x108d,0x0014,"OC-2326"},

  {0x108d,0x0019,"OC-2327/2250 10/100 Ethernet Adapter"},

  {0x108d,0x0021,"OC-6151/6152 [RapidFire ATM 155]"},

  {0x108d,0x0022,"ATM Adapter"},

  {0x108e,0x0001,"EBUS"},

  {0x108e,0x1000,"EBUS"},

  {0x108e,0x1001,"Happy Meal 10/100 Ethernet [hme]"},

  {0x108e,0x1100,"RIO EBUS"},

  {0x108e,0x1101,"RIO 10/100 Ethernet [eri]"},

  {0x108e,0x1102,"RIO 1394"},

  {0x108e,0x1103,"RIO USB"},

  {0x108e,0x1647,"Broadcom 570x 10/100/1000 Ethernet [bge]"},

  {0x108e,0x1648,"Broadcom 570x 10/100/1000 Ethernet [bge]"},

  {0x108e,0x16a7,"Broadcom 570x 10/100/1000 Ethernet [bge]"},

  {0x108e,0x16a8,"Broadcom 570x 10/100/1000 Ethernet [bge]"},

  {0x108e,0x2bad,"GEM 10/100/1000 Ethernet [ge]"},

  {0x108e,0x5000,"Simba Advanced PCI Bridge"},

  {0x108e,0x5043,"SunPCI Co-processor"},

  {0x108e,0x5ca0,"Crypto Accelerator 6000 [mca]"},

  {0x108e,0x6300,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6301,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6302,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6303,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6310,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6311,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6312,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6313,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6320,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6323,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6330,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6331,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6332,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6333,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6340,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6343,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6350,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6353,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x6722,"Intel 21554 PCI-PCI bus bridge [db21554]"},

  {0x108e,0x676e,"SunPCiIII"},

  {0x108e,0x7063,"SunPCiII / SunPCiIIpro"},

  {0x108e,0x8000,"Psycho PCI Bus Module"},

  {0x108e,0x8001,"Schizo PCI Bus Module"},

  {0x108e,0x8002,"Schizo+ PCI Bus Module"},

  {0x108e,0x80f0,"PCIe switch [px]"},

  {0x108e,0x80f8,"PCIe switch [px]"},

  {0x108e,0x9010,"PCIe/PCI bridge switch [pxb_plx]"},

  {0x108e,0x9020,"PCIe/PCI bridge switch [pxb_plx]"},

  {0x108e,0x9102,"Davicom Fast Ethernet driver for Davicom DM9102A [dmfe]"},

  {0x108e,0xa000,"Psycho UPA-PCI Bus Module [pcipsy]"},

  {0x108e,0xa001,"Psycho UPA-PCI Bus Module [pcipsy]"},

  {0x108e,0xa801,"Schizo Fireplane-PCI bus bridge module [pcisch]"},

  {0x108e,0xaaaa,"Multithreaded Shared 10GbE Ethernet Network Controller"},

  {0x108e,0xabba,"Cassini 10/100/1000"},

  {0x108e,0xabcd,"Multithreaded 10-Gigabit Ethernet Network Controller"},

  {0x108e,0xc416,"Sun Fire System/System Controller Interface chip [sbbc]"},

  {0x1090,0x4610,"PCI RTOM"},

  {0x1090,0x4620,"GPIO HSD"},

  {0x1091,0x0020,"3D graphics processor"},

  {0x1091,0x0021,"3D graphics processor w/Texturing"},

  {0x1091,0x0040,"3D graphics frame buffer"},

  {0x1091,0x0041,"3D graphics frame buffer"},

  {0x1091,0x0060,"Proprietary bus bridge"},

  {0x1091,0x00e4,"Powerstorm 4D50T"},

  {0x1091,0x0720,"Motion JPEG codec"},

  {0x1091,0x0780,"Intense3D Wildcat 3410 (MSMT496)"},

  {0x1091,0x07a0,"Sun Expert3D-Lite Graphics Accelerator"},

  {0x1091,0x1091,"Sun Expert3D Graphics Accelerator"},

  {0x1092,0x0028,"Viper V770"},

  {0x1092,0x00a0,"Speedstar Pro SE"},

  {0x1092,0x00a8,"Speedstar 64"},

  {0x1092,0x0550,"Viper V550"},

  {0x1092,0x08d4,"Supra 2260 Modem"},

  {0x1092,0x094c,"SupraExpress 56i Pro"},

  {0x1092,0x1001,"Video Crunch It 1001 capture card"},

  {0x1092,0x1092,"Viper V330"},

  {0x1092,0x6120,"Maximum DVD"},

  {0x1092,0x8810,"Stealth SE"},

  {0x1092,0x8811,"Stealth 64/SE"},

  {0x1092,0x8880,"Stealth"},

  {0x1092,0x8881,"Stealth"},

  {0x1092,0x88b0,"Stealth 64"},

  {0x1092,0x88b1,"Stealth 64"},

  {0x1092,0x88c0,"Stealth 64"},

  {0x1092,0x88c1,"Stealth 64"},

  {0x1092,0x88d0,"Stealth 64"},

  {0x1092,0x88d1,"Stealth 64"},

  {0x1092,0x88f0,"Stealth 64"},

  {0x1092,0x88f1,"Stealth 64"},

  {0x1092,0x9999,"DMD-I0928-1 \"Monster sound\" sound chip"},

  {0x1093,0x0160,"PCI-DIO-96"},

  {0x1093,0x0162,"PCI-MIO-16XE-50"},

  {0x1093,0x0fe1,"PXI-8320"},

  {0x1093,0x1150,"PCI-6533 (PCI-DIO-32HS)"},

  {0x1093,0x1170,"PCI-MIO-16XE-10"},

  {0x1093,0x1180,"PCI-MIO-16E-1"},

  {0x1093,0x1190,"PCI-MIO-16E-4"},

  {0x1093,0x11b0,"PXI-6070E"},

  {0x1093,0x11c0,"PXI-6040E"},

  {0x1093,0x11d0,"PXI-6030E"},

  {0x1093,0x1270,"PCI-6032E"},

  {0x1093,0x1290,"PCI-6704"},

  {0x1093,0x12b0,"PCI-6534"},

  {0x1093,0x1310,"PCI-6602"},

  {0x1093,0x1320,"PXI-6533"},

  {0x1093,0x1330,"PCI-6031E"},

  {0x1093,0x1340,"PCI-6033E"},

  {0x1093,0x1350,"PCI-6071E"},

  {0x1093,0x1360,"PXI-6602"},

  {0x1093,0x13c0,"PXI-6508"},

  {0x1093,0x1490,"PXI-6534"},

  {0x1093,0x14e0,"PCI-6110"},

  {0x1093,0x14f0,"PCI-6111"},

  {0x1093,0x1580,"PXI-6031E"},

  {0x1093,0x15b0,"PXI-6071E"},

  {0x1093,0x1710,"PXI-6509"},

  {0x1093,0x17c0,"PXI-5690"},

  {0x1093,0x17d0,"PCI-6503"},

  {0x1093,0x1870,"PCI-6713"},

  {0x1093,0x1880,"PCI-6711"},

  {0x1093,0x18b0,"PCI-6052E"},

  {0x1093,0x18c0,"PXI-6052E"},

  {0x1093,0x1920,"PXI-6704"},

  {0x1093,0x1930,"PCI-6040E"},

  {0x1093,0x19c0,"PCI-4472"},

  {0x1093,0x1aa0,"PXI-4110"},

  {0x1093,0x1ad0,"PCI-6133"},

  {0x1093,0x1ae0,"PXI-6133"},

  {0x1093,0x1e30,"PCI-6624"},

  {0x1093,0x1e40,"PXI-6624"},

  {0x1093,0x1e50,"PXI-5404"},

  {0x1093,0x2410,"PCI-6733"},

  {0x1093,0x2420,"PXI-6733"},

  {0x1093,0x2430,"PCI-6731"},

  {0x1093,0x2470,"PCI-4474"},

  {0x1093,0x24a0,"PCI-4065"},

  {0x1093,0x24b0,"PXI-4200"},

  {0x1093,0x24f0,"PXI-4472"},

  {0x1093,0x2510,"PCI-4472"},

  {0x1093,0x2520,"PCI-4474"},

  {0x1093,0x27a0,"PCI-6123"},

  {0x1093,0x27b0,"PXI-6123"},

  {0x1093,0x2880,"DAQCard-6601"},

  {0x1093,0x2890,"PCI-6036E"},

  {0x1093,0x28a0,"PXI-4461"},

  {0x1093,0x28b0,"PCI-6013"},

  {0x1093,0x28c0,"PCI-6014"},

  {0x1093,0x28d0,"PCI-5122"},

  {0x1093,0x28e0,"PXI-5122"},

  {0x1093,0x29f0,"PXI-7334"},

  {0x1093,0x2a00,"PXI-7344"},

  {0x1093,0x2a60,"PCI-6023E"},

  {0x1093,0x2a70,"PCI-6024E"},

  {0x1093,0x2a80,"PCI-6025E"},

  {0x1093,0x2ab0,"PXI-6025E"},

  {0x1093,0x2b10,"PXI-6527"},

  {0x1093,0x2b20,"PCI-6527"},

  {0x1093,0x2b80,"PXI-6713"},

  {0x1093,0x2b90,"PXI-6711"},

  {0x1093,0x2c60,"PCI-6601"},

  {0x1093,0x2c70,"PXI-6601"},

  {0x1093,0x2c80,"PCI-6035E"},

  {0x1093,0x2c90,"PCI-6703"},

  {0x1093,0x2ca0,"PCI-6034E"},

  {0x1093,0x2cb0,"PCI-7344"},

  {0x1093,0x2cc0,"PXI-6608"},

  {0x1093,0x2d20,"PXI-5600"},

  {0x1093,0x2db0,"PCI-6608"},

  {0x1093,0x2dc0,"PCI-4070"},

  {0x1093,0x2dd0,"PXI-4070"},

  {0x1093,0x2eb0,"PXI-4472"},

  {0x1093,0x2ec0,"PXI-6115"},

  {0x1093,0x2ed0,"PCI-6115"},

  {0x1093,0x2ee0,"PXI-6120"},

  {0x1093,0x2ef0,"PCI-6120"},

  {0x1093,0x2fd1,"PCI-7334"},

  {0x1093,0x2fd2,"PCI-7350"},

  {0x1093,0x2fd3,"PCI-7342"},

  {0x1093,0x2fd5,"PXI-7350"},

  {0x1093,0x2fd6,"PXI-7342"},

  {0x1093,0x7003,"PCI-6551"},

  {0x1093,0x7004,"PXI-6551"},

  {0x1093,0x700b,"PXI-5421"},

  {0x1093,0x700c,"PCI-5421"},

  {0x1093,0x701a,"VXIpc-87xB"},

  {0x1093,0x701b,"VXIpc-770"},

  {0x1093,0x7023,"PXI-2593"},

  {0x1093,0x7027,"PCI-MXI-2 Universal"},

  {0x1093,0x702c,"PXI-7831R"},

  {0x1093,0x702d,"PCI-7831R"},

  {0x1093,0x702e,"PXI-7811R"},

  {0x1093,0x702f,"PCI-7811R"},

  {0x1093,0x7030,"PCI-CAN (Series 2)"},

  {0x1093,0x7031,"PCI-CAN/2 (Series 2)"},

  {0x1093,0x7032,"PCI-CAN/LS (Series 2)"},

  {0x1093,0x7033,"PCI-CAN/LS2 (Series 2)"},

  {0x1093,0x7034,"PCI-CAN/DS (Series 2)"},

  {0x1093,0x7035,"PXI-8460 (Series 2, 1 port)"},

  {0x1093,0x7036,"PXI-8460 (Series 2, 2 ports)"},

  {0x1093,0x7037,"PXI-8461 (Series 2, 1 port)"},

  {0x1093,0x7038,"PXI-8461 (Series 2, 2 ports)"},

  {0x1093,0x7039,"PXI-8462 (Series 2)"},

  {0x1093,0x703f,"PXI-2566"},

  {0x1093,0x7040,"PXI-2567"},

  {0x1093,0x7044,"MXI-4 Connection Monitor"},

  {0x1093,0x7047,"PXI-6653"},

  {0x1093,0x704c,"PXI-2530"},

  {0x1093,0x704f,"PXI-4220"},

  {0x1093,0x7050,"PXI-4204"},

  {0x1093,0x7055,"PXI-7830R"},

  {0x1093,0x7056,"PCI-7830R"},

  {0x1093,0x705a,"PCI-CAN/XS (Series 2)"},

  {0x1093,0x705b,"PCI-CAN/XS2 (Series 2)"},

  {0x1093,0x705c,"PXI-8464 (Series 2, 1 port)"},

  {0x1093,0x705d,"PXI-8464 (Series 2, 2 ports)"},

  {0x1093,0x705e,"cRIO-9102"},

  {0x1093,0x7060,"PXI-5610"},

  {0x1093,0x7064,"PXI-1045 Trigger Routing Module"},

  {0x1093,0x7065,"PXI-6652"},

  {0x1093,0x7066,"PXI-6651"},

  {0x1093,0x7067,"PXI-2529"},

  {0x1093,0x7068,"PCI-CAN/SW (Series 2)"},

  {0x1093,0x7069,"PCI-CAN/SW2 (Series 2)"},

  {0x1093,0x706a,"PXI-8463 (Series 2, 1 port)"},

  {0x1093,0x706b,"PXI-8463 (Series 2, 2 ports)"},

  {0x1093,0x7073,"PCI-6723"},

  {0x1093,0x7074,"PXI-7833R"},

  {0x1093,0x7075,"PXI-6552"},

  {0x1093,0x7076,"PCI-6552"},

  {0x1093,0x707c,"PXI-1428"},

  {0x1093,0x707e,"PXI-4462"},

  {0x1093,0x7080,"PXI-8430/2 (RS-232) Interface"},

  {0x1093,0x7081,"PXI-8431/2 (RS-485) Interface"},

  {0x1093,0x7083,"PCI-7833R"},

  {0x1093,0x7085,"PCI-6509"},

  {0x1093,0x7086,"PXI-6528"},

  {0x1093,0x7087,"PCI-6515"},

  {0x1093,0x7088,"PCI-6514"},

  {0x1093,0x708c,"PXI-2568"},

  {0x1093,0x708d,"PXI-2569"},

  {0x1093,0x70a9,"PCI-6528"},

  {0x1093,0x70aa,"PCI-6229"},

  {0x1093,0x70ab,"PCI-6259"},

  {0x1093,0x70ac,"PCI-6289"},

  {0x1093,0x70ad,"PXI-6251"},

  {0x1093,0x70ae,"PXI-6220"},

  {0x1093,0x70af,"PCI-6221"},

  {0x1093,0x70b0,"PCI-6220"},

  {0x1093,0x70b1,"PXI-6229"},

  {0x1093,0x70b2,"PXI-6259"},

  {0x1093,0x70b3,"PXI-6289"},

  {0x1093,0x70b4,"PCI-6250"},

  {0x1093,0x70b5,"PXI-6221"},

  {0x1093,0x70b6,"PCI-6280"},

  {0x1093,0x70b7,"PCI-6254"},

  {0x1093,0x70b8,"PCI-6251"},

  {0x1093,0x70b9,"PXI-6250"},

  {0x1093,0x70ba,"PXI-6254"},

  {0x1093,0x70bb,"PXI-6280"},

  {0x1093,0x70bc,"PCI-6284"},

  {0x1093,0x70bd,"PCI-6281"},

  {0x1093,0x70be,"PXI-6284"},

  {0x1093,0x70bf,"PXI-6281"},

  {0x1093,0x70c0,"PCI-6143"},

  {0x1093,0x70c3,"PCI-6511"},

  {0x1093,0x70c4,"PXI-7330"},

  {0x1093,0x70c5,"PXI-7340"},

  {0x1093,0x70c6,"PCI-7330"},

  {0x1093,0x70c7,"PCI-7340"},

  {0x1093,0x70c8,"PCI-6513"},

  {0x1093,0x70c9,"PXI-6515"},

  {0x1093,0x70ca,"PCI-1405"},

  {0x1093,0x70cc,"PCI-6512"},

  {0x1093,0x70cd,"PXI-6514"},

  {0x1093,0x70ce,"PXI-1405"},

  {0x1093,0x70cf,"PCIe-GPIB"},

  {0x1093,0x70d0,"PXI-2570"},

  {0x1093,0x70d1,"PXI-6513"},

  {0x1093,0x70d2,"PXI-6512"},

  {0x1093,0x70d3,"PXI-6511"},

  {0x1093,0x70d4,"PCI-6722"},

  {0x1093,0x70d6,"PXI-4072"},

  {0x1093,0x70d7,"PXI-6541"},

  {0x1093,0x70d8,"PXI-6542"},

  {0x1093,0x70d9,"PCI-6541"},

  {0x1093,0x70da,"PCI-6542"},

  {0x1093,0x70db,"PCI-8430/2 (RS-232) Interface"},

  {0x1093,0x70dc,"PCI-8431/2 (RS-485) Interface"},

  {0x1093,0x70dd,"PXI-8430/4 (RS-232) Interface"},

  {0x1093,0x70de,"PXI-8431/4 (RS-485) Interface"},

  {0x1093,0x70df,"PCI-8430/4 (RS-232) Interface"},

  {0x1093,0x70e0,"PCI-8431/4 (RS-485) Interface"},

  {0x1093,0x70e1,"PXI-2532"},

  {0x1093,0x70e2,"PXI-8430/8 (RS-232) Interface"},

  {0x1093,0x70e3,"PXI-8431/8 (RS-485) Interface"},

  {0x1093,0x70e4,"PCI-8430/8 (RS-232) Interface"},

  {0x1093,0x70e5,"PCI-8431/8 (RS-485) Interface"},

  {0x1093,0x70e6,"PXI-8430/16 (RS-232) Interface"},

  {0x1093,0x70e7,"PCI-8430/16 (RS-232) Interface"},

  {0x1093,0x70e8,"PXI-8432/2 (Isolated RS-232) Interface"},

  {0x1093,0x70e9,"PXI-8433/2 (Isolated RS-485) Interface"},

  {0x1093,0x70ea,"PCI-8432/2 (Isolated RS-232) Interface"},

  {0x1093,0x70eb,"PCI-8433/2 (Isolated RS-485) Interface"},

  {0x1093,0x70ec,"PXI-8432/4 (Isolated RS-232) Interface"},

  {0x1093,0x70ed,"PXI-8433/4 (Isolated RS-485) Interface"},

  {0x1093,0x70ee,"PCI-8432/4 (Isolated RS-232) Interface"},

  {0x1093,0x70ef,"PCI-8433/4 (Isolated RS-485) Interface"},

  {0x1093,0x70f0,"PXI-5922"},

  {0x1093,0x70f1,"PCI-5922"},

  {0x1093,0x70f2,"PCI-6224"},

  {0x1093,0x70f3,"PXI-6224"},

  {0x1093,0x70f6,"cRIO-9101"},

  {0x1093,0x70f7,"cRIO-9103"},

  {0x1093,0x70f8,"cRIO-9104"},

  {0x1093,0x70ff,"PXI-6723"},

  {0x1093,0x7100,"PXI-6722"},

  {0x1093,0x7104,"PCIx-1429"},

  {0x1093,0x7105,"PCIe-1429"},

  {0x1093,0x710a,"PXI-4071"},

  {0x1093,0x710d,"PXI-6143"},

  {0x1093,0x710e,"PCIe-GPIB"},

  {0x1093,0x710f,"PXI-5422"},

  {0x1093,0x7110,"PCI-5422"},

  {0x1093,0x7111,"PXI-5441"},

  {0x1093,0x7119,"PXI-6561"},

  {0x1093,0x711a,"PXI-6562"},

  {0x1093,0x711b,"PCI-6561"},

  {0x1093,0x711c,"PCI-6562"},

  {0x1093,0x7120,"PCI-7390"},

  {0x1093,0x7121,"PXI-5122EX"},

  {0x1093,0x7122,"PCI-5122EX"},

  {0x1093,0x7123,"PXIe-5653"},

  {0x1093,0x7124,"PCI-6510"},

  {0x1093,0x7125,"PCI-6516"},

  {0x1093,0x7126,"PCI-6517"},

  {0x1093,0x7127,"PCI-6518"},

  {0x1093,0x7128,"PCI-6519"},

  {0x1093,0x7137,"PXI-2575"},

  {0x1093,0x713c,"PXI-2585"},

  {0x1093,0x713d,"PXI-2586"},

  {0x1093,0x7142,"PXI-4224"},

  {0x1093,0x7144,"PXI-5124"},

  {0x1093,0x7145,"PCI-5124"},

  {0x1093,0x7146,"PCI-6132"},

  {0x1093,0x7147,"PXI-6132"},

  {0x1093,0x7148,"PCI-6122"},

  {0x1093,0x7149,"PXI-6122"},

  {0x1093,0x714c,"PXI-5114"},

  {0x1093,0x714d,"PCI-5114"},

  {0x1093,0x7150,"PXI-2564"},

  {0x1093,0x7152,"PCI-5640R"},

  {0x1093,0x7156,"PXI-1044 Trigger Routing Module"},

  {0x1093,0x715d,"PCI-1426"},

  {0x1093,0x7167,"PXI-5412"},

  {0x1093,0x7168,"PCI-5412"},

  {0x1093,0x716b,"PCI-6230"},

  {0x1093,0x716c,"PCI-6225"},

  {0x1093,0x716d,"PXI-6225"},

  {0x1093,0x716f,"PCI-4461"},

  {0x1093,0x7170,"PCI-4462"},

  {0x1093,0x7171,"PCI-6010"},

  {0x1093,0x7174,"PXI-8360"},

  {0x1093,0x7177,"PXI-6230"},

  {0x1093,0x717d,"PCIe-6251"},

  {0x1093,0x717f,"PCIe-6259"},

  {0x1093,0x7187,"PCI-1410"},

  {0x1093,0x718b,"PCI-6521"},

  {0x1093,0x718c,"PXI-6521"},

  {0x1093,0x7191,"PCI-6154"},

  {0x1093,0x7193,"PXI-7813R"},

  {0x1093,0x7194,"PCI-7813R"},

  {0x1093,0x7195,"PCI-8254R"},

  {0x1093,0x7197,"PXI-5402"},

  {0x1093,0x7198,"PCI-5402"},

  {0x1093,0x719f,"PCIe-6535"},

  {0x1093,0x71a0,"PCIe-6536"},

  {0x1093,0x71a3,"PXI-5650"},

  {0x1093,0x71a4,"PXI-5652"},

  {0x1093,0x71a5,"PXI-2594"},

  {0x1093,0x71a7,"PXI-2595"},

  {0x1093,0x71a9,"PXI-2596"},

  {0x1093,0x71aa,"PXI-2597"},

  {0x1093,0x71ab,"PXI-2598"},

  {0x1093,0x71ac,"PXI-2599"},

  {0x1093,0x71ad,"PCI-GPIB+"},

  {0x1093,0x71ae,"PCIe-1430"},

  {0x1093,0x71b7,"PXI-1056 Trigger Routing Module"},

  {0x1093,0x71b8,"PXI-1045 Trigger Routing Module"},

  {0x1093,0x71b9,"PXI-1044 Trigger Routing Module"},

  {0x1093,0x71bb,"PXI-2584"},

  {0x1093,0x71bc,"PCI-6221 (37-pin)"},

  {0x1093,0x71bf,"PCIe-1427"},

  {0x1093,0x71c5,"PCI-6520"},

  {0x1093,0x71c6,"PXI-2576"},

  {0x1093,0x71c7,"cRIO-9072"},

  {0x1093,0x71dc,"PCI-1588"},

  {0x1093,0x71e0,"PCI-6255"},

  {0x1093,0x71e1,"PXI-6255"},

  {0x1093,0x71e2,"PXI-5406"},

  {0x1093,0x71e3,"PCI-5406"},

  {0x1093,0x71fc,"PXI-4022"},

  {0x1093,0x7209,"PCI-6233"},

  {0x1093,0x720a,"PXI-6233"},

  {0x1093,0x720b,"PCI-6238"},

  {0x1093,0x720c,"PXI-6238"},

  {0x1093,0x7260,"PXI-5142"},

  {0x1093,0x7261,"PCI-5142"},

  {0x1093,0x726d,"PXI-5651"},

  {0x1093,0x7273,"PXI-4461"},

  {0x1093,0x7274,"PXI-4462"},

  {0x1093,0x7279,"PCI-6232"},

  {0x1093,0x727a,"PXI-6232"},

  {0x1093,0x727b,"PCI-6239"},

  {0x1093,0x727c,"PXI-6239"},

  {0x1093,0x727e,"SMBus Controller"},

  {0x1093,0x7281,"PCI-6236"},

  {0x1093,0x7282,"PXI-6236"},

  {0x1093,0x7283,"PXI-2554"},

  {0x1093,0x7288,"PXIe-5611"},

  {0x1093,0x7293,"PCIe-8255R"},

  {0x1093,0x729d,"cRIO-9074"},

  {0x1093,0x72a4,"PCIe-4065"},

  {0x1093,0x72a7,"PCIe-6537"},

  {0x1093,0x72a8,"PXI-5152"},

  {0x1093,0x72a9,"PCI-5152"},

  {0x1093,0x72aa,"PXI-5105"},

  {0x1093,0x72ab,"PCI-5105"},

  {0x1093,0x72b8,"PXI-6682"},

  {0x1093,0x72d0,"PXI-2545"},

  {0x1093,0x72d1,"PXI-2546"},

  {0x1093,0x72d2,"PXI-2547"},

  {0x1093,0x72d3,"PXI-2548"},

  {0x1093,0x72d4,"PXI-2549"},

  {0x1093,0x72d5,"PXI-2555"},

  {0x1093,0x72d6,"PXI-2556"},

  {0x1093,0x72d7,"PXI-2557"},

  {0x1093,0x72d8,"PXI-2558"},

  {0x1093,0x72d9,"PXI-2559"},

  {0x1093,0x72e8,"PXIe-6251"},

  {0x1093,0x72e9,"PXIe-6259"},

  {0x1093,0x72ef,"PXI-4498"},

  {0x1093,0x72f0,"PXI-4496"},

  {0x1093,0x72fb,"PXIe-6672"},

  {0x1093,0x730e,"PXI-4130"},

  {0x1093,0x730f,"PXI-5922EX"},

  {0x1093,0x7310,"PCI-5922EX"},

  {0x1093,0x731c,"PXI-2535"},

  {0x1093,0x731d,"PXI-2536"},

  {0x1093,0x7322,"PXIe-6124"},

  {0x1093,0x7327,"PXI-6529"},

  {0x1093,0x732c,"VXI-8360T"},

  {0x1093,0x7331,"PXIe-5602"},

  {0x1093,0x7332,"PXIe-5601"},

  {0x1093,0x7333,"PXI-5900"},

  {0x1093,0x7335,"PXI-2533"},

  {0x1093,0x7336,"PXI-2534"},

  {0x1093,0x7342,"PXI-4461"},

  {0x1093,0x7349,"PXI-5154"},

  {0x1093,0x734a,"PCI-5154"},

  {0x1093,0x7357,"PXI-4065"},

  {0x1093,0x7359,"PXI-4495"},

  {0x1093,0x7370,"PXI-4461"},

  {0x1093,0x7373,"sbRIO-9601"},

  {0x1093,0x7374,"IOtech-9601"},

  {0x1093,0x7375,"sbRIO-9602"},

  {0x1093,0x7378,"sbRIO-9641"},

  {0x1093,0x737d,"PXI-5124EX"},

  {0x1093,0x7384,"PXI-7851R"},

  {0x1093,0x7385,"PXI-7852R"},

  {0x1093,0x7386,"PCIe-7851R"},

  {0x1093,0x7387,"PCIe-7852R"},

  {0x1093,0x7390,"PXI-7841R"},

  {0x1093,0x7391,"PXI-7842R"},

  {0x1093,0x7392,"PXI-7853R"},

  {0x1093,0x7393,"PCIe-7841R"},

  {0x1093,0x7394,"PCIe-7842R"},

  {0x1093,0x7397,"sbRIO-9611"},

  {0x1093,0x7398,"sbRIO-9612"},

  {0x1093,0x7399,"sbRIO-9631"},

  {0x1093,0x739a,"sbRIO-9632"},

  {0x1093,0x739b,"sbRIO-9642"},

  {0x1093,0x73a1,"PXIe-4498"},

  {0x1093,0x73a2,"PXIe-4496"},

  {0x1093,0x73a5,"PXIe-5641R"},

  {0x1093,0x73a7,"PXI-8250 Chassis Monitor Module"},

  {0x1093,0x73a8,"PXI-8511 CAN/LS"},

  {0x1093,0x73a9,"PXI-8511 CAN/LS"},

  {0x1093,0x73aa,"PXI-8512 CAN/HS"},

  {0x1093,0x73ab,"PXI-8512 CAN/HS"},

  {0x1093,0x73ac,"PXI-8513 CAN/XS"},

  {0x1093,0x73ad,"PXI-8513 CAN/XS"},

  {0x1093,0x73af,"PXI-8516 LIN"},

  {0x1093,0x73b1,"PXI-8517 FlexRay"},

  {0x1093,0x73b2,"PXI-8531 CANopen"},

  {0x1093,0x73b3,"PXI-8531 CANopen"},

  {0x1093,0x73b4,"PXI-8532 DeviceNet"},

  {0x1093,0x73b5,"PXI-8532 DeviceNet"},

  {0x1093,0x73b6,"PCI-8511 CAN/LS"},

  {0x1093,0x73b7,"PCI-8511 CAN/LS"},

  {0x1093,0x73b8,"PCI-8512 CAN/HS"},

  {0x1093,0x73b9,"PCI-8512 CAN/HS"},

  {0x1093,0x73ba,"PCI-8513 CAN/XS"},

  {0x1093,0x73bb,"PCI-8513 CAN/XS"},

  {0x1093,0x73bd,"PCI-8516 LIN"},

  {0x1093,0x73bf,"PCI-8517 FlexRay"},

  {0x1093,0x73c0,"PCI-8531 CANopen"},

  {0x1093,0x73c1,"PCI-8531 CANopen"},

  {0x1093,0x73c2,"PCI-8532 DeviceNet"},

  {0x1093,0x73c3,"PCI-8532 DeviceNet"},

  {0x1093,0x73c5,"PXIe-2527"},

  {0x1093,0x73c6,"PXIe-2529"},

  {0x1093,0x73c8,"PXIe-2530"},

  {0x1093,0x73c9,"PXIe-2532"},

  {0x1093,0x73ca,"PXIe-2569"},

  {0x1093,0x73cb,"PXIe-2575"},

  {0x1093,0x73cc,"PXIe-2593"},

  {0x1093,0x73d5,"PXI-7951R"},

  {0x1093,0x73d6,"PXI-7952R"},

  {0x1093,0x73d7,"PXI-7953R"},

  {0x1093,0x73e1,"PXI-7854R"},

  {0x1093,0x73ec,"PXI-7954R"},

  {0x1093,0x73ed,"cRIO-9073"},

  {0x1093,0x73f0,"PXI-5153"},

  {0x1093,0x73f1,"PCI-5153"},

  {0x1093,0x73f4,"PXI-2515"},

  {0x1093,0x73f6,"cRIO-9111"},

  {0x1093,0x73f7,"cRIO-9112"},

  {0x1093,0x73f8,"cRIO-9113"},

  {0x1093,0x73f9,"cRIO-9114"},

  {0x1093,0x73fa,"cRIO-9116"},

  {0x1093,0x73fb,"cRIO-9118"},

  {0x1093,0x7404,"PXI-4132"},

  {0x1093,0x7405,"PXIe-6674T"},

  {0x1093,0x7406,"PXIe-6674"},

  {0x1093,0x740e,"PCIe-8430/16 (RS-232) Interface"},

  {0x1093,0x740f,"PCIe-8430/8 (RS-232) Interface"},

  {0x1093,0x7410,"PCIe-8431/16 (RS-485) Interface"},

  {0x1093,0x7411,"PCIe-8431/8 (RS-485) Interface"},

  {0x1093,0x7414,"PCIe-GPIB+"},

  {0x1093,0x741c,"PXI-5691"},

  {0x1093,0x741d,"PXI-5695"},

  {0x1093,0x743c,"CSC-3059"},

  {0x1093,0x7448,"PXI-2510"},

  {0x1093,0x7454,"PXI-2512"},

  {0x1093,0x7455,"PXI-2514"},

  {0x1093,0x7456,"PXIe-2512"},

  {0x1093,0x7457,"PXIe-2514"},

  {0x1093,0x745a,"PXI-6682H"},

  {0x1093,0x745e,"PXI-5153EX"},

  {0x1093,0x745f,"PCI-5153EX"},

  {0x1093,0x7460,"PXI-5154EX"},

  {0x1093,0x7461,"PCI-5154EX"},

  {0x1093,0x746d,"PXIe-5650"},

  {0x1093,0x746e,"PXIe-5651"},

  {0x1093,0x746f,"PXIe-5652"},

  {0x1093,0x7472,"PXI-2800"},

  {0x1093,0x7495,"PXIe-5603"},

  {0x1093,0x7497,"PXIe-5605"},

  {0x1093,0x74ae,"PXIe-2515"},

  {0x1093,0x74b4,"PXI-2531"},

  {0x1093,0x74b5,"PXIe-2531"},

  {0x1093,0x74c1,"PXIe-8430/16 (RS-232) Interface"},

  {0x1093,0x74c2,"PXIe-8430/8 (RS-232) Interface"},

  {0x1093,0x74c3,"PXIe-8431/16 (RS-485) Interface"},

  {0x1093,0x74c4,"PXIe-8431/8 (RS-485) Interface"},

  {0x1093,0x74d5,"PXIe-5630"},

  {0x1093,0x74d9,"PCIe-8432/2 (Isolated RS-232) Interface"},

  {0x1093,0x74da,"PCIe-8433/2 (Isolated RS-485) Interface"},

  {0x1093,0x74db,"PCIe-8432/4 (Isolated RS-232) Interface"},

  {0x1093,0x74dc,"PCIe-8433/4 (Isolated RS-485) Interface"},

  {0x1093,0x74e8,"NI 9148"},

  {0x1093,0x7515,"PCIe-8430/2 (RS-232) Interface"},

  {0x1093,0x7516,"PCIe-8430/4 (RS-232) Interface"},

  {0x1093,0x7517,"PCIe-8431/2 (RS-485) Interface"},

  {0x1093,0x7518,"PCIe-8431/4 (RS-485) Interface"},

  {0x1093,0x751b,"cRIO-9081"},

  {0x1093,0x751c,"cRIO-9082"},

  {0x1093,0x7528,"PXIe-4497"},

  {0x1093,0x7529,"PXIe-4499"},

  {0x1093,0x752a,"PXIe-4492"},

  {0x1093,0x7539,"NI 9157"},

  {0x1093,0x753a,"NI 9159"},

  {0x1093,0x7598,"PXI-2571"},

  {0x1093,0x75a4,"PXI-4131A"},

  {0x1093,0x75b1,"PCIe-7854R"},

  {0x1093,0x75ba,"PXI-2543"},

  {0x1093,0x75bb,"PXIe-2543"},

  {0x1093,0x75e5,"PXI-6683"},

  {0x1093,0x75e6,"PXI-6683H"},

  {0x1093,0x75ef,"PXIe-5632"},

  {0x1093,0x761c,"VXI-8360LT"},

  {0x1093,0x761f,"PXI-2540"},

  {0x1093,0x7620,"PXIe-2540"},

  {0x1093,0x7621,"PXI-2541"},

  {0x1093,0x7622,"PXIe-2541"},

  {0x1093,0x7626,"NI 9154"},

  {0x1093,0x7627,"NI 9155"},

  {0x1093,0x7638,"PXI-2720"},

  {0x1093,0x7639,"PXI-2722"},

  {0x1093,0x763a,"PXIe-2725"},

  {0x1093,0x763b,"PXIe-2727"},

  {0x1093,0x763c,"PXI-4465"},

  {0x1093,0x764b,"PXIe-2790"},

  {0x1093,0x764c,"PXI-2520"},

  {0x1093,0x764d,"PXI-2521"},

  {0x1093,0x764e,"PXI-2522"},

  {0x1093,0x764f,"PXI-2523"},

  {0x1093,0x7654,"PXI-2796"},

  {0x1093,0x7655,"PXI-2797"},

  {0x1093,0x7656,"PXI-2798"},

  {0x1093,0x7657,"PXI-2799"},

  {0x1093,0x765d,"PXI-2542"},

  {0x1093,0x765e,"PXIe-2542"},

  {0x1093,0x765f,"PXI-2544"},

  {0x1093,0x7660,"PXIe-2544"},

  {0x1093,0x766d,"PCIe-6535B"},

  {0x1093,0x766e,"PCIe-6536B"},

  {0x1093,0x766f,"PCIe-6537B"},

  {0x1093,0x76a3,"PXIe-6535B"},

  {0x1093,0x76a4,"PXIe-6536B"},

  {0x1093,0x76a5,"PXIe-6537B"},

  {0x1093,0x783e,"PXI-8368"},

  {0x1093,0x9020,"PXI-2501"},

  {0x1093,0x9030,"PXI-2503"},

  {0x1093,0x9040,"PXI-2527"},

  {0x1093,0x9050,"PXI-2565"},

  {0x1093,0x9060,"PXI-2590"},

  {0x1093,0x9070,"PXI-2591"},

  {0x1093,0x9080,"PXI-2580"},

  {0x1093,0x9090,"PCI-4021"},

  {0x1093,0x90a0,"PXI-4021"},

  {0x1093,0xa001,"PCI-MXI-2"},

  {0x1093,0xb001,"PCI-1408"},

  {0x1093,0xb011,"PXI-1408"},

  {0x1093,0xb021,"PCI-1424"},

  {0x1093,0xb022,"PXI-1424"},

  {0x1093,0xb031,"PCI-1413"},

  {0x1093,0xb041,"PCI-1407"},

  {0x1093,0xb051,"PXI-1407"},

  {0x1093,0xb061,"PCI-1411"},

  {0x1093,0xb071,"PCI-1422"},

  {0x1093,0xb081,"PXI-1422"},

  {0x1093,0xb091,"PXI-1411"},

  {0x1093,0xb0b1,"PCI-1409"},

  {0x1093,0xb0c1,"PXI-1409"},

  {0x1093,0xb0e1,"PCI-1428"},

  {0x1093,0xc4c4,"PXIe/PCIe Device"},

  {0x1093,0xc801,"PCI-GPIB"},

  {0x1093,0xc811,"PCI-GPIB+"},

  {0x1093,0xc821,"PXI-GPIB"},

  {0x1093,0xc831,"PMC-GPIB"},

  {0x1093,0xc840,"PCI-GPIB"},

  {0x1093,0xd130,"PCI-232/2 Interface"},

  {0x1093,0xd140,"PCI-232/4 Interface"},

  {0x1093,0xd150,"PCI-232/8 Interface"},

  {0x1093,0xd160,"PCI-485/2 Interface"},

  {0x1093,0xd170,"PCI-485/4 Interface"},

  {0x1093,0xd190,"PXI-8422/2 (Isolated RS-232) Interface"},

  {0x1093,0xd1a0,"PXI-8422/4 (Isolated RS-232) Interface"},

  {0x1093,0xd1b0,"PXI-8423/2 (Isolated RS-485) Interface"},

  {0x1093,0xd1c0,"PXI-8423/4 (Isolated RS-485) Interface"},

  {0x1093,0xd1d0,"PXI-8420/2 (RS-232) Interface"},

  {0x1093,0xd1e0,"PXI-8420/4 (RS-232) Interface"},

  {0x1093,0xd1f0,"PXI-8420/8 (RS-232) Interface"},

  {0x1093,0xd1f1,"PXI-8420/16 (RS-232) Interface"},

  {0x1093,0xd230,"PXI-8421/2 (RS-485) Interface"},

  {0x1093,0xd240,"PXI-8421/4 (RS-485) Interface"},

  {0x1093,0xd250,"PCI-232/2 (Isolated) Interface"},

  {0x1093,0xd260,"PCI-485/2 (Isolated) Interface"},

  {0x1093,0xd270,"PCI-232/4 (Isolated) Interface"},

  {0x1093,0xd280,"PCI-485/4 (Isolated) Interface"},

  {0x1093,0xd290,"PCI-485/8 Interface"},

  {0x1093,0xd2a0,"PXI-8421/8 (RS-485) Interface"},

  {0x1093,0xd2b0,"PCI-232/16 Interface"},

  {0x1093,0xe111,"PCI-CAN"},

  {0x1093,0xe131,"PXI-8461 (1 port)"},

  {0x1093,0xe141,"PCI-CAN/LS"},

  {0x1093,0xe151,"PXI-8460 (1 port)"},

  {0x1093,0xe211,"PCI-CAN/2"},

  {0x1093,0xe231,"PXI-8461 (2 ports)"},

  {0x1093,0xe241,"PCI-CAN/LS2"},

  {0x1093,0xe251,"PXI-8460 (2 ports)"},

  {0x1093,0xe261,"PCI-CAN/DS"},

  {0x1093,0xe271,"PXI-8462"},

  {0x1093,0xf110,"VMEpc-650"},

  {0x1093,0xf120,"VXIpc-650"},

  {0x1093,0xfe00,"VXIpc-87x"},

  {0x1093,0xfe41,"VXIpc-860"},

  {0x1093,0xfe51,"VXIpc-74x"},

  {0x1093,0xfe61,"VXIpc-850"},

  {0x1093,0xfe70,"VXIpc-880"},

  {0x1095,0x0240,"Adaptec AAR-1210SA SATA HostRAID Controller"},

  {0x1095,0x0640,"PCI0640"},

  {0x1095,0x0643,"PCI0643"},

  {0x1095,0x0646,"PCI0646"},

  {0x1095,0x0647,"PCI0647"},

  {0x1095,0x0648,"PCI0648"},

  {0x1095,0x0649,"SiI 0649 Ultra ATA/100 PCI to ATA Host Controller"},

  {0x1095,0x0650,"PBC0650A"},

  {0x1095,0x0670,"USB0670"},

  {0x1095,0x0673,"USB0673"},

  {0x1095,0x0680,"PCI0680 Ultra ATA-133 Host Controller"},

  {0x1095,0x3112,"SiI 3112 [SATALink/SATARaid] Serial ATA Controller"},

  {0x1095,0x3114,"SiI 3114 [SATALink/SATARaid] Serial ATA Controller"},

  {0x1095,0x3124,"SiI 3124 PCI-X Serial ATA Controller"},

  {0x1095,0x3132,"SiI 3132 Serial ATA Raid II Controller"},

  {0x1095,0x3512,"SiI 3512 [SATALink/SATARaid] Serial ATA Controller"},

  {0x1095,0x3531,"SiI 3531 [SATALink/SATARaid] Serial ATA Controller"},

  {0x1098,0x0001,"QD-8500"},

  {0x1098,0x0002,"QD-8580"},

  {0x109e,0x0310,"Bt848 Video Capture"},

  {0x109e,0x032e,"Bt878 Video Capture"},

  {0x109e,0x0350,"Bt848 Video Capture"},

  {0x109e,0x0351,"Bt849A Video capture"},

  {0x109e,0x0369,"Bt878 Video Capture"},

  {0x109e,0x036c,"Bt879 Video Capture"},

  {0x109e,0x036e,"Bt878 Video Capture"},

  {0x109e,0x036f,"Bt879 Video Capture"},

  {0x109e,0x0370,"Bt880 Video Capture"},

  {0x109e,0x0878,"Bt878 Audio Capture"},

  {0x109e,0x0879,"Bt879 Audio Capture"},

  {0x109e,0x0880,"Bt880 Audio Capture"},

  {0x109e,0x2115,"BtV 2115 Mediastream controller"},

  {0x109e,0x2125,"BtV 2125 Mediastream controller"},

  {0x109e,0x2164,"BtV 2164"},

  {0x109e,0x2165,"BtV 2165"},

  {0x109e,0x8230,"Bt8230 ATM Segment/Reassembly Ctrlr (SRC)"},

  {0x109e,0x8472,"Bt8472"},

  {0x109e,0x8474,"Bt8474"},

  {0x10a5,0x3052,"SmartPCI562 56K Modem"},

  {0x10a5,0x5449,"SmartPCI561 modem"},

  {0x10a9,0x0001,"Crosstalk to PCI Bridge"},

  {0x10a9,0x0002,"Linc I/O controller"},

  {0x10a9,0x0003,"IOC3 I/O controller"},

  {0x10a9,0x0004,"O2 MACE"},

  {0x10a9,0x0005,"RAD Audio"},

  {0x10a9,0x0006,"HPCEX"},

  {0x10a9,0x0007,"RPCEX"},

  {0x10a9,0x0008,"DiVO VIP"},

  {0x10a9,0x0009,"AceNIC Gigabit Ethernet"},

  {0x10a9,0x0010,"AMP Video I/O"},

  {0x10a9,0x0011,"GRIP"},

  {0x10a9,0x0012,"SGH PSHAC GSN"},

  {0x10a9,0x0208,"SSIM1 SAS Adapter"},

  {0x10a9,0x1001,"Magic Carpet"},

  {0x10a9,0x1002,"Lithium"},

  {0x10a9,0x1003,"Dual JPEG 1"},

  {0x10a9,0x1004,"Dual JPEG 2"},

  {0x10a9,0x1005,"Dual JPEG 3"},

  {0x10a9,0x1006,"Dual JPEG 4"},

  {0x10a9,0x1007,"Dual JPEG 5"},

  {0x10a9,0x1008,"Cesium"},

  {0x10a9,0x100a,"IOC4 I/O controller"},

  {0x10a9,0x1504,"SSIM1 Fibre Channel Adapter"},

  {0x10a9,0x2001,"Fibre Channel"},

  {0x10a9,0x2002,"ASDE"},

  {0x10a9,0x4001,"TIO-CE PCI Express Bridge"},

  {0x10a9,0x4002,"TIO-CE PCI Express Port"},

  {0x10a9,0x8001,"O2 1394"},

  {0x10a9,0x8002,"G-net NT"},

  {0x10a9,0x802b,"REACT external interrupt controller"},

  {0x10aa,0x2051,"2051 CPU bridge"},

  {0x10aa,0x5842,"2051 ISA bridge"},

  {0x10ad,0x0001,"W83769F"},

  {0x10ad,0x0003,"SL82C103"},

  {0x10ad,0x0005,"SL82C105"},

  {0x10ad,0x0103,"SL82c103"},

  {0x10ad,0x0105,"SL82c105"},

  {0x10ad,0x0565,"W83C553F/W83C554F"},

  {0x10b3,0x3106,"DB87144"},

  {0x10b3,0xb106,"DB87144"},

  {0x10b4,0x1b1d,"Velocity 128 3D"},

  {0x10b5,0x0001,"i960 PCI bus interface"},

  {0x10b5,0x0557,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x1000,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x1024,"Acromag, Inc. IndustryPack Carrier Card"},

  {0x10b5,0x1042,"Brandywine / jxi2, Inc. - PMC-SyncClock32, IRIG A & B, Nasa 36"},

  {0x10b5,0x106a,"Dual OX16C952 4 port serial adapter [Megawolf Romulus/4]"},

  {0x10b5,0x1076,"VScom 800 8 port serial adaptor"},

  {0x10b5,0x1077,"VScom 400 4 port serial adaptor"},

  {0x10b5,0x1078,"VScom 210 2 port serial and 1 port parallel adaptor"},

  {0x10b5,0x1103,"VScom 200 2 port serial adaptor"},

  {0x10b5,0x1146,"VScom 010 1 port parallel adaptor"},

  {0x10b5,0x1147,"VScom 020 2 port parallel adaptor"},

  {0x10b5,0x2000,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x2540,"IXXAT CAN-Interface PC-I 04/PCI"},

  {0x10b5,0x2724,"Thales PCSM Security Card"},

  {0x10b5,0x3376,"Cosateq 4 Port CAN Card"},

  {0x10b5,0x4000,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x4001,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x4002,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x6140,"PCI6140 32-bit 33MHz PCI-to-PCI Bridge"},

  {0x10b5,0x6150,"PCI6150 32-bit 33MHz PCI-to-PCI Bridge"},

  {0x10b5,0x6152,"PCI6152 32-bit 66MHz PCI-to-PCI Bridge"},

  {0x10b5,0x6154,"PCI6154 64-bit 66MHz PCI-to-PCI Bridge"},

  {0x10b5,0x6254,"PCI6254 64-bit 66MHz PCI-to-PCI Bridge"},

  {0x10b5,0x6466,"PCI6466 64-bit 66MHz PCI-to-PCI Bridge"},

  {0x10b5,0x6520,"PCI6520 64-bit 133MHz PCI-X-to-PCI-X Bridge"},

  {0x10b5,0x6540,"PCI6540 64-bit 133MHz PCI-X-to-PCI-X Bridge"},

  {0x10b5,0x6541,"PCI6540/6466 PCI-PCI bridge (non-transparent mode, primary side)"},

  {0x10b5,0x6542,"PCI6540/6466 PCI-PCI bridge (non-transparent mode, secondary side)"},

  {0x10b5,0x8111,"PEX 8111 PCI Express-to-PCI Bridge"},

  {0x10b5,0x8112,"PEX8112 x1 Lane PCI Express-to-PCI Bridge"},

  {0x10b5,0x8114,"PEX 8114 PCI Express-to-PCI/PCI-X Bridge"},

  {0x10b5,0x8311,"PEX8311 x1 Lane PCI Express-to-Generic Local Bus Bridge"},

  {0x10b5,0x8505,"PEX 8505 5-lane, 5-port PCI Express Switch"},

  {0x10b5,0x8508,"PEX 8508 8-lane, 5-port PCI Express Switch"},

  {0x10b5,0x8509,"PEX 8509 8-lane, 8-port PCI Express Switch"},

  {0x10b5,0x8512,"PEX 8512 12-lane, 5-port PCI Express Switch"},

  {0x10b5,0x8516,"PEX 8516  Versatile PCI Express Switch"},

  {0x10b5,0x8517,"PEX 8517 16-lane, 5-port PCI Express Switch"},

  {0x10b5,0x8518,"PEX 8518 16-lane, 5-port PCI Express Switch"},

  {0x10b5,0x8524,"PEX 8524 24-lane, 6-port PCI Express Switch"},

  {0x10b5,0x8525,"PEX 8525 24-lane, 5-port PCI Express Switch"},

  {0x10b5,0x8532,"PEX 8532  Versatile PCI Express Switch"},

  {0x10b5,0x8533,"PEX 8533 32-lane, 6-port PCI Express Switch"},

  {0x10b5,0x8547,"PEX 8547 48-lane, 3-port PCI Express Switch"},

  {0x10b5,0x8548,"PEX 8548 48-lane, 9-port PCI Express Switch"},

  {0x10b5,0x8603,"PEX 8603 3-lane, 3-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8604,"PEX 8604 4-lane, 4-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8605,"PEX 8605 PCI Express 4-port Gen2 Switch"},

  {0x10b5,0x8606,"PEX 8606 6 Lane, 6 Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8608,"PEX 8608 8-lane, 8-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8609,"PEX 8609 8-lane, 8-Port PCI Express Gen 2 (5.0 GT/s) Switch with DMA"},

  {0x10b5,0x8612,"PEX 8612 12-lane, 4-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8613,"PEX 8613 12-lane, 3-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8614,"PEX 8614 12-lane, 12-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8615,"PEX 8615 12-lane, 12-Port PCI Express Gen 2 (5.0 GT/s) Switch with DMA"},

  {0x10b5,0x8616,"PEX 8616 16-lane, 4-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8617,"PEX 8617 16-lane, 4-Port PCI Express Gen 2 (5.0 GT/s) Switch with P2P"},

  {0x10b5,0x8618,"PEX 8618 16-lane, 16-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8619,"PEX 8619 16-lane, 16-Port PCI Express Gen 2 (5.0 GT/s) Switch with DMA"},

  {0x10b5,0x8624,"PEX 8624 24-lane, 6-Port PCI Express Gen 2 (5.0 GT/s) Switch [ExpressLane]"},

  {0x10b5,0x8625,"PEX 8625 24-lane, 24-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8632,"PEX 8632 32-lane, 12-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8636,"PEX 8636 36-lane, 24-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8647,"PEX 8647 48-Lane, 3-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8648,"PEX 8648 48-lane, 12-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8649,"PEX 8649 48-lane, 12-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8664,"PEX 8664 64-lane, 16-Port PCI Express Gen 2 (5.0 GT/s) Switch"},

  {0x10b5,0x8680,"PEX 8680 80-lane, 20-Port PCI Express Gen 2 (5.0 GT/s) Multi-Root Switch"},

  {0x10b5,0x8696,"PEX 8696 96-lane, 24-Port PCI Express Gen 2 (5.0 GT/s) Multi-Root Switch"},

  {0x10b5,0x8717,"PEX 8717 16-lane, 8-Port PCI Express Gen 3 (8.0 GT/s) Switch with DMA"},

  {0x10b5,0x8718,"PEX 8718 16-Lane, 5-Port PCI Express Gen 3 (8.0 GT/s) Switch"},

  {0x10b5,0x8724,"PEX 8724 24-Lane, 6-Port PCI Express Gen 3 (8 GT/s) Switch, 19 x 19mm FCBGA"},

  {0x10b5,0x8732,"PEX 8732 32-lane, 8-Port PCI Express Gen 3 (8.0 GT/s) Switch"},

  {0x10b5,0x8734,"PEX 8734 32-lane, 8-Port PCI Express Gen 3 (8.0GT/s) Switch"},

  {0x10b5,0x8747,"PEX 8747 48-Lane, 5-Port PCI Express Gen 3 (8.0 GT/s) Switch"},

  {0x10b5,0x8748,"PEX 8748 48-Lane, 12-Port PCI Express Gen 3 (8 GT/s) Switch, 27 x 27mm FCBGA"},

  {0x10b5,0x87b0,"PEX 8732 32-lane, 8-Port PCI Express Gen 3 (8.0 GT/s) Switch"},

  {0x10b5,0x9016,"PLX 9016 8-port serial controller"},

  {0x10b5,0x9030,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x9036,"9036"},

  {0x10b5,0x9050,"PCI <-> IOBus Bridge"},

  {0x10b5,0x9052,"PCI9052 PCI <-> IOBus Bridge"},

  {0x10b5,0x9054,"PCI9054 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x9056,"PCI9056 32-bit 66MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x9060,"PCI9060 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x906d,"9060SD"},

  {0x10b5,0x906e,"9060ES"},

  {0x10b5,0x9080,"PCI9080 32-bit; 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0x9656,"PCI9656 PCI <-> IOBus Bridge"},

  {0x10b5,0x9733,"PEX 9733 33-lane, 9-port PCI Express Gen 3 (8.0 GT/s) Switch"},

  {0x10b5,0x9749,"PEX 9749 49-lane, 13-port PCI Express Gen 3 (8.0 GT/s) Switch"},

  {0x10b5,0xa100,"Blackmagic Design DeckLink"},

  {0x10b5,0xbb04,"B&B 3PCIOSD1A Isolated PCI Serial"},

  {0x10b5,0xc001,"CronyxOmega-PCI (8-port RS232)"},

  {0x10b5,0xd00d,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0xd33d,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b5,0xd44d,"PCI9030 32-bit 33MHz PCI <-> IOBus Bridge"},

  {0x10b6,0x0001,"Smart 16/4 PCI Ringnode"},

  {0x10b6,0x0002,"Smart 16/4 PCI Ringnode Mk2"},

  {0x10b6,0x0003,"Smart 16/4 PCI Ringnode Mk3"},

  {0x10b6,0x0004,"Smart 16/4 PCI Ringnode Mk1"},

  {0x10b6,0x0006,"16/4 Cardbus Adapter"},

  {0x10b6,0x0007,"Presto PCI Adapter"},

  {0x10b6,0x0009,"Smart 100/16/4 PCI-HS Ringnode"},

  {0x10b6,0x000a,"Token Ring 100/16/4 Ringnode/Ringrunner"},

  {0x10b6,0x000b,"16/4 CardBus Adapter Mk2"},

  {0x10b6,0x000c,"RapidFire 3140V2 16/4 TR Adapter"},

  {0x10b6,0x1000,"Collage 25/155 ATM Client Adapter"},

  {0x10b6,0x1001,"Collage 155 ATM Server Adapter"},

  {0x10b7,0x0001,"3c985 1000BaseSX (SX/TX)"},

  {0x10b7,0x0013,"AR5212 802.11abg NIC (3CRDAG675)"},

  {0x10b7,0x0910,"3C910-A01"},

  {0x10b7,0x1006,"MINI PCI type 3B Data Fax Modem"},

  {0x10b7,0x1007,"Mini PCI 56k Winmodem"},

  {0x10b7,0x1201,"3c982-TXM 10/100baseTX Dual Port A [Hydra]"},

  {0x10b7,0x1202,"3c982-TXM 10/100baseTX Dual Port B [Hydra]"},

  {0x10b7,0x1700,"3c940 10/100/1000Base-T [Marvell]"},

  {0x10b7,0x3390,"3c339 TokenLink Velocity"},

  {0x10b7,0x3590,"3c359 TokenLink Velocity XL"},

  {0x10b7,0x4500,"3c450 HomePNA [Tornado]"},

  {0x10b7,0x5055,"3c555 Laptop Hurricane"},

  {0x10b7,0x5057,"3c575 Megahertz 10/100 LAN CardBus [Boomerang]"},

  {0x10b7,0x5157,"3cCFE575BT Megahertz 10/100 LAN CardBus [Cyclone]"},

  {0x10b7,0x5257,"3cCFE575CT CardBus [Cyclone]"},

  {0x10b7,0x5900,"3c590 10BaseT [Vortex]"},

  {0x10b7,0x5920,"3c592 EISA 10mbps Demon/Vortex"},

  {0x10b7,0x5950,"3c595 100BaseTX [Vortex]"},

  {0x10b7,0x5951,"3c595 100BaseT4 [Vortex]"},

  {0x10b7,0x5952,"3c595 100Base-MII [Vortex]"},

  {0x10b7,0x5970,"3c597 EISA Fast Demon/Vortex"},

  {0x10b7,0x5b57,"3c595 Megahertz 10/100 LAN CardBus [Boomerang]"},

  {0x10b7,0x6000,"3CRSHPW796 [OfficeConnect Wireless CardBus]"},

  {0x10b7,0x6001,"3com 3CRWE154G72 [Office Connect Wireless LAN Adapter]"},

  {0x10b7,0x6055,"3c556 Hurricane CardBus [Cyclone]"},

  {0x10b7,0x6056,"3c556B CardBus [Tornado]"},

  {0x10b7,0x6560,"3cCFE656 CardBus [Cyclone]"},

  {0x10b7,0x6561,"3cCFEM656 10/100 LAN+56K Modem CardBus"},

  {0x10b7,0x6562,"3cCFEM656B 10/100 LAN+Winmodem CardBus [Cyclone]"},

  {0x10b7,0x6563,"3cCFEM656B 10/100 LAN+56K Modem CardBus"},

  {0x10b7,0x6564,"3cXFEM656C 10/100 LAN+Winmodem CardBus [Tornado]"},

  {0x10b7,0x7646,"3cSOHO100-TX Hurricane"},

  {0x10b7,0x7770,"3CRWE777 PCI Wireless Adapter [Airconnect]"},

  {0x10b7,0x7940,"3c803 FDDILink UTP Controller"},

  {0x10b7,0x7980,"3c804 FDDILink SAS Controller"},

  {0x10b7,0x7990,"3c805 FDDILink DAS Controller"},

  {0x10b7,0x80eb,"3c940B 10/100/1000Base-T"},

  {0x10b7,0x8811,"Token ring"},

  {0x10b7,0x9000,"3c900 10BaseT [Boomerang]"},

  {0x10b7,0x9001,"3c900 10Mbps Combo [Boomerang]"},

  {0x10b7,0x9004,"3c900B-TPO Etherlink XL [Cyclone]"},

  {0x10b7,0x9005,"3c900B-Combo Etherlink XL [Cyclone]"},

  {0x10b7,0x9006,"3c900B-TPC Etherlink XL [Cyclone]"},

  {0x10b7,0x900a,"3c900B-FL 10base-FL [Cyclone]"},

  {0x10b7,0x9050,"3c905 100BaseTX [Boomerang]"},

  {0x10b7,0x9051,"3c905 100BaseT4 [Boomerang]"},

  {0x10b7,0x9054,"3C905B-TX Fast Etherlink XL PCI"},

  {0x10b7,0x9055,"3c905B 100BaseTX [Cyclone]"},

  {0x10b7,0x9056,"3c905B-T4 Fast EtherLink XL [Cyclone]"},

  {0x10b7,0x9058,"3c905B Deluxe Etherlink 10/100/BNC [Cyclone]"},

  {0x10b7,0x905a,"3c905B-FX Fast Etherlink XL FX 100baseFx [Cyclone]"},

  {0x10b7,0x9200,"3c905C-TX/TX-M [Tornado]"},

  {0x10b7,0x9201,"3C920B-EMB Integrated Fast Ethernet Controller [Tornado]"},

  {0x10b7,0x9202,"3Com 3C920B-EMB-WNM Integrated Fast Ethernet Controller"},

  {0x10b7,0x9210,"3C920B-EMB-WNM Integrated Fast Ethernet Controller"},

  {0x10b7,0x9300,"3CSOHO100B-TX 910-A01 [tulip]"},

  {0x10b7,0x9800,"3c980-TX Fast Etherlink XL Server Adapter [Cyclone]"},

  {0x10b7,0x9805,"3c980-C 10/100baseTX NIC [Python-T]"},

  {0x10b7,0x9900,"3C990-TX [Typhoon]"},

  {0x10b7,0x9902,"3CR990-TX-95 [Typhoon 56-bit]"},

  {0x10b7,0x9903,"3CR990-TX-97 [Typhoon 168-bit]"},

  {0x10b7,0x9904,"3C990B-TX-M/3C990BSVR [Typhoon2]"},

  {0x10b7,0x9905,"3CR990-FX-95/97/95 [Typhon Fiber]"},

  {0x10b7,0x9908,"3CR990SVR95 [Typhoon Server 56-bit]"},

  {0x10b7,0x9909,"3CR990SVR97 [Typhoon Server 168-bit]"},

  {0x10b7,0x990a,"3C990SVR [Typhoon Server]"},

  {0x10b7,0x990b,"3C990SVR [Typhoon Server]"},

  {0x10b8,0x0005,"83c170 EPIC/100 Fast Ethernet Adapter"},

  {0x10b8,0x0006,"83c175 EPIC/100 Fast Ethernet Adapter"},

  {0x10b8,0x1000,"FDC 37c665"},

  {0x10b8,0x1001,"FDC 37C922"},

  {0x10b8,0xa011,"83C170QF"},

  {0x10b8,0xb106,"SMC34C90"},

  {0x10b9,0x0101,"CMI8338/C3DX PCI Audio Device"},

  {0x10b9,0x0111,"C-Media CMI8738/C3DX Audio Device (OEM)"},

  {0x10b9,0x0780,"Multi-IO Card"},

  {0x10b9,0x0782,"Multi-IO Card"},

  {0x10b9,0x1435,"M1435"},

  {0x10b9,0x1445,"M1445"},

  {0x10b9,0x1449,"M1449"},

  {0x10b9,0x1451,"M1451"},

  {0x10b9,0x1461,"M1461"},

  {0x10b9,0x1489,"M1489"},

  {0x10b9,0x1511,"M1511 [Aladdin]"},

  {0x10b9,0x1512,"M1512 [Aladdin]"},

  {0x10b9,0x1513,"M1513 [Aladdin]"},

  {0x10b9,0x1521,"M1521 [Aladdin III]"},

  {0x10b9,0x1523,"M1523"},

  {0x10b9,0x1531,"M1531 [Aladdin IV]"},

  {0x10b9,0x1533,"M1533/M1535/M1543 PCI to ISA Bridge [Aladdin IV/V/V+]"},

  {0x10b9,0x1541,"M1541"},

  {0x10b9,0x1543,"M1543"},

  {0x10b9,0x1563,"M1563 HyperTransport South Bridge"},

  {0x10b9,0x1573,"PCI to LPC Controller"},

  {0x10b9,0x1575,"M1575 South Bridge"},

  {0x10b9,0x1621,"M1621"},

  {0x10b9,0x1631,"ALI M1631 PCI North Bridge Aladdin Pro III"},

  {0x10b9,0x1632,"M1632M Northbridge+Trident"},

  {0x10b9,0x1641,"ALI M1641 PCI North Bridge Aladdin Pro IV"},

  {0x10b9,0x1644,"M1644/M1644T Northbridge+Trident"},

  {0x10b9,0x1646,"M1646 Northbridge+Trident"},

  {0x10b9,0x1647,"M1647 Northbridge [MAGiK 1 / MobileMAGiK 1]"},

  {0x10b9,0x1651,"M1651/M1651T Northbridge [Aladdin-Pro 5/5M,Aladdin-Pro 5T/5TM]"},

  {0x10b9,0x1671,"M1671 Super P4 Northbridge [AGP4X,PCI and SDR/DDR]"},

  {0x10b9,0x1672,"M1672 Northbridge [CyberALADDiN-P4]"},

  {0x10b9,0x1681,"M1681 P4 Northbridge [AGP8X,HyperTransport and SDR/DDR]"},

  {0x10b9,0x1687,"M1687 K8 Northbridge [AGP8X and HyperTransport]"},

  {0x10b9,0x1689,"M1689 K8 Northbridge [Super K8 Single Chip]"},

  {0x10b9,0x1695,"M1695 Host Bridge"},

  {0x10b9,0x1697,"M1697 HTT Host Bridge"},

  {0x10b9,0x3141,"M3141"},

  {0x10b9,0x3143,"M3143"},

  {0x10b9,0x3145,"M3145"},

  {0x10b9,0x3147,"M3147"},

  {0x10b9,0x3149,"M3149"},

  {0x10b9,0x3151,"M3151"},

  {0x10b9,0x3307,"M3307"},

  {0x10b9,0x3309,"M3309"},

  {0x10b9,0x3323,"M3325 Video/Audio Decoder"},

  {0x10b9,0x5212,"M4803"},

  {0x10b9,0x5215,"MS4803"},

  {0x10b9,0x5217,"M5217H"},

  {0x10b9,0x5219,"M5219"},

  {0x10b9,0x5225,"M5225"},

  {0x10b9,0x5228,"M5228 ALi ATA/RAID Controller"},

  {0x10b9,0x5229,"M5229 IDE"},

  {0x10b9,0x5235,"M5225"},

  {0x10b9,0x5237,"USB 1.1 Controller"},

  {0x10b9,0x5239,"USB 2.0 Controller"},

  {0x10b9,0x5243,"M1541 PCI to AGP Controller"},

  {0x10b9,0x5246,"AGP8X Controller"},

  {0x10b9,0x5247,"PCI to AGP Controller"},

  {0x10b9,0x5249,"M5249 HTT to PCI Bridge"},

  {0x10b9,0x524b,"PCI Express Root Port"},

  {0x10b9,0x524c,"PCI Express Root Port"},

  {0x10b9,0x524d,"PCI Express Root Port"},

  {0x10b9,0x524e,"PCI Express Root Port"},

  {0x10b9,0x5251,"M5251 P1394 OHCI 1.0 Controller"},

  {0x10b9,0x5253,"M5253 P1394 OHCI 1.1 Controller"},

  {0x10b9,0x5261,"M5261 Ethernet Controller"},

  {0x10b9,0x5263,"ULi 1689,1573 integrated ethernet."},

  {0x10b9,0x5281,"ALi M5281 Serial ATA / RAID Host Controller"},

  {0x10b9,0x5287,"ULi 5287 SATA"},

  {0x10b9,0x5288,"ULi M5288 SATA"},

  {0x10b9,0x5289,"ULi 5289 SATA"},

  {0x10b9,0x5450,"Lucent Technologies Soft Modem AMR"},

  {0x10b9,0x5451,"M5451 PCI AC-Link Controller Audio Device"},

  {0x10b9,0x5453,"M5453 PCI AC-Link Controller Modem Device"},

  {0x10b9,0x5455,"M5455 PCI AC-Link Controller Audio Device"},

  {0x10b9,0x5457,"M5457 AC'97 Modem Controller"},

  {0x10b9,0x5459,"SmartLink SmartPCI561 56K Modem"},

  {0x10b9,0x545a,"SmartLink SmartPCI563 56K Modem"},

  {0x10b9,0x5461,"HD Audio Controller"},

  {0x10b9,0x5471,"M5471 Memory Stick Controller"},

  {0x10b9,0x5473,"M5473 SD-MMC Controller"},

  {0x10b9,0x7101,"M7101 Power Management Controller [PMU]"},

  {0x10ba,0x0301,"AccelGraphics AccelECLIPSE"},

  {0x10ba,0x0304,"AccelGALAXY A2100 [OEM Evans & Sutherland]"},

  {0x10ba,0x0308,"Tornado 3000 [OEM Evans & Sutherland]"},

  {0x10ba,0x1002,"VG500 [VolumePro Volume Rendering Accelerator]"},

  {0x10bd,0x0e34,"NE-34"},

  {0x10c8,0x0001,"NM2070 [MagicGraph 128]"},

  {0x10c8,0x0002,"NM2090 [MagicGraph 128V]"},

  {0x10c8,0x0003,"NM2093 [MagicGraph 128ZV]"},

  {0x10c8,0x0004,"NM2160 [MagicGraph 128XD]"},

  {0x10c8,0x0005,"NM2200 [MagicGraph 256AV]"},

  {0x10c8,0x0006,"NM2360 [MagicMedia 256ZX]"},

  {0x10c8,0x0016,"NM2380 [MagicMedia 256XL+]"},

  {0x10c8,0x0025,"NM2230 [MagicGraph 256AV+]"},

  {0x10c8,0x0083,"NM2093 [MagicGraph 128ZV+]"},

  {0x10c8,0x8005,"NM2200 [MagicMedia 256AV Audio]"},

  {0x10c8,0x8006,"NM2360 [MagicMedia 256ZX Audio]"},

  {0x10c8,0x8016,"NM2380 [MagicMedia 256XL+ Audio]"},

  {0x10cc,0x0660,"Articia S Host Bridge"},

  {0x10cc,0x0661,"Articia S PCI Bridge"},

  {0x10cd,0x1100,"ASC1100"},

  {0x10cd,0x1200,"ASC1200 [(abp940) Fast SCSI-II]"},

  {0x10cd,0x1300,"ASC1300 / ASC3030 [ABP940-U / ABP960-U / ABP3925]"},

  {0x10cd,0x2300,"ABP940-UW"},

  {0x10cd,0x2500,"ABP940-U2W"},

  {0x10cd,0x2700,"ABP3950-U3W"},

  {0x10cf,0x01ef,"PCEA4 PCI-Express Dual Port ESCON Adapter"},

  {0x10cf,0x1414,"On-board USB 1.1 companion controller"},

  {0x10cf,0x1415,"On-board USB 2.0 EHCI controller"},

  {0x10cf,0x1422,"E8410 nVidia graphics adapter"},

  {0x10cf,0x142d,"HD audio (Realtek ALC262)"},

  {0x10cf,0x1430,"82566MM Intel 1Gb copper LAN interface"},

  {0x10cf,0x1623,"PCEA4 PCI-Express Dual Port ESCON Adapter"},

  {0x10cf,0x2001,"mb86605"},

  {0x10cf,0x200c,"MB86613L IEEE1394 OHCI 1.0 Controller"},

  {0x10cf,0x2010,"MB86613S IEEE1394 OHCI 1.1 Controller"},

  {0x10cf,0x2019,"MB86295S [CORAL P]"},

  {0x10cf,0x201e,"MB86296S [CORAL PA]"},

  {0x10cf,0x202b,"MB86297A [Carmine Graphics Controller]"},

  {0x10d9,0x0431,"MX98715"},

  {0x10d9,0x0512,"MX98713"},

  {0x10d9,0x0531,"MX987x5"},

  {0x10d9,0x8625,"MX86250"},

  {0x10d9,0x8626,"Macronix MX86251 + 3Dfx Voodoo Rush"},

  {0x10d9,0x8888,"MX86200"},

  {0x10da,0x0508,"TC4048 Token Ring 4/16"},

  {0x10da,0x3390,"Tl3c3x9"},

  {0x10dc,0x0001,"STAR/RD24 SCI-PCI (PMC)"},

  {0x10dc,0x0002,"TAR/RD24 SCI-PCI (PMC)"},

  {0x10dc,0x0021,"HIPPI destination"},

  {0x10dc,0x0022,"HIPPI source"},

  {0x10dc,0x10dc,"ATT2C15-3 FPGA"},

  {0x10dd,0x0100,"Lightning 1200"},

  {0x10de,0x0008,"NV1 [EDGE 3D]"},

  {0x10de,0x0009,"NV1 [EDGE 3D]"},

  {0x10de,0x0020,"NV4 [Riva TNT]"},

  {0x10de,0x0028,"NV5 [Riva TNT2 / TNT2 Pro]"},

  {0x10de,0x0029,"NV5 [Riva TNT2 Ultra]"},

  {0x10de,0x002a,"NV5 [Riva TNT2]"},

  {0x10de,0x002b,"NV5 [Riva TNT2]"},

  {0x10de,0x002c,"NV5 [Vanta / Vanta LT]"},

  {0x10de,0x002d,"NV5 [Riva TNT2 Model 64 / Model 64 Pro]"},

  {0x10de,0x0034,"MCP04 SMBus"},

  {0x10de,0x0035,"MCP04 IDE"},

  {0x10de,0x0036,"MCP04 Serial ATA Controller"},

  {0x10de,0x0037,"MCP04 Ethernet Controller"},

  {0x10de,0x0038,"MCP04 Ethernet Controller"},

  {0x10de,0x003a,"MCP04 AC'97 Audio Controller"},

  {0x10de,0x003b,"MCP04 USB Controller"},

  {0x10de,0x003c,"MCP04 USB Controller"},

  {0x10de,0x003d,"MCP04 PCI Bridge"},

  {0x10de,0x003e,"MCP04 Serial ATA Controller"},

  {0x10de,0x0040,"NV40 [GeForce 6800 Ultra]"},

  {0x10de,0x0041,"NV40 [GeForce 6800]"},

  {0x10de,0x0042,"NV40 [GeForce 6800 LE]"},

  {0x10de,0x0043,"NV40 [GeForce 6800 XE]"},

  {0x10de,0x0044,"NV40 [GeForce 6800 XT]"},

  {0x10de,0x0045,"NV40 [GeForce 6800 GT]"},

  {0x10de,0x0047,"NV40 [GeForce 6800 GS]"},

  {0x10de,0x0048,"NV40 [GeForce 6800 XT]"},

  {0x10de,0x004e,"NV40GL [Quadro FX 4000]"},

  {0x10de,0x0050,"CK804 ISA Bridge"},

  {0x10de,0x0051,"CK804 ISA Bridge"},

  {0x10de,0x0052,"CK804 SMBus"},

  {0x10de,0x0053,"CK804 IDE"},

  {0x10de,0x0054,"CK804 Serial ATA Controller"},

  {0x10de,0x0055,"CK804 Serial ATA Controller"},

  {0x10de,0x0056,"CK804 Ethernet Controller"},

  {0x10de,0x0057,"CK804 Ethernet Controller"},

  {0x10de,0x0058,"CK804 AC'97 Modem"},

  {0x10de,0x0059,"CK804 AC'97 Audio Controller"},

  {0x10de,0x005a,"CK804 USB Controller"},

  {0x10de,0x005b,"CK804 USB Controller"},

  {0x10de,0x005c,"CK804 PCI Bridge"},

  {0x10de,0x005d,"CK804 PCIE Bridge"},

  {0x10de,0x005e,"CK804 Memory Controller"},

  {0x10de,0x005f,"CK804 Memory Controller"},

  {0x10de,0x0060,"nForce2 ISA Bridge"},

  {0x10de,0x0064,"nForce2 SMBus (MCP)"},

  {0x10de,0x0065,"nForce2 IDE"},

  {0x10de,0x0066,"nForce2 Ethernet Controller"},

  {0x10de,0x0067,"nForce2 USB Controller"},

  {0x10de,0x0068,"nForce2 USB Controller"},

  {0x10de,0x006a,"nForce2 AC97 Audio Controler (MCP)"},

  {0x10de,0x006b,"nForce Audio Processing Unit"},

  {0x10de,0x006c,"nForce2 External PCI Bridge"},

  {0x10de,0x006d,"nForce2 PCI Bridge"},

  {0x10de,0x006e,"nForce2 FireWire (IEEE 1394) Controller"},

  {0x10de,0x0080,"MCP2A ISA bridge"},

  {0x10de,0x0084,"MCP2A SMBus"},

  {0x10de,0x0085,"MCP2A IDE"},

  {0x10de,0x0086,"MCP2A Ethernet Controller"},

  {0x10de,0x0087,"MCP2A USB Controller"},

  {0x10de,0x0088,"MCP2A USB Controller"},

  {0x10de,0x008a,"MCP2S AC'97 Audio Controller"},

  {0x10de,0x008b,"MCP2A PCI Bridge"},

  {0x10de,0x008c,"MCP2A Ethernet Controller"},

  {0x10de,0x008e,"nForce2 Serial ATA Controller"},

  {0x10de,0x0090,"G70 [GeForce 7800 GTX]"},

  {0x10de,0x0091,"G70 [GeForce 7800 GTX]"},

  {0x10de,0x0092,"G70 [GeForce 7800 GT]"},

  {0x10de,0x0093,"G70 [GeForce 7800 GS]"},

  {0x10de,0x0095,"G70 [GeForce 7800 SLI]"},

  {0x10de,0x0097,"G70 [GeForce GTS 250]"},

  {0x10de,0x0098,"G70M [GeForce Go 7800]"},

  {0x10de,0x0099,"G70M [GeForce Go 7800 GTX]"},

  {0x10de,0x009d,"G70GL [Quadro FX 4500]"},

  {0x10de,0x00a0,"NV5 [Aladdin TNT2]"},

  {0x10de,0x00c0,"NV41 [GeForce 6800 GS]"},

  {0x10de,0x00c1,"NV41 [GeForce 6800]"},

  {0x10de,0x00c2,"NV41 [GeForce 6800 LE]"},

  {0x10de,0x00c3,"NV41 [GeForce 6800 XT]"},

  {0x10de,0x00c5,"NV41"},

  {0x10de,0x00c6,"NV41"},

  {0x10de,0x00c7,"NV41"},

  {0x10de,0x00c8,"NV41M [GeForce Go 6800]"},

  {0x10de,0x00c9,"NV41M [GeForce Go 6800 Ultra]"},

  {0x10de,0x00cc,"NV41GLM [Quadro FX Go1400]"},

  {0x10de,0x00cd,"NV42GL [Quadro FX 3450/4000 SDI]"},

  {0x10de,0x00ce,"NV41GL [Quadro FX 1400]"},

  {0x10de,0x00cf,"NV41"},

  {0x10de,0x00d0,"nForce3 LPC Bridge"},

  {0x10de,0x00d1,"nForce3 Host Bridge"},

  {0x10de,0x00d2,"nForce3 AGP Bridge"},

  {0x10de,0x00d3,"CK804 Memory Controller"},

  {0x10de,0x00d4,"nForce3 SMBus"},

  {0x10de,0x00d5,"nForce3 IDE"},

  {0x10de,0x00d6,"nForce3 Ethernet"},

  {0x10de,0x00d7,"nForce3 USB 1.1"},

  {0x10de,0x00d8,"nForce3 USB 2.0"},

  {0x10de,0x00d9,"nForce3 Audio"},

  {0x10de,0x00da,"nForce3 Audio"},

  {0x10de,0x00dd,"nForce3 PCI Bridge"},

  {0x10de,0x00df,"CK8S Ethernet Controller"},

  {0x10de,0x00e0,"nForce3 250Gb LPC Bridge"},

  {0x10de,0x00e1,"nForce3 250Gb Host Bridge"},

  {0x10de,0x00e2,"nForce3 250Gb AGP Host to PCI Bridge"},

  {0x10de,0x00e3,"nForce3 Serial ATA Controller"},

  {0x10de,0x00e4,"nForce 250Gb PCI System Management"},

  {0x10de,0x00e5,"CK8S Parallel ATA Controller (v2.5)"},

  {0x10de,0x00e6,"CK8S Ethernet Controller"},

  {0x10de,0x00e7,"CK8S USB Controller"},

  {0x10de,0x00e8,"nForce3 EHCI USB 2.0 Controller"},

  {0x10de,0x00ea,"nForce3 250Gb AC'97 Audio Controller"},

  {0x10de,0x00ed,"nForce3 250Gb PCI-to-PCI Bridge"},

  {0x10de,0x00ee,"nForce3 Serial ATA Controller 2"},

  {0x10de,0x00f1,"NV43 [GeForce 6600 GT]"},

  {0x10de,0x00f2,"NV43 [GeForce 6600]"},

  {0x10de,0x00f3,"NV43 [GeForce 6200]"},

  {0x10de,0x00f4,"NV43 [GeForce 6600 LE]"},

  {0x10de,0x00f5,"G71 [GeForce 7800 GS]"},

  {0x10de,0x00f6,"NV43 [GeForce 6800 GS/XT]"},

  {0x10de,0x00f8,"NV40GL [Quadro FX 3400/4400]"},

  {0x10de,0x00f9,"NV40 [GeForce 6800 GT/GTO/Ultra]"},

  {0x10de,0x00fa,"NV36 [GeForce PCX 5750]"},

  {0x10de,0x00fb,"NV38 [GeForce PCX 5900]"},

  {0x10de,0x00fc,"NV37GL [Quadro FX 330/GeForce PCX 5300]"},

  {0x10de,0x00fd,"NV37GL [Quadro PCI-E Series]"},

  {0x10de,0x00fe,"NV38GL [Quadro FX 1300]"},

  {0x10de,0x00ff,"NV18 [GeForce PCX 4300]"},

  {0x10de,0x0100,"NV10 [GeForce 256 SDR]"},

  {0x10de,0x0101,"NV10 [GeForce 256 DDR]"},

  {0x10de,0x0103,"NV10GL [Quadro]"},

  {0x10de,0x0110,"NV11 [GeForce2 MX/MX 400]"},

  {0x10de,0x0111,"NV11 [GeForce2 MX200]"},

  {0x10de,0x0112,"NV11M [GeForce2 Go]"},

  {0x10de,0x0113,"NV11GL [Quadro2 MXR/EX/Go]"},

  {0x10de,0x0140,"NV43 [GeForce 6600 GT]"},

  {0x10de,0x0141,"NV43 [GeForce 6600]"},

  {0x10de,0x0142,"NV43 [GeForce 6600 LE]"},

  {0x10de,0x0143,"NV43 [GeForce 6600 VE]"},

  {0x10de,0x0144,"NV43M [GeForce Go 6600]"},

  {0x10de,0x0145,"NV43 [GeForce 6610 XL]"},

  {0x10de,0x0146,"NV43M [GeForce Go6200 TE / 6600 TE]"},

  {0x10de,0x0147,"NV43 [GeForce 6700 XL]"},

  {0x10de,0x0148,"NV43M [GeForce Go 6600]"},

  {0x10de,0x0149,"NV43M [GeForce Go 6600 GT]"},

  {0x10de,0x014a,"NV43 [Quadro NVS 440]"},

  {0x10de,0x014b,"NV43"},

  {0x10de,0x014d,"NV43GL [Quadro FX 550]"},

  {0x10de,0x014e,"NV43GL [Quadro FX 540]"},

  {0x10de,0x014f,"NV43 [GeForce 6200]"},

  {0x10de,0x0150,"NV15 [GeForce2 GTS/Pro]"},

  {0x10de,0x0151,"NV15 [GeForce2 Ti]"},

  {0x10de,0x0152,"NV15 [GeForce2 Ultra]"},

  {0x10de,0x0153,"NV15GL [Quadro2 Pro]"},

  {0x10de,0x0160,"NV44 [GeForce 6500]"},

  {0x10de,0x0161,"NV44 [GeForce 6200 TurboCache]"},

  {0x10de,0x0162,"NV44 [GeForce 6200 SE TurboCache]"},

  {0x10de,0x0163,"NV44 [GeForce 6200 LE]"},

  {0x10de,0x0164,"NV44M [GeForce Go 6200]"},

  {0x10de,0x0165,"NV44 [Quadro NVS 285]"},

  {0x10de,0x0166,"NV44M [GeForce Go 6400]"},

  {0x10de,0x0167,"NV44M [GeForce Go 6200]"},

  {0x10de,0x0168,"NV44M [GeForce Go 6400]"},

  {0x10de,0x0169,"NV44 [GeForce 6250]"},

  {0x10de,0x016a,"NV44 [GeForce 7100 GS]"},

  {0x10de,0x016d,"NV44"},

  {0x10de,0x016e,"NV44"},

  {0x10de,0x016f,"NV44"},

  {0x10de,0x0170,"NV17 [GeForce4 MX 460]"},

  {0x10de,0x0171,"NV17 [GeForce4 MX 440]"},

  {0x10de,0x0172,"NV17 [GeForce4 MX 420]"},

  {0x10de,0x0173,"NV17 [GeForce4 MX 440-SE]"},

  {0x10de,0x0174,"NV17M [GeForce4 440 Go]"},

  {0x10de,0x0175,"NV17M [GeForce4 420 Go]"},

  {0x10de,0x0176,"NV17M [GeForce4 420 Go 32M]"},

  {0x10de,0x0177,"NV17M [GeForce4 460 Go]"},

  {0x10de,0x0178,"NV17GL [Quadro4 550 XGL]"},

  {0x10de,0x0179,"NV17M [GeForce4 440 Go 64M]"},

  {0x10de,0x017a,"NV17GL [Quadro NVS]"},

  {0x10de,0x017b,"NV17GL [Quadro4 550 XGL]"},

  {0x10de,0x017c,"NV17GL [Quadro4 500 GoGL]"},

  {0x10de,0x017f,"NV17"},

  {0x10de,0x0181,"NV18 [GeForce4 MX 440 AGP 8x]"},

  {0x10de,0x0182,"NV18 [GeForce4 MX 440SE AGP 8x]"},

  {0x10de,0x0183,"NV18 [GeForce4 MX 420 AGP 8x]"},

  {0x10de,0x0184,"NV18 [GeForce4 MX]"},

  {0x10de,0x0185,"NV18 [GeForce4 MX 4000]"},

  {0x10de,0x0186,"NV18M [GeForce4 448 Go]"},

  {0x10de,0x0187,"NV18M [GeForce4 488 Go]"},

  {0x10de,0x0188,"NV18GL [Quadro4 580 XGL]"},

  {0x10de,0x0189,"NV18 [GeForce4 MX with AGP8X (Mac)]"},

  {0x10de,0x018a,"NV18GL [Quadro NVS 280 SD]"},

  {0x10de,0x018b,"NV18GL [Quadro4 380 XGL]"},

  {0x10de,0x018c,"NV18GL [Quadro NVS 50 PCI]"},

  {0x10de,0x018d,"NV18M [GeForce4 448 Go]"},

  {0x10de,0x018f,"NV18"},

  {0x10de,0x0190,"G80 [GeForce 8800 GTS / 8800 GTX]"},

  {0x10de,0x0191,"G80 [GeForce 8800 GTX]"},

  {0x10de,0x0192,"G80 [GeForce 8800 GTS]"},

  {0x10de,0x0193,"G80 [GeForce 8800 GTS]"},

  {0x10de,0x0194,"G80 [GeForce 8800 Ultra]"},

  {0x10de,0x0197,"G80GL [Tesla C870]"},

  {0x10de,0x019d,"G80GL [Quadro FX 5600]"},

  {0x10de,0x019e,"G80GL [Quadro FX 4600]"},

  {0x10de,0x01a0,"nForce 220/420 NV11 [GeForce2 MX]"},

  {0x10de,0x01a4,"nForce CPU bridge"},

  {0x10de,0x01ab,"nForce 420 Memory Controller (DDR)"},

  {0x10de,0x01ac,"nForce 220/420 Memory Controller"},

  {0x10de,0x01ad,"nForce 220/420 Memory Controller"},

  {0x10de,0x01b0,"nForce Audio Processing Unit"},

  {0x10de,0x01b1,"nForce AC'97 Audio Controller"},

  {0x10de,0x01b2,"nForce ISA Bridge"},

  {0x10de,0x01b4,"nForce PCI System Management"},

  {0x10de,0x01b7,"nForce AGP to PCI Bridge"},

  {0x10de,0x01b8,"nForce PCI-to-PCI bridge"},

  {0x10de,0x01bc,"nForce IDE"},

  {0x10de,0x01c1,"nForce AC'97 Modem Controller"},

  {0x10de,0x01c2,"nForce USB Controller"},

  {0x10de,0x01c3,"nForce Ethernet Controller"},

  {0x10de,0x01d0,"G72 [GeForce 7350 LE]"},

  {0x10de,0x01d1,"G72 [GeForce 7300 LE]"},

  {0x10de,0x01d2,"G72 [GeForce 7550 LE]"},

  {0x10de,0x01d3,"G72 [GeForce 7200 GS / 7300 SE]"},

  {0x10de,0x01d5,"G72"},

  {0x10de,0x01d6,"G72M [GeForce Go 7200]"},

  {0x10de,0x01d7,"G72M [Quadro NVS 110M/GeForce Go 7300]"},

  {0x10de,0x01d8,"G72M [GeForce Go 7400]"},

  {0x10de,0x01d9,"G72M [GeForce Go 7450]"},

  {0x10de,0x01da,"G72M [Quadro NVS 110M]"},

  {0x10de,0x01db,"G72M [Quadro NVS 120M]"},

  {0x10de,0x01dc,"G72GLM [Quadro FX 350M]"},

  {0x10de,0x01dd,"G72 [GeForce 7500 LE]"},

  {0x10de,0x01de,"G72GL [Quadro FX 350]"},

  {0x10de,0x01df,"G72 [GeForce 7300 GS]"},

  {0x10de,0x01e0,"nForce2 IGP2"},

  {0x10de,0x01e8,"nForce2 AGP"},

  {0x10de,0x01ea,"nForce2 Memory Controller 0"},

  {0x10de,0x01eb,"nForce2 Memory Controller 1"},

  {0x10de,0x01ec,"nForce2 Memory Controller 2"},

  {0x10de,0x01ed,"nForce2 Memory Controller 3"},

  {0x10de,0x01ee,"nForce2 Memory Controller 4"},

  {0x10de,0x01ef,"nForce2 Memory Controller 5"},

  {0x10de,0x01f0,"C17 [GeForce4 MX IGP]"},

  {0x10de,0x0200,"NV20 [GeForce3]"},

  {0x10de,0x0201,"NV20 [GeForce3 Ti 200]"},

  {0x10de,0x0202,"NV20 [GeForce3 Ti 500]"},

  {0x10de,0x0203,"NV20GL [Quadro DCC]"},

  {0x10de,0x0211,"NV48 [GeForce 6800]"},

  {0x10de,0x0212,"NV48 [GeForce 6800 LE]"},

  {0x10de,0x0215,"NV48 [GeForce 6800 GT]"},

  {0x10de,0x0218,"NV48 [GeForce 6800 XT]"},

  {0x10de,0x0221,"NV44A [GeForce 6200]"},

  {0x10de,0x0222,"NV44 [GeForce 6200 A-LE]"},

  {0x10de,0x0224,"NV44"},

  {0x10de,0x0240,"C51PV [GeForce 6150]"},

  {0x10de,0x0241,"C51 [GeForce 6150 LE]"},

  {0x10de,0x0242,"C51G [GeForce 6100]"},

  {0x10de,0x0243,"C51 PCI Express Bridge"},

  {0x10de,0x0244,"C51 [GeForce Go 6150]"},

  {0x10de,0x0245,"C51 [Quadro NVS 210S/GeForce 6150LE]"},

  {0x10de,0x0246,"C51 PCI Express Bridge"},

  {0x10de,0x0247,"C51 [GeForce Go 6100]"},

  {0x10de,0x0248,"C51 PCI Express Bridge"},

  {0x10de,0x0249,"C51 PCI Express Bridge"},

  {0x10de,0x024a,"C51 PCI Express Bridge"},

  {0x10de,0x024b,"C51 PCI Express Bridge"},

  {0x10de,0x024c,"C51 PCI Express Bridge"},

  {0x10de,0x024d,"C51 PCI Express Bridge"},

  {0x10de,0x024e,"C51 PCI Express Bridge"},

  {0x10de,0x024f,"C51 PCI Express Bridge"},

  {0x10de,0x0250,"NV25 [GeForce4 Ti 4600]"},

  {0x10de,0x0251,"NV25 [GeForce4 Ti 4400]"},

  {0x10de,0x0252,"NV25 [GeForce4 Ti]"},

  {0x10de,0x0253,"NV25 [GeForce4 Ti 4200]"},

  {0x10de,0x0258,"NV25GL [Quadro4 900 XGL]"},

  {0x10de,0x0259,"NV25GL [Quadro4 750 XGL]"},

  {0x10de,0x025b,"NV25GL [Quadro4 700 XGL]"},

  {0x10de,0x0260,"MCP51 LPC Bridge"},

  {0x10de,0x0261,"MCP51 LPC Bridge"},

  {0x10de,0x0262,"MCP51 LPC Bridge"},

  {0x10de,0x0263,"MCP51 LPC Bridge"},

  {0x10de,0x0264,"MCP51 SMBus"},

  {0x10de,0x0265,"MCP51 IDE"},

  {0x10de,0x0266,"MCP51 Serial ATA Controller"},

  {0x10de,0x0267,"MCP51 Serial ATA Controller"},

  {0x10de,0x0268,"MCP51 Ethernet Controller"},

  {0x10de,0x0269,"MCP51 Ethernet Controller"},

  {0x10de,0x026a,"MCP51 MCI"},

  {0x10de,0x026b,"MCP51 AC97 Audio Controller"},

  {0x10de,0x026c,"MCP51 High Definition Audio"},

  {0x10de,0x026d,"MCP51 USB Controller"},

  {0x10de,0x026e,"MCP51 USB Controller"},

  {0x10de,0x026f,"MCP51 PCI Bridge"},

  {0x10de,0x0270,"MCP51 Host Bridge"},

  {0x10de,0x0271,"MCP51 PMU"},

  {0x10de,0x0272,"MCP51 Memory Controller 0"},

  {0x10de,0x027e,"C51 Memory Controller 2"},

  {0x10de,0x027f,"C51 Memory Controller 3"},

  {0x10de,0x0280,"NV28 [GeForce4 Ti 4800]"},

  {0x10de,0x0281,"NV28 [GeForce4 Ti 4200 AGP 8x]"},

  {0x10de,0x0282,"NV28 [GeForce4 Ti 4800 SE]"},

  {0x10de,0x0286,"NV28M [GeForce4 Ti 4200 Go AGP 8x]"},

  {0x10de,0x0288,"NV28GL [Quadro4 980 XGL]"},

  {0x10de,0x0289,"NV28GL [Quadro4 780 XGL]"},

  {0x10de,0x028c,"NV28GLM [Quadro4 Go700]"},

  {0x10de,0x0290,"G71 [GeForce 7900 GTX]"},

  {0x10de,0x0291,"G71 [GeForce 7900 GT/GTO]"},

  {0x10de,0x0292,"G71 [GeForce 7900 GS]"},

  {0x10de,0x0293,"G71 [GeForce 7900 GX2]"},

  {0x10de,0x0294,"G71 [GeForce 7950 GX2]"},

  {0x10de,0x0295,"G71 [GeForce 7950 GT]"},

  {0x10de,0x0297,"G71M [GeForce Go 7950 GTX]"},

  {0x10de,0x0298,"G71M [GeForce Go 7900 GS]"},

  {0x10de,0x0299,"G71M [GeForce Go 7900 GTX]"},

  {0x10de,0x029a,"G71GLM [Quadro FX 2500M]"},

  {0x10de,0x029b,"G71GLM [Quadro FX 1500M]"},

  {0x10de,0x029c,"G71GL [Quadro FX 5500]"},

  {0x10de,0x029d,"G71GL [Quadro FX 3500]"},

  {0x10de,0x029e,"G71GL [Quadro FX 1500]"},

  {0x10de,0x029f,"G71GL [Quadro FX 4500 X2]"},

  {0x10de,0x02a0,"NV2A [XGPU]"},

  {0x10de,0x02a5,"MCPX CPU Bridge"},

  {0x10de,0x02a6,"MCPX Memory Controller"},

  {0x10de,0x02e0,"G73 [GeForce 7600 GT]"},

  {0x10de,0x02e1,"G73 [GeForce 7600 GS]"},

  {0x10de,0x02e2,"G73 [GeForce 7300 GT]"},

  {0x10de,0x02e3,"G71 [GeForce 7900 GS]"},

  {0x10de,0x02e4,"G71 [GeForce 7950 GT]"},

  {0x10de,0x02f0,"C51 Host Bridge"},

  {0x10de,0x02f1,"C51 Host Bridge"},

  {0x10de,0x02f2,"C51 Host Bridge"},

  {0x10de,0x02f3,"C51 Host Bridge"},

  {0x10de,0x02f4,"C51 Host Bridge"},

  {0x10de,0x02f5,"C51 Host Bridge"},

  {0x10de,0x02f6,"C51 Host Bridge"},

  {0x10de,0x02f7,"C51 Host Bridge"},

  {0x10de,0x02f8,"C51 Memory Controller 5"},

  {0x10de,0x02f9,"C51 Memory Controller 4"},

  {0x10de,0x02fa,"C51 Memory Controller 0"},

  {0x10de,0x02fb,"C51 PCI Express Bridge"},

  {0x10de,0x02fc,"C51 PCI Express Bridge"},

  {0x10de,0x02fd,"C51 PCI Express Bridge"},

  {0x10de,0x02fe,"C51 Memory Controller 1"},

  {0x10de,0x02ff,"C51 Host Bridge"},

  {0x10de,0x0300,"NV30 [GeForce FX]"},

  {0x10de,0x0301,"NV30 [GeForce FX 5800 Ultra]"},

  {0x10de,0x0302,"NV30 [GeForce FX 5800]"},

  {0x10de,0x0308,"NV30GL [Quadro FX 2000]"},

  {0x10de,0x0309,"NV30GL [Quadro FX 1000]"},

  {0x10de,0x0311,"NV31 [GeForce FX 5600 Ultra]"},

  {0x10de,0x0312,"NV31 [GeForce FX 5600]"},

  {0x10de,0x0314,"NV31 [GeForce FX 5600XT]"},

  {0x10de,0x0316,"NV31M"},

  {0x10de,0x0318,"NV31GL"},

  {0x10de,0x031a,"NV31M [GeForce FX Go5600]"},

  {0x10de,0x031b,"NV31M [GeForce FX Go5650]"},

  {0x10de,0x031c,"NV31GLM [Quadro FX Go700]"},

  {0x10de,0x0320,"NV34 [GeForce FX 5200]"},

  {0x10de,0x0321,"NV34 [GeForce FX 5200 Ultra]"},

  {0x10de,0x0322,"NV34 [GeForce FX 5200]"},

  {0x10de,0x0323,"NV34 [GeForce FX 5200LE]"},

  {0x10de,0x0324,"NV34M [GeForce FX Go5200 64M]"},

  {0x10de,0x0325,"NV34M [GeForce FX Go5250]"},

  {0x10de,0x0326,"NV34 [GeForce FX 5500]"},

  {0x10de,0x0327,"NV34 [GeForce FX 5100]"},

  {0x10de,0x0328,"NV34M [GeForce FX Go5200 32M/64M]"},

  {0x10de,0x0329,"NV34M [GeForce FX Go5200]"},

  {0x10de,0x032a,"NV34GL [Quadro NVS 280 PCI]"},

  {0x10de,0x032b,"NV34GL [Quadro FX 500/600 PCI]"},

  {0x10de,0x032c,"NV34M [GeForce FX Go5300 / Go5350]"},

  {0x10de,0x032d,"NV34M [GeForce FX Go5100]"},

  {0x10de,0x032e,"NV34"},

  {0x10de,0x032f,"NV34 [GeForce FX 5200]"},

  {0x10de,0x0330,"NV35 [GeForce FX 5900 Ultra]"},

  {0x10de,0x0331,"NV35 [GeForce FX 5900]"},

  {0x10de,0x0332,"NV35 [GeForce FX 5900XT]"},

  {0x10de,0x0333,"NV38 [GeForce FX 5950 Ultra]"},

  {0x10de,0x0334,"NV35 [GeForce FX 5900ZT]"},

  {0x10de,0x0338,"NV35GL [Quadro FX 3000]"},

  {0x10de,0x033f,"NV35GL [Quadro FX 700]"},

  {0x10de,0x0341,"NV36 [GeForce FX 5700 Ultra]"},

  {0x10de,0x0342,"NV36 [GeForce FX 5700]"},

  {0x10de,0x0343,"NV36 [GeForce FX 5700LE]"},

  {0x10de,0x0344,"NV36 [GeForce FX 5700VE]"},

  {0x10de,0x0347,"NV36M [GeForce FX Go5700]"},

  {0x10de,0x0348,"NV36M [GeForce FX Go5700]"},

  {0x10de,0x034c,"NV36 [Quadro FX Go1000]"},

  {0x10de,0x034d,"NV36"},

  {0x10de,0x034e,"NV36GL [Quadro FX 1100]"},

  {0x10de,0x0360,"MCP55 LPC Bridge"},

  {0x10de,0x0361,"MCP55 LPC Bridge"},

  {0x10de,0x0362,"MCP55 LPC Bridge"},

  {0x10de,0x0363,"MCP55 LPC Bridge"},

  {0x10de,0x0364,"MCP55 LPC Bridge"},

  {0x10de,0x0365,"MCP55 LPC Bridge"},

  {0x10de,0x0366,"MCP55 LPC Bridge"},

  {0x10de,0x0367,"MCP55 LPC Bridge"},

  {0x10de,0x0368,"MCP55 SMBus Controller"},

  {0x10de,0x0369,"MCP55 Memory Controller"},

  {0x10de,0x036a,"MCP55 Memory Controller"},

  {0x10de,0x036b,"MCP55 SMU"},

  {0x10de,0x036c,"MCP55 USB Controller"},

  {0x10de,0x036d,"MCP55 USB Controller"},

  {0x10de,0x036e,"MCP55 IDE"},

  {0x10de,0x0370,"MCP55 PCI bridge"},

  {0x10de,0x0371,"MCP55 High Definition Audio"},

  {0x10de,0x0372,"MCP55 Ethernet"},

  {0x10de,0x0373,"MCP55 Ethernet"},

  {0x10de,0x0374,"MCP55 PCI Express bridge"},

  {0x10de,0x0375,"MCP55 PCI Express bridge"},

  {0x10de,0x0376,"MCP55 PCI Express bridge"},

  {0x10de,0x0377,"MCP55 PCI Express bridge"},

  {0x10de,0x0378,"MCP55 PCI Express bridge"},

  {0x10de,0x037a,"MCP55 Memory Controller"},

  {0x10de,0x037e,"MCP55 SATA Controller"},

  {0x10de,0x037f,"MCP55 SATA Controller"},

  {0x10de,0x038b,"G73 [GeForce 7650 GS]"},

  {0x10de,0x0390,"G73 [GeForce 7650 GS]"},

  {0x10de,0x0391,"G73 [GeForce 7600 GT]"},

  {0x10de,0x0392,"G73 [GeForce 7600 GS]"},

  {0x10de,0x0393,"G73 [GeForce 7300 GT]"},

  {0x10de,0x0394,"G73 [GeForce 7600 LE]"},

  {0x10de,0x0395,"G73 [GeForce 7300 GT]"},

  {0x10de,0x0396,"G73"},

  {0x10de,0x0397,"G73M [GeForce Go 7700]"},

  {0x10de,0x0398,"G73M [GeForce Go 7600]"},

  {0x10de,0x0399,"G73M [GeForce Go 7600 GT]"},

  {0x10de,0x039a,"G73M [Quadro NVS 300M]"},

  {0x10de,0x039b,"G73M [GeForce Go 7900 SE]"},

  {0x10de,0x039c,"G73GLM [Quadro FX 550M]"},

  {0x10de,0x039d,"G73"},

  {0x10de,0x039e,"G73GL [Quadro FX 560]"},

  {0x10de,0x039f,"G73"},

  {0x10de,0x03a0,"C55 Host Bridge"},

  {0x10de,0x03a1,"C55 Host Bridge"},

  {0x10de,0x03a2,"C55 Host Bridge"},

  {0x10de,0x03a3,"C55 Host Bridge"},

  {0x10de,0x03a4,"C55 Host Bridge"},

  {0x10de,0x03a5,"C55 Host Bridge"},

  {0x10de,0x03a6,"C55 Host Bridge"},

  {0x10de,0x03a7,"C55 Host Bridge"},

  {0x10de,0x03a8,"C55 Memory Controller"},

  {0x10de,0x03a9,"C55 Memory Controller"},

  {0x10de,0x03aa,"C55 Memory Controller"},

  {0x10de,0x03ab,"C55 Memory Controller"},

  {0x10de,0x03ac,"C55 Memory Controller"},

  {0x10de,0x03ad,"C55 Memory Controller"},

  {0x10de,0x03ae,"C55 Memory Controller"},

  {0x10de,0x03af,"C55 Memory Controller"},

  {0x10de,0x03b0,"C55 Memory Controller"},

  {0x10de,0x03b1,"C55 Memory Controller"},

  {0x10de,0x03b2,"C55 Memory Controller"},

  {0x10de,0x03b3,"C55 Memory Controller"},

  {0x10de,0x03b4,"C55 Memory Controller"},

  {0x10de,0x03b5,"C55 Memory Controller"},

  {0x10de,0x03b6,"C55 Memory Controller"},

  {0x10de,0x03b7,"C55 PCI Express bridge"},

  {0x10de,0x03b8,"C55 PCI Express bridge"},

  {0x10de,0x03b9,"C55 PCI Express bridge"},

  {0x10de,0x03ba,"C55 Memory Controller"},

  {0x10de,0x03bb,"C55 PCI Express bridge"},

  {0x10de,0x03bc,"C55 Memory Controller"},

  {0x10de,0x03d0,"C61 [GeForce 6150SE nForce 430]"},

  {0x10de,0x03d1,"C61 [GeForce 6100 nForce 405]"},

  {0x10de,0x03d2,"C61 [GeForce 6100 nForce 400]"},

  {0x10de,0x03d5,"C61 [GeForce 6100 nForce 420]"},

  {0x10de,0x03d6,"C61 [GeForce 7025 / nForce 630a]"},

  {0x10de,0x03e0,"MCP61 LPC Bridge"},

  {0x10de,0x03e1,"MCP61 LPC Bridge"},

  {0x10de,0x03e2,"MCP61 Host Bridge"},

  {0x10de,0x03e3,"MCP61 LPC Bridge"},

  {0x10de,0x03e4,"MCP61 High Definition Audio"},

  {0x10de,0x03e5,"MCP61 Ethernet"},

  {0x10de,0x03e6,"MCP61 Ethernet"},

  {0x10de,0x03e7,"MCP61 SATA Controller"},

  {0x10de,0x03e8,"MCP61 PCI Express bridge"},

  {0x10de,0x03e9,"MCP61 PCI Express bridge"},

  {0x10de,0x03ea,"MCP61 Memory Controller"},

  {0x10de,0x03eb,"MCP61 SMBus"},

  {0x10de,0x03ec,"MCP61 IDE"},

  {0x10de,0x03ee,"MCP61 Ethernet"},

  {0x10de,0x03ef,"MCP61 Ethernet"},

  {0x10de,0x03f0,"MCP61 High Definition Audio"},

  {0x10de,0x03f1,"MCP61 USB 1.1 Controller"},

  {0x10de,0x03f2,"MCP61 USB 2.0 Controller"},

  {0x10de,0x03f3,"MCP61 PCI bridge"},

  {0x10de,0x03f4,"MCP61 SMU"},

  {0x10de,0x03f5,"MCP61 Memory Controller"},

  {0x10de,0x03f6,"MCP61 SATA Controller"},

  {0x10de,0x03f7,"MCP61 SATA Controller"},

  {0x10de,0x0400,"G84 [GeForce 8600 GTS]"},

  {0x10de,0x0401,"G84 [GeForce 8600 GT]"},

  {0x10de,0x0402,"G84 [GeForce 8600 GT]"},

  {0x10de,0x0403,"G84 [GeForce 8600 GS]"},

  {0x10de,0x0404,"G84 [GeForce 8400 GS]"},

  {0x10de,0x0405,"G84M [GeForce 9500M GS]"},

  {0x10de,0x0406,"G84 [GeForce 8300 GS]"},

  {0x10de,0x0407,"G84M [GeForce 8600M GT]"},

  {0x10de,0x0408,"G84M [GeForce 9650M GS]"},

  {0x10de,0x0409,"G84M [GeForce 8700M GT]"},

  {0x10de,0x040a,"G84GL [Quadro FX 370]"},

  {0x10de,0x040b,"G84GLM [Quadro NVS 320M]"},

  {0x10de,0x040c,"G84GLM [Quadro FX 570M]"},

  {0x10de,0x040d,"G84GLM [Quadro FX 1600M]"},

  {0x10de,0x040e,"G84GL [Quadro FX 570]"},

  {0x10de,0x040f,"G84GL [Quadro FX 1700]"},

  {0x10de,0x0410,"G92 [GeForce GT 330]"},

  {0x10de,0x0414,"G92 [GeForce 9800 GT]"},

  {0x10de,0x0420,"G86 [GeForce 8400 SE]"},

  {0x10de,0x0421,"G86 [GeForce 8500 GT]"},

  {0x10de,0x0422,"G86 [GeForce 8400 GS]"},

  {0x10de,0x0423,"G86 [GeForce 8300 GS]"},

  {0x10de,0x0424,"G86 [GeForce 8400 GS]"},

  {0x10de,0x0425,"G86M [GeForce 8600M GS]"},

  {0x10de,0x0426,"G86M [GeForce 8400M GT]"},

  {0x10de,0x0427,"G86M [GeForce 8400M GS]"},

  {0x10de,0x0428,"G86M [GeForce 8400M G]"},

  {0x10de,0x0429,"G86M [Quadro NVS 140M]"},

  {0x10de,0x042a,"G86M [Quadro NVS 130M]"},

  {0x10de,0x042b,"G86M [Quadro NVS 135M]"},

  {0x10de,0x042c,"G86 [GeForce 9400 GT]"},

  {0x10de,0x042d,"G86GLM [Quadro FX 360M]"},

  {0x10de,0x042e,"G86M [GeForce 9300M G]"},

  {0x10de,0x042f,"G86 [Quadro NVS 290]"},

  {0x10de,0x0440,"MCP65 LPC Bridge"},

  {0x10de,0x0441,"MCP65 LPC Bridge"},

  {0x10de,0x0442,"MCP65 LPC Bridge"},

  {0x10de,0x0443,"MCP65 LPC Bridge"},

  {0x10de,0x0444,"MCP65 Memory Controller"},

  {0x10de,0x0445,"MCP65 Memory Controller"},

  {0x10de,0x0446,"MCP65 SMBus"},

  {0x10de,0x0447,"MCP65 SMU"},

  {0x10de,0x0448,"MCP65 IDE"},

  {0x10de,0x0449,"MCP65 PCI bridge"},

  {0x10de,0x044a,"MCP65 High Definition Audio"},

  {0x10de,0x044b,"MCP65 High Definition Audio"},

  {0x10de,0x044c,"MCP65 AHCI Controller"},

  {0x10de,0x044d,"MCP65 AHCI Controller"},

  {0x10de,0x044e,"MCP65 AHCI Controller"},

  {0x10de,0x044f,"MCP65 AHCI Controller"},

  {0x10de,0x0450,"MCP65 Ethernet"},

  {0x10de,0x0451,"MCP65 Ethernet"},

  {0x10de,0x0452,"MCP65 Ethernet"},

  {0x10de,0x0453,"MCP65 Ethernet"},

  {0x10de,0x0454,"MCP65 USB 1.1 OHCI Controller"},

  {0x10de,0x0455,"MCP65 USB 2.0 EHCI Controller"},

  {0x10de,0x0456,"MCP65 USB Controller"},

  {0x10de,0x0457,"MCP65 USB Controller"},

  {0x10de,0x0458,"MCP65 PCI Express bridge"},

  {0x10de,0x0459,"MCP65 PCI Express bridge"},

  {0x10de,0x045a,"MCP65 PCI Express bridge"},

  {0x10de,0x045b,"MCP65 PCI Express bridge"},

  {0x10de,0x045c,"MCP65 SATA Controller"},

  {0x10de,0x045d,"MCP65 SATA Controller"},

  {0x10de,0x045e,"MCP65 SATA Controller"},

  {0x10de,0x045f,"MCP65 SATA Controller"},

  {0x10de,0x0531,"C67 [GeForce 7150M / nForce 630M]"},

  {0x10de,0x0533,"C67 [GeForce 7000M / nForce 610M]"},

  {0x10de,0x053a,"C68 [GeForce 7050 PV / nForce 630a]"},

  {0x10de,0x053b,"C68 [GeForce 7050 PV / nForce 630a]"},

  {0x10de,0x053e,"C68 [GeForce 7025 / nForce 630a]"},

  {0x10de,0x0541,"MCP67 Memory Controller"},

  {0x10de,0x0542,"MCP67 SMBus"},

  {0x10de,0x0543,"MCP67 Co-processor"},

  {0x10de,0x0547,"MCP67 Memory Controller"},

  {0x10de,0x0548,"MCP67 ISA Bridge"},

  {0x10de,0x054c,"MCP67 Ethernet"},

  {0x10de,0x054d,"MCP67 Ethernet"},

  {0x10de,0x054e,"MCP67 Ethernet"},

  {0x10de,0x054f,"MCP67 Ethernet"},

  {0x10de,0x0550,"MCP67 AHCI Controller"},

  {0x10de,0x0554,"MCP67 AHCI Controller"},

  {0x10de,0x0555,"MCP67 SATA Controller"},

  {0x10de,0x055c,"MCP67 High Definition Audio"},

  {0x10de,0x055d,"MCP67 High Definition Audio"},

  {0x10de,0x055e,"MCP67 OHCI USB 1.1 Controller"},

  {0x10de,0x055f,"MCP67 EHCI USB 2.0 Controller"},

  {0x10de,0x0560,"MCP67 IDE Controller"},

  {0x10de,0x0561,"MCP67 PCI Bridge"},

  {0x10de,0x0562,"MCP67 PCI Express Bridge"},

  {0x10de,0x0563,"MCP67 PCI Express Bridge"},

  {0x10de,0x0568,"MCP78S [GeForce 8200] Memory Controller"},

  {0x10de,0x0569,"MCP78S [GeForce 8200] PCI Express Bridge"},

  {0x10de,0x056a,"MCP73 [nForce 630i] USB 2.0 Controller (EHCI)"},

  {0x10de,0x056c,"MCP73 IDE Controller"},

  {0x10de,0x056d,"MCP73 PCI Express bridge"},

  {0x10de,0x056e,"MCP73 PCI Express bridge"},

  {0x10de,0x056f,"MCP73 PCI Express bridge"},

  {0x10de,0x05b1,"NF200 PCIe 2.0 switch"},

  {0x10de,0x05b8,"NF200 PCIe 2.0 switch for GTX 295"},

  {0x10de,0x05be,"NF200 PCIe 2.0 switch for Quadro Plex S4 / Tesla S870 / Tesla S1070 / Tesla S2050"},

  {0x10de,0x05e0,"GT200b [GeForce GTX 295]"},

  {0x10de,0x05e1,"GT200 [GeForce GTX 280]"},

  {0x10de,0x05e2,"GT200 [GeForce GTX 260]"},

  {0x10de,0x05e3,"GT200b [GeForce GTX 285]"},

  {0x10de,0x05e6,"GT200b [GeForce GTX 275]"},

  {0x10de,0x05e7,"GT200GL [Tesla C1060 / M1060]"},

  {0x10de,0x05ea,"GT200 [GeForce GTX 260]"},

  {0x10de,0x05eb,"GT200 [GeForce GTX 295]"},

  {0x10de,0x05ed,"GT200GL [Quadro Plex 2200 D2]"},

  {0x10de,0x05f1,"GT200 [GeForce GTX 280]"},

  {0x10de,0x05f2,"GT200 [GeForce GTX 260]"},

  {0x10de,0x05f8,"GT200GL [Quadro Plex 2200 S4]"},

  {0x10de,0x05f9,"GT200GL [Quadro CX]"},

  {0x10de,0x05fd,"GT200GL [Quadro FX 5800]"},

  {0x10de,0x05fe,"GT200GL [Quadro FX 4800]"},

  {0x10de,0x05ff,"GT200GL [Quadro FX 3800]"},

  {0x10de,0x0600,"G92 [GeForce 8800 GTS 512]"},

  {0x10de,0x0601,"G92 [GeForce 9800 GT]"},

  {0x10de,0x0602,"G92 [GeForce 8800 GT]"},

  {0x10de,0x0603,"G92 [GeForce GT 230 OEM]"},

  {0x10de,0x0604,"G92 [GeForce 9800 GX2]"},

  {0x10de,0x0605,"G92 [GeForce 9800 GT]"},

  {0x10de,0x0606,"G92 [GeForce 8800 GS]"},

  {0x10de,0x0607,"G92 [GeForce GTS 240]"},

  {0x10de,0x0608,"G92M [GeForce 9800M GTX]"},

  {0x10de,0x0609,"G92M [GeForce 8800M GTS]"},

  {0x10de,0x060a,"G92M [GeForce GTX 280M]"},

  {0x10de,0x060b,"G92M [GeForce 9800M GT]"},

  {0x10de,0x060c,"G92M [GeForce 8800M GTX]"},

  {0x10de,0x060d,"G92 [GeForce 8800 GS]"},

  {0x10de,0x060f,"G92M [GeForce GTX 285M]"},

  {0x10de,0x0610,"G92 [GeForce 9600 GSO]"},

  {0x10de,0x0611,"G92 [GeForce 8800 GT]"},

  {0x10de,0x0612,"G92 [GeForce 9800 GTX / 9800 GTX+]"},

  {0x10de,0x0613,"G92 [GeForce 9800 GTX+]"},

  {0x10de,0x0614,"G92 [GeForce 9800 GT]"},

  {0x10de,0x0615,"G92 [GeForce GTS 250]"},

  {0x10de,0x0617,"G92M [GeForce 9800M GTX]"},

  {0x10de,0x0618,"G92M [GeForce GTX 260M]"},

  {0x10de,0x0619,"G92GL [Quadro FX 4700 X2]"},

  {0x10de,0x061a,"G92GL [Quadro FX 3700]"},

  {0x10de,0x061b,"G92GL [Quadro VX 200]"},

  {0x10de,0x061c,"G92GLM [Quadro FX 3600M]"},

  {0x10de,0x061d,"G92GLM [Quadro FX 2800M]"},

  {0x10de,0x061e,"G92GLM [Quadro FX 3700M]"},

  {0x10de,0x061f,"G92GLM [Quadro FX 3800M]"},

  {0x10de,0x0620,"G94 [GeForce 9800 GT]"},

  {0x10de,0x0621,"G94 [GeForce GT 230]"},

  {0x10de,0x0622,"G94 [GeForce 9600 GT]"},

  {0x10de,0x0623,"G94 [GeForce 9600 GS]"},

  {0x10de,0x0624,"G94 [GeForce 9600 GT Green Edition]"},

  {0x10de,0x0625,"G94 [GeForce 9600 GSO 512]"},

  {0x10de,0x0626,"G94 [GeForce GT 130]"},

  {0x10de,0x0627,"G94 [GeForce GT 140]"},

  {0x10de,0x0628,"G94M [GeForce 9800M GTS]"},

  {0x10de,0x062a,"G94M [GeForce 9700M GTS]"},

  {0x10de,0x062b,"G94M [GeForce 9800M GS]"},

  {0x10de,0x062c,"G94M [GeForce 9800M GTS]"},

  {0x10de,0x062d,"G94 [GeForce 9600 GT]"},

  {0x10de,0x062e,"G94 [GeForce 9600 GT]"},

  {0x10de,0x062f,"G94 [GeForce 9800 S]"},

  {0x10de,0x0630,"G94 [GeForce 9600 GT]"},

  {0x10de,0x0631,"G94M [GeForce GTS 160M]"},

  {0x10de,0x0632,"G94M [GeForce GTS 150M]"},

  {0x10de,0x0633,"G94 [GeForce GT 220]"},

  {0x10de,0x0635,"G94 [GeForce 9600 GSO]"},

  {0x10de,0x0637,"G94 [GeForce 9600 GT]"},

  {0x10de,0x0638,"G94GL [Quadro FX 1800]"},

  {0x10de,0x063a,"G94GLM [Quadro FX 2700M]"},

  {0x10de,0x063f,"G94 [GeForce 9600 GE]"},

  {0x10de,0x0640,"G96 [GeForce 9500 GT]"},

  {0x10de,0x0641,"G96 [GeForce 9400 GT]"},

  {0x10de,0x0642,"G96 [D9M-10]"},

  {0x10de,0x0643,"G96 [GeForce 9500 GT]"},

  {0x10de,0x0644,"G96 [GeForce 9500 GS]"},

  {0x10de,0x0645,"G96 [GeForce 9500 GS]"},

  {0x10de,0x0646,"G96 [GeForce GT 120]"},

  {0x10de,0x0647,"G96M [GeForce 9600M GT]"},

  {0x10de,0x0648,"G96M [GeForce 9600M GS]"},

  {0x10de,0x0649,"G96M [GeForce 9600M GT]"},

  {0x10de,0x064a,"G96M [GeForce 9700M GT]"},

  {0x10de,0x064b,"G96M [GeForce 9500M G]"},

  {0x10de,0x064c,"G96M [GeForce 9650M GT]"},

  {0x10de,0x064d,"G96 [GeForce 9600 GT]"},

  {0x10de,0x064e,"G96 [GeForce 9600 GT / 9800 GT]"},

  {0x10de,0x0651,"G96M [GeForce G 110M]"},

  {0x10de,0x0652,"G96M [GeForce GT 130M]"},

  {0x10de,0x0653,"G96M [GeForce GT 120M]"},

  {0x10de,0x0654,"G96M [GeForce GT 220M]"},

  {0x10de,0x0655,"G96 [GeForce GT 120]"},

  {0x10de,0x0656,"G96 [GeForce 9650 S]"},

  {0x10de,0x0658,"G96GL [Quadro FX 380]"},

  {0x10de,0x0659,"G96GL [Quadro FX 580]"},

  {0x10de,0x065a,"G96GLM [Quadro FX 1700M]"},

  {0x10de,0x065b,"G96 [GeForce 9400 GT]"},

  {0x10de,0x065c,"G96GLM [Quadro FX 770M]"},

  {0x10de,0x065d,"G96 [GeForce 9500 GA / 9600 GT / GTS 250]"},

  {0x10de,0x065f,"G96 [GeForce G210]"},

  {0x10de,0x06c0,"GF100 [GeForce GTX 480]"},

  {0x10de,0x06c4,"GF100 [GeForce GTX 465]"},

  {0x10de,0x06ca,"GF100M [GeForce GTX 480M]"},

  {0x10de,0x06cb,"GF100 [GeForce GTX 480]"},

  {0x10de,0x06cd,"GF100 [GeForce GTX 470]"},

  {0x10de,0x06d1,"GF100GL [Tesla C2050 / C2070]"},

  {0x10de,0x06d2,"GF100GL [Tesla M2070]"},

  {0x10de,0x06d8,"GF100GL [Quadro 6000]"},

  {0x10de,0x06d9,"GF100GL [Quadro 5000]"},

  {0x10de,0x06da,"GF100GLM [Quadro 5000M]"},

  {0x10de,0x06dc,"GF100GL [Quadro 6000]"},

  {0x10de,0x06dd,"GF100GL [Quadro 4000]"},

  {0x10de,0x06de,"GF100GL [Tesla T20 Processor]"},

  {0x10de,0x06df,"GF100GL [Tesla M2070-Q]"},

  {0x10de,0x06e0,"G98 [GeForce 9300 GE]"},

  {0x10de,0x06e1,"G98 [GeForce 9300 GS]"},

  {0x10de,0x06e2,"G98 [GeForce 8400]"},

  {0x10de,0x06e3,"G98 [GeForce 8300 GS]"},

  {0x10de,0x06e4,"G98 [GeForce 8400 GS Rev. 2]"},

  {0x10de,0x06e5,"G98M [GeForce 9300M GS]"},

  {0x10de,0x06e6,"G98 [GeForce G 100]"},

  {0x10de,0x06e7,"G98 [GeForce 9300 SE]"},

  {0x10de,0x06e8,"G98M [GeForce 9200M GS]"},

  {0x10de,0x06e9,"G98M [GeForce 9300M GS]"},

  {0x10de,0x06ea,"G98M [Quadro NVS 150M]"},

  {0x10de,0x06eb,"G98M [Quadro NVS 160M]"},

  {0x10de,0x06ec,"G98M [GeForce G 105M]"},

  {0x10de,0x06ed,"G98 [GeForce 9600 GT / 9800 GT]"},

  {0x10de,0x06ee,"G98 [GeForce 9600 GT / 9800 GT]"},

  {0x10de,0x06ef,"G98M [GeForce G 103M]"},

  {0x10de,0x06f1,"G98M [GeForce G 105M]"},

  {0x10de,0x06f8,"G98 [Quadro NVS 420]"},

  {0x10de,0x06f9,"G98GL [Quadro FX 370 LP]"},

  {0x10de,0x06fa,"G98 [Quadro NVS 450]"},

  {0x10de,0x06fb,"G98GLM [Quadro FX 370M]"},

  {0x10de,0x06fd,"G98 [Quadro NVS 295]"},

  {0x10de,0x06ff,"G98 [HICx16 + Graphics]"},

  {0x10de,0x0751,"MCP78S [GeForce 8200] Memory Controller"},

  {0x10de,0x0752,"MCP78S [GeForce 8200] SMBus"},

  {0x10de,0x0753,"MCP78S [GeForce 8200] Co-Processor"},

  {0x10de,0x0754,"MCP78S [GeForce 8200] Memory Controller"},

  {0x10de,0x0759,"MCP78S [GeForce 8200] IDE"},

  {0x10de,0x075a,"MCP78S [GeForce 8200] PCI Bridge"},

  {0x10de,0x075b,"MCP78S [GeForce 8200] PCI Express Bridge"},

  {0x10de,0x075c,"MCP78S [GeForce 8200] LPC Bridge"},

  {0x10de,0x075d,"MCP78S [GeForce 8200] LPC Bridge"},

  {0x10de,0x0760,"MCP77 Ethernet"},

  {0x10de,0x0761,"MCP77 Ethernet"},

  {0x10de,0x0762,"MCP77 Ethernet"},

  {0x10de,0x0763,"MCP77 Ethernet"},

  {0x10de,0x0774,"MCP72XE/MCP72P/MCP78U/MCP78S High Definition Audio"},

  {0x10de,0x0778,"MCP78S [GeForce 8200] PCI Express Bridge"},

  {0x10de,0x077a,"MCP78S [GeForce 8200] PCI Bridge"},

  {0x10de,0x077b,"MCP78S [GeForce 8200] OHCI USB 1.1 Controller"},

  {0x10de,0x077c,"MCP78S [GeForce 8200] EHCI USB 2.0 Controller"},

  {0x10de,0x077d,"MCP78S [GeForce 8200] OHCI USB 1.1 Controller"},

  {0x10de,0x077e,"MCP78S [GeForce 8200] EHCI USB 2.0 Controller"},

  {0x10de,0x07c0,"MCP73 Host Bridge"},

  {0x10de,0x07c1,"MCP73 Host Bridge"},

  {0x10de,0x07c2,"MCP73 Host Bridge"},

  {0x10de,0x07c3,"MCP73 Host Bridge"},

  {0x10de,0x07c5,"MCP73 Host Bridge"},

  {0x10de,0x07c8,"MCP73 Memory Controller"},

  {0x10de,0x07cb,"nForce 610i/630i memory controller"},

  {0x10de,0x07cd,"nForce 610i/630i memory controller"},

  {0x10de,0x07ce,"nForce 610i/630i memory controller"},

  {0x10de,0x07cf,"nForce 610i/630i memory controller"},

  {0x10de,0x07d0,"nForce 610i/630i memory controller"},

  {0x10de,0x07d1,"nForce 610i/630i memory controller"},

  {0x10de,0x07d2,"nForce 610i/630i memory controller"},

  {0x10de,0x07d3,"nForce 610i/630i memory controller"},

  {0x10de,0x07d6,"nForce 610i/630i memory controller"},

  {0x10de,0x07d7,"MCP73 LPC Bridge"},

  {0x10de,0x07d8,"MCP73 SMBus"},

  {0x10de,0x07d9,"MCP73 Memory Controller"},

  {0x10de,0x07da,"MCP73 Co-processor"},

  {0x10de,0x07dc,"MCP73 Ethernet"},

  {0x10de,0x07dd,"MCP73 Ethernet"},

  {0x10de,0x07de,"MCP73 Ethernet"},

  {0x10de,0x07df,"MCP73 Ethernet"},

  {0x10de,0x07e0,"C73 [GeForce 7150 / nForce 630i]"},

  {0x10de,0x07e1,"C73 [GeForce 7100 / nForce 630i]"},

  {0x10de,0x07e2,"C73 [GeForce 7050 / nForce 630i]"},

  {0x10de,0x07e3,"C73 [GeForce 7050 / nForce 610i]"},

  {0x10de,0x07e5,"C73 [GeForce 7100 / nForce 620i]"},

  {0x10de,0x07f0,"MCP73 SATA Controller (IDE mode)"},

  {0x10de,0x07f4,"GeForce 7100/nForce 630i SATA"},

  {0x10de,0x07f8,"MCP73 SATA RAID Controller"},

  {0x10de,0x07fc,"MCP73 High Definition Audio"},

  {0x10de,0x07fe,"MCP73 OHCI USB 1.1 Controller"},

  {0x10de,0x0840,"C77 [GeForce 8200M]"},

  {0x10de,0x0844,"C77 [GeForce 9100M G]"},

  {0x10de,0x0845,"C77 [GeForce 8200M G]"},

  {0x10de,0x0846,"C77 [GeForce 9200]"},

  {0x10de,0x0847,"C78 [GeForce 9100]"},

  {0x10de,0x0848,"C77 [GeForce 8300]"},

  {0x10de,0x0849,"C77 [GeForce 8200]"},

  {0x10de,0x084a,"C77 [nForce 730a]"},

  {0x10de,0x084b,"C77 [GeForce 8200]"},

  {0x10de,0x084c,"C77 [nForce 780a/980a SLI]"},

  {0x10de,0x084d,"C77 [nForce 750a SLI]"},

  {0x10de,0x084f,"C77 [GeForce 8100 / nForce 720a]"},

  {0x10de,0x0860,"C79 [GeForce 9300]"},

  {0x10de,0x0861,"C79 [GeForce 9400]"},

  {0x10de,0x0862,"C79 [GeForce 9400M G]"},

  {0x10de,0x0863,"C79 [GeForce 9400M]"},

  {0x10de,0x0864,"C79 [GeForce 9300]"},

  {0x10de,0x0865,"C79 [GeForce 9300/ION]"},

  {0x10de,0x0866,"C79 [GeForce 9400M G]"},

  {0x10de,0x0867,"C79 [GeForce 9400]"},

  {0x10de,0x0868,"C79 [nForce 760i SLI]"},

  {0x10de,0x0869,"MCP7A [GeForce 9400]"},

  {0x10de,0x086a,"C79 [GeForce 9400]"},

  {0x10de,0x086c,"C79 [GeForce 9300 / nForce 730i]"},

  {0x10de,0x086d,"C79 [GeForce 9200]"},

  {0x10de,0x086e,"C79 [GeForce 9100M G]"},

  {0x10de,0x086f,"MCP79 [GeForce 8200M G]"},

  {0x10de,0x0870,"C79 [GeForce 9400M]"},

  {0x10de,0x0871,"C79 [GeForce 9200]"},

  {0x10de,0x0872,"C79 [GeForce G102M]"},

  {0x10de,0x0873,"C79 [GeForce G102M]"},

  {0x10de,0x0874,"C79 [ION]"},

  {0x10de,0x0876,"ION VGA [GeForce 9400M]"},

  {0x10de,0x087a,"C79 [GeForce 9400]"},

  {0x10de,0x087d,"ION VGA"},

  {0x10de,0x087e,"ION LE VGA"},

  {0x10de,0x087f,"ION LE VGA"},

  {0x10de,0x08a0,"MCP89 [GeForce 320M]"},

  {0x10de,0x08a2,"MCP89 [GeForce 320M]"},

  {0x10de,0x08a3,"MCP89 [GeForce 320M]"},

  {0x10de,0x08a4,"MCP89 [GeForce 320M]"},

  {0x10de,0x08a5,"MCP89 [GeForce 320M]"},

  {0x10de,0x0a20,"GT216 [GeForce GT 220]"},

  {0x10de,0x0a21,"GT216M [GeForce GT 330M]"},

  {0x10de,0x0a22,"GT216 [GeForce 315]"},

  {0x10de,0x0a23,"GT216 [GeForce 210]"},

  {0x10de,0x0a26,"GT216 [GeForce 405]"},

  {0x10de,0x0a27,"GT216 [GeForce 405]"},

  {0x10de,0x0a28,"GT216M [GeForce GT 230M]"},

  {0x10de,0x0a29,"GT216M [GeForce GT 330M]"},

  {0x10de,0x0a2a,"GT216M [GeForce GT 230M]"},

  {0x10de,0x0a2b,"GT216M [GeForce GT 330M]"},

  {0x10de,0x0a2c,"GT216M [NVS 5100M]"},

  {0x10de,0x0a2d,"GT216M [GeForce GT 320M]"},

  {0x10de,0x0a30,"GT216 [GeForce 505]"},

  {0x10de,0x0a32,"GT216 [GeForce GT 415]"},

  {0x10de,0x0a34,"GT216M [GeForce GT 240M]"},

  {0x10de,0x0a35,"GT216M [GeForce GT 325M]"},

  {0x10de,0x0a38,"GT216GL [Quadro 400]"},

  {0x10de,0x0a3c,"GT216GLM [Quadro FX 880M]"},

  {0x10de,0x0a60,"GT218 [GeForce G210]"},

  {0x10de,0x0a62,"GT218 [GeForce 205]"},

  {0x10de,0x0a63,"GT218 [GeForce 310]"},

  {0x10de,0x0a64,"GT218 [ION]"},

  {0x10de,0x0a65,"GT218 [GeForce 210]"},

  {0x10de,0x0a66,"GT218 [GeForce 310]"},

  {0x10de,0x0a67,"GT218 [GeForce 315]"},

  {0x10de,0x0a68,"GT218M [GeForce G 105M]"},

  {0x10de,0x0a69,"GT218M [GeForce G 105M]"},

  {0x10de,0x0a6a,"GT218M [NVS 2100M]"},

  {0x10de,0x0a6c,"GT218M [NVS 3100M]"},

  {0x10de,0x0a6e,"GT218M [GeForce 305M]"},

  {0x10de,0x0a6f,"GT218 [ION]"},

  {0x10de,0x0a70,"GT218M [GeForce 310M]"},

  {0x10de,0x0a71,"GT218M [GeForce 305M]"},

  {0x10de,0x0a72,"GT218M [GeForce 310M]"},

  {0x10de,0x0a73,"GT218M [GeForce 305M]"},

  {0x10de,0x0a74,"GT218M [GeForce G210M]"},

  {0x10de,0x0a75,"GT218M [GeForce 310M]"},

  {0x10de,0x0a76,"GT218 [ION 2]"},

  {0x10de,0x0a78,"GT218GL [Quadro FX 380 LP]"},

  {0x10de,0x0a7a,"GT218M [GeForce 315M]"},

  {0x10de,0x0a7b,"GT218 [GeForce 505]"},

  {0x10de,0x0a7c,"GT218GLM [Quadro FX 380M]"},

  {0x10de,0x0a80,"MCP79 Host Bridge"},

  {0x10de,0x0a81,"MCP79 Host Bridge"},

  {0x10de,0x0a82,"MCP79 Host Bridge"},

  {0x10de,0x0a83,"MCP79 Host Bridge"},

  {0x10de,0x0a84,"MCP79 Host Bridge"},

  {0x10de,0x0a85,"MCP79 Host Bridge"},

  {0x10de,0x0a86,"MCP79 Host Bridge"},

  {0x10de,0x0a87,"MCP79 Host Bridge"},

  {0x10de,0x0a88,"MCP79 Memory Controller"},

  {0x10de,0x0a89,"MCP79 Memory Controller"},

  {0x10de,0x0a98,"MCP79 Memory Controller"},

  {0x10de,0x0aa0,"MCP79 PCI Express Bridge"},

  {0x10de,0x0aa2,"MCP79 SMBus"},

  {0x10de,0x0aa3,"MCP79 Co-processor"},

  {0x10de,0x0aa4,"MCP79 Memory Controller"},

  {0x10de,0x0aa5,"MCP79 OHCI USB 1.1 Controller"},

  {0x10de,0x0aa6,"MCP79 EHCI USB 2.0 Controller"},

  {0x10de,0x0aa7,"MCP79 OHCI USB 1.1 Controller"},

  {0x10de,0x0aa8,"MCP79 OHCI USB 1.1 Controller"},

  {0x10de,0x0aa9,"MCP79 EHCI USB 2.0 Controller"},

  {0x10de,0x0aaa,"MCP79 EHCI USB 2.0 Controller"},

  {0x10de,0x0aab,"MCP79 PCI Bridge"},

  {0x10de,0x0aac,"MCP79 LPC Bridge"},

  {0x10de,0x0aad,"MCP79 LPC Bridge"},

  {0x10de,0x0aae,"MCP79 LPC Bridge"},

  {0x10de,0x0aaf,"MCP79 LPC Bridge"},

  {0x10de,0x0ab0,"MCP79 Ethernet"},

  {0x10de,0x0ab1,"MCP79 Ethernet"},

  {0x10de,0x0ab2,"MCP79 Ethernet"},

  {0x10de,0x0ab3,"MCP79 Ethernet"},

  {0x10de,0x0ab4,"MCP79 SATA Controller"},

  {0x10de,0x0ab5,"MCP79 SATA Controller"},

  {0x10de,0x0ab6,"MCP79 SATA Controller"},

  {0x10de,0x0ab7,"MCP79 SATA Controller"},

  {0x10de,0x0ab8,"MCP79 AHCI Controller"},

  {0x10de,0x0ab9,"MCP79 AHCI Controller"},

  {0x10de,0x0aba,"MCP79 AHCI Controller"},

  {0x10de,0x0abb,"MCP79 AHCI Controller"},

  {0x10de,0x0abc,"MCP79 RAID Controller"},

  {0x10de,0x0abd,"MCP79 RAID Controller"},

  {0x10de,0x0abe,"MCP79 RAID Controller"},

  {0x10de,0x0abf,"MCP79 RAID Controller"},

  {0x10de,0x0ac0,"MCP79 High Definition Audio"},

  {0x10de,0x0ac1,"MCP79 High Definition Audio"},

  {0x10de,0x0ac2,"MCP79 High Definition Audio"},

  {0x10de,0x0ac3,"MCP79 High Definition Audio"},

  {0x10de,0x0ac4,"MCP79 PCI Express Bridge"},

  {0x10de,0x0ac5,"MCP79 PCI Express Bridge"},

  {0x10de,0x0ac6,"MCP79 PCI Express Bridge"},

  {0x10de,0x0ac7,"MCP79 PCI Express Bridge"},

  {0x10de,0x0ac8,"MCP79 PCI Express Bridge"},

  {0x10de,0x0ad0,"MCP78S [GeForce 8200] SATA Controller (non-AHCI mode)"},

  {0x10de,0x0ad4,"MCP78S [GeForce 8200] AHCI Controller"},

  {0x10de,0x0ad8,"MCP78S [GeForce 8200] SATA Controller (RAID mode)"},

  {0x10de,0x0be2,"GT216 HDMI Audio Controller"},

  {0x10de,0x0be3,"High Definition Audio Controller"},

  {0x10de,0x0be4,"High Definition Audio Controller"},

  {0x10de,0x0be5,"GF100 High Definition Audio Controller"},

  {0x10de,0x0be9,"GF106 High Definition Audio Controller"},

  {0x10de,0x0bea,"GF108 High Definition Audio Controller"},

  {0x10de,0x0beb,"GF104 High Definition Audio Controller"},

  {0x10de,0x0bee,"GF116 High Definition Audio Controller"},

  {0x10de,0x0bf0,"Tegra2 PCIe x4 Bridge"},

  {0x10de,0x0bf1,"Tegra2 PCIe x2 Bridge"},

  {0x10de,0x0ca0,"GT215 [GeForce GT 330]"},

  {0x10de,0x0ca2,"GT215 [GeForce GT 320]"},

  {0x10de,0x0ca3,"GT215 [GeForce GT 240]"},

  {0x10de,0x0ca4,"GT215 [GeForce GT 340]"},

  {0x10de,0x0ca5,"GT215 [GeForce GT 220]"},

  {0x10de,0x0ca7,"GT215 [GeForce GT 330]"},

  {0x10de,0x0ca8,"GT215M [GeForce GTS 260M]"},

  {0x10de,0x0ca9,"GT215M [GeForce GTS 250M]"},

  {0x10de,0x0cac,"GT215 [GeForce GT 220/315]"},

  {0x10de,0x0caf,"GT215M [GeForce GT 335M]"},

  {0x10de,0x0cb0,"GT215M [GeForce GTS 350M]"},

  {0x10de,0x0cb1,"GT215M [GeForce GTS 360M]"},

  {0x10de,0x0cbc,"GT215GLM [Quadro FX 1800M]"},

  {0x10de,0x0d60,"MCP89 HOST Bridge"},

  {0x10de,0x0d68,"MCP89 Memory Controller"},

  {0x10de,0x0d69,"MCP89 Memory Controller"},

  {0x10de,0x0d76,"MCP89 PCI Express Bridge"},

  {0x10de,0x0d79,"MCP89 SMBus"},

  {0x10de,0x0d7a,"MCP89 Co-Processor"},

  {0x10de,0x0d7b,"MCP89 Memory Controller"},

  {0x10de,0x0d7d,"MCP89 Ethernet"},

  {0x10de,0x0d80,"MCP89 LPC Bridge"},

  {0x10de,0x0d85,"MCP89 SATA Controller"},

  {0x10de,0x0d88,"MCP89 SATA Controller (AHCI mode)"},

  {0x10de,0x0d89,"MCP89 SATA Controller (AHCI mode)"},

  {0x10de,0x0d8d,"MCP89 SATA Controller (RAID mode)"},

  {0x10de,0x0d94,"MCP89 High Definition Audio"},

  {0x10de,0x0d9c,"MCP89 OHCI USB 1.1 Controller"},

  {0x10de,0x0d9d,"MCP89 EHCI USB 2.0 Controller"},

  {0x10de,0x0dc0,"GF106 [GeForce GT 440]"},

  {0x10de,0x0dc4,"GF106 [GeForce GTS 450]"},

  {0x10de,0x0dc5,"GF106 [GeForce GTS 450 OEM]"},

  {0x10de,0x0dc6,"GF106 [GeForce GTS 450]"},

  {0x10de,0x0dcd,"GF106M [GeForce GT 555M]"},

  {0x10de,0x0dce,"GF106M [GeForce GT 555M]"},

  {0x10de,0x0dd1,"GF106M [GeForce GTX 460M]"},

  {0x10de,0x0dd2,"GF106M [GeForce GT 445M]"},

  {0x10de,0x0dd3,"GF106M [GeForce GT 435M]"},

  {0x10de,0x0dd6,"GF106M [GeForce GT 550M]"},

  {0x10de,0x0dd8,"GF106GL [Quadro 2000]"},

  {0x10de,0x0dda,"GF106GLM [Quadro 2000M]"},

  {0x10de,0x0de0,"GF108 [GeForce GT 440]"},

  {0x10de,0x0de1,"GF108 [GeForce GT 430]"},

  {0x10de,0x0de2,"GF108 [GeForce GT 420]"},

  {0x10de,0x0de3,"GF108M [GeForce GT 635M]"},

  {0x10de,0x0de4,"GF108 [GeForce GT 520]"},

  {0x10de,0x0de5,"GF108 [GeForce GT 530]"},

  {0x10de,0x0de7,"GF108 [GeForce GT 610]"},

  {0x10de,0x0de8,"GF108M [GeForce GT 620M]"},

  {0x10de,0x0de9,"GF108M [GeForce GT 630M]"},

  {0x10de,0x0dea,"GF108M [GeForce 610M]"},

  {0x10de,0x0deb,"GF108M [GeForce GT 555M]"},

  {0x10de,0x0dec,"GF108M [GeForce GT 525M]"},

  {0x10de,0x0ded,"GF108M [GeForce GT 520M]"},

  {0x10de,0x0dee,"GF108M [GeForce GT 415M]"},

  {0x10de,0x0def,"GF108M [NVS 5400M]"},

  {0x10de,0x0df0,"GF108M [GeForce GT 425M]"},

  {0x10de,0x0df1,"GF108M [GeForce GT 420M]"},

  {0x10de,0x0df2,"GF108M [GeForce GT 435M]"},

  {0x10de,0x0df3,"GF108M [GeForce GT 420M]"},

  {0x10de,0x0df4,"GF108M [GeForce GT 540M]"},

  {0x10de,0x0df5,"GF108M [GeForce GT 525M]"},

  {0x10de,0x0df6,"GF108M [GeForce GT 550M]"},

  {0x10de,0x0df7,"GF108M [GeForce GT 520M]"},

  {0x10de,0x0df8,"GF108GL [Quadro 600]"},

  {0x10de,0x0df9,"GF108GLM [Quadro 500M]"},

  {0x10de,0x0dfa,"GF108GLM [Quadro 1000M]"},

  {0x10de,0x0dfc,"GF108GLM [NVS 5200M]"},

  {0x10de,0x0e08,"GF119 HDMI Audio Controller"},

  {0x10de,0x0e09,"GF110 High Definition Audio Controller"},

  {0x10de,0x0e0a,"GK104 HDMI Audio Controller"},

  {0x10de,0x0e0b,"GK106 HDMI Audio Controller"},

  {0x10de,0x0e0c,"GF114 HDMI Audio Controller"},

  {0x10de,0x0e0f,"GK208 HDMI/DP Audio Controller"},

  {0x10de,0x0e12,"TegraK1 PCIe x4 Bridge"},

  {0x10de,0x0e13,"TegraK1 PCIe x1 Bridge"},

  {0x10de,0x0e1a,"GK110 HDMI Audio"},

  {0x10de,0x0e1b,"GK107 HDMI Audio Controller"},

  {0x10de,0x0e1c,"Tegra3+ PCIe x4 Bridge"},

  {0x10de,0x0e1d,"Tegra3+ PCIe x2 Bridge"},

  {0x10de,0x0e22,"GF104 [GeForce GTX 460]"},

  {0x10de,0x0e23,"GF104 [GeForce GTX 460 SE]"},

  {0x10de,0x0e24,"GF104 [GeForce GTX 460 OEM]"},

  {0x10de,0x0e30,"GF104M [GeForce GTX 470M]"},

  {0x10de,0x0e31,"GF104M [GeForce GTX 485M]"},

  {0x10de,0x0e3a,"GF104GLM [Quadro 3000M]"},

  {0x10de,0x0e3b,"GF104GLM [Quadro 4000M]"},

  {0x10de,0x0f00,"GF108 [GeForce GT 630]"},

  {0x10de,0x0f01,"GF108 [GeForce GT 620]"},

  {0x10de,0x0f02,"GF108 [GeForce GT 730]"},

  {0x10de,0x0f06,"GF108 [GeForce GT 730]"},

  {0x10de,0x0fb0,"GM200 High Definition Audio"},

  {0x10de,0x0fb8,"GP108 High Definition Audio Controller"},

  {0x10de,0x0fb9,"GP107GL High Definition Audio Controller"},

  {0x10de,0x0fbb,"GM204 High Definition Audio Controller"},

  {0x10de,0x0fc0,"GK107 [GeForce GT 640 OEM]"},

  {0x10de,0x0fc1,"GK107 [GeForce GT 640]"},

  {0x10de,0x0fc2,"GK107 [GeForce GT 630 OEM]"},

  {0x10de,0x0fc6,"GK107 [GeForce GTX 650]"},

  {0x10de,0x0fc8,"GK107 [GeForce GT 740]"},

  {0x10de,0x0fc9,"GK107 [GeForce GT 730]"},

  {0x10de,0x0fcd,"GK107M [GeForce GT 755M]"},

  {0x10de,0x0fce,"GK107M [GeForce GT 640M LE]"},

  {0x10de,0x0fd1,"GK107M [GeForce GT 650M]"},

  {0x10de,0x0fd2,"GK107M [GeForce GT 640M]"},

  {0x10de,0x0fd3,"GK107M [GeForce GT 640M LE]"},

  {0x10de,0x0fd4,"GK107M [GeForce GTX 660M]"},

  {0x10de,0x0fd5,"GK107M [GeForce GT 650M Mac Edition]"},

  {0x10de,0x0fd8,"GK107M [GeForce GT 640M Mac Edition]"},

  {0x10de,0x0fd9,"GK107M [GeForce GT 645M]"},

  {0x10de,0x0fdb,"GK107M"},

  {0x10de,0x0fdf,"GK107M [GeForce GT 740M]"},

  {0x10de,0x0fe0,"GK107M [GeForce GTX 660M Mac Edition]"},

  {0x10de,0x0fe1,"GK107M [GeForce GT 730M]"},

  {0x10de,0x0fe2,"GK107M [GeForce GT 745M]"},

  {0x10de,0x0fe3,"GK107M [GeForce GT 745M]"},

  {0x10de,0x0fe4,"GK107M [GeForce GT 750M]"},

  {0x10de,0x0fe5,"GK107 [GeForce K340 USM]"},

  {0x10de,0x0fe6,"GK107 [GRID K1 NVS USM]"},

  {0x10de,0x0fe7,"GK107GL [GRID K100 vGPU]"},

  {0x10de,0x0fe9,"GK107M [GeForce GT 750M Mac Edition]"},

  {0x10de,0x0fea,"GK107M [GeForce GT 755M Mac Edition]"},

  {0x10de,0x0fec,"GK107M [GeForce 710A]"},

  {0x10de,0x0fed,"GK107M [GeForce 820M]"},

  {0x10de,0x0fee,"GK107M [GeForce 810M]"},

  {0x10de,0x0fef,"GK107GL [GRID K340]"},

  {0x10de,0x0ff1,"GK107 [NVS 1000]"},

  {0x10de,0x0ff2,"GK107GL [GRID K1]"},

  {0x10de,0x0ff3,"GK107GL [Quadro K420]"},

  {0x10de,0x0ff5,"GK107GL [GRID K1 Tesla USM]"},

  {0x10de,0x0ff6,"GK107GLM [Quadro K1100M]"},

  {0x10de,0x0ff7,"GK107GL [GRID K140Q vGPU]"},

  {0x10de,0x0ff8,"GK107GLM [Quadro K500M]"},

  {0x10de,0x0ff9,"GK107GL [Quadro K2000D]"},

  {0x10de,0x0ffa,"GK107GL [Quadro K600]"},

  {0x10de,0x0ffb,"GK107GLM [Quadro K2000M]"},

  {0x10de,0x0ffc,"GK107GLM [Quadro K1000M]"},

  {0x10de,0x0ffd,"GK107 [NVS 510]"},

  {0x10de,0x0ffe,"GK107GL [Quadro K2000]"},

  {0x10de,0x0fff,"GK107GL [Quadro 410]"},

  {0x10de,0x1001,"GK110B [GeForce GTX TITAN Z]"},

  {0x10de,0x1003,"GK110 [GeForce GTX Titan LE]"},

  {0x10de,0x1004,"GK110 [GeForce GTX 780]"},

  {0x10de,0x1005,"GK110 [GeForce GTX TITAN]"},

  {0x10de,0x1007,"GK110 [GeForce GTX 780 Rev. 2]"},

  {0x10de,0x1008,"GK110 [GeForce GTX 780 Ti Rev. 2]"},

  {0x10de,0x100a,"GK110B [GeForce GTX 780 Ti]"},

  {0x10de,0x100c,"GK110B [GeForce GTX TITAN Black]"},

  {0x10de,0x101e,"GK110GL [Tesla K20X]"},

  {0x10de,0x101f,"GK110GL [Tesla K20]"},

  {0x10de,0x1020,"GK110GL [Tesla K20X]"},

  {0x10de,0x1021,"GK110GL [Tesla K20Xm]"},

  {0x10de,0x1022,"GK110GL [Tesla K20c]"},

  {0x10de,0x1023,"GK110BGL [Tesla K40m]"},

  {0x10de,0x1024,"GK110BGL [Tesla K40c]"},

  {0x10de,0x1026,"GK110GL [Tesla K20s]"},

  {0x10de,0x1027,"GK110BGL [Tesla K40st]"},

  {0x10de,0x1028,"GK110GL [Tesla K20m]"},

  {0x10de,0x1029,"GK110BGL [Tesla K40s]"},

  {0x10de,0x102a,"GK110BGL [Tesla K40t]"},

  {0x10de,0x102d,"GK210GL [Tesla K80]"},

  {0x10de,0x102e,"GK110BGL [Tesla K40d]"},

  {0x10de,0x103a,"GK110GL [Quadro K6000]"},

  {0x10de,0x103c,"GK110GL [Quadro K5200]"},

  {0x10de,0x1040,"GF119 [GeForce GT 520]"},

  {0x10de,0x1042,"GF119 [GeForce 510]"},

  {0x10de,0x1048,"GF119 [GeForce 605]"},

  {0x10de,0x1049,"GF119 [GeForce GT 620 OEM]"},

  {0x10de,0x104a,"GF119 [GeForce GT 610]"},

  {0x10de,0x104b,"GF119 [GeForce GT 625 OEM]"},

  {0x10de,0x104c,"GF119 [GeForce GT 705]"},

  {0x10de,0x104d,"GF119 [GeForce GT 710]"},

  {0x10de,0x1050,"GF119M [GeForce GT 520M]"},

  {0x10de,0x1051,"GF119M [GeForce GT 520MX]"},

  {0x10de,0x1052,"GF119M [GeForce GT 520M]"},

  {0x10de,0x1054,"GF119M [GeForce 410M]"},

  {0x10de,0x1055,"GF119M [GeForce 410M]"},

  {0x10de,0x1056,"GF119M [NVS 4200M]"},

  {0x10de,0x1057,"GF119M [Quadro NVS 4200M]"},

  {0x10de,0x1058,"GF119M [GeForce 610M]"},

  {0x10de,0x1059,"GF119M [GeForce 610M]"},

  {0x10de,0x105a,"GF119M [GeForce 610M]"},

  {0x10de,0x105b,"GF119M [GeForce 705M]"},

  {0x10de,0x107c,"GF119 [NVS 315]"},

  {0x10de,0x107d,"GF119 [NVS 310]"},

  {0x10de,0x1080,"GF110 [GeForce GTX 580]"},

  {0x10de,0x1081,"GF110 [GeForce GTX 570]"},

  {0x10de,0x1082,"GF110 [GeForce GTX 560 Ti OEM]"},

  {0x10de,0x1084,"GF110 [GeForce GTX 560 OEM]"},

  {0x10de,0x1086,"GF110 [GeForce GTX 570 Rev. 2]"},

  {0x10de,0x1087,"GF110 [GeForce GTX 560 Ti 448 Cores]"},

  {0x10de,0x1088,"GF110 [GeForce GTX 590]"},

  {0x10de,0x1089,"GF110 [GeForce GTX 580]"},

  {0x10de,0x108b,"GF110 [GeForce GTX 580]"},

  {0x10de,0x108e,"GF110GL [Tesla C2090]"},

  {0x10de,0x1091,"GF110GL [Tesla M2090]"},

  {0x10de,0x1094,"GF110GL [Tesla M2075]"},

  {0x10de,0x1096,"GF110GL [Tesla C2050 / C2075]"},

  {0x10de,0x109a,"GF100GLM [Quadro 5010M]"},

  {0x10de,0x109b,"GF100GL [Quadro 7000]"},

  {0x10de,0x10c0,"GT218 [GeForce 9300 GS Rev. 2]"},

  {0x10de,0x10c3,"GT218 [GeForce 8400 GS Rev. 3]"},

  {0x10de,0x10c5,"GT218 [GeForce 405]"},

  {0x10de,0x10d8,"GT218 [NVS 300]"},

  {0x10de,0x10ef,"GP102 HDMI Audio Controller"},

  {0x10de,0x10f0,"GP104 High Definition Audio Controller"},

  {0x10de,0x10f1,"GP106 High Definition Audio Controller"},

  {0x10de,0x1140,"GF117M [GeForce 610M/710M/810M/820M / GT 620M/625M/630M/720M]"},

  {0x10de,0x1180,"GK104 [GeForce GTX 680]"},

  {0x10de,0x1182,"GK104 [GeForce GTX 760 Ti]"},

  {0x10de,0x1183,"GK104 [GeForce GTX 660 Ti]"},

  {0x10de,0x1184,"GK104 [GeForce GTX 770]"},

  {0x10de,0x1185,"GK104 [GeForce GTX 660 OEM]"},

  {0x10de,0x1187,"GK104 [GeForce GTX 760]"},

  {0x10de,0x1188,"GK104 [GeForce GTX 690]"},

  {0x10de,0x1189,"GK104 [GeForce GTX 670]"},

  {0x10de,0x118a,"GK104GL [GRID K520]"},

  {0x10de,0x118b,"GK104GL [GRID K2 GeForce USM]"},

  {0x10de,0x118c,"GK104 [GRID K2 NVS USM]"},

  {0x10de,0x118d,"GK104GL [GRID K200 vGPU]"},

  {0x10de,0x118e,"GK104 [GeForce GTX 760 OEM]"},

  {0x10de,0x118f,"GK104GL [Tesla K10]"},

  {0x10de,0x1191,"GK104 [GeForce GTX 760 Rev. 2]"},

  {0x10de,0x1193,"GK104 [GeForce GTX 760 Ti OEM]"},

  {0x10de,0x1194,"GK104GL [Tesla K8]"},

  {0x10de,0x1195,"GK104 [GeForce GTX 660 Rev. 2]"},

  {0x10de,0x1198,"GK104M [GeForce GTX 880M]"},

  {0x10de,0x1199,"GK104M [GeForce GTX 870M]"},

  {0x10de,0x119a,"GK104M [GeForce GTX 860M]"},

  {0x10de,0x119d,"GK104M [GeForce GTX 775M Mac Edition]"},

  {0x10de,0x119e,"GK104M [GeForce GTX 780M Mac Edition]"},

  {0x10de,0x119f,"GK104M [GeForce GTX 780M]"},

  {0x10de,0x11a0,"GK104M [GeForce GTX 680M]"},

  {0x10de,0x11a1,"GK104M [GeForce GTX 670MX]"},

  {0x10de,0x11a2,"GK104M [GeForce GTX 675MX Mac Edition]"},

  {0x10de,0x11a3,"GK104M [GeForce GTX 680MX]"},

  {0x10de,0x11a7,"GK104M [GeForce GTX 675MX]"},

  {0x10de,0x11b0,"GK104GL [GRID K240Q\\K260Q vGPU]"},

  {0x10de,0x11b1,"GK104GL [GRID K2 Tesla USM]"},

  {0x10de,0x11b4,"GK104GL [Quadro K4200]"},

  {0x10de,0x11b6,"GK104GLM [Quadro K3100M]"},

  {0x10de,0x11b7,"GK104GLM [Quadro K4100M]"},

  {0x10de,0x11b8,"GK104GLM [Quadro K5100M]"},

  {0x10de,0x11ba,"GK104GL [Quadro K5000]"},

  {0x10de,0x11bb,"GK104GL [Quadro 4100]"},

  {0x10de,0x11bc,"GK104GLM [Quadro K5000M]"},

  {0x10de,0x11bd,"GK104GLM [Quadro K4000M]"},

  {0x10de,0x11be,"GK104GLM [Quadro K3000M]"},

  {0x10de,0x11bf,"GK104GL [GRID K2]"},

  {0x10de,0x11c0,"GK106 [GeForce GTX 660]"},

  {0x10de,0x11c2,"GK106 [GeForce GTX 650 Ti Boost]"},

  {0x10de,0x11c3,"GK106 [GeForce GTX 650 Ti OEM]"},

  {0x10de,0x11c4,"GK106 [GeForce GTX 645 OEM]"},

  {0x10de,0x11c5,"GK106 [GeForce GT 740]"},

  {0x10de,0x11c6,"GK106 [GeForce GTX 650 Ti]"},

  {0x10de,0x11c7,"GK106 [GeForce GTX 750 Ti]"},

  {0x10de,0x11c8,"GK106 [GeForce GTX 650 OEM]"},

  {0x10de,0x11cb,"GK106 [GeForce GT 740]"},

  {0x10de,0x11e0,"GK106M [GeForce GTX 770M]"},

  {0x10de,0x11e1,"GK106M [GeForce GTX 765M]"},

  {0x10de,0x11e2,"GK106M [GeForce GTX 765M]"},

  {0x10de,0x11e3,"GK106M [GeForce GTX 760M]"},

  {0x10de,0x11e7,"GK106M"},

  {0x10de,0x11fa,"GK106GL [Quadro K4000]"},

  {0x10de,0x11fc,"GK106GLM [Quadro K2100M]"},

  {0x10de,0x1200,"GF114 [GeForce GTX 560 Ti]"},

  {0x10de,0x1201,"GF114 [GeForce GTX 560]"},

  {0x10de,0x1202,"GF114 [GeForce GTX 560 Ti OEM]"},

  {0x10de,0x1203,"GF114 [GeForce GTX 460 SE v2]"},

  {0x10de,0x1205,"GF114 [GeForce GTX 460 v2]"},

  {0x10de,0x1206,"GF114 [GeForce GTX 555]"},

  {0x10de,0x1207,"GF114 [GeForce GT 645 OEM]"},

  {0x10de,0x1208,"GF114 [GeForce GTX 560 SE]"},

  {0x10de,0x1210,"GF114M [GeForce GTX 570M]"},

  {0x10de,0x1211,"GF114M [GeForce GTX 580M]"},

  {0x10de,0x1212,"GF114M [GeForce GTX 675M]"},

  {0x10de,0x1213,"GF114M [GeForce GTX 670M]"},

  {0x10de,0x1241,"GF116 [GeForce GT 545 OEM]"},

  {0x10de,0x1243,"GF116 [GeForce GT 545]"},

  {0x10de,0x1244,"GF116 [GeForce GTX 550 Ti]"},

  {0x10de,0x1245,"GF116 [GeForce GTS 450 Rev. 2]"},

  {0x10de,0x1246,"GF116M [GeForce GT 550M]"},

  {0x10de,0x1247,"GF116M [GeForce GT 555M/635M]"},

  {0x10de,0x1248,"GF116M [GeForce GT 555M/635M]"},

  {0x10de,0x1249,"GF116 [GeForce GTS 450 Rev. 3]"},

  {0x10de,0x124b,"GF116 [GeForce GT 640 OEM]"},

  {0x10de,0x124d,"GF116M [GeForce GT 555M/635M]"},

  {0x10de,0x1251,"GF116M [GeForce GT 560M]"},

  {0x10de,0x1280,"GK208 [GeForce GT 635]"},

  {0x10de,0x1281,"GK208 [GeForce GT 710]"},

  {0x10de,0x1282,"GK208 [GeForce GT 640 Rev. 2]"},

  {0x10de,0x1284,"GK208 [GeForce GT 630 Rev. 2]"},

  {0x10de,0x1286,"GK208 [GeForce GT 720]"},

  {0x10de,0x1287,"GK208 [GeForce GT 730]"},

  {0x10de,0x1288,"GK208 [GeForce GT 720]"},

  {0x10de,0x1289,"GK208 [GeForce GT 710]"},

  {0x10de,0x128b,"GK208 [GeForce GT 710B]"},

  {0x10de,0x1290,"GK208M [GeForce GT 730M]"},

  {0x10de,0x1291,"GK208M [GeForce GT 735M]"},

  {0x10de,0x1292,"GK208M [GeForce GT 740M]"},

  {0x10de,0x1293,"GK208M [GeForce GT 730M]"},

  {0x10de,0x1294,"GK208M [GeForce GT 740M]"},

  {0x10de,0x1295,"GK208M [GeForce 710M]"},

  {0x10de,0x1296,"GK208M [GeForce 825M]"},

  {0x10de,0x1298,"GK208M [GeForce GT 720M]"},

  {0x10de,0x1299,"GK208M [GeForce 920M]"},

  {0x10de,0x129a,"GK208M [GeForce 910M]"},

  {0x10de,0x12a0,"GK208"},

  {0x10de,0x12b9,"GK208GLM [Quadro K610M]"},

  {0x10de,0x12ba,"GK208GLM [Quadro K510M]"},

  {0x10de,0x1340,"GM108M [GeForce 830M]"},

  {0x10de,0x1341,"GM108M [GeForce 840M]"},

  {0x10de,0x1344,"GM108M [GeForce 845M]"},

  {0x10de,0x1346,"GM108M [GeForce 930M]"},

  {0x10de,0x1347,"GM108M [GeForce 940M]"},

  {0x10de,0x1348,"GM108M [GeForce 945M / 945A]"},

  {0x10de,0x1349,"GM108M [GeForce 930M]"},

  {0x10de,0x134b,"GM108M [GeForce 940MX]"},

  {0x10de,0x134d,"GM108M [GeForce 940MX]"},

  {0x10de,0x134e,"GM108M [GeForce 930MX]"},

  {0x10de,0x134f,"GM108M [GeForce 920MX]"},

  {0x10de,0x137a,"GM108GLM [Quadro K620M / Quadro M500M]"},

  {0x10de,0x137b,"GM108GLM [Quadro M520 Mobile]"},

  {0x10de,0x137d,"GM108M [GeForce 940A]"},

  {0x10de,0x1380,"GM107 [GeForce GTX 750 Ti]"},

  {0x10de,0x1381,"GM107 [GeForce GTX 750]"},

  {0x10de,0x1382,"GM107 [GeForce GTX 745]"},

  {0x10de,0x1389,"GM107GL [GRID M30]"},

  {0x10de,0x1390,"GM107M [GeForce 845M]"},

  {0x10de,0x1391,"GM107M [GeForce GTX 850M]"},

  {0x10de,0x1392,"GM107M [GeForce GTX 860M]"},

  {0x10de,0x1393,"GM107M [GeForce 840M]"},

  {0x10de,0x1398,"GM107M [GeForce 845M]"},

  {0x10de,0x139a,"GM107M [GeForce GTX 950M]"},

  {0x10de,0x139b,"GM107M [GeForce GTX 960M]"},

  {0x10de,0x139c,"GM107M [GeForce 940M]"},

  {0x10de,0x139d,"GM107M [GeForce GTX 750 Ti]"},

  {0x10de,0x13b0,"GM107GLM [Quadro M2000M]"},

  {0x10de,0x13b1,"GM107GLM [Quadro M1000M]"},

  {0x10de,0x13b2,"GM107GLM [Quadro M600M]"},

  {0x10de,0x13b3,"GM107GLM [Quadro K2200M]"},

  {0x10de,0x13b4,"GM107GLM [Quadro M620 Mobile]"},

  {0x10de,0x13b6,"GM107GLM [Quadro M1200 Mobile]"},

  {0x10de,0x13b9,"GM107GL [NVS 810]"},

  {0x10de,0x13ba,"GM107GL [Quadro K2200]"},

  {0x10de,0x13bb,"GM107GL [Quadro K620]"},

  {0x10de,0x13bc,"GM107GL [Quadro K1200]"},

  {0x10de,0x13bd,"GM107GL [Tesla M10]"},

  {0x10de,0x13c0,"GM204 [GeForce GTX 980]"},

  {0x10de,0x13c1,"GM204"},

  {0x10de,0x13c2,"GM204 [GeForce GTX 970]"},

  {0x10de,0x13c3,"GM204"},

  {0x10de,0x13d7,"GM204M [GeForce GTX 980M]"},

  {0x10de,0x13d8,"GM204M [GeForce GTX 970M]"},

  {0x10de,0x13d9,"GM204M [GeForce GTX 965M]"},

  {0x10de,0x13da,"GM204M [GeForce GTX 980]"},

  {0x10de,0x13e7,"GM204 [GeForce GTX 980 Engineering Sample]"},

  {0x10de,0x13f0,"GM204GL [Quadro M5000]"},

  {0x10de,0x13f1,"GM204GL [Quadro M4000]"},

  {0x10de,0x13f2,"GM204GL [Tesla M60]"},

  {0x10de,0x13f3,"GM204GL [Tesla M6]"},

  {0x10de,0x13f8,"GM204GLM [Quadro M5000M / M5000 SE]"},

  {0x10de,0x13f9,"GM204GLM [Quadro M4000M]"},

  {0x10de,0x13fa,"GM204GLM [Quadro M3000M]"},

  {0x10de,0x13fb,"GM204GLM [Quadro M5500]"},

  {0x10de,0x1401,"GM206 [GeForce GTX 960]"},

  {0x10de,0x1402,"GM206 [GeForce GTX 950]"},

  {0x10de,0x1406,"GM206 [GeForce GTX 960]"},

  {0x10de,0x1407,"GM206 [GeForce GTX 750 v2]"},

  {0x10de,0x1427,"GM206M [GeForce GTX 965M]"},

  {0x10de,0x1430,"GM206GL [Quadro M2000]"},

  {0x10de,0x1431,"GM206GL [Tesla M4]"},

  {0x10de,0x1436,"GM206GLM [Quadro M2200 Mobile]"},

  {0x10de,0x15f0,"GP100GL [Quadro GP100]"},

  {0x10de,0x15f1,"GP100GL"},

  {0x10de,0x15f7,"GP100GL [Tesla P100 PCIe 12GB]"},

  {0x10de,0x15f8,"GP100GL [Tesla P100 PCIe 16GB]"},

  {0x10de,0x15f9,"GP100GL [Tesla P100 SMX2 16GB]"},

  {0x10de,0x1617,"GM204M [GeForce GTX 980M]"},

  {0x10de,0x1618,"GM204M [GeForce GTX 970M]"},

  {0x10de,0x1619,"GM204M [GeForce GTX 965M]"},

  {0x10de,0x161a,"GM204M [GeForce GTX 980 Mobile]"},

  {0x10de,0x1667,"GM204M [GeForce GTX 965M]"},

  {0x10de,0x1725,"GP100"},

  {0x10de,0x172e,"GP100"},

  {0x10de,0x172f,"GP100"},

  {0x10de,0x17c2,"GM200 [GeForce GTX TITAN X]"},

  {0x10de,0x17c8,"GM200 [GeForce GTX 980 Ti]"},

  {0x10de,0x17f0,"GM200GL [Quadro M6000]"},

  {0x10de,0x17f1,"GM200GL [Quadro M6000 24GB]"},

  {0x10de,0x17fd,"GM200GL [Tesla M40]"},

  {0x10de,0x1b00,"GP102 [TITAN X]"},

  {0x10de,0x1b01,"GP102"},

  {0x10de,0x1b02,"GP102 [TITAN Xp]"},

  {0x10de,0x1b06,"GP102 [GeForce GTX 1080 Ti]"},

  {0x10de,0x1b30,"GP102GL [Quadro P6000]"},

  {0x10de,0x1b38,"GP102GL [Tesla P40]"},

  {0x10de,0x1b70,"GP102GL"},

  {0x10de,0x1b78,"GP102GL"},

  {0x10de,0x1b80,"GP104 [GeForce GTX 1080]"},

  {0x10de,0x1b81,"GP104 [GeForce GTX 1070]"},

  {0x10de,0x1b82,"GP104"},

  {0x10de,0x1b83,"GP104"},

  {0x10de,0x1b84,"GP104 [GeForce GTX 1060 3GB]"},

  {0x10de,0x1ba0,"GP104M [GeForce GTX 1080 Mobile]"},

  {0x10de,0x1ba1,"GP104M [GeForce GTX 1070 Mobile]"},

  {0x10de,0x1bb0,"GP104GL [Quadro P5000]"},

  {0x10de,0x1bb1,"GP104GL [Quadro P4000]"},

  {0x10de,0x1bb3,"GP104GL [Tesla P4]"},

  {0x10de,0x1bb4,"GP104GL"},

  {0x10de,0x1bb6,"GP104GLM [Quadro P5000 Mobile]"},

  {0x10de,0x1bb7,"GP104GLM [Quadro P4000 Mobile]"},

  {0x10de,0x1bb8,"GP104GLM [Quadro P3000 Mobile]"},

  {0x10de,0x1be0,"GP104M [GeForce GTX 1080 Mobile]"},

  {0x10de,0x1be1,"GP104M [GeForce GTX 1070 Mobile]"},

  {0x10de,0x1c00,"GP106"},

  {0x10de,0x1c01,"GP106"},

  {0x10de,0x1c02,"GP106 [GeForce GTX 1060 3GB]"},

  {0x10de,0x1c03,"GP106 [GeForce GTX 1060 6GB]"},

  {0x10de,0x1c20,"GP106M [GeForce GTX 1060 Mobile]"},

  {0x10de,0x1c30,"GP106GL [Quadro P2000]"},

  {0x10de,0x1c35,"GP106"},

  {0x10de,0x1c60,"GP106M [GeForce GTX 1060 Mobile]"},

  {0x10de,0x1c61,"GP106M [GeForce GTX 1050 Ti Mobile]"},

  {0x10de,0x1c62,"GP106M [GeForce GTX 1050 Mobile]"},

  {0x10de,0x1c70,"GP106GL"},

  {0x10de,0x1c80,"GP107"},

  {0x10de,0x1c81,"GP107 [GeForce GTX 1050]"},

  {0x10de,0x1c82,"GP107 [GeForce GTX 1050 Ti]"},

  {0x10de,0x1c8c,"GP107M [GeForce GTX 1050 Ti Mobile]"},

  {0x10de,0x1c8d,"GP107M [GeForce GTX 1050 Mobile]"},

  {0x10de,0x1c8e,"GP107M"},

  {0x10de,0x1ca7,"GP107GL"},

  {0x10de,0x1ca8,"GP107GL"},

  {0x10de,0x1caa,"GP107GL"},

  {0x10de,0x1cb1,"GP107GL [Quadro P1000]"},

  {0x10de,0x1cb2,"GP107GL [Quadro P600]"},

  {0x10de,0x1cb3,"GP107GL [Quadro P400]"},

  {0x10de,0x1d01,"GP108 [GeForce GT 1030]"},

  {0x10de,0x1d10,"GP108 [GeForce MX150]"},

  {0x10de,0x1d81,"GV100"},

  {0x10df,0x0720,"OneConnect NIC (Skyhawk)"},

  {0x10df,0x0722,"OneConnect iSCSI Initiator (Skyhawk)"},

  {0x10df,0x0723,"OneConnect iSCSI Initiator + Target (Skyhawk)"},

  {0x10df,0x0724,"OneConnect FCoE Initiator (Skyhawk)"},

  {0x10df,0x0728,"OneConnect NIC (Skyhawk-VF)"},

  {0x10df,0x072a,"OneConnect iSCSI Initiator (Skyhawk-VF)"},

  {0x10df,0x072b,"OneConnect iSCSI Initiator + Target (Skyhawk-VF)"},

  {0x10df,0x072c,"OneConnect FCoE Initiator (Skyhawk-VF)"},

  {0x10df,0x1ae5,"LP6000 Fibre Channel Host Adapter"},

  {0x10df,0xe100,"Proteus-X: LightPulse IOV Fibre Channel Host Adapter"},

  {0x10df,0xe131,"LightPulse 8Gb/s PCIe Shared I/O Fibre Channel Adapter"},

  {0x10df,0xe180,"Proteus-X: LightPulse IOV Fibre Channel Host Adapter"},

  {0x10df,0xe200,"LightPulse LPe16002"},

  {0x10df,0xe208,"LightPulse 16Gb Fibre Channel Host Adapter (Lancer-VF)"},

  {0x10df,0xe220,"OneConnect NIC (Lancer)"},

  {0x10df,0xe240,"OneConnect iSCSI Initiator (Lancer)"},

  {0x10df,0xe260,"OneConnect FCoE Initiator (Lancer)"},

  {0x10df,0xe268,"OneConnect 10Gb FCoE Converged Network Adapter (Lancer-VF)"},

  {0x10df,0xe300,"Lancer Gen6: LPe32000 Fibre Channel Host Adapter"},

  {0x10df,0xf011,"Saturn: LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf015,"Saturn: LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf085,"LP850 Fibre Channel Host Adapter"},

  {0x10df,0xf095,"LP952 Fibre Channel Host Adapter"},

  {0x10df,0xf098,"LP982 Fibre Channel Host Adapter"},

  {0x10df,0xf0a1,"Thor LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf0a5,"Thor LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf0b5,"Viper LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf0d1,"Helios LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf0d5,"Helios LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf0e1,"Zephyr LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf0e5,"Zephyr LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf0f5,"Neptune LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf100,"Saturn-X: LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf111,"Saturn-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf112,"Saturn-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xf180,"LPSe12002 EmulexSecure Fibre Channel Adapter"},

  {0x10df,0xf700,"LP7000 Fibre Channel Host Adapter"},

  {0x10df,0xf701,"LP7000 Fibre Channel Host Adapter Alternate ID (JX1:2-3, JX2:1-2)"},

  {0x10df,0xf800,"LP8000 Fibre Channel Host Adapter"},

  {0x10df,0xf801,"LP8000 Fibre Channel Host Adapter Alternate ID (JX1:2-3, JX2:1-2)"},

  {0x10df,0xf900,"LP9000 Fibre Channel Host Adapter"},

  {0x10df,0xf901,"LP9000 Fibre Channel Host Adapter Alternate ID (JX1:2-3, JX2:1-2)"},

  {0x10df,0xf980,"LP9802 Fibre Channel Host Adapter"},

  {0x10df,0xf981,"LP9802 Fibre Channel Host Adapter Alternate ID"},

  {0x10df,0xf982,"LP9802 Fibre Channel Host Adapter Alternate ID"},

  {0x10df,0xfa00,"Thor-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfb00,"Viper LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfc00,"Thor-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfc10,"Helios-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfc20,"Zephyr-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfc40,"Saturn-X: LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfc50,"Proteus-X: LightPulse IOV Fibre Channel Host Adapter"},

  {0x10df,0xfd00,"Helios-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfd11,"Helios-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfd12,"Helios-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfe00,"Zephyr-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfe05,"Zephyr-X: LightPulse FCoE Adapter"},

  {0x10df,0xfe11,"Zephyr-X LightPulse Fibre Channel Host Adapter"},

  {0x10df,0xfe12,"Zephyr-X LightPulse FCoE Adapter"},

  {0x10df,0xff00,"Neptune LightPulse Fibre Channel Host Adapter"},

  {0x10e0,0x5026,"IMS5026/27/28"},

  {0x10e0,0x5027,"IMS5027"},

  {0x10e0,0x5028,"IMS5028"},

  {0x10e0,0x8849,"IMS8849"},

  {0x10e0,0x8853,"IMS8853"},

  {0x10e0,0x9128,"IMS9128 [Twin turbo 128]"},

  {0x10e1,0x0391,"TRM-S1040"},

  {0x10e1,0x690c,"DC-690c"},

  {0x10e1,0xdc29,"DC-290"},

  {0x10e3,0x0108,"Tsi108 Host Bridge for Single PowerPC"},

  {0x10e3,0x0148,"Tsi148 [Tempe]"},

  {0x10e3,0x0860,"CA91C860 [QSpan]"},

  {0x10e3,0x0862,"CA91C862A [QSpan-II]"},

  {0x10e3,0x8260,"CA91L8200B [Dual PCI PowerSpan II]"},

  {0x10e3,0x8261,"CA91L8260B [Single PCI PowerSpan II]"},

  {0x10e3,0xa108,"Tsi109 Host Bridge for Dual PowerPC"},

  {0x10e4,0x8029,"Realtek 8029 Network Card"},

  {0x10e8,0x1072,"INES GPIB-PCI (AMCC5920 based)"},

  {0x10e8,0x2011,"Q-Motion Video Capture/Edit board"},

  {0x10e8,0x4750,"S5930 [Matchmaker]"},

  {0x10e8,0x5920,"S5920"},

  {0x10e8,0x8043,"LANai4.x [Myrinet LANai interface chip]"},

  {0x10e8,0x8062,"S5933_PARASTATION"},

  {0x10e8,0x807d,"S5933 [Matchmaker]"},

  {0x10e8,0x8088,"Kongsberg Spacetec Format Synchronizer"},

  {0x10e8,0x8089,"Kongsberg Spacetec Serial Output Board"},

  {0x10e8,0x809c,"S5933_HEPC3"},

  {0x10e8,0x80b9,"Harmonix Hi-Card P8 (4x active ISDN BRI)"},

  {0x10e8,0x80d7,"PCI-9112"},

  {0x10e8,0x80d8,"PCI-7200"},

  {0x10e8,0x80d9,"PCI-9118"},

  {0x10e8,0x80da,"PCI-9812"},

  {0x10e8,0x80fc,"APCI1500 Signal processing controller (16 dig. inputs + 16 dig. outputs)"},

  {0x10e8,0x811a,"PCI-IEEE1355-DS-DE Interface"},

  {0x10e8,0x814c,"Fastcom ESCC-PCI (Commtech, Inc.)"},

  {0x10e8,0x8170,"S5933 [Matchmaker] (Chipset Development Tool)"},

  {0x10e8,0x81e6,"Multimedia video controller"},

  {0x10e8,0x828d,"APCI3001 Signal processing controller (up to 16 analog inputs)"},

  {0x10e8,0x8291,"Fastcom 232/8-PCI (Commtech, Inc.)"},

  {0x10e8,0x82c4,"Fastcom 422/4-PCI (Commtech, Inc.)"},

  {0x10e8,0x82c5,"Fastcom 422/2-PCI (Commtech, Inc.)"},

  {0x10e8,0x82c6,"Fastcom IG422/1-PCI (Commtech, Inc.)"},

  {0x10e8,0x82c7,"Fastcom IG232/2-PCI (Commtech, Inc.)"},

  {0x10e8,0x82ca,"Fastcom 232/4-PCI (Commtech, Inc.)"},

  {0x10e8,0x82db,"AJA HDNTV HD SDI Framestore"},

  {0x10e8,0x82e2,"Fastcom DIO24H-PCI (Commtech, Inc.)"},

  {0x10e8,0x8406,"PCIcanx/PCIcan CAN interface [Kvaser AB]"},

  {0x10e8,0x8407,"PCIcan II CAN interface (A1021, PCB-07, PCB-08) [Kvaser AB]"},

  {0x10e8,0x8851,"S5933 on Innes Corp FM Radio Capture card"},

  {0x10e8,0xe004,"X-Gene PCIe bridge"},

  {0x10ea,0x1680,"IGA-1680"},

  {0x10ea,0x1682,"IGA-1682"},

  {0x10ea,0x1683,"IGA-1683"},

  {0x10ea,0x2000,"CyberPro 2000"},

  {0x10ea,0x2010,"CyberPro 2000A"},

  {0x10ea,0x5000,"CyberPro 5000"},

  {0x10ea,0x5050,"CyberPro 5050"},

  {0x10ea,0x5202,"CyberPro 5202"},

  {0x10ea,0x5252,"CyberPro5252"},

  {0x10eb,0x0101,"3GA"},

  {0x10eb,0x8111,"Twist3 Frame Grabber"},

  {0x10ec,0x0139,"RTL-8139/8139C/8139C+ Ethernet Controller"},

  {0x10ec,0x5208,"RTS5208 PCI Express Card Reader"},

  {0x10ec,0x5209,"RTS5209 PCI Express Card Reader"},

  {0x10ec,0x5227,"RTS5227 PCI Express Card Reader"},

  {0x10ec,0x5229,"RTS5229 PCI Express Card Reader"},

  {0x10ec,0x522a,"RTS522A PCI Express Card Reader"},

  {0x10ec,0x5249,"RTS5249 PCI Express Card Reader"},

  {0x10ec,0x524a,"RTS524A PCI Express Card Reader"},

  {0x10ec,0x5250,"RTS5250 PCI Express Card Reader"},

  {0x10ec,0x525a,"RTS525A PCI Express Card Reader"},

  {0x10ec,0x5286,"RTS5286 PCI Express Card Reader"},

  {0x10ec,0x5287,"RTL8411B PCI Express Card Reader"},

  {0x10ec,0x5288,"RTS5288 PCI Express Card Reader"},

  {0x10ec,0x5289,"RTL8411 PCI Express Card Reader"},

  {0x10ec,0x8029,"RTL-8029(AS)"},

  {0x10ec,0x8129,"RTL-8129"},

  {0x10ec,0x8136,"RTL8101/2/6E PCI Express Fast/Gigabit Ethernet controller"},

  {0x10ec,0x8138,"RT8139 (B/C) Cardbus Fast Ethernet Adapter"},

  {0x10ec,0x8139,"RTL-8100/8101L/8139 PCI Fast Ethernet Adapter"},

  {0x10ec,0x8167,"RTL-8110SC/8169SC Gigabit Ethernet"},

  {0x10ec,0x8168,"RTL8111/8168/8411 PCI Express Gigabit Ethernet Controller"},

  {0x10ec,0x8169,"RTL8169 PCI Gigabit Ethernet Controller"},

  {0x10ec,0x8171,"RTL8191SEvA Wireless LAN Controller"},

  {0x10ec,0x8172,"RTL8191SEvB Wireless LAN Controller"},

  {0x10ec,0x8173,"RTL8192SE Wireless LAN Controller"},

  {0x10ec,0x8174,"RTL8192SE Wireless LAN Controller"},

  {0x10ec,0x8176,"RTL8188CE 802.11b/g/n WiFi Adapter"},

  {0x10ec,0x8177,"RTL8191CE PCIe Wireless Network Adapter"},

  {0x10ec,0x8178,"RTL8192CE PCIe Wireless Network Adapter"},

  {0x10ec,0x8179,"RTL8188EE Wireless Network Adapter"},

  {0x10ec,0x8180,"RTL8180L 802.11b MAC"},

  {0x10ec,0x8185,"RTL-8185 IEEE 802.11a/b/g Wireless LAN Controller"},

  {0x10ec,0x818b,"RTL8192EE PCIe Wireless Network Adapter"},

  {0x10ec,0x8190,"RTL8190 802.11n PCI Wireless Network Adapter"},

  {0x10ec,0x8191,"RTL8192CE PCIe Wireless Network Adapter"},

  {0x10ec,0x8192,"RTL8192E/RTL8192SE Wireless LAN Controller"},

  {0x10ec,0x8193,"RTL8192DE Wireless LAN Controller"},

  {0x10ec,0x8196,"RTL8196 Integrated PCI-e Bridge"},

  {0x10ec,0x8197,"SmartLAN56 56K Modem"},

  {0x10ec,0x8199,"RTL8187SE Wireless LAN Controller"},

  {0x10ec,0x8723,"RTL8723AE PCIe Wireless Network Adapter"},

  {0x10ec,0x8812,"RTL8812AE 802.11ac PCIe Wireless Network Adapter"},

  {0x10ec,0x8813,"RTL8813AE 802.11ac PCIe Wireless Network Adapter"},

  {0x10ec,0x8821,"RTL8821AE 802.11ac PCIe Wireless Network Adapter"},

  {0x10ec,0xb723,"RTL8723BE PCIe Wireless Network Adapter"},

  {0x10ed,0x7310,"V7310"},

  {0x10ee,0x0001,"EUROCOM for PCI (ECOMP)"},

  {0x10ee,0x0002,"Octal E1/T1 for PCI ETP Card"},

  {0x10ee,0x0007,"Default PCIe endpoint ID"},

  {0x10ee,0x0205,"Wildcard TE205P"},

  {0x10ee,0x0210,"Wildcard TE210P"},

  {0x10ee,0x0300,"Spartan 3 Designs (Xilinx IP)"},

  {0x10ee,0x0314,"Wildcard TE405P/TE410P (1st Gen)"},

  {0x10ee,0x0405,"Wildcard TE405P (2nd Gen)"},

  {0x10ee,0x0410,"Wildcard TE410P (2nd Gen)"},

  {0x10ee,0x0600,"Xilinx 6 Designs (Xilinx IP)"},

  {0x10ee,0x3fc0,"RME Digi96"},

  {0x10ee,0x3fc1,"RME Digi96/8"},

  {0x10ee,0x3fc2,"RME Digi96/8 Pro"},

  {0x10ee,0x3fc3,"RME Digi96/8 Pad"},

  {0x10ee,0x3fc4,"RME Digi9652 (Hammerfall)"},

  {0x10ee,0x3fc5,"RME Hammerfall DSP"},

  {0x10ee,0x3fc6,"RME Hammerfall DSP MADI"},

  {0x10ee,0x7038,"FPGA Card XC7VX690T"},

  {0x10ee,0x8380,"Ellips ProfiXpress Profibus Master"},

  {0x10ee,0x8381,"Ellips Santos Frame Grabber"},

  {0x10ee,0xd154,"Copley Controls CAN card (PCI-CAN-02)"},

  {0x10ee,0xebf0,"SED Systems Modulator/Demodulator"},

  {0x10ee,0xebf1,"SED Systems Audio Interface Card"},

  {0x10ee,0xebf2,"SED Systems Common PCI Interface"},

  {0x10ef,0x8154,"M815x Token Ring Adapter"},

  {0x10f1,0x2865,"Tyan Thunder K8E S2865"},

  {0x10f1,0x5300,"Tyan S5380 Mainboard"},

  {0x10f5,0xa001,"NDR4000 [NR4600 Bridge]"},

  {0x10fa,0x000c,"TARGA 1000"},

  {0x10fb,0x186f,"TH 6255"},

  {0x10fc,0x0003,"Cardbus IDE Controller"},

  {0x10fc,0x0005,"Cardbus SCSI CBSC II"},

  {0x1101,0x0002,"INI-920 Ultra SCSI Adapter"},

  {0x1101,0x1060,"INI-A100U2W"},

  {0x1101,0x1622,"INI-1623 PCI SATA-II Controller"},

  {0x1101,0x9100,"INI-9100/9100W"},

  {0x1101,0x9400,"INI-940 Fast Wide SCSI Adapter"},

  {0x1101,0x9401,"INI-935 Fast Wide SCSI Adapter"},

  {0x1101,0x9500,"INI-950 SCSI Adapter"},

  {0x1101,0x9502,"INI-950P Ultra Wide SCSI Adapter"},

  {0x1102,0x0002,"EMU10k1 [Sound Blaster Live! Series]"},

  {0x1102,0x0003,"SB AWE64(D)"},

  {0x1102,0x0004,"EMU10k2/CA0100/CA0102/CA10200 [Sound Blaster Audigy Series]"},

  {0x1102,0x0005,"EMU20k1 [Sound Blaster X-Fi Series]"},

  {0x1102,0x0006,"EMU10k1X [SB Live! Value/OEM Series]"},

  {0x1102,0x0007,"CA0106/CA0111 [SB Live!/Audigy/X-Fi Series]"},

  {0x1102,0x0008,"CA0108/CA10300 [Sound Blaster Audigy Series]"},

  {0x1102,0x0009,"CA0110 [Sound Blaster X-Fi Xtreme Audio]"},

  {0x1102,0x000b,"EMU20k2 [Sound Blaster X-Fi Titanium Series]"},

  {0x1102,0x0012,"Sound Core3D [Sound Blaster Recon3D / Z-Series]"},

  {0x1102,0x4001,"SB Audigy FireWire Port"},

  {0x1102,0x7002,"SB Live! Game Port"},

  {0x1102,0x7003,"SB Audigy Game Port"},

  {0x1102,0x7004,"[SB Live! Value] Input device controller"},

  {0x1102,0x7005,"SB Audigy LS Game Port"},

  {0x1102,0x7006,"[SB X-Fi Xtreme Audio] CA0110-IBG PCIe to PCI Bridge"},

  {0x1102,0x8938,"Ectiva EV1938"},

  {0x1103,0x0003,"HPT343/345/346/363"},

  {0x1103,0x0004,"HPT366/368/370/370A/372/372N"},

  {0x1103,0x0005,"HPT372A/372N"},

  {0x1103,0x0006,"HPT302/302N"},

  {0x1103,0x0007,"HPT371/371N"},

  {0x1103,0x0008,"HPT374"},

  {0x1103,0x0009,"HPT372N"},

  {0x1103,0x0620,"RocketRAID 620 2 Port SATA-III Controller"},

  {0x1103,0x0622,"RocketRAID 622 2 Port SATA-III Controller"},

  {0x1103,0x0640,"RocketRAID 640 4 Port SATA-III Controller"},

  {0x1103,0x0641,"RocketRAID 640L 4 Port SATA-III Controller"},

  {0x1103,0x0642,"RocketRAID 642L SATA-III Controller (2 eSATA ports + 2 internal SATA ports)"},

  {0x1103,0x0644,"RocketRAID 644 4 Port SATA-III Controller (eSATA)"},

  {0x1103,0x0645,"RocketRAID 644L 4 Port SATA-III Controller (eSATA)"},

  {0x1103,0x0646,"RocketRAID 644LS SATA-III Controller (4 eSATA devices connected by 1 SAS cable)"},

  {0x1103,0x1720,"RocketRAID 1720 (2x SATA II RAID Controller)"},

  {0x1103,0x1740,"RocketRAID 1740"},

  {0x1103,0x1742,"RocketRAID 1742"},

  {0x1103,0x2210,"RocketRAID 2210 SATA-II Controller"},

  {0x1103,0x2300,"RocketRAID 230x 4 Port SATA-II Controller"},

  {0x1103,0x2310,"RocketRAID 2310 4 Port SATA-II Controller"},

  {0x1103,0x2320,"RocketRAID 2320 SATA-II Controller"},

  {0x1103,0x2322,"RocketRAID 2322 SATA-II Controller"},

  {0x1103,0x2340,"RocketRAID 2340 16 Port SATA-II Controller"},

  {0x1103,0x2640,"RocketRAID 2640 SAS/SATA Controller"},

  {0x1103,0x2722,"RocketRAID 2722"},

  {0x1103,0x2740,"RocketRAID 2740"},

  {0x1103,0x2744,"RocketRaid 2744"},

  {0x1103,0x2782,"RocketRAID 2782"},

  {0x1103,0x3120,"RocketRAID 3120"},

  {0x1103,0x3220,"RocketRAID 3220"},

  {0x1103,0x3320,"RocketRAID 3320"},

  {0x1103,0x4310,"RocketRaid 4310"},

  {0x1105,0x1105,"REALmagic Xcard MPEG 1/2/3/4 DVD Decoder"},

  {0x1105,0x8300,"REALmagic Hollywood Plus DVD Decoder"},

  {0x1105,0x8400,"EM840x REALmagic DVD/MPEG-2 Audio/Video Decoder"},

  {0x1105,0x8401,"EM8401 REALmagic DVD/MPEG-2 A/V Decoder"},

  {0x1105,0x8470,"EM8470 REALmagic DVD/MPEG-4 A/V Decoder"},

  {0x1105,0x8471,"EM8471 REALmagic DVD/MPEG-4 A/V Decoder"},

  {0x1105,0x8475,"EM8475 REALmagic DVD/MPEG-4 A/V Decoder"},

  {0x1105,0x8476,"EM8476 REALmagic DVD/MPEG-4 A/V Decoder"},

  {0x1105,0x8485,"EM8485 REALmagic DVD/MPEG-4 A/V Decoder"},

  {0x1105,0x8486,"EM8486 REALmagic DVD/MPEG-4 A/V Decoder"},

  {0x1105,0xc621,"EM8621L Digital Media Processor"},

  {0x1105,0xc622,"EM8622L MPEG-4.10 (H.264) and SMPTE 421M (VC-1) A/V Decoder"},

  {0x1106,0x0102,"Embedded VIA Ethernet Controller"},

  {0x1106,0x0130,"VT6305 1394.A Controller"},

  {0x1106,0x0198,"P4X600 Host Bridge"},

  {0x1106,0x0204,"K8M800 Host Bridge"},

  {0x1106,0x0208,"PT890 Host Bridge"},

  {0x1106,0x0238,"K8T890 Host Bridge"},

  {0x1106,0x0258,"PT880 Host Bridge"},

  {0x1106,0x0259,"CN333/CN400/PM880 Host Bridge"},

  {0x1106,0x0269,"KT880 Host Bridge"},

  {0x1106,0x0282,"K8T800Pro Host Bridge"},

  {0x1106,0x0290,"K8M890 Host Bridge"},

  {0x1106,0x0293,"PM896 Host Bridge"},

  {0x1106,0x0296,"P4M800 Host Bridge"},

  {0x1106,0x0305,"VT8363/8365 [KT133/KM133]"},

  {0x1106,0x0308,"PT880 Ultra/PT894 Host Bridge"},

  {0x1106,0x0314,"CN700/VN800/P4M800CE/Pro Host Bridge"},

  {0x1106,0x0324,"CX700/VX700 Host Bridge"},

  {0x1106,0x0327,"P4M890 Host Bridge"},

  {0x1106,0x0336,"K8M890CE Host Bridge"},

  {0x1106,0x0340,"PT900 Host Bridge"},

  {0x1106,0x0351,"K8T890CF Host Bridge"},

  {0x1106,0x0353,"VX800 Host Bridge"},

  {0x1106,0x0364,"CN896/VN896/P4M900 Host Bridge"},

  {0x1106,0x0391,"VT8371 [KX133]"},

  {0x1106,0x0409,"VX855/VX875 Host Bridge: Host Control"},

  {0x1106,0x0410,"VX900 Host Bridge: Host Control"},

  {0x1106,0x0415,"VT6415 PATA IDE Host Controller"},

  {0x1106,0x0501,"VT8501 [Apollo MVP4]"},

  {0x1106,0x0505,"VT82C505"},

  {0x1106,0x0561,"VT82C576MV"},

  {0x1106,0x0571,"VT82C586A/B/VT82C686/A/B/VT823x/A/C PIPC Bus Master IDE"},

  {0x1106,0x0576,"VT82C576 3V [Apollo Master]"},

  {0x1106,0x0581,"CX700/VX700 RAID Controller"},

  {0x1106,0x0585,"VT82C585VP [Apollo VP1/VPX]"},

  {0x1106,0x0586,"VT82C586/A/B PCI-to-ISA [Apollo VP]"},

  {0x1106,0x0591,"VT8237A SATA 2-Port Controller"},

  {0x1106,0x0595,"VT82C595 [Apollo VP2]"},

  {0x1106,0x0596,"VT82C596 ISA [Mobile South]"},

  {0x1106,0x0597,"VT82C597 [Apollo VP3]"},

  {0x1106,0x0598,"VT82C598 [Apollo MVP3]"},

  {0x1106,0x0601,"VT8601 [Apollo ProMedia]"},

  {0x1106,0x0605,"VT8605 [ProSavage PM133]"},

  {0x1106,0x0680,"VT82C680 [Apollo P6]"},

  {0x1106,0x0686,"VT82C686 [Apollo Super South]"},

  {0x1106,0x0691,"VT82C693A/694x [Apollo PRO133x]"},

  {0x1106,0x0693,"VT82C693 [Apollo Pro Plus]"},

  {0x1106,0x0698,"VT82C693A [Apollo Pro133 AGP]"},

  {0x1106,0x0709,"VX11 Standard Host Bridge"},

  {0x1106,0x070a,"VX11 PCI Express Root Port"},

  {0x1106,0x070b,"VX11 PCI Express Root Port"},

  {0x1106,0x070c,"VX11 PCI Express Root Port"},

  {0x1106,0x070d,"VX11 PCI Express Root Port"},

  {0x1106,0x070e,"VX11 PCI Express Root Port"},

  {0x1106,0x0926,"VT82C926 [Amazon]"},

  {0x1106,0x1000,"VT82C570MV"},

  {0x1106,0x1106,"VT82C570MV"},

  {0x1106,0x1122,"VX800/VX820 Chrome 9 HC3 Integrated Graphics"},

  {0x1106,0x1204,"K8M800 Host Bridge"},

  {0x1106,0x1208,"PT890 Host Bridge"},

  {0x1106,0x1238,"K8T890 Host Bridge"},

  {0x1106,0x1258,"PT880 Host Bridge"},

  {0x1106,0x1259,"CN333/CN400/PM880 Host Bridge"},

  {0x1106,0x1269,"KT880 Host Bridge"},

  {0x1106,0x1282,"K8T800Pro Host Bridge"},

  {0x1106,0x1290,"K8M890 Host Bridge"},

  {0x1106,0x1293,"PM896 Host Bridge"},

  {0x1106,0x1296,"P4M800 Host Bridge"},

  {0x1106,0x1308,"PT894 Host Bridge"},

  {0x1106,0x1314,"CN700/VN800/P4M800CE/Pro Host Bridge"},

  {0x1106,0x1324,"CX700/VX700 Host Bridge"},

  {0x1106,0x1327,"P4M890 Host Bridge"},

  {0x1106,0x1336,"K8M890CE Host Bridge"},

  {0x1106,0x1340,"PT900 Host Bridge"},

  {0x1106,0x1351,"VT3351 Host Bridge"},

  {0x1106,0x1353,"VX800/VX820 Error Reporting"},

  {0x1106,0x1364,"CN896/VN896/P4M900 Host Bridge"},

  {0x1106,0x1409,"VX855/VX875 Error Reporting"},

  {0x1106,0x1410,"VX900 Error Reporting"},

  {0x1106,0x1571,"VT82C576M/VT82C586"},

  {0x1106,0x1595,"VT82C595/97 [Apollo VP2/97]"},

  {0x1106,0x1732,"VT1732 [Envy24 II] PCI Multi-Channel Audio Controller"},

  {0x1106,0x2106,"VIA Rhine Family Fast Ethernet Adapter (VT6105)"},

  {0x1106,0x2204,"K8M800 Host Bridge"},

  {0x1106,0x2208,"PT890 Host Bridge"},

  {0x1106,0x2238,"K8T890 Host Bridge"},

  {0x1106,0x2258,"PT880 Host Bridge"},

  {0x1106,0x2259,"CN333/CN400/PM880 CPU Host Bridge"},

  {0x1106,0x2269,"KT880 Host Bridge"},

  {0x1106,0x2282,"K8T800Pro Host Bridge"},

  {0x1106,0x2290,"K8M890 Host Bridge"},

  {0x1106,0x2293,"PM896 Host Bridge"},

  {0x1106,0x2296,"P4M800 Host Bridge"},

  {0x1106,0x2308,"PT894 Host Bridge"},

  {0x1106,0x2314,"CN700/VN800/P4M800CE/Pro Host Bridge"},

  {0x1106,0x2324,"CX700/VX700 Host Bridge"},

  {0x1106,0x2327,"P4M890 Host Bridge"},

  {0x1106,0x2336,"K8M890CE Host Bridge"},

  {0x1106,0x2340,"PT900 Host Bridge"},

  {0x1106,0x2351,"VT3351 Host Bridge"},

  {0x1106,0x2353,"VX800/VX820 Host Bus Control"},

  {0x1106,0x2364,"CN896/VN896/P4M900 Host Bridge"},

  {0x1106,0x2409,"VX855/VX875 Host Bus Control"},

  {0x1106,0x2410,"VX900 CPU Bus Controller"},

  {0x1106,0x287a,"VT8251 PCI to PCI Bridge"},

  {0x1106,0x287b,"VT8251 Host Bridge"},

  {0x1106,0x287c,"VT8251 PCIE Root Port"},

  {0x1106,0x287d,"VT8251 PCIE Root Port"},

  {0x1106,0x287e,"VT8237/8251 Ultra VLINK Controller"},

  {0x1106,0x3022,"CLE266"},

  {0x1106,0x3038,"VT82xx/62xx UHCI USB 1.1 Controller"},

  {0x1106,0x3040,"VT82C586B ACPI"},

  {0x1106,0x3043,"VT86C100A [Rhine]"},

  {0x1106,0x3044,"VT6306/7/8 [Fire II(M)] IEEE 1394 OHCI Controller"},

  {0x1106,0x3050,"VT82C596 Power Management"},

  {0x1106,0x3051,"VT82C596 Power Management"},

  {0x1106,0x3053,"VT6105M [Rhine-III]"},

  {0x1106,0x3057,"VT82C686 [Apollo Super ACPI]"},

  {0x1106,0x3058,"VT82C686 AC97 Audio Controller"},

  {0x1106,0x3059,"VT8233/A/8235/8237 AC97 Audio Controller"},

  {0x1106,0x3065,"VT6102/VT6103 [Rhine-II]"},

  {0x1106,0x3068,"AC'97 Modem Controller"},

  {0x1106,0x3074,"VT8233 PCI to ISA Bridge"},

  {0x1106,0x3091,"VT8633 [Apollo Pro266]"},

  {0x1106,0x3099,"VT8366/A/7 [Apollo KT266/A/333]"},

  {0x1106,0x3101,"VT8653 Host Bridge"},

  {0x1106,0x3102,"VT8662 Host Bridge"},

  {0x1106,0x3103,"VT8615 Host Bridge"},

  {0x1106,0x3104,"USB 2.0"},

  {0x1106,0x3106,"VT6105/VT6106S [Rhine-III]"},

  {0x1106,0x3108,"K8M800/K8N800/K8N800A [S3 UniChrome Pro]"},

  {0x1106,0x3109,"VT8233C PCI to ISA Bridge"},

  {0x1106,0x3112,"VT8361 [KLE133] Host Bridge"},

  {0x1106,0x3113,"VPX/VPX2 PCI to PCI Bridge Controller"},

  {0x1106,0x3116,"VT8375 [KM266/KL266] Host Bridge"},

  {0x1106,0x3118,"CN400/PM800/PM880/PN800/PN880 [S3 UniChrome Pro]"},

  {0x1106,0x3119,"VT6120/VT6121/VT6122 Gigabit Ethernet Adapter"},

  {0x1106,0x3122,"VT8623 [Apollo CLE266] integrated CastleRock graphics"},

  {0x1106,0x3123,"VT8623 [Apollo CLE266]"},

  {0x1106,0x3128,"VT8753 [P4X266 AGP]"},

  {0x1106,0x3133,"VT3133 Host Bridge"},

  {0x1106,0x3142,"VT6651 WiFi Adapter, 802.11b"},

  {0x1106,0x3147,"VT8233A ISA Bridge"},

  {0x1106,0x3148,"P4M266 Host Bridge"},

  {0x1106,0x3149,"VIA VT6420 SATA RAID Controller"},

  {0x1106,0x3156,"P/KN266 Host Bridge"},

  {0x1106,0x3157,"CX700/VX700 [S3 UniChrome Pro]"},

  {0x1106,0x3164,"VT6410 ATA133 RAID controller"},

  {0x1106,0x3168,"P4X333/P4X400/PT800 AGP Bridge"},

  {0x1106,0x3177,"VT8235 ISA Bridge"},

  {0x1106,0x3178,"ProSavageDDR P4N333 Host Bridge"},

  {0x1106,0x3188,"VT8385 [K8T800 AGP] Host Bridge"},

  {0x1106,0x3189,"VT8377 [KT400/KT600 AGP] Host Bridge"},

  {0x1106,0x31b0,"VX11 Standard Host Bridge"},

  {0x1106,0x31b1,"VX11 Standard Host Bridge"},

  {0x1106,0x31b2,"VX11 DRAM Controller"},

  {0x1106,0x31b3,"VX11 Power Management Controller"},

  {0x1106,0x31b4,"VX11 I/O APIC"},

  {0x1106,0x31b5,"VX11 Scratch Device"},

  {0x1106,0x31b7,"VX11 Standard Host Bridge"},

  {0x1106,0x31b8,"VX11 PCI to PCI Bridge"},

  {0x1106,0x3204,"K8M800 Host Bridge"},

  {0x1106,0x3205,"VT8378 [KM400/A] Chipset Host Bridge"},

  {0x1106,0x3208,"PT890 Host Bridge"},

  {0x1106,0x3213,"VPX/VPX2 PCI to PCI Bridge Controller"},

  {0x1106,0x3218,"K8T800M Host Bridge"},

  {0x1106,0x3227,"VT8237 ISA bridge [KT600/K8T800/K8T890 South]"},

  {0x1106,0x3230,"K8M890CE/K8N890CE [Chrome 9]"},

  {0x1106,0x3238,"K8T890 Host Bridge"},

  {0x1106,0x3249,"VT6421 IDE/SATA Controller"},

  {0x1106,0x324a,"CX700/VX700 PCI to PCI Bridge"},

  {0x1106,0x324b,"CX700/VX700 Host Bridge"},

  {0x1106,0x324e,"CX700/VX700 Internal Module Bus"},

  {0x1106,0x3253,"VT6655 WiFi Adapter, 802.11a/b/g"},

  {0x1106,0x3258,"PT880 Host Bridge"},

  {0x1106,0x3259,"CN333/CN400/PM880 Host Bridge"},

  {0x1106,0x3260,"VIA Chrome9 HC IGP"},

  {0x1106,0x3269,"KT880 Host Bridge"},

  {0x1106,0x3282,"K8T800Pro Host Bridge"},

  {0x1106,0x3287,"VT8251 PCI to ISA Bridge"},

  {0x1106,0x3288,"VT8237A/VT8251 HDA Controller"},

  {0x1106,0x3290,"K8M890 Host Bridge"},

  {0x1106,0x3296,"P4M800 Host Bridge"},

  {0x1106,0x3324,"CX700/VX700 Host Bridge"},

  {0x1106,0x3327,"P4M890 Host Bridge"},

  {0x1106,0x3336,"K8M890CE Host Bridge"},

  {0x1106,0x3337,"VT8237A PCI to ISA Bridge"},

  {0x1106,0x3340,"PT900 Host Bridge"},

  {0x1106,0x3343,"P4M890 [S3 UniChrome Pro]"},

  {0x1106,0x3344,"CN700/P4M800 Pro/P4M800 CE/VN800 Graphics [S3 UniChrome Pro]"},

  {0x1106,0x3349,"VT8251 AHCI/SATA 4-Port Controller"},

  {0x1106,0x3351,"VT3351 Host Bridge"},

  {0x1106,0x3353,"VX800 PCI to PCI Bridge"},

  {0x1106,0x3364,"CN896/VN896/P4M900 Host Bridge"},

  {0x1106,0x3371,"CN896/VN896/P4M900 [Chrome 9 HC]"},

  {0x1106,0x3372,"VT8237S PCI to ISA Bridge"},

  {0x1106,0x337a,"VT8237A PCI to PCI Bridge"},

  {0x1106,0x337b,"VT8237A Host Bridge"},

  {0x1106,0x3403,"VT6315 Series Firewire Controller"},

  {0x1106,0x3409,"VX855/VX875 DRAM Bus Control"},

  {0x1106,0x3410,"VX900 DRAM Bus Control"},

  {0x1106,0x3432,"VL80x xHCI USB 3.0 Controller"},

  {0x1106,0x3456,"VX11 Standard Host Bridge"},

  {0x1106,0x345b,"VX11 Miscellaneous Bus"},

  {0x1106,0x3483,"VL805 USB 3.0 Host Controller"},

  {0x1106,0x3a01,"VX11 Graphics [Chrome 645/640]"},

  {0x1106,0x4149,"VIA VT6420 (ATA133) Controller"},

  {0x1106,0x4204,"K8M800 Host Bridge"},

  {0x1106,0x4208,"PT890 Host Bridge"},

  {0x1106,0x4238,"K8T890 Host Bridge"},

  {0x1106,0x4258,"PT880 Host Bridge"},

  {0x1106,0x4259,"CN333/CN400/PM880 Host Bridge"},

  {0x1106,0x4269,"KT880 Host Bridge"},

  {0x1106,0x4282,"K8T800Pro Host Bridge"},

  {0x1106,0x4290,"K8M890 Host Bridge"},

  {0x1106,0x4293,"PM896 Host Bridge"},

  {0x1106,0x4296,"P4M800 Host Bridge"},

  {0x1106,0x4308,"PT894 Host Bridge"},

  {0x1106,0x4314,"CN700/VN800/P4M800CE/Pro Host Bridge"},

  {0x1106,0x4324,"CX700/VX700 Host Bridge"},

  {0x1106,0x4327,"P4M890 Host Bridge"},

  {0x1106,0x4336,"K8M890CE Host Bridge"},

  {0x1106,0x4340,"PT900 Host Bridge"},

  {0x1106,0x4351,"VT3351 Host Bridge"},

  {0x1106,0x4353,"VX800/VX820 Power Management Control"},

  {0x1106,0x4364,"CN896/VN896/P4M900 Host Bridge"},

  {0x1106,0x4409,"VX855/VX875 Power Management Control"},

  {0x1106,0x4410,"VX900 Power Management and Chip Testing Control"},

  {0x1106,0x5030,"VT82C596 ACPI [Apollo PRO]"},

  {0x1106,0x5122,"VX855/VX875 Chrome 9 HCM Integrated Graphics"},

  {0x1106,0x5208,"PT890 I/O APIC Interrupt Controller"},

  {0x1106,0x5238,"K8T890 I/O APIC Interrupt Controller"},

  {0x1106,0x5287,"VT8251 Serial ATA Controller"},

  {0x1106,0x5290,"K8M890 I/O APIC Interrupt Controller"},

  {0x1106,0x5308,"PT894 I/O APIC Interrupt Controller"},

  {0x1106,0x5324,"VX800 Serial ATA and EIDE Controller"},

  {0x1106,0x5327,"P4M890 I/O APIC Interrupt Controller"},

  {0x1106,0x5336,"K8M890CE I/O APIC Interrupt Controller"},

  {0x1106,0x5340,"PT900 I/O APIC Interrupt Controller"},

  {0x1106,0x5351,"VT3351 I/O APIC Interrupt Controller"},

  {0x1106,0x5353,"VX800/VX820 APIC and Central Traffic Control"},

  {0x1106,0x5364,"CN896/VN896/P4M900 I/O APIC Interrupt Controller"},

  {0x1106,0x5372,"VT8237/8251 Serial ATA Controller"},

  {0x1106,0x5409,"VX855/VX875 APIC and Central Traffic Control"},

  {0x1106,0x5410,"VX900 APIC and Central Traffic Control"},

  {0x1106,0x6100,"VT85C100A [Rhine II]"},

  {0x1106,0x6287,"SATA RAID Controller"},

  {0x1106,0x6290,"K8M890CE Host Bridge"},

  {0x1106,0x6327,"P4M890 Security Device"},

  {0x1106,0x6353,"VX800/VX820 Scratch Registers"},

  {0x1106,0x6364,"CN896/VN896/P4M900 Security Device"},

  {0x1106,0x6409,"VX855/VX875 Scratch Registers"},

  {0x1106,0x6410,"VX900 Scratch Registers"},

  {0x1106,0x7122,"VX900 Graphics [Chrome9 HD]"},

  {0x1106,0x7204,"K8M800 Host Bridge"},

  {0x1106,0x7205,"KM400/KN400/P4M800 [S3 UniChrome]"},

  {0x1106,0x7208,"PT890 Host Bridge"},

  {0x1106,0x7238,"K8T890 Host Bridge"},

  {0x1106,0x7258,"PT880 Host Bridge"},

  {0x1106,0x7259,"CN333/CN400/PM880 Host Bridge"},

  {0x1106,0x7269,"KT880 Host Bridge"},

  {0x1106,0x7282,"K8T800Pro Host Bridge"},

  {0x1106,0x7290,"K8M890 Host Bridge"},

  {0x1106,0x7293,"PM896 Host Bridge"},

  {0x1106,0x7296,"P4M800 Host Bridge"},

  {0x1106,0x7308,"PT894 Host Bridge"},

  {0x1106,0x7314,"CN700/VN800/P4M800CE/Pro Host Bridge"},

  {0x1106,0x7324,"CX700/VX700 Host Bridge"},

  {0x1106,0x7327,"P4M890 Host Bridge"},

  {0x1106,0x7336,"K8M890CE Host Bridge"},

  {0x1106,0x7340,"PT900 Host Bridge"},

  {0x1106,0x7351,"VT3351 Host Bridge"},

  {0x1106,0x7353,"VX800/VX820 North-South Module Interface Control"},

  {0x1106,0x7364,"CN896/VN896/P4M900 Host Bridge"},

  {0x1106,0x7409,"VX855/VX875 North-South Module Interface Control"},

  {0x1106,0x7410,"VX900 North-South Module Interface Control"},

  {0x1106,0x8231,"VT8231 [PCI-to-ISA Bridge]"},

  {0x1106,0x8235,"VT8235 ACPI"},

  {0x1106,0x8305,"VT8363/8365 [KT133/KM133 AGP]"},

  {0x1106,0x8324,"CX700/VX700 PCI to ISA Bridge"},

  {0x1106,0x8353,"VX800/VX820 Bus Control and Power Management"},

  {0x1106,0x8391,"VT8371 [KX133 AGP]"},

  {0x1106,0x8400,"MVP4"},

  {0x1106,0x8409,"VX855/VX875 Bus Control and Power Management"},

  {0x1106,0x8410,"VX900 Bus Control and Power Management"},

  {0x1106,0x8500,"KLE133/PLE133/PLE133T"},

  {0x1106,0x8501,"VT8501 [Apollo MVP4 AGP]"},

  {0x1106,0x8596,"VT82C596 [Apollo PRO AGP]"},

  {0x1106,0x8597,"VT82C597 [Apollo VP3 AGP]"},

  {0x1106,0x8598,"VT82C598/694x [Apollo MVP3/Pro133x AGP]"},

  {0x1106,0x8601,"VT8601 [Apollo ProMedia AGP]"},

  {0x1106,0x8605,"VT8605 [PM133 AGP]"},

  {0x1106,0x8691,"VT82C691 [Apollo Pro]"},

  {0x1106,0x8693,"VT82C693 [Apollo Pro Plus] PCI Bridge"},

  {0x1106,0x8a25,"PL133/PL133T [S3 ProSavage]"},

  {0x1106,0x8a26,"KL133/KL133A/KM133/KM133A [S3 ProSavage]"},

  {0x1106,0x8d01,"PN133/PN133T [S3 Twister]"},

  {0x1106,0x8d04,"KM266/P4M266/P4M266A/P4N266 [S3 ProSavageDDR]"},

  {0x1106,0x9001,"VX900 Serial ATA Controller"},

  {0x1106,0x9082,"Standard AHCI 1.0 SATA Controller"},

  {0x1106,0x9140,"HDMI Audio Device"},

  {0x1106,0x9201,"USB3.0 Controller"},

  {0x1106,0x9530,"Secure Digital Memory Card Controller"},

  {0x1106,0x95d0,"SDIO Host Controller"},

  {0x1106,0xa208,"PT890 PCI to PCI Bridge Controller"},

  {0x1106,0xa238,"K8T890 PCI to PCI Bridge Controller"},

  {0x1106,0xa327,"P4M890 PCI to PCI Bridge Controller"},

  {0x1106,0xa353,"VX8xx South-North Module Interface Control"},

  {0x1106,0xa364,"CN896/VN896/P4M900 PCI to PCI Bridge Controller"},

  {0x1106,0xa409,"VX855/VX875 USB Device Controller"},

  {0x1106,0xa410,"VX900 PCI Express Root Port 0"},

  {0x1106,0xb091,"VT8633 [Apollo Pro266 AGP]"},

  {0x1106,0xb099,"VT8366/A/7 [Apollo KT266/A/333 AGP]"},

  {0x1106,0xb101,"VT8653 AGP Bridge"},

  {0x1106,0xb102,"VT8362 AGP Bridge"},

  {0x1106,0xb103,"VT8615 AGP Bridge"},

  {0x1106,0xb112,"VT8361 [KLE133] AGP Bridge"},

  {0x1106,0xb113,"VPX/VPX2 I/O APIC Interrupt Controller"},

  {0x1106,0xb115,"VT8363/8365 [KT133/KM133] PCI Bridge"},

  {0x1106,0xb168,"VT8235 PCI Bridge"},

  {0x1106,0xb188,"VT8237/8251 PCI bridge [K8M890/K8T800/K8T890 South]"},

  {0x1106,0xb198,"VT8237/VX700 PCI Bridge"},

  {0x1106,0xb213,"VPX/VPX2 I/O APIC Interrupt Controller"},

  {0x1106,0xb353,"VX855/VX875/VX900 PCI to PCI Bridge"},

  {0x1106,0xb410,"VX900 PCI Express Root Port 1"},

  {0x1106,0xb999,"[K8T890 North / VT8237 South] PCI Bridge"},

  {0x1106,0xc208,"PT890 PCI to PCI Bridge Controller"},

  {0x1106,0xc238,"K8T890 PCI to PCI Bridge Controller"},

  {0x1106,0xc327,"P4M890 PCI to PCI Bridge Controller"},

  {0x1106,0xc340,"PT900 PCI to PCI Bridge Controller"},

  {0x1106,0xc353,"VX800/VX820 PCI Express Root Port"},

  {0x1106,0xc364,"CN896/VN896/P4M900 PCI to PCI Bridge Controller"},

  {0x1106,0xc409,"VX855/VX875 EIDE Controller"},

  {0x1106,0xc410,"VX900 PCI Express Root Port 2"},

  {0x1106,0xd104,"VT8237R USB UDCI Controller"},

  {0x1106,0xd208,"PT890 PCI to PCI Bridge Controller"},

  {0x1106,0xd213,"VPX/VPX2 PCI to PCI Bridge Controller"},

  {0x1106,0xd238,"K8T890 PCI to PCI Bridge Controller"},

  {0x1106,0xd340,"PT900 PCI to PCI Bridge Controller"},

  {0x1106,0xd410,"VX900 PCI Express Root Port 3"},

  {0x1106,0xe208,"PT890 PCI to PCI Bridge Controller"},

  {0x1106,0xe238,"K8T890 PCI to PCI Bridge Controller"},

  {0x1106,0xe340,"PT900 PCI to PCI Bridge Controller"},

  {0x1106,0xe353,"VX800/VX820 PCI Express Root Port"},

  {0x1106,0xe410,"VX900 PCI Express Physical Layer Electrical Sub-block"},

  {0x1106,0xf208,"PT890 PCI to PCI Bridge Controller"},

  {0x1106,0xf238,"K8T890 PCI to PCI Bridge Controller"},

  {0x1106,0xf340,"PT900 PCI to PCI Bridge Controller"},

  {0x1106,0xf353,"VX800/VX820 PCI Express Root Port"},

  {0x1107,0x0576,"VIA VT82C570MV [Apollo] (Wrong vendor ID!)"},

  {0x1108,0x0100,"p1690plus_AA"},

  {0x1108,0x0101,"p1690plus_AB"},

  {0x1108,0x0105,"P1690Plus"},

  {0x1108,0x0108,"P1690Plus"},

  {0x1108,0x0138,"P1690Plus"},

  {0x1108,0x0139,"P1690Plus"},

  {0x1108,0x013c,"P1690Plus"},

  {0x1108,0x013d,"P1690Plus"},

  {0x1109,0x1400,"EM110TX [EX110TX]"},

  {0x110a,0x0002,"Pirahna 2-port"},

  {0x110a,0x0005,"Tulip controller, power management, switch extender"},

  {0x110a,0x0006,"FSC PINC (I/O-APIC)"},

  {0x110a,0x0015,"FSC Multiprocessor Interrupt Controller"},

  {0x110a,0x001d,"FSC Copernicus Management Controller"},

  {0x110a,0x007b,"FSC Remote Service Controller, mailbox device"},

  {0x110a,0x007c,"FSC Remote Service Controller, shared memory device"},

  {0x110a,0x007d,"FSC Remote Service Controller, SMIC device"},

  {0x110a,0x2101,"HST SAPHIR V Primary PCI (ISDN/PMx)"},

  {0x110a,0x2102,"DSCC4 PEB/PEF 20534 DMA Supported Serial Communication Controller with 4 Channels"},

  {0x110a,0x2104,"Eicon Diva 2.02 compatible passive ISDN card"},

  {0x110a,0x3141,"SIMATIC NET CP 5611 / 5621"},

  {0x110a,0x3142,"SIMATIC NET CP 5613 / 5614"},

  {0x110a,0x3143,"SIMATIC NET CP 1613"},

  {0x110a,0x4021,"SIMATIC NET CP 5512 (Profibus and MPI Cardbus Adapter)"},

  {0x110a,0x4029,"SIMATIC NET CP 5613 A2"},

  {0x110a,0x4035,"SIMATIC NET CP 1613 A2"},

  {0x110a,0x4036,"SIMATIC NET CP 1616"},

  {0x110a,0x4038,"SIMATIC NET CP 1604"},

  {0x110a,0x4069,"SIMATIC NET CP 5623"},

  {0x110a,0x407c,"SIMATIC NET CP 5612"},

  {0x110a,0x407d,"SIMATIC NET CP 5613 A3"},

  {0x110a,0x407e,"SIMATIC NET CP 5622"},

  {0x110a,0x4083,"SIMATIC NET CP 5614 A3"},

  {0x110a,0x4084,"SIMATIC NET CP 1626"},

  {0x110a,0x4942,"FPGA I-Bus Tracer for MBD"},

  {0x110a,0x6120,"SZB6120"},

  {0x110b,0x0001,"Mpact Media Processor"},

  {0x110b,0x0004,"Mpact 2"},

  {0x1110,0x6037,"Firepower Powerized SMP I/O ASIC"},

  {0x1110,0x6073,"Firepower Powerized SMP I/O ASIC"},

  {0x1112,0x2200,"FDDI Adapter"},

  {0x1112,0x2300,"Fast Ethernet Adapter"},

  {0x1112,0x2340,"4 Port Fast Ethernet Adapter"},

  {0x1112,0x2400,"ATM Adapter"},

  {0x1113,0x1211,"SMC2-1211TX"},

  {0x1113,0x1216,"EN-1216 Ethernet Adapter"},

  {0x1113,0x1217,"EN-1217 Ethernet Adapter"},

  {0x1113,0x5105,"10Mbps Network card"},

  {0x1113,0x9211,"EN-1207D Fast Ethernet Adapter"},

  {0x1113,0x9511,"21x4x DEC-Tulip compatible Fast Ethernet"},

  {0x1113,0xd301,"CPWNA100 (Philips wireless PCMCIA)"},

  {0x1113,0xec02,"SMC 1244TX v3"},

  {0x1113,0xee23,"SMCWPCIT-G 108Mbps Wireless PCI adapter"},

  {0x1114,0x0506,"at76c506 802.11b Wireless Network Adaptor"},

  {0x1116,0x0022,"DT3001"},

  {0x1116,0x0023,"DT3002"},

  {0x1116,0x0024,"DT3003"},

  {0x1116,0x0025,"DT3004"},

  {0x1116,0x0026,"DT3005"},

  {0x1116,0x0027,"DT3001-PGL"},

  {0x1116,0x0028,"DT3003-PGL"},

  {0x1116,0x0051,"DT322"},

  {0x1116,0x0060,"DT340"},

  {0x1116,0x0069,"DT332"},

  {0x1116,0x80c2,"DT3162"},

  {0x1117,0x9500,"Max-1C SVGA card"},

  {0x1117,0x9501,"Max-1C image processing"},

  {0x1119,0x0001,"GDT 6000B/6010"},

  {0x1119,0x0002,"GDT 6110/6510"},

  {0x1119,0x0003,"GDT 6120/6520"},

  {0x1119,0x0004,"GDT 6530"},

  {0x1119,0x0005,"GDT 6550"},

  {0x1119,0x0006,"GDT 6117/6517"},

  {0x1119,0x0007,"GDT 6127/6527"},

  {0x1119,0x0008,"GDT 6537"},

  {0x1119,0x0009,"GDT 6557/6557-ECC"},

  {0x1119,0x000a,"GDT 6115/6515"},

  {0x1119,0x000b,"GDT 6125/6525"},

  {0x1119,0x000c,"GDT 6535"},

  {0x1119,0x000d,"GDT 6555/6555-ECC"},

  {0x1119,0x0100,"GDT 6117RP/6517RP"},

  {0x1119,0x0101,"GDT 6127RP/6527RP"},

  {0x1119,0x0102,"GDT 6537RP"},

  {0x1119,0x0103,"GDT 6557RP"},

  {0x1119,0x0104,"GDT 6111RP/6511RP"},

  {0x1119,0x0105,"GDT 6121RP/6521RP"},

  {0x1119,0x0110,"GDT 6117RD/6517RD"},

  {0x1119,0x0111,"GDT 6127RD/6527RD"},

  {0x1119,0x0112,"GDT 6537RD"},

  {0x1119,0x0113,"GDT 6557RD"},

  {0x1119,0x0114,"GDT 6111RD/6511RD"},

  {0x1119,0x0115,"GDT 6121RD/6521RD"},

  {0x1119,0x0118,"GDT 6118RD/6518RD/6618RD"},

  {0x1119,0x0119,"GDT 6128RD/6528RD/6628RD"},

  {0x1119,0x011a,"GDT 6538RD/6638RD"},

  {0x1119,0x011b,"GDT 6558RD/6658RD"},

  {0x1119,0x0120,"GDT 6117RP2/6517RP2"},

  {0x1119,0x0121,"GDT 6127RP2/6527RP2"},

  {0x1119,0x0122,"GDT 6537RP2"},

  {0x1119,0x0123,"GDT 6557RP2"},

  {0x1119,0x0124,"GDT 6111RP2/6511RP2"},

  {0x1119,0x0125,"GDT 6121RP2/6521RP2"},

  {0x1119,0x0136,"GDT 6113RS/6513RS"},

  {0x1119,0x0137,"GDT 6123RS/6523RS"},

  {0x1119,0x0138,"GDT 6118RS/6518RS/6618RS"},

  {0x1119,0x0139,"GDT 6128RS/6528RS/6628RS"},

  {0x1119,0x013a,"GDT 6538RS/6638RS"},

  {0x1119,0x013b,"GDT 6558RS/6658RS"},

  {0x1119,0x013c,"GDT 6533RS/6633RS"},

  {0x1119,0x013d,"GDT 6543RS/6643RS"},

  {0x1119,0x013e,"GDT 6553RS/6653RS"},

  {0x1119,0x013f,"GDT 6563RS/6663RS"},

  {0x1119,0x0166,"GDT 7113RN/7513RN/7613RN"},

  {0x1119,0x0167,"GDT 7123RN/7523RN/7623RN"},

  {0x1119,0x0168,"GDT 7118RN/7518RN/7518RN"},

  {0x1119,0x0169,"GDT 7128RN/7528RN/7628RN"},

  {0x1119,0x016a,"GDT 7538RN/7638RN"},

  {0x1119,0x016b,"GDT 7558RN/7658RN"},

  {0x1119,0x016c,"GDT 7533RN/7633RN"},

  {0x1119,0x016d,"GDT 7543RN/7643RN"},

  {0x1119,0x016e,"GDT 7553RN/7653RN"},

  {0x1119,0x016f,"GDT 7563RN/7663RN"},

  {0x1119,0x01d6,"GDT 4x13RZ"},

  {0x1119,0x01d7,"GDT 4x23RZ"},

  {0x1119,0x01f6,"GDT 8x13RZ"},

  {0x1119,0x01f7,"GDT 8x23RZ"},

  {0x1119,0x01fc,"GDT 8x33RZ"},

  {0x1119,0x01fd,"GDT 8x43RZ"},

  {0x1119,0x01fe,"GDT 8x53RZ"},

  {0x1119,0x01ff,"GDT 8x63RZ"},

  {0x1119,0x0210,"GDT 6519RD/6619RD"},

  {0x1119,0x0211,"GDT 6529RD/6629RD"},

  {0x1119,0x0260,"GDT 7519RN/7619RN"},

  {0x1119,0x0261,"GDT 7529RN/7629RN"},

  {0x1119,0x02ff,"GDT MAXRP"},

  {0x1119,0x0300,"GDT NEWRX"},

  {0x1119,0x0301,"GDT NEWRX2"},

  {0x111a,0x0002,"155P-MF1 (ASIC)"},

  {0x111a,0x0003,"ENI-25P ATM"},

  {0x111a,0x0005,"SpeedStream (LANAI)"},

  {0x111a,0x0007,"SpeedStream ADSL"},

  {0x111a,0x1020,"SpeedStream PCI 10/100 Network Card"},

  {0x111a,0x1203,"SpeedStream 1023 Wireless PCI Adapter"},

  {0x111c,0x0001,"Powerbis Bridge"},

  {0x111d,0x0001,"IDT77201/77211 155Mbps ATM SAR Controller [NICStAR]"},

  {0x111d,0x0003,"IDT77222/77252 155Mbps ATM MICRO ABR SAR Controller"},

  {0x111d,0x0004,"IDT77V252 155Mbps ATM MICRO ABR SAR Controller"},

  {0x111d,0x0005,"IDT77V222 155Mbps ATM MICRO ABR SAR Controller"},

  {0x111d,0x8018,"PES12N3A PCI Express Switch"},

  {0x111d,0x801c,"PES24N3A PCI Express Switch"},

  {0x111d,0x8028,"PES4T4 PCI Express Switch"},

  {0x111d,0x802b,"PES8T5A PCI Express Switch"},

  {0x111d,0x802c,"PES16T4 PCI Express Switch"},

  {0x111d,0x802d,"PES16T7 PCI Express Switch"},

  {0x111d,0x802e,"PES24T6 PCI Express Switch"},

  {0x111d,0x802f,"PES32T8 PCI Express Switch"},

  {0x111d,0x8032,"PES48T12 PCI Express Switch"},

  {0x111d,0x8034,"PES16/22/34H16 PCI Express Switch"},

  {0x111d,0x8035,"PES32H8 PCI Express Switch"},

  {0x111d,0x8036,"PES48H12 PCI Express Switch"},

  {0x111d,0x8037,"PES64H16 PCI Express Switch"},

  {0x111d,0x8039,"PES3T3 PCI Express Switch"},

  {0x111d,0x803a,"PES4T4 PCI Express Switch"},

  {0x111d,0x803c,"PES5T5 PCI Express Switch"},

  {0x111d,0x803d,"PES6T5 PCI Express Switch"},

  {0x111d,0x8048,"PES8NT2 PCI Express Switch"},

  {0x111d,0x8049,"PES8NT2 PCI Express Switch"},

  {0x111d,0x804a,"PES8NT2 PCI Express Internal NTB"},

  {0x111d,0x804b,"PES8NT2 PCI Express External NTB"},

  {0x111d,0x804c,"PES16NT2 PCI Express Switch"},

  {0x111d,0x804d,"PES16NT2 PCI Express Switch"},

  {0x111d,0x804e,"PES16NT2 PCI Express Internal NTB"},

  {0x111d,0x804f,"PES16NT2 PCI Express External NTB"},

  {0x111d,0x8058,"PES12NT3 PCI Express Switch"},

  {0x111d,0x8059,"PES12NT3 PCI Express Switch"},

  {0x111d,0x805a,"PES12NT3 PCI Express Internal NTB"},

  {0x111d,0x805b,"PES12NT3 PCI Express External NTB"},

  {0x111d,0x805c,"PES24NT3 PCI Express Switch"},

  {0x111d,0x805d,"PES24NT3 PCI Express Switch"},

  {0x111d,0x805e,"PES24NT3 PCI Express Internal NTB"},

  {0x111d,0x805f,"PES24NT3 PCI Express External NTB"},

  {0x111d,0x8060,"PES16T4G2 PCI Express Gen2 Switch"},

  {0x111d,0x8061,"PES12T3G2 PCI Express Gen2 Switch"},

  {0x111d,0x8068,"PES6T6G2 PCI Express Gen2 Switch"},

  {0x111d,0x806a,"PES24T3G2 PCI Express Gen2 Switch"},

  {0x111d,0x806c,"PES16T4A/4T4G2 PCI Express Gen2 Switch"},

  {0x111d,0x806e,"PES24T6G2 PCI Express Gen2 Switch"},

  {0x111d,0x806f,"HIO524G2 PCI Express Gen2 Switch"},

  {0x111d,0x8088,"PES32NT8BG2 PCI Express Switch"},

  {0x111d,0x808e,"PES24NT24G2 PCI Express Switch"},

  {0x111d,0x808f,"PES32NT8AG2"},

  {0x111d,0x80cf,"F32P08xG3 [PCIe boot mode]"},

  {0x111d,0x80d2,"F32P08xG3 NVMe controller"},

  {0x111f,0x4a47,"Precision MX Video engine interface"},

  {0x111f,0x5243,"Frame capture bus interface"},

  {0x1120,0x2306,"Unity Fibre Channel Controller"},

  {0x1120,0x2501,"Unity Ethernet Controller"},

  {0x1120,0x2505,"Unity Fibre Channel Controller"},

  {0x1124,0x2581,"Picport Monochrome"},

  {0x1127,0x0200,"ForeRunner PCA-200 ATM"},

  {0x1127,0x0210,"PCA-200PC"},

  {0x1127,0x0250,"ATM"},

  {0x1127,0x0300,"ForeRunner PCA-200EPC ATM"},

  {0x1127,0x0310,"ATM"},

  {0x1127,0x0400,"ForeRunnerHE ATM Adapter"},

  {0x112f,0x0001,"MVC IM-PCI Video frame grabber/processor"},

  {0x112f,0x0008,"PC-CamLink PCI framegrabber"},

  {0x1131,0x1561,"USB 1.1 Host Controller"},

  {0x1131,0x1562,"USB 2.0 Host Controller"},

  {0x1131,0x3400,"SmartPCI56(UCB1500) 56K Modem"},

  {0x1131,0x5400,"TriMedia TM1000/1100"},

  {0x1131,0x5402,"TriMedia TM1300"},

  {0x1131,0x5405,"TriMedia TM1500"},

  {0x1131,0x5406,"TriMedia TM1700"},

  {0x1131,0x540b,"PNX1005 Media Processor"},

  {0x1131,0x7130,"SAA7130 Video Broadcast Decoder"},

  {0x1131,0x7133,"SAA7131/SAA7133/SAA7135 Video Broadcast Decoder"},

  {0x1131,0x7134,"SAA7134/SAA7135HL Video Broadcast Decoder"},

  {0x1131,0x7145,"SAA7145"},

  {0x1131,0x7146,"SAA7146"},

  {0x1131,0x7160,"SAA7160"},

  {0x1131,0x7162,"SAA7162"},

  {0x1131,0x7164,"SAA7164"},

  {0x1131,0x7231,"SAA7231"},

  {0x1131,0x9730,"SAA9730 Integrated Multimedia and Peripheral Controller"},

  {0x1133,0x7701,"Eiconcard C90"},

  {0x1133,0x7711,"Eiconcard C91"},

  {0x1133,0x7901,"EiconCard S90"},

  {0x1133,0x7902,"EiconCard S90"},

  {0x1133,0x7911,"EiconCard S91"},

  {0x1133,0x7912,"EiconCard S91"},

  {0x1133,0x7921,"Eiconcard S92"},

  {0x1133,0x7941,"EiconCard S94"},

  {0x1133,0x7942,"EiconCard S94"},

  {0x1133,0x7943,"EiconCard S94"},

  {0x1133,0x7944,"EiconCard S94"},

  {0x1133,0x7945,"Eiconcard S94"},

  {0x1133,0x7948,"Eiconcard S94 64bit/66MHz"},

  {0x1133,0x9711,"Eiconcard S91 V2"},

  {0x1133,0x9911,"Eiconcard S91 V2"},

  {0x1133,0x9941,"Eiconcard S94 V2"},

  {0x1133,0x9a41,"Eiconcard S94 PCIe"},

  {0x1133,0xb921,"EiconCard P92"},

  {0x1133,0xb922,"EiconCard P92"},

  {0x1133,0xb923,"EiconCard P92"},

  {0x1133,0xe001,"Diva Pro 2.0 S/T"},

  {0x1133,0xe002,"Diva 2.0 S/T PCI"},

  {0x1133,0xe003,"Diva Pro 2.0 U"},

  {0x1133,0xe004,"Diva 2.0 U PCI"},

  {0x1133,0xe005,"Diva 2.01 S/T PCI"},

  {0x1133,0xe006,"Diva CT S/T PCI"},

  {0x1133,0xe007,"Diva CT U PCI"},

  {0x1133,0xe008,"Diva CT Lite S/T PCI"},

  {0x1133,0xe009,"Diva CT Lite U PCI"},

  {0x1133,0xe00a,"Diva ISDN+V.90 PCI"},

  {0x1133,0xe00b,"Diva ISDN PCI 2.02"},

  {0x1133,0xe00c,"Diva 2.02 PCI U"},

  {0x1133,0xe00d,"Diva Pro 3.0 PCI"},

  {0x1133,0xe00e,"Diva ISDN+CT S/T PCI Rev 2"},

  {0x1133,0xe010,"Diva Server BRI-2M PCI"},

  {0x1133,0xe011,"Diva Server BRI S/T Rev 2"},

  {0x1133,0xe012,"Diva Server 4BRI-8M PCI"},

  {0x1133,0xe013,"4BRI"},

  {0x1133,0xe014,"Diva Server PRI-30M PCI"},

  {0x1133,0xe015,"Diva PRI PCI v2"},

  {0x1133,0xe016,"Diva Server Voice 4BRI PCI"},

  {0x1133,0xe017,"Diva Server Voice 4BRI Rev 2"},

  {0x1133,0xe018,"BRI"},

  {0x1133,0xe019,"Diva Server Voice PRI Rev 2"},

  {0x1133,0xe01a,"Diva BRI-2FX PCI v2"},

  {0x1133,0xe01b,"Diva Server Voice BRI-2M 2.0 PCI"},

  {0x1133,0xe01c,"PRI"},

  {0x1133,0xe01e,"2PRI"},

  {0x1133,0xe020,"4PRI"},

  {0x1133,0xe022,"Analog-2"},

  {0x1133,0xe024,"Analog-4"},

  {0x1133,0xe028,"Analog-8"},

  {0x1133,0xe02a,"Diva IPM-300 PCI v1"},

  {0x1133,0xe02c,"Diva IPM-600 PCI v1"},

  {0x1133,0xe02e,"4BRI"},

  {0x1133,0xe032,"BRI"},

  {0x1133,0xe034,"Diva BRI-CTI PCI v2"},

  {0x1134,0x0001,"Raceway Bridge"},

  {0x1134,0x0002,"Dual PCI to RapidIO Bridge"},

  {0x1134,0x000b,"POET Serial RapidIO Bridge"},

  {0x1134,0x000d,"POET PSDMS Device"},

  {0x1135,0x0001,"Printer controller"},

  {0x1136,0x0002,"PCI-JTAG"},

  {0x1137,0x0023,"VIC 81 PCIe Upstream Port"},

  {0x1137,0x0040,"VIC PCIe Upstream Port"},

  {0x1137,0x0041,"VIC PCIe Downstream Port"},

  {0x1137,0x0042,"VIC Management Controller"},

  {0x1137,0x0043,"VIC Ethernet NIC"},

  {0x1137,0x0044,"VIC Ethernet NIC Dynamic"},

  {0x1137,0x0045,"VIC FCoE HBA"},

  {0x1137,0x0046,"VIC SCSI Controller"},

  {0x1137,0x004e,"VIC 82 PCIe Upstream Port"},

  {0x1137,0x0071,"VIC SR-IOV VF"},

  {0x1137,0x007a,"VIC 1300 PCIe Upstream Port"},

  {0x1137,0x00cf,"VIC Userspace NIC"},

  {0x1138,0x8905,"8905 [STD 32 Bridge]"},

  {0x1139,0x0001,"VGA Compatible 3D Graphics"},

  {0x113c,0x0001,"PCI-SDK [PCI i960 Evaluation Platform]"},

  {0x113c,0x0911,"PCI-911 [i960Jx-based Intelligent I/O Controller]"},

  {0x113c,0x0912,"PCI-912 [i960CF-based Intelligent I/O Controller]"},

  {0x113c,0x0913,"PCI-913"},

  {0x113c,0x0914,"PCI-914 [I/O Controller w/ secondary PCI bus]"},

  {0x113f,0x0808,"SST-64P Adapter"},

  {0x113f,0x1010,"SST-128P Adapter"},

  {0x113f,0x80c0,"SST-16P DB Adapter"},

  {0x113f,0x80c4,"SST-16P RJ Adapter"},

  {0x113f,0x80c8,"SST-16P Adapter"},

  {0x113f,0x8888,"SST-4P Adapter"},

  {0x113f,0x9090,"SST-8P Adapter"},

  {0x1142,0x3210,"AP6410"},

  {0x1142,0x6422,"ProVideo 6422"},

  {0x1142,0x6424,"ProVideo 6424"},

  {0x1142,0x6425,"ProMotion AT25"},

  {0x1142,0x643d,"ProMotion AT3D"},

  {0x1144,0x0001,"Noservo controller"},

  {0x1145,0x8007,"NinjaSCSI-32 Workbit"},

  {0x1145,0xf007,"NinjaSCSI-32 KME"},

  {0x1145,0xf010,"NinjaSCSI-32 Workbit"},

  {0x1145,0xf012,"NinjaSCSI-32 Logitec"},

  {0x1145,0xf013,"NinjaSCSI-32 Logitec"},

  {0x1145,0xf015,"NinjaSCSI-32 Melco"},

  {0x1145,0xf020,"NinjaSCSI-32 Sony PCGA-DVD51"},

  {0x1145,0xf021,"NinjaPATA-32 Delkin Cardbus UDMA"},

  {0x1145,0xf024,"NinjaPATA-32 Delkin Cardbus UDMA"},

  {0x1145,0xf103,"NinjaPATA-32 Delkin Cardbus UDMA"},

  {0x1148,0x4000,"FDDI Adapter"},

  {0x1148,0x4200,"Token Ring adapter"},

  {0x1148,0x4300,"SK-9872 Gigabit Ethernet Server Adapter (SK-NET GE-ZX dual link)"},

  {0x1148,0x4320,"SK-9871 V2.0 Gigabit Ethernet 1000Base-ZX Adapter, PCI64, Fiber ZX/SC"},

  {0x1148,0x4400,"SK-9Dxx Gigabit Ethernet Adapter"},

  {0x1148,0x4500,"SK-9Mxx Gigabit Ethernet Adapter"},

  {0x1148,0x9000,"SK-9S21 10/100/1000Base-T Server Adapter, PCI-X, Copper RJ-45"},

  {0x1148,0x9843,"[Fujitsu] Gigabit Ethernet"},

  {0x1148,0x9e00,"SK-9E21D 10/100/1000Base-T Adapter, Copper RJ-45"},

  {0x1148,0x9e01,"SK-9E21M 10/100/1000Base-T Adapter"},

  {0x114a,0x5565,"GE-IP PCI5565,PMC5565 Reflective Memory Node"},

  {0x114a,0x5579,"VMIPCI-5579 (Reflective Memory Card)"},

  {0x114a,0x5587,"VMIPCI-5587 (Reflective Memory Card)"},

  {0x114a,0x6504,"VMIC PCI 7755 FPGA"},

  {0x114a,0x7587,"VMIVME-7587"},

  {0x114f,0x0002,"AccelePort EPC"},

  {0x114f,0x0003,"RightSwitch SE-6"},

  {0x114f,0x0004,"AccelePort Xem"},

  {0x114f,0x0005,"AccelePort Xr"},

  {0x114f,0x0006,"AccelePort Xr,C/X"},

  {0x114f,0x0009,"AccelePort Xr/J"},

  {0x114f,0x000a,"AccelePort EPC/J"},

  {0x114f,0x000c,"DataFirePRIme T1 (1-port)"},

  {0x114f,0x000d,"SyncPort 2-Port (x.25/FR)"},

  {0x114f,0x0011,"AccelePort 8r EIA-232 (IBM)"},

  {0x114f,0x0012,"AccelePort 8r EIA-422"},

  {0x114f,0x0013,"AccelePort Xr"},

  {0x114f,0x0014,"AccelePort 8r EIA-422"},

  {0x114f,0x0015,"AccelePort Xem"},

  {0x114f,0x0016,"AccelePort EPC/X"},

  {0x114f,0x0017,"AccelePort C/X"},

  {0x114f,0x001a,"DataFirePRIme E1 (1-port)"},

  {0x114f,0x001b,"AccelePort C/X (IBM)"},

  {0x114f,0x001c,"AccelePort Xr (SAIP)"},

  {0x114f,0x001d,"DataFire RAS T1/E1/PRI"},

  {0x114f,0x0023,"AccelePort RAS"},

  {0x114f,0x0024,"DataFire RAS B4 ST/U"},

  {0x114f,0x0026,"AccelePort 4r 920"},

  {0x114f,0x0027,"AccelePort Xr 920"},

  {0x114f,0x0028,"ClassicBoard 4"},

  {0x114f,0x0029,"ClassicBoard 8"},

  {0x114f,0x0034,"AccelePort 2r 920"},

  {0x114f,0x0035,"DataFire DSP T1/E1/PRI cPCI"},

  {0x114f,0x0040,"AccelePort Xp"},

  {0x114f,0x0042,"AccelePort 2p"},

  {0x114f,0x0043,"AccelePort 4p"},

  {0x114f,0x0044,"AccelePort 8p"},

  {0x114f,0x0045,"AccelePort 16p"},

  {0x114f,0x004e,"AccelePort 32p"},

  {0x114f,0x0070,"Datafire Micro V IOM2 (Europe)"},

  {0x114f,0x0071,"Datafire Micro V (Europe)"},

  {0x114f,0x0072,"Datafire Micro V IOM2 (North America)"},

  {0x114f,0x0073,"Datafire Micro V (North America)"},

  {0x114f,0x00b0,"Digi Neo 4"},

  {0x114f,0x00b1,"Digi Neo 8"},

  {0x114f,0x00c8,"Digi Neo 2 DB9"},

  {0x114f,0x00c9,"Digi Neo 2 DB9 PRI"},

  {0x114f,0x00ca,"Digi Neo 2 RJ45"},

  {0x114f,0x00cb,"Digi Neo 2 RJ45 PRI"},

  {0x114f,0x00cc,"Digi Neo 1 422"},

  {0x114f,0x00cd,"Digi Neo 1 422 485"},

  {0x114f,0x00ce,"Digi Neo 2 422 485"},

  {0x114f,0x00d0,"ClassicBoard 4 422"},

  {0x114f,0x00d1,"ClassicBoard 8 422"},

  {0x114f,0x00f1,"Digi Neo PCI-E 4 port"},

  {0x114f,0x00f4,"Digi Neo 4 (IBM version)"},

  {0x114f,0x6001,"Avanstar"},

  {0x1158,0x3011,"Tokenet/vg 1001/10m anylan"},

  {0x1158,0x9050,"Lanfleet/Truevalue"},

  {0x1158,0x9051,"Lanfleet/Truevalue"},

  {0x1159,0x0001,"MV-1000"},

  {0x1159,0x0002,"MV-1500"},

  {0x115d,0x0003,"Cardbus Ethernet 10/100"},

  {0x115d,0x0005,"Cardbus Ethernet 10/100"},

  {0x115d,0x0007,"Cardbus Ethernet 10/100"},

  {0x115d,0x000b,"Cardbus Ethernet 10/100"},

  {0x115d,0x000c,"Mini-PCI V.90 56k Modem"},

  {0x115d,0x000f,"Cardbus Ethernet 10/100"},

  {0x115d,0x00d4,"Mini-PCI K56Flex Modem"},

  {0x115d,0x0101,"Cardbus 56k modem"},

  {0x115d,0x0103,"Cardbus Ethernet + 56k Modem"},

  {0x1163,0x0001,"Verite 1000"},

  {0x1163,0x2000,"Verite V2000/V2100/V2200"},

  {0x1165,0x0001,"Motion TPEG Recorder/Player with audio"},

  {0x1166,0x0005,"CNB20-LE Host Bridge"},

  {0x1166,0x0006,"CNB20HE Host Bridge"},

  {0x1166,0x0007,"CNB20-LE Host Bridge"},

  {0x1166,0x0008,"CNB20HE Host Bridge"},

  {0x1166,0x0009,"CNB20LE Host Bridge"},

  {0x1166,0x0010,"CIOB30"},

  {0x1166,0x0011,"CMIC-HE"},

  {0x1166,0x0012,"CMIC-WS Host Bridge (GC-LE chipset)"},

  {0x1166,0x0013,"CNB20-HE Host Bridge"},

  {0x1166,0x0014,"CMIC-LE Host Bridge (GC-LE chipset)"},

  {0x1166,0x0015,"CMIC-GC Host Bridge"},

  {0x1166,0x0016,"CMIC-GC Host Bridge"},

  {0x1166,0x0017,"GCNB-LE Host Bridge"},

  {0x1166,0x0031,"HT1100 HPX0 HT Host Bridge"},

  {0x1166,0x0036,"BCM5785 [HT1000] PCI/PCI-X Bridge"},

  {0x1166,0x0101,"CIOB-X2 PCI-X I/O Bridge"},

  {0x1166,0x0103,"EPB PCI-Express to PCI-X Bridge"},

  {0x1166,0x0104,"BCM5785 [HT1000] PCI/PCI-X Bridge"},

  {0x1166,0x0110,"CIOB-E I/O Bridge with Gigabit Ethernet"},

  {0x1166,0x0130,"BCM5780 [HT2000] PCI-X bridge"},

  {0x1166,0x0132,"BCM5780 [HT2000] PCI-Express Bridge"},

  {0x1166,0x0140,"HT2100 PCI-Express Bridge"},

  {0x1166,0x0141,"HT2100 PCI-Express Bridge"},

  {0x1166,0x0142,"HT2100 PCI-Express Bridge"},

  {0x1166,0x0144,"HT2100 PCI-Express Bridge"},

  {0x1166,0x0200,"OSB4 South Bridge"},

  {0x1166,0x0201,"CSB5 South Bridge"},

  {0x1166,0x0203,"CSB6 South Bridge"},

  {0x1166,0x0205,"BCM5785 [HT1000] Legacy South Bridge"},

  {0x1166,0x0211,"OSB4 IDE Controller"},

  {0x1166,0x0212,"CSB5 IDE Controller"},

  {0x1166,0x0213,"CSB6 RAID/IDE Controller"},

  {0x1166,0x0214,"BCM5785 [HT1000] IDE"},

  {0x1166,0x0217,"CSB6 IDE Controller"},

  {0x1166,0x021b,"HT1100 HD Audio"},

  {0x1166,0x0220,"OSB4/CSB5 OHCI USB Controller"},

  {0x1166,0x0221,"CSB6 OHCI USB Controller"},

  {0x1166,0x0223,"BCM5785 [HT1000] USB"},

  {0x1166,0x0225,"CSB5 LPC bridge"},

  {0x1166,0x0227,"GCLE-2 Host Bridge"},

  {0x1166,0x0230,"CSB5 LPC bridge"},

  {0x1166,0x0234,"BCM5785 [HT1000] LPC"},

  {0x1166,0x0235,"BCM5785 [HT1000] XIOAPIC0-2"},

  {0x1166,0x0238,"BCM5785 [HT1000] WDTimer"},

  {0x1166,0x0240,"K2 SATA"},

  {0x1166,0x0241,"RAIDCore RC4000"},

  {0x1166,0x0242,"RAIDCore BC4000"},

  {0x1166,0x024a,"BCM5785 [HT1000] SATA (Native SATA Mode)"},

  {0x1166,0x024b,"BCM5785 [HT1000] SATA (PATA/IDE Mode)"},

  {0x1166,0x0406,"HT1100 PCI-X Bridge"},

  {0x1166,0x0408,"HT1100 Legacy Device"},

  {0x1166,0x040a,"HT1100 ISA-LPC Bridge"},

  {0x1166,0x0410,"HT1100 SATA Controller (Native SATA Mode)"},

  {0x1166,0x0411,"HT1100 SATA Controller (PATA / IDE Mode)"},

  {0x1166,0x0412,"HT1100 USB OHCI Controller"},

  {0x1166,0x0414,"HT1100 USB EHCI Controller"},

  {0x1166,0x0416,"HT1100 USB EHCI Controller (with Debug Port)"},

  {0x1166,0x0420,"HT1100 PCI-Express Bridge"},

  {0x1166,0x0421,"HT1100 SAS/SATA Controller"},

  {0x1166,0x0422,"HT1100 PCI-Express Bridge"},

  {0x116a,0x6100,"Bus/Tag Channel"},

  {0x116a,0x6800,"Escon Channel"},

  {0x116a,0x7100,"Bus/Tag Channel"},

  {0x116a,0x7800,"Escon Channel"},

  {0x1178,0xafa1,"Fast Ethernet Adapter"},

  {0x1179,0x0102,"Extended IDE Controller"},

  {0x1179,0x0103,"EX-IDE Type-B"},

  {0x1179,0x0404,"DVD Decoder card"},

  {0x1179,0x0406,"Tecra Video Capture device"},

  {0x1179,0x0407,"DVD Decoder card (Version 2)"},

  {0x1179,0x0601,"CPU to PCI bridge"},

  {0x1179,0x0602,"PCI to ISA bridge"},

  {0x1179,0x0603,"ToPIC95 PCI to CardBus Bridge for Notebooks"},

  {0x1179,0x0604,"PCI-Docking Host bridge"},

  {0x1179,0x060a,"ToPIC95"},

  {0x1179,0x060f,"ToPIC97"},

  {0x1179,0x0617,"ToPIC100 PCI to Cardbus Bridge with ZV Support"},

  {0x1179,0x0618,"CPU to PCI and PCI to ISA bridge"},

  {0x1179,0x0701,"FIR Port Type-O"},

  {0x1179,0x0803,"TC6371AF SD Host Controller"},

  {0x1179,0x0804,"TC6371AF SmartMedia Controller"},

  {0x1179,0x0805,"SD TypA Controller"},

  {0x1179,0x0d01,"FIR Port Type-DO"},

  {0x117c,0x002c,"ExpressSAS R380"},

  {0x117c,0x002d,"ExpressSAS R348"},

  {0x117c,0x0030,"Ultra320 SCSI Host Adapter"},

  {0x117c,0x0033,"SAS Adapter"},

  {0x117c,0x0041,"ExpressSAS R30F"},

  {0x117c,0x8013,"ExpressPCI UL4D"},

  {0x117c,0x8014,"ExpressPCI UL4S"},

  {0x117c,0x8027,"ExpressPCI UL5D"},

  {0x1180,0x0465,"RL5c465"},

  {0x1180,0x0466,"RL5c466"},

  {0x1180,0x0475,"RL5c475"},

  {0x1180,0x0476,"RL5c476 II"},

  {0x1180,0x0477,"RL5c477"},

  {0x1180,0x0478,"RL5c478"},

  {0x1180,0x0511,"R5C511"},

  {0x1180,0x0522,"R5C522 IEEE 1394 Controller"},

  {0x1180,0x0551,"R5C551 IEEE 1394 Controller"},

  {0x1180,0x0552,"R5C552 IEEE 1394 Controller"},

  {0x1180,0x0554,"R5C554"},

  {0x1180,0x0575,"R5C575 SD Bus Host Adapter"},

  {0x1180,0x0576,"R5C576 SD Bus Host Adapter"},

  {0x1180,0x0592,"R5C592 Memory Stick Bus Host Adapter"},

  {0x1180,0x0811,"R5C811"},

  {0x1180,0x0822,"R5C822 SD/SDIO/MMC/MS/MSPro Host Adapter"},

  {0x1180,0x0832,"R5C832 IEEE 1394 Controller"},

  {0x1180,0x0841,"R5C841 CardBus/SD/SDIO/MMC/MS/MSPro/xD/IEEE1394"},

  {0x1180,0x0843,"R5C843 MMC Host Controller"},

  {0x1180,0x0852,"xD-Picture Card Controller"},

  {0x1180,0xe230,"R5U2xx (R5U230 / R5U231 / R5U241) [Memory Stick Host Controller]"},

  {0x1180,0xe476,"CardBus bridge"},

  {0x1180,0xe822,"MMC/SD Host Controller"},

  {0x1180,0xe823,"PCIe SDXC/MMC Host Controller"},

  {0x1180,0xe832,"R5C832 PCIe IEEE 1394 Controller"},

  {0x1180,0xe852,"PCIe xD-Picture Card Controller"},

  {0x1186,0x1002,"DL10050 Sundance Ethernet"},

  {0x1186,0x1025,"AirPlus Xtreme G DWL-G650 Adapter"},

  {0x1186,0x1026,"AirXpert DWL-AG650 Wireless Cardbus Adapter"},

  {0x1186,0x1043,"AirXpert DWL-AG650 Wireless Cardbus Adapter"},

  {0x1186,0x1300,"RTL8139 Ethernet"},

  {0x1186,0x1340,"DFE-690TXD CardBus PC Card"},

  {0x1186,0x1540,"DFE-680TX"},

  {0x1186,0x1541,"DFE-680TXD CardBus PC Card"},

  {0x1186,0x1561,"DRP-32TXD Cardbus PC Card"},

  {0x1186,0x3300,"DWL-510 / DWL-610 802.11b [Realtek RTL8180L]"},

  {0x1186,0x3a10,"AirXpert DWL-AG650 Wireless Cardbus Adapter(rev.B)"},

  {0x1186,0x3a11,"AirXpert DWL-AG520 Wireless PCI Adapter(rev.B)"},

  {0x1186,0x4000,"DL2000-based Gigabit Ethernet"},

  {0x1186,0x4001,"DGE-550SX PCI-X Gigabit Ethernet Adapter"},

  {0x1186,0x4200,"DFE-520TX Fast Ethernet PCI Adapter"},

  {0x1186,0x4300,"DGE-528T Gigabit Ethernet Adapter"},

  {0x1186,0x4302,"DGE-530T Gigabit Ethernet Adapter (rev.C1) [Realtek RTL8169]"},

  {0x1186,0x4b00,"DGE-560T PCI Express Gigabit Ethernet Adapter"},

  {0x1186,0x4b01,"DGE-530T Gigabit Ethernet Adapter (rev 11)"},

  {0x1186,0x4b02,"DGE-560SX PCI Express Gigabit Ethernet Adapter"},

  {0x1186,0x4b03,"DGE-550T Gigabit Ethernet Adapter V.B1"},

  {0x1186,0x4c00,"Gigabit Ethernet Adapter"},

  {0x1186,0x8400,"D-Link DWL-650+ CardBus PC Card"},

  {0x118c,0x0014,"PCIB [C-bus II to PCI bus host bridge chip]"},

  {0x118c,0x1117,"Intel 8-way XEON Profusion Chipset [Cache Coherency Filter]"},

  {0x118d,0x0001,"Raptor-PCI framegrabber"},

  {0x118d,0x0012,"Model 12 Road Runner Frame Grabber"},

  {0x118d,0x0014,"Model 14 Road Runner Frame Grabber"},

  {0x118d,0x0024,"Model 24 Road Runner Frame Grabber"},

  {0x118d,0x0044,"Model 44 Road Runner Frame Grabber"},

  {0x118d,0x0112,"Model 12 Road Runner Frame Grabber"},

  {0x118d,0x0114,"Model 14 Road Runner Frame Grabber"},

  {0x118d,0x0124,"Model 24 Road Runner Frame Grabber"},

  {0x118d,0x0144,"Model 44 Road Runner Frame Grabber"},

  {0x118d,0x0212,"Model 12 Road Runner Frame Grabber"},

  {0x118d,0x0214,"Model 14 Road Runner Frame Grabber"},

  {0x118d,0x0224,"Model 24 Road Runner Frame Grabber"},

  {0x118d,0x0244,"Model 44 Road Runner Frame Grabber"},

  {0x118d,0x0312,"Model 12 Road Runner Frame Grabber"},

  {0x118d,0x0314,"Model 14 Road Runner Frame Grabber"},

  {0x118d,0x0324,"Model 24 Road Runner Frame Grabber"},

  {0x118d,0x0344,"Model 44 Road Runner Frame Grabber"},

  {0x1190,0xc731,"TP-910/920/940 PCI Ultra(Wide) SCSI Adapter"},

  {0x1191,0x0003,"SCSI Cache Host Adapter"},

  {0x1191,0x0004,"ATP8400"},

  {0x1191,0x0005,"ATP850UF"},

  {0x1191,0x0006,"ATP860 NO-BIOS"},

  {0x1191,0x0007,"ATP860"},

  {0x1191,0x0008,"ATP865 NO-ROM"},

  {0x1191,0x0009,"ATP865"},

  {0x1191,0x000a,"ATP867-A"},

  {0x1191,0x000b,"ATP867-B"},

  {0x1191,0x000d,"ATP8620"},

  {0x1191,0x000e,"ATP8620"},

  {0x1191,0x8002,"AEC6710 SCSI-2 Host Adapter"},

  {0x1191,0x8010,"AEC6712UW SCSI"},

  {0x1191,0x8020,"AEC6712U SCSI"},

  {0x1191,0x8030,"AEC6712S SCSI"},

  {0x1191,0x8040,"AEC6712D SCSI"},

  {0x1191,0x8050,"AEC6712SUW SCSI"},

  {0x1191,0x8060,"AEC6712 SCSI"},

  {0x1191,0x8080,"AEC67160 SCSI"},

  {0x1191,0x8081,"AEC67160S SCSI"},

  {0x1191,0x808a,"AEC67162 2-ch. LVD SCSI"},

  {0x1193,0x0001,"1221"},

  {0x1193,0x0002,"1225"},

  {0x1197,0x010c,"CompuScope 82G 8bit 2GS/s Analog Input Card"},

  {0x1199,0x0101,"Advanced ISCA/PCI Adapter"},

  {0x119b,0x1221,"82C092G"},

  {0x119e,0x0001,"FireStream 155"},

  {0x119e,0x0003,"FireStream 50"},

  {0x119f,0x1081,"BXI Host Channel Adapter"},

  {0x11a9,0x4240,"AMCC S933Q Intelligent Serial Card"},

  {0x11ab,0x0146,"GT-64010/64010A System Controller"},

  {0x11ab,0x0f53,"88E6318 Link Street network controller"},

  {0x11ab,0x11ab,"MV88SE614x SATA II PCI-E controller"},

  {0x11ab,0x138f,"W8300 802.11 Adapter (rev 07)"},

  {0x11ab,0x1fa6,"Marvell W8300 802.11 Adapter"},

  {0x11ab,0x1fa7,"88W8310 and 88W8000G [Libertas] 802.11g client chipset"},

  {0x11ab,0x1faa,"88w8335 [Libertas] 802.11b/g Wireless"},

  {0x11ab,0x2211,"88SB2211 PCI Express to PCI Bridge"},

  {0x11ab,0x2a01,"88W8335 [Libertas] 802.11b/g Wireless"},

  {0x11ab,0x2a02,"88W8361 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a08,"88W8362e [TopDog] 802.11a/b/g/n Wireless"},

  {0x11ab,0x2a0a,"88W8363 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a0c,"88W8363 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a24,"88W8363 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a2b,"88W8687 [TopDog] 802.11b/g Wireless"},

  {0x11ab,0x2a30,"88W8687 [TopDog] 802.11b/g Wireless"},

  {0x11ab,0x2a40,"88W8366 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a41,"88W8366 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a42,"88W8366 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a43,"88W8366 [TopDog] 802.11n Wireless"},

  {0x11ab,0x2a55,"88W8864 [Avastar] 802.11ac Wireless"},

  {0x11ab,0x2b36,"88W8764 [Avastar] 802.11n Wireless"},

  {0x11ab,0x2b38,"88W8897 [AVASTAR] 802.11ac Wireless"},

  {0x11ab,0x2b40,"88W8964 [Avastar] 802.11ac Wireless"},

  {0x11ab,0x4101,"OLPC Cafe Controller Secure Digital Controller"},

  {0x11ab,0x4320,"88E8001 Gigabit Ethernet Controller"},

  {0x11ab,0x4340,"88E8021 PCI-X IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4341,"88E8022 PCI-X IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4342,"88E8061 PCI-E IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4343,"88E8062 PCI-E IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4344,"88E8021 PCI-X IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4345,"88E8022 PCI-X IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4346,"88E8061 PCI-E IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4347,"88E8062 PCI-E IPMI Gigabit Ethernet Controller"},

  {0x11ab,0x4350,"88E8035 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4351,"88E8036 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4352,"88E8038 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4353,"88E8039 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4354,"88E8040 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4355,"88E8040T PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4356,"88EC033 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4357,"88E8042 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x435a,"88E8048 PCI-E Fast Ethernet Controller"},

  {0x11ab,0x4360,"88E8052 PCI-E ASF Gigabit Ethernet Controller"},

  {0x11ab,0x4361,"88E8050 PCI-E ASF Gigabit Ethernet Controller"},

  {0x11ab,0x4362,"88E8053 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x4363,"88E8055 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x4364,"88E8056 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x4365,"88E8070 based Ethernet Controller"},

  {0x11ab,0x4366,"88EC036 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x4367,"88EC032 Ethernet Controller"},

  {0x11ab,0x4368,"88EC034 Ethernet Controller"},

  {0x11ab,0x4369,"88EC042 Ethernet Controller"},

  {0x11ab,0x436a,"88E8058 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x436b,"88E8071 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x436c,"88E8072 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x436d,"88E8055 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x4370,"88E8075 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x4380,"88E8057 PCI-E Gigabit Ethernet Controller"},

  {0x11ab,0x4381,"Yukon Optima 88E8059 [PCIe Gigabit Ethernet Controller with AVB]"},

  {0x11ab,0x4611,"GT-64115 System Controller"},

  {0x11ab,0x4620,"GT-64120/64120A/64121A System Controller"},

  {0x11ab,0x4801,"GT-48001"},

  {0x11ab,0x5005,"Belkin F5D5005 Gigabit Desktop Network PCI Card"},

  {0x11ab,0x5040,"MV88SX5040 4-port SATA I PCI-X Controller"},

  {0x11ab,0x5041,"MV88SX5041 4-port SATA I PCI-X Controller"},

  {0x11ab,0x5080,"MV88SX5080 8-port SATA I PCI-X Controller"},

  {0x11ab,0x5081,"MV88SX5081 8-port SATA I PCI-X Controller"},

  {0x11ab,0x5181,"88f5181 [Orion-1] ARM SoC"},

  {0x11ab,0x5182,"88f5182 [Orion-NAS] ARM SoC"},

  {0x11ab,0x5281,"88f5281 [Orion-2] ARM SoC"},

  {0x11ab,0x6041,"MV88SX6041 4-port SATA II PCI-X Controller"},

  {0x11ab,0x6042,"88SX6042 PCI-X 4-Port SATA-II"},

  {0x11ab,0x6081,"MV88SX6081 8-port SATA II PCI-X Controller"},

  {0x11ab,0x6101,"88SE6101/6102 single-port PATA133 interface"},

  {0x11ab,0x6111,"88SE6111 1-port PATA133(IDE) and 1-port SATA II Controllers"},

  {0x11ab,0x6121,"88SE6121 SATA II / PATA Controller"},

  {0x11ab,0x6141,"88SE614x SATA II PCI-E controller"},

  {0x11ab,0x6145,"88SE6145 SATA II PCI-E controller"},

  {0x11ab,0x6180,"88F6180 [Kirkwood] ARM SoC"},

  {0x11ab,0x6192,"88F6190/6192 [Kirkwood] ARM SoC"},

  {0x11ab,0x6281,"88F6281 [Kirkwood] ARM SoC"},

  {0x11ab,0x6381,"MV78xx0 [Discovery Innovation] ARM SoC"},

  {0x11ab,0x6440,"88SE6440 SAS/SATA PCIe controller"},

  {0x11ab,0x6450,"64560 System Controller"},

  {0x11ab,0x6460,"MV64360/64361/64362 System Controller"},

  {0x11ab,0x6480,"MV64460/64461/64462 System Controller"},

  {0x11ab,0x6485,"MV64460/64461/64462 System Controller, Revision B"},

  {0x11ab,0x7042,"88SX7042 PCI-e 4-port SATA-II"},

  {0x11ab,0x7810,"MV78100 [Discovery Innovation] ARM SoC"},

  {0x11ab,0x7820,"MV78200 [Discovery Innovation] ARM SoC"},

  {0x11ab,0x7823,"MV78230 [Armada XP] ARM SoC"},

  {0x11ab,0x7846,"88F6820 [Armada 385] ARM SoC"},

  {0x11ab,0xf003,"GT-64010 Primary Image Piranha Image Generator"},

  {0x11ad,0x0002,"LNE100TX"},

  {0x11ad,0xc115,"LNE100TX [Linksys EtherFast 10/100]"},

  {0x11af,0x0001,"Cinema"},

  {0x11af,0xee40,"Digidesign Audiomedia III"},

  {0x11b0,0x0002,"V300PSC"},

  {0x11b0,0x0292,"V292PBC [Am29030/40 Bridge]"},

  {0x11b0,0x0960,"V96xPBC"},

  {0x11b0,0x880a,"Deltacast Delta-HD-22"},

  {0x11b0,0xc960,"V96DPC"},

  {0x11b8,0x0001,"Quad PeerMaster"},

  {0x11b9,0xc0ed,"SSA Controller"},

  {0x11bc,0x0001,"NP-PCI"},

  {0x11bd,0x002e,"PCTV 40i"},

  {0x11bd,0x0040,"Royal TS Function 1"},

  {0x11bd,0x0041,"RoyalTS Function 2"},

  {0x11bd,0x0042,"Royal TS Function 3"},

  {0x11bd,0x0051,"PCTV HD 800i"},

  {0x11bd,0xbede,"AV/DV Studio Capture Card"},

  {0x11c1,0x0440,"56k WinModem"},

  {0x11c1,0x0441,"56k WinModem"},

  {0x11c1,0x0442,"56k WinModem"},

  {0x11c1,0x0443,"LT WinModem"},

  {0x11c1,0x0444,"LT WinModem"},

  {0x11c1,0x0445,"LT WinModem"},

  {0x11c1,0x0446,"LT WinModem"},

  {0x11c1,0x0447,"LT WinModem"},

  {0x11c1,0x0448,"WinModem 56k"},

  {0x11c1,0x0449,"L56xM+S [Mars-2] WinModem 56k"},

  {0x11c1,0x044a,"F-1156IV WinModem (V90, 56KFlex)"},

  {0x11c1,0x044b,"LT WinModem"},

  {0x11c1,0x044c,"LT WinModem"},

  {0x11c1,0x044d,"LT WinModem"},

  {0x11c1,0x044e,"LT WinModem"},

  {0x11c1,0x044f,"V90 WildWire Modem"},

  {0x11c1,0x0450,"LT WinModem"},

  {0x11c1,0x0451,"LT WinModem"},

  {0x11c1,0x0452,"LT WinModem"},

  {0x11c1,0x0453,"LT WinModem"},

  {0x11c1,0x0454,"LT WinModem"},

  {0x11c1,0x0455,"LT WinModem"},

  {0x11c1,0x0456,"LT WinModem"},

  {0x11c1,0x0457,"LT WinModem"},

  {0x11c1,0x0458,"LT WinModem"},

  {0x11c1,0x0459,"LT WinModem"},

  {0x11c1,0x045a,"LT WinModem"},

  {0x11c1,0x045c,"LT WinModem"},

  {0x11c1,0x0461,"V90 WildWire Modem"},

  {0x11c1,0x0462,"V90 WildWire Modem"},

  {0x11c1,0x0480,"Venus Modem (V90, 56KFlex)"},

  {0x11c1,0x048c,"V.92 56K WinModem"},

  {0x11c1,0x048f,"V.92 56k WinModem"},

  {0x11c1,0x0620,"Lucent V.92 Data/Fax Modem"},

  {0x11c1,0x2600,"StarPro26XX family (SP2601, SP2603, SP2612) DSP"},

  {0x11c1,0x5400,"OR3TP12 FPSC"},

  {0x11c1,0x5656,"Venus Modem"},

  {0x11c1,0x5801,"USB"},

  {0x11c1,0x5802,"USS-312 USB Controller"},

  {0x11c1,0x5803,"USS-344S USB Controller"},

  {0x11c1,0x5811,"FW322/323 [TrueFire] 1394a Controller"},

  {0x11c1,0x5901,"FW643 [TrueFire] PCIe 1394b Controller"},

  {0x11c1,0x5903,"FW533 [TrueFire] PCIe 1394a Controller"},

  {0x11c1,0x8110,"T8110 H.100/H.110 TDM switch"},

  {0x11c1,0xab10,"WL60010 Wireless LAN MAC"},

  {0x11c1,0xab11,"WL60040 Multimode Wireles LAN MAC"},

  {0x11c1,0xab20,"ORiNOCO PCI Adapter"},

  {0x11c1,0xab21,"Agere Wireless PCI Adapter"},

  {0x11c1,0xab30,"Hermes2 Mini-PCI WaveLAN a/b/g"},

  {0x11c1,0xed00,"ET-131x PCI-E Ethernet Controller"},

  {0x11c1,0xed01,"ET-131x PCI-E Ethernet Controller"},

  {0x11c8,0x0658,"PSB32 SCI-Adapter D31x"},

  {0x11c8,0xd665,"PSB64 SCI-Adapter D32x"},

  {0x11c8,0xd667,"PSB66 SCI-Adapter D33x"},

  {0x11c9,0x0010,"16-line serial port w/- DMA"},

  {0x11c9,0x0011,"4-line serial port w/- DMA"},

  {0x11cb,0x2000,"PCI_9050"},

  {0x11cb,0x4000,"SUPI_1"},

  {0x11cb,0x8000,"T225"},

  {0x11d1,0x01f7,"VxP524"},

  {0x11d1,0x01f9,"VxP951"},

  {0x11d4,0x1535,"Blackfin BF535 processor"},

  {0x11d4,0x1805,"SM56 PCI modem"},

  {0x11d5,0x0115,"10115"},

  {0x11d5,0x0117,"10117"},

  {0x11de,0x6017,"miroVIDEO DC30"},

  {0x11de,0x6057,"ZR36057PQC Video cutting chipset"},

  {0x11de,0x6120,"ZR36120"},

  {0x11e3,0x0001,"COM-ON-AIR Dosch&Amand DECT"},

  {0x11e3,0x0560,"QL5064 Companion Design Demo Board"},

  {0x11e3,0x5030,"PC Watchdog"},

  {0x11e3,0x8417,"QL5064 [QuickPCI] PCI v2.2 bridge for SMT417 Dual TMS320C6416T PMC Module"},

  {0x11ec,0x000d,"Oculus-F/64P"},

  {0x11ec,0x1800,"Cobra/C6"},

  {0x11f0,0x4231,"FDDI"},

  {0x11f0,0x4232,"FASTline UTP Quattro"},

  {0x11f0,0x4233,"FASTline FO"},

  {0x11f0,0x4234,"FASTline UTP"},

  {0x11f0,0x4235,"FASTline-II UTP"},

  {0x11f0,0x4236,"FASTline-II FO"},

  {0x11f0,0x4731,"GIGAline"},

  {0x11f3,0x0011,"KPCI-PIO24"},

  {0x11f4,0x2915,"CAMAC controller"},

  {0x11f6,0x0112,"ENet100VG4"},

  {0x11f6,0x0113,"FreedomLine 100"},

  {0x11f6,0x1401,"ReadyLink 2000"},

  {0x11f6,0x2011,"RL100-ATX 10/100"},

  {0x11f6,0x2201,"ReadyLink 100TX (Winbond W89C840)"},

  {0x11f6,0x9881,"RL100TX Fast Ethernet"},

  {0x11f8,0x5220,"BR522x [PMC-Sierra maxRAID SAS Controller]"},

  {0x11f8,0x7364,"PM7364 [FREEDM - 32 Frame Engine & Datalink Mgr]"},

  {0x11f8,0x7375,"PM7375 [LASAR-155 ATM SAR]"},

  {0x11f8,0x7384,"PM7384 [FREEDM - 84P672 Frm Engine & Datalink Mgr]"},

  {0x11f8,0x8000,"PM8000  [SPC - SAS Protocol Controller]"},

  {0x11f8,0x8009,"PM8009 SPCve 8x6G"},

  {0x11f8,0x8032,"ATTO Celerity FC8xEN"},

  {0x11f8,0x8053,"PM8053 SXP 12G 24-port SAS/SATA expander"},

  {0x11f8,0x8054,"PM8054 SXP 12G 36-port SAS/SATA expander"},

  {0x11f8,0x8055,"PM8055 SXP 12G 48-port SAS/SATA expander"},

  {0x11f8,0x8056,"PM8056 SXP 12G 68-port SAS/SATA expander"},

  {0x11f8,0x8060,"PM8060 SRCv 12G eight-port SAS/SATA RoC"},

  {0x11f8,0x8063,"PM8063 SRCv 12G 16-port SAS/SATA RoC"},

  {0x11f8,0x8070,"PM8070 Tachyon SPCv 12G eight-port SAS/SATA controller"},

  {0x11f8,0x8071,"PM8071 Tachyon SPCve 12G eight-port SAS/SATA controller"},

  {0x11f8,0x8072,"PM8072 Tachyon SPCv 12G 16-port SAS/SATA controller"},

  {0x11f8,0x8073,"PM8073 Tachyon SPCve 12G 16-port SAS/SATA controller"},

  {0x11f8,0x8531,"PM8531 PFX 24xG3 Fanout PCIe Switches"},

  {0x11f8,0x8546,"PM8546 B-FEIP PSX 96xG3 PCIe Storage Switch"},

  {0x11fe,0x0001,"RocketPort 32 port w/external I/F"},

  {0x11fe,0x0002,"RocketPort 8 port w/external I/F"},

  {0x11fe,0x0003,"RocketPort 16 port w/external I/F"},

  {0x11fe,0x0004,"RocketPort 4 port w/quad cable"},

  {0x11fe,0x0005,"RocketPort 8 port w/octa cable"},

  {0x11fe,0x0006,"RocketPort 8 port w/RJ11 connectors"},

  {0x11fe,0x0007,"RocketPort 4 port w/RJ11 connectors"},

  {0x11fe,0x0008,"RocketPort 8 port w/ DB78 SNI (Siemens) connector"},

  {0x11fe,0x0009,"RocketPort 16 port w/ DB78 SNI (Siemens) connector"},

  {0x11fe,0x000a,"RocketPort Plus 4 port"},

  {0x11fe,0x000b,"RocketPort Plus 8 port"},

  {0x11fe,0x000c,"RocketModem 6 port"},

  {0x11fe,0x000d,"RocketModem 4-port"},

  {0x11fe,0x000e,"RocketPort Plus 2 port RS232"},

  {0x11fe,0x000f,"RocketPort Plus 2 port RS422"},

  {0x11fe,0x0040,"RocketPort Infinity Octa, 8port, RJ45"},

  {0x11fe,0x0041,"RocketPort Infinity 32port, External Interface"},

  {0x11fe,0x0042,"RocketPort Infinity 8port, External Interface"},

  {0x11fe,0x0043,"RocketPort Infinity 16port, External Interface"},

  {0x11fe,0x0044,"RocketPort Infinity Quad, 4port, DB"},

  {0x11fe,0x0045,"RocketPort Infinity Octa, 8port, DB"},

  {0x11fe,0x0047,"RocketPort Infinity 4port, RJ45"},

  {0x11fe,0x004f,"RocketPort Infinity 2port, SMPTE"},

  {0x11fe,0x0052,"RocketPort Infinity Octa, 8port, SMPTE"},

  {0x11fe,0x0801,"RocketPort UPCI 32 port w/external I/F"},

  {0x11fe,0x0802,"RocketPort UPCI 8 port w/external I/F"},

  {0x11fe,0x0803,"RocketPort UPCI 16 port w/external I/F"},

  {0x11fe,0x0805,"RocketPort UPCI 8 port w/octa cable"},

  {0x11fe,0x080c,"RocketModem III 8 port"},

  {0x11fe,0x080d,"RocketModem III 4 port"},

  {0x11fe,0x0810,"RocketPort UPCI Plus 4 port RS232"},

  {0x11fe,0x0811,"RocketPort UPCI Plus 8 port RS232"},

  {0x11fe,0x0812,"RocketPort UPCI Plus 8 port RS422"},

  {0x11fe,0x0903,"RocketPort Compact PCI 16 port w/external I/F"},

  {0x11fe,0x8015,"RocketPort 4-port UART 16954"},

  {0x11ff,0x0003,"AG-5"},

  {0x1202,0x4300,"Gigabit Ethernet Adapter"},

  {0x1204,0x1965,"SB6501 802.11ad Wireless Network Adapter"},

  {0x1208,0x4853,"HS-Link Device"},

  {0x120e,0x0100,"Cyclom-Y below first megabyte"},

  {0x120e,0x0101,"Cyclom-Y above first megabyte"},

  {0x120e,0x0102,"Cyclom-4Y below first megabyte"},

  {0x120e,0x0103,"Cyclom-4Y above first megabyte"},

  {0x120e,0x0104,"Cyclom-8Y below first megabyte"},

  {0x120e,0x0105,"Cyclom-8Y above first megabyte"},

  {0x120e,0x0200,"Cyclades-Z below first megabyte"},

  {0x120e,0x0201,"Cyclades-Z above first megabyte"},

  {0x120e,0x0300,"PC300/RSV or /X21 (2 ports)"},

  {0x120e,0x0301,"PC300/RSV or /X21 (1 port)"},

  {0x120e,0x0310,"PC300/TE (2 ports)"},

  {0x120e,0x0311,"PC300/TE (1 port)"},

  {0x120e,0x0320,"PC300/TE-M (2 ports)"},

  {0x120e,0x0321,"PC300/TE-M (1 port)"},

  {0x120e,0x0400,"PC400"},

  {0x120f,0x0001,"Roadrunner serial HIPPI"},

  {0x1217,0x00f7,"Firewire (IEEE 1394)"},

  {0x1217,0x10f7,"1394 OHCI Compliant Host Controller"},

  {0x1217,0x11f7,"OZ600 1394a-2000 Controller"},

  {0x1217,0x13f7,"1394 OHCI Compliant Host Controller"},

  {0x1217,0x6729,"OZ6729"},

  {0x1217,0x673a,"OZ6730"},

  {0x1217,0x6832,"OZ6832/6833 CardBus Controller"},

  {0x1217,0x6836,"OZ6836/6860 CardBus Controller"},

  {0x1217,0x6872,"OZ6812 CardBus Controller"},

  {0x1217,0x6925,"OZ6922 CardBus Controller"},

  {0x1217,0x6933,"OZ6933/711E1 CardBus/SmartCardBus Controller"},

  {0x1217,0x6972,"OZ601/6912/711E0 CardBus/SmartCardBus Controller"},

  {0x1217,0x7110,"OZ711Mx 4-in-1 MemoryCardBus Accelerator"},

  {0x1217,0x7112,"OZ711EC1/M1 SmartCardBus/MemoryCardBus Controller"},

  {0x1217,0x7113,"OZ711EC1 SmartCardBus Controller"},

  {0x1217,0x7114,"OZ711M1/MC1 4-in-1 MemoryCardBus Controller"},

  {0x1217,0x7120,"Integrated MMC/SD Controller"},

  {0x1217,0x7130,"Integrated MS/xD Controller"},

  {0x1217,0x7134,"OZ711MP1/MS1 MemoryCardBus Controller"},

  {0x1217,0x7135,"Cardbus bridge"},

  {0x1217,0x7136,"OZ711SP1 Memory CardBus Controller"},

  {0x1217,0x71e2,"OZ711E2 SmartCardBus Controller"},

  {0x1217,0x7212,"OZ711M2 4-in-1 MemoryCardBus Controller"},

  {0x1217,0x7213,"OZ6933E CardBus Controller"},

  {0x1217,0x7223,"OZ711M3/MC3 4-in-1 MemoryCardBus Controller"},

  {0x1217,0x7233,"OZ711MP3/MS3 4-in-1 MemoryCardBus Controller"},

  {0x1217,0x8120,"Integrated MMC/SD Controller"},

  {0x1217,0x8130,"Integrated MS/MSPRO/xD Controller"},

  {0x1217,0x8220,"OZ600FJ1/OZ900FJ1 SD/MMC Card Reader Controller"},

  {0x1217,0x8221,"OZ600FJ0/OZ900FJ0/OZ600FJS SD/MMC Card Reader Controller"},

  {0x1217,0x8320,"OZ600RJ1/OZ900RJ1 SD/MMC Card Reader Controller"},

  {0x1217,0x8321,"OZ600RJ0/OZ900RJ0/OZ600RJS SD/MMC Card Reader Controller"},

  {0x1217,0x8330,"OZ600 MS/xD Controller"},

  {0x1217,0x8331,"O2 Flash Memory Card"},

  {0x1217,0x8520,"SD/MMC Card Reader Controller"},

  {0x1217,0x8621,"SD/MMC Card Reader Controller"},

  {0x121a,0x0001,"Voodoo"},

  {0x121a,0x0002,"Voodoo 2"},

  {0x121a,0x0003,"Voodoo Banshee"},

  {0x121a,0x0004,"Voodoo Banshee [Velocity 100]"},

  {0x121a,0x0005,"Voodoo 3"},

  {0x121a,0x0009,"Voodoo 4 / Voodoo 5"},

  {0x121a,0x0057,"Voodoo 3/3000 [Avenger]"},

  {0x121e,0x0201,"Myrinet 2000 Scalable Cluster Interconnect"},

  {0x1220,0x1220,"AMCC 5933 TMS320C80 DSP/Imaging board"},

  {0x1221,0x9172,"PO-64L(PCI)H [Isolated Digital Output Board for PCI]"},

  {0x1221,0x91a2,"PO-32L(PCI)H [Isolated Digital Output Board for PCI]"},

  {0x1221,0x91c3,"DA16-16(LPCI)L [Un-insulated highly precise analog output board for Low Profile PCI]"},

  {0x1221,0xb152,"DIO-96D2-LPCI"},

  {0x1221,0xc103,"ADA16-32/2(PCI)F [High-Speed Analog I/O Board for PCI]"},

  {0x1223,0x0003,"PM/Link"},

  {0x1223,0x0004,"PM/T1"},

  {0x1223,0x0005,"PM/E1"},

  {0x1223,0x0008,"PM/SLS"},

  {0x1223,0x0009,"BajaSpan Resource Target"},

  {0x1223,0x000a,"BajaSpan Section 0"},

  {0x1223,0x000b,"BajaSpan Section 1"},

  {0x1223,0x000c,"BajaSpan Section 2"},

  {0x1223,0x000d,"BajaSpan Section 3"},

  {0x1223,0x000e,"PM/PPC"},

  {0x1227,0x0006,"Raptor GFX 8P"},

  {0x1227,0x0023,"Raptor GFX [1100T]"},

  {0x1227,0x0045,"Raptor 4000-L [Linux version]"},

  {0x1227,0x004a,"Raptor 4000-LR-L [Linux version]"},

  {0x122d,0x1206,"368DSP"},

  {0x122d,0x1400,"Trident PCI288-Q3DII (NX)"},

  {0x122d,0x50dc,"3328 Audio"},

  {0x122d,0x80da,"3328 Audio"},

  {0x122e,0x7722,"Napatech XL1"},

  {0x122e,0x7724,"Napatech XL2/XA"},

  {0x122e,0x7729,"Napatech XD"},

  {0x1231,0x04e1,"Desktop PCI Telephony 4"},

  {0x1231,0x05e1,"Desktop PCI Telephony 5/6"},

  {0x1231,0x0d00,"LightParser"},

  {0x1231,0x0d02,"LightParser 2"},

  {0x1231,0x0d13,"Desktop PCI L1/L3 Telephony"},

  {0x1236,0x6401,"REALmagic 64/GX (SD 6425)"},

  {0x123d,0x0002,"EasyConnect 8/64"},

  {0x123d,0x0003,"EasyIO"},

  {0x123f,0x00e4,"MPEG"},

  {0x123f,0x8120,"DVxplore Codec"},

  {0x123f,0x8888,"Cinemaster C 3.0 DVD Decoder"},

  {0x1242,0x1560,"JNIC-1560 PCI-X Fibre Channel Controller"},

  {0x1242,0x4643,"FCI-1063 Fibre Channel Adapter"},

  {0x1242,0x6562,"FCX2-6562 Dual Channel PCI-X Fibre Channel Adapter"},

  {0x1242,0x656a,"FCX-6562 PCI-X Fibre Channel Adapter"},

  {0x1244,0x0700,"B1 ISDN"},

  {0x1244,0x0800,"C4 ISDN"},

  {0x1244,0x0a00,"A1 ISDN [Fritz]"},

  {0x1244,0x0e00,"Fritz!Card PCI v2.0 ISDN"},

  {0x1244,0x0e80,"Fritz!Card PCI v2.1 ISDN"},

  {0x1244,0x1100,"C2 ISDN"},

  {0x1244,0x1200,"T1 ISDN"},

  {0x1244,0x2700,"Fritz!Card DSL SL"},

  {0x1244,0x2900,"Fritz!Card DSL v2.0"},

  {0x124b,0x0040,"PCI-40A or cPCI-200 Quad IndustryPack carrier"},

  {0x124d,0x0002,"EasyConnection 8/64"},

  {0x124d,0x0003,"EasyIO"},

  {0x124d,0x0004,"EasyConnection/RA"},

  {0x124f,0x0041,"IFT-2000 Series RAID Controller"},

  {0x1254,0x0065,"DVB Master FD"},

  {0x1254,0x007c,"DVB Master Quad/o"},

  {0x1255,0x1110,"MPEG Forge"},

  {0x1255,0x1210,"MPEG Fusion"},

  {0x1255,0x2110,"VideoPlex"},

  {0x1255,0x2120,"VideoPlex CC"},

  {0x1255,0x2130,"VideoQuest"},

  {0x1256,0x4201,"PCI-2220I"},

  {0x1256,0x4401,"PCI-2240I"},

  {0x1256,0x5201,"PCI-2000"},

  {0x1259,0x2560,"AT-2560 Fast Ethernet Adapter (i82557B)"},

  {0x1259,0x2801,"AT-2801FX (RTL-8139)"},

  {0x1259,0xa117,"RTL81xx Fast Ethernet"},

  {0x1259,0xa11e,"RTL81xx Fast Ethernet"},

  {0x1259,0xa120,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x125b,0x1400,"AX88141 Fast Ethernet Controller"},

  {0x125c,0x0101,"Saturn 4520P"},

  {0x125c,0x0640,"Aries 16000P"},

  {0x125d,0x1948,"ES1948 Maestro-1"},

  {0x125d,0x1968,"ES1968 Maestro 2"},

  {0x125d,0x1969,"ES1938/ES1946/ES1969 Solo-1 Audiodrive"},

  {0x125d,0x1978,"ES1978 Maestro 2E"},

  {0x125d,0x1988,"ES1988 Allegro-1"},

  {0x125d,0x1989,"ESS Modem"},

  {0x125d,0x1998,"ES1983S Maestro-3i PCI Audio Accelerator"},

  {0x125d,0x1999,"ES1983S Maestro-3i PCI Modem Accelerator"},

  {0x125d,0x199a,"ES1983S Maestro-3i PCI Audio Accelerator"},

  {0x125d,0x199b,"ES1983S Maestro-3i PCI Modem Accelerator"},

  {0x125d,0x2808,"ES336H Fax Modem (Later Model)"},

  {0x125d,0x2838,"ES2838/2839 SuperLink Modem"},

  {0x125d,0x2898,"ES2898 Modem"},

  {0x125f,0x2071,"CC PMC/232"},

  {0x125f,0x2084,"CC PMC/23P"},

  {0x125f,0x2091,"CC PMC/422"},

  {0x1260,0x3872,"ISL3872 [Prism 3]"},

  {0x1260,0x3873,"ISL3874 [Prism 2.5]/ISL3872 [Prism 3]"},

  {0x1260,0x3877,"ISL3877 [Prism Indigo]"},

  {0x1260,0x3886,"ISL3886 [Prism Javelin/Prism Xbow]"},

  {0x1260,0x3890,"ISL3890 [Prism GT/Prism Duette]/ISL3886 [Prism Javelin/Prism Xbow]"},

  {0x1260,0x8130,"HMP8130 NTSC/PAL Video Decoder"},

  {0x1260,0x8131,"HMP8131 NTSC/PAL Video Decoder"},

  {0x1260,0xffff,"ISL3886IK"},

  {0x1266,0x0001,"NE10/100 Adapter (i82557B)"},

  {0x1266,0x1910,"NE2000Plus (RT8029) Ethernet Adapter"},

  {0x1267,0x5352,"PCR2101"},

  {0x1267,0x5a4b,"Telsat Turbo"},

  {0x126c,0x1211,"10/100BaseTX [RTL81xx]"},

  {0x126c,0x126c,"802.11b Wireless Ethernet Adapter"},

  {0x126f,0x0501,"SM501 VoyagerGX Rev. AA"},

  {0x126f,0x0510,"SM501 VoyagerGX Rev. B"},

  {0x126f,0x0710,"SM710 LynxEM"},

  {0x126f,0x0712,"SM712 LynxEM+"},

  {0x126f,0x0718,"SM718 LynxSE+"},

  {0x126f,0x0720,"SM720 Lynx3DM"},

  {0x126f,0x0730,"SM731 Cougar3DR"},

  {0x126f,0x0750,"SM750"},

  {0x126f,0x0810,"SM810 LynxE"},

  {0x126f,0x0811,"SM811 LynxE"},

  {0x126f,0x0820,"SM820 Lynx3D"},

  {0x126f,0x0910,"SM910"},

  {0x1273,0x0002,"DirecPC"},

  {0x1274,0x1171,"ES1373 / Creative Labs CT5803 [AudioPCI]"},

  {0x1274,0x1371,"ES1371/ES1373 / Creative Labs CT2518"},

  {0x1274,0x5000,"ES1370 [AudioPCI]"},

  {0x1274,0x5880,"5880B / Creative Labs CT5880"},

  {0x1274,0x8001,"CT5880 [AudioPCI]"},

  {0x1274,0x8002,"5880A [AudioPCI]"},

  {0x1278,0x0701,"TPE3/TM3 PowerPC Node"},

  {0x1278,0x0710,"TPE5 PowerPC PCI board"},

  {0x1278,0x1100,"PMC-FPGA02"},

  {0x1278,0x1101,"TS-C43 card with 4 ADSP-TS101 processors"},

  {0x1279,0x0060,"TM8000 Northbridge"},

  {0x1279,0x0061,"TM8000 AGP bridge"},

  {0x1279,0x0295,"Northbridge"},

  {0x1279,0x0395,"LongRun Northbridge"},

  {0x1279,0x0396,"SDRAM controller"},

  {0x1279,0x0397,"BIOS scratchpad"},

  {0x127a,0x1002,"HCF 56k Data/Fax Modem"},

  {0x127a,0x1003,"HCF 56k Data/Fax Modem"},

  {0x127a,0x1004,"HCF 56k Data/Fax/Voice Modem"},

  {0x127a,0x1005,"HCF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x127a,0x1022,"HCF 56k Modem"},

  {0x127a,0x1023,"HCF 56k Data/Fax Modem"},

  {0x127a,0x1024,"HCF 56k Data/Fax/Voice Modem"},

  {0x127a,0x1025,"HCF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x127a,0x1026,"HCF 56k PCI Speakerphone Modem"},

  {0x127a,0x1032,"HCF 56k Modem"},

  {0x127a,0x1033,"HCF 56k Modem"},

  {0x127a,0x1034,"HCF 56k Modem"},

  {0x127a,0x1035,"HCF 56k PCI Speakerphone Modem"},

  {0x127a,0x1036,"HCF 56k Modem"},

  {0x127a,0x1085,"HCF 56k Volcano PCI Modem"},

  {0x127a,0x2004,"HSF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x127a,0x2005,"HCF 56k Data/Fax Modem"},

  {0x127a,0x2013,"HSF 56k Data/Fax Modem"},

  {0x127a,0x2014,"HSF 56k Data/Fax/Voice Modem"},

  {0x127a,0x2015,"HSF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x127a,0x2016,"HSF 56k Data/Fax/Voice/Spkp Modem"},

  {0x127a,0x4311,"Riptide HSF 56k PCI Modem"},

  {0x127a,0x4320,"Riptide PCI Audio Controller"},

  {0x127a,0x4321,"Riptide HCF 56k PCI Modem"},

  {0x127a,0x4322,"Riptide PCI Game Controller"},

  {0x127a,0x8234,"RapidFire 616X ATM155 Adapter"},

  {0x127e,0x0010,"Videum 1000 Plus"},

  {0x1282,0x6585,"DM562P V90 Modem"},

  {0x1282,0x9009,"Ethernet 100/10 MBit"},

  {0x1282,0x9100,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x1282,0x9102,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x1282,0x9132,"Ethernet 100/10 MBit"},

  {0x1283,0x673a,"IT8330G"},

  {0x1283,0x8152,"IT8152F/G Advanced RISC-to-PCI Companion Chip"},

  {0x1283,0x8211,"ITE 8211F Single Channel UDMA 133"},

  {0x1283,0x8212,"IT8212 Dual channel ATA RAID controller"},

  {0x1283,0x8213,"IT8213 IDE Controller"},

  {0x1283,0x8330,"IT8330G"},

  {0x1283,0x8872,"IT887xF PCI to ISA I/O chip with SMB, GPIO, Serial or Parallel Port"},

  {0x1283,0x8888,"IT8888F/G PCI to ISA Bridge with SMB [Golden Gate]"},

  {0x1283,0x8889,"IT8889F PCI to ISA Bridge"},

  {0x1283,0x8893,"IT8893E PCIe to PCI Bridge"},

  {0x1283,0xe886,"IT8330G"},

  {0x1285,0x0100,"AGOGO sound chip (aka ESS Maestro 1)"},

  {0x1287,0x001e,"LS220D DVD Decoder"},

  {0x1287,0x001f,"LS220C DVD Decoder"},

  {0x128d,0x0021,"ATM155 Adapter"},

  {0x128e,0x0008,"ST128 WSS/SB"},

  {0x128e,0x0009,"ST128 SAM9407"},

  {0x128e,0x000a,"ST128 Game Port"},

  {0x128e,0x000b,"ST128 MPU Port"},

  {0x128e,0x000c,"ST128 Ctrl Port"},

  {0x1292,0xfc02,"Pyramid3D TR25202"},

  {0x1295,0x0800,"PXR800"},

  {0x1295,0x1000,"PXD1000"},

  {0x129a,0x0615,"PBT-615 PCI-X Bus Analyzer"},

  {0x129a,0x1100,"PMC-FPGA05"},

  {0x129a,0x1106,"XMC-FPGA05F, PCI interface"},

  {0x129a,0x1107,"XMC-FPGA05F, PCIe interface"},

  {0x129a,0x1108,"XMC-FPGA05D, PCI interface"},

  {0x129a,0x1109,"XMC-FPGA05D, PCIe interface"},

  {0x12a3,0x8105,"T8105 H100 Digital Switch"},

  {0x12ab,0x0002,"AU8830 [Vortex2] Based Sound Card With A3D Support"},

  {0x12ab,0x0003,"T507 (DVB-T) TV tuner/capture device"},

  {0x12ab,0x2300,"Club-3D Zap TV2100"},

  {0x12ab,0x3000,"MPG-200C PCI DVD Decoder Card"},

  {0x12ab,0x4789,"MPC788 MiniPCI Hybrid TV Tuner"},

  {0x12ab,0xfff3,"MPG600/Kuroutoshikou ITVC16-STVLP"},

  {0x12ab,0xffff,"MPG600/Kuroutoshikou ITVC16-STVLP"},

  {0x12ae,0x0001,"AceNIC Gigabit Ethernet"},

  {0x12ae,0x0002,"AceNIC Gigabit Ethernet (Copper)"},

  {0x12ae,0x00fa,"Farallon PN9100-T Gigabit Ethernet"},

  {0x12b9,0x1006,"WinModem"},

  {0x12b9,0x1007,"USR 56k Internal WinModem"},

  {0x12b9,0x1008,"56K FaxModem Model 5610"},

  {0x12be,0x3041,"AN3041Q CO-MEM"},

  {0x12be,0x3042,"AN3042Q CO-MEM Lite"},

  {0x12c3,0x0058,"PCI NE2K Ethernet"},

  {0x12c3,0x5598,"PCI NE2K Ethernet"},

  {0x12c4,0x0001,"Blue HEAT/PCI 8 (RS232/CL/RJ11)"},

  {0x12c4,0x0002,"Blue HEAT/PCI 4 (RS232)"},

  {0x12c4,0x0003,"Blue HEAT/PCI 2 (RS232)"},

  {0x12c4,0x0004,"Blue HEAT/PCI 8 (UNIV, RS485)"},

  {0x12c4,0x0005,"Blue HEAT/PCI 4+4/6+2 (UNIV, RS232/485)"},

  {0x12c4,0x0006,"Blue HEAT/PCI 4 (OPTO, RS485)"},

  {0x12c4,0x0007,"Blue HEAT/PCI 2+2 (RS232/485)"},

  {0x12c4,0x0008,"Blue HEAT/PCI 2 (OPTO, Tx, RS485)"},

  {0x12c4,0x0009,"Blue HEAT/PCI 2+6 (RS232/485)"},

  {0x12c4,0x000a,"Blue HEAT/PCI 8 (Tx, RS485)"},

  {0x12c4,0x000b,"Blue HEAT/PCI 4 (Tx, RS485)"},

  {0x12c4,0x000c,"Blue HEAT/PCI 2 (20 MHz, RS485)"},

  {0x12c4,0x000d,"Blue HEAT/PCI 2 PTM"},

  {0x12c4,0x0100,"NT960/PCI"},

  {0x12c4,0x0201,"cPCI Titan - 2 Port"},

  {0x12c4,0x0202,"cPCI Titan - 4 Port"},

  {0x12c4,0x0300,"CTI PCI UART 2 (RS232)"},

  {0x12c4,0x0301,"CTI PCI UART 4 (RS232)"},

  {0x12c4,0x0302,"CTI PCI UART 8 (RS232)"},

  {0x12c4,0x0310,"CTI PCI UART 1+1 (RS232/485)"},

  {0x12c4,0x0311,"CTI PCI UART 2+2 (RS232/485)"},

  {0x12c4,0x0312,"CTI PCI UART 4+4 (RS232/485)"},

  {0x12c4,0x0320,"CTI PCI UART 2"},

  {0x12c4,0x0321,"CTI PCI UART 4"},

  {0x12c4,0x0322,"CTI PCI UART 8"},

  {0x12c4,0x0330,"CTI PCI UART 2 (RS485)"},

  {0x12c4,0x0331,"CTI PCI UART 4 (RS485)"},

  {0x12c4,0x0332,"CTI PCI UART 8 (RS485)"},

  {0x12c5,0x007e,"Imaging/Scanning Subsystem Engine"},

  {0x12c5,0x007f,"Imaging/Scanning Subsystem Engine"},

  {0x12c5,0x0081,"PCIVST [Grayscale Thresholding Engine]"},

  {0x12c5,0x0085,"Video Simulator/Sender"},

  {0x12c5,0x0086,"THR2 Multi-scale Thresholder"},

  {0x12c7,0x0546,"Springware D/120JCT-LS"},

  {0x12c7,0x0647,"Springware D/240JCT-T1"},

  {0x12c7,0x0676,"Springware D/41JCT-LS"},

  {0x12c7,0x0685,"Springware D/480JCT-2T1"},

  {0x12cb,0x0027,"SC4 (StudioCard)"},

  {0x12cb,0x002e,"StudioCard 2000"},

  {0x12d2,0x0008,"NV1"},

  {0x12d2,0x0009,"DAC64"},

  {0x12d2,0x0018,"Riva128"},

  {0x12d2,0x0019,"Riva128ZX"},

  {0x12d2,0x0020,"TNT"},

  {0x12d2,0x0028,"TNT2"},

  {0x12d2,0x0029,"UTNT2"},

  {0x12d2,0x002c,"VTNT2"},

  {0x12d2,0x00a0,"ITNT2"},

  {0x12d4,0x0200,"T1 Card"},

  {0x12d5,0x0003,"BSP16"},

  {0x12d5,0x1000,"BSP15"},

  {0x12d8,0x01a7,"PI7C21P100 PCI to PCI Bridge"},

  {0x12d8,0x400a,"PI7C9X442SL PCI Express Bridge Port"},

  {0x12d8,0x400e,"PI7C9X442SL USB OHCI Controller"},

  {0x12d8,0x400f,"PI7C9X442SL USB EHCI Controller"},

  {0x12d8,0x71e2,"PI7C7300A/PI7C7300D PCI-to-PCI Bridge"},

  {0x12d8,0x71e3,"PI7C7300A/PI7C7300D PCI-to-PCI Bridge (Secondary Bus 2)"},

  {0x12d8,0x8140,"PI7C8140A PCI-to-PCI Bridge"},

  {0x12d8,0x8148,"PI7C8148A/PI7C8148B PCI-to-PCI Bridge"},

  {0x12d8,0x8150,"PCI to PCI Bridge"},

  {0x12d8,0x8152,"PI7C8152A/PI7C8152B/PI7C8152BI PCI-to-PCI Bridge"},

  {0x12d8,0x8154,"PI7C8154A/PI7C8154B/PI7C8154BI PCI-to-PCI Bridge"},

  {0x12d8,0xe110,"PI7C9X110 PCI Express to PCI bridge"},

  {0x12d8,0xe111,"PI7C9X111SL PCIe-to-PCI Reversible Bridge"},

  {0x12d8,0xe130,"PCI Express to PCI-XPI7C9X130 PCI-X Bridge"},

  {0x12d9,0x0002,"PCI Prosody"},

  {0x12d9,0x0004,"cPCI Prosody"},

  {0x12d9,0x0005,"Aculab E1/T1 PCI card"},

  {0x12d9,0x1078,"Prosody X class e1000 device"},

  {0x12de,0x0200,"CryptoSwift CS200"},

  {0x12e0,0x0010,"ST16C654 Quad UART"},

  {0x12e0,0x0020,"ST16C654 Quad UART"},

  {0x12e0,0x0030,"ST16C654 Quad UART"},

  {0x12eb,0x0001,"Vortex 1"},

  {0x12eb,0x0002,"Vortex 2"},

  {0x12eb,0x0003,"AU8810 Vortex Digital Audio Processor"},

  {0x12eb,0x8803,"Vortex 56k Software Modem"},

  {0x12f8,0x0002,"VideoMaker"},

  {0x12fb,0x0001,"PMC-MAI"},

  {0x12fb,0x00f5,"F5 Dakar"},

  {0x12fb,0x02ad,"PMC-2MAI"},

  {0x12fb,0x2adc,"ePMC-2ADC"},

  {0x12fb,0x3100,"PRO-3100"},

  {0x12fb,0x3500,"PRO-3500"},

  {0x12fb,0x4d4f,"Modena"},

  {0x12fb,0x8120,"ePMC-8120"},

  {0x12fb,0xda62,"Daytona C6201 PCI (Hurricane)"},

  {0x12fb,0xdb62,"Ingliston XBIF"},

  {0x12fb,0xdc62,"Ingliston PLX9054"},

  {0x12fb,0xdd62,"Ingliston JTAG/ISP"},

  {0x12fb,0xeddc,"ePMC-MSDDC"},

  {0x12fb,0xfa01,"ePMC-FPGA"},

  {0x1303,0x0030,"X3-SDF 4-channel XMC acquisition board"},

  {0x1307,0x0001,"PCI-DAS1602/16"},

  {0x1307,0x000b,"PCI-DIO48H"},

  {0x1307,0x000c,"PCI-PDISO8"},

  {0x1307,0x000d,"PCI-PDISO16"},

  {0x1307,0x000f,"PCI-DAS1200"},

  {0x1307,0x0010,"PCI-DAS1602/12"},

  {0x1307,0x0014,"PCI-DIO24H"},

  {0x1307,0x0015,"PCI-DIO24H/CTR3"},

  {0x1307,0x0016,"PCI-DIO48H/CTR15"},

  {0x1307,0x0017,"PCI-DIO96H"},

  {0x1307,0x0018,"PCI-CTR05"},

  {0x1307,0x0019,"PCI-DAS1200/JR"},

  {0x1307,0x001a,"PCI-DAS1001"},

  {0x1307,0x001b,"PCI-DAS1002"},

  {0x1307,0x001c,"PCI-DAS1602JR/16"},

  {0x1307,0x001d,"PCI-DAS6402/16"},

  {0x1307,0x001e,"PCI-DAS6402/12"},

  {0x1307,0x001f,"PCI-DAS16/M1"},

  {0x1307,0x0020,"PCI-DDA02/12"},

  {0x1307,0x0021,"PCI-DDA04/12"},

  {0x1307,0x0022,"PCI-DDA08/12"},

  {0x1307,0x0023,"PCI-DDA02/16"},

  {0x1307,0x0024,"PCI-DDA04/16"},

  {0x1307,0x0025,"PCI-DDA08/16"},

  {0x1307,0x0026,"PCI-DAC04/12-HS"},

  {0x1307,0x0027,"PCI-DAC04/16-HS"},

  {0x1307,0x0028,"PCI-DIO24"},

  {0x1307,0x0029,"PCI-DAS08"},

  {0x1307,0x002c,"PCI-INT32"},

  {0x1307,0x0033,"PCI-DUAL-AC5"},

  {0x1307,0x0034,"PCI-DAS-TC"},

  {0x1307,0x0035,"PCI-DAS64/M1/16"},

  {0x1307,0x0036,"PCI-DAS64/M2/16"},

  {0x1307,0x0037,"PCI-DAS64/M3/16"},

  {0x1307,0x004c,"PCI-DAS1000"},

  {0x1307,0x004d,"PCI-QUAD04"},

  {0x1307,0x0052,"PCI-DAS4020/12"},

  {0x1307,0x0053,"PCIM-DDA06/16"},

  {0x1307,0x0054,"PCI-DIO96"},

  {0x1307,0x005d,"PCI-DAS6023"},

  {0x1307,0x005e,"PCI-DAS6025"},

  {0x1307,0x005f,"PCI-DAS6030"},

  {0x1307,0x0060,"PCI-DAS6031"},

  {0x1307,0x0061,"PCI-DAS6032"},

  {0x1307,0x0062,"PCI-DAS6033"},

  {0x1307,0x0063,"PCI-DAS6034"},

  {0x1307,0x0064,"PCI-DAS6035"},

  {0x1307,0x0065,"PCI-DAS6040"},

  {0x1307,0x0066,"PCI-DAS6052"},

  {0x1307,0x0067,"PCI-DAS6070"},

  {0x1307,0x0068,"PCI-DAS6071"},

  {0x1307,0x006f,"PCI-DAS6036"},

  {0x1307,0x0070,"PCI-DAC6702"},

  {0x1307,0x0078,"PCI-DAS6013"},

  {0x1307,0x0079,"PCI-DAS6014"},

  {0x1307,0x0115,"PCIe-DAS1602/16"},

  {0x1308,0x0001,"NetCelerator Adapter"},

  {0x1317,0x0981,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x1317,0x0985,"NC100 Network Everywhere Fast Ethernet 10/100"},

  {0x1317,0x1985,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x1317,0x2850,"HSP MicroModem 56"},

  {0x1317,0x5120,"ADM5120 OpenGate System-on-Chip"},

  {0x1317,0x8201,"ADM8211 802.11b Wireless Interface"},

  {0x1317,0x8211,"ADM8211 802.11b Wireless Interface"},

  {0x1317,0x9511,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x1318,0x0911,"GNIC-II PCI Gigabit Ethernet [Hamachi]"},

  {0x1319,0x0801,"Xwave QS3000A [FM801]"},

  {0x1319,0x0802,"Xwave QS3000A [FM801 game port]"},

  {0x1319,0x1000,"FM801 PCI Audio"},

  {0x1319,0x1001,"FM801 PCI Joystick"},

  {0x131f,0x1000,"CyberSerial (1-port) 16550"},

  {0x131f,0x1001,"CyberSerial (1-port) 16650"},

  {0x131f,0x1002,"CyberSerial (1-port) 16850"},

  {0x131f,0x1010,"Duet 1S(16550)+1P"},

  {0x131f,0x1011,"Duet 1S(16650)+1P"},

  {0x131f,0x1012,"Duet 1S(16850)+1P"},

  {0x131f,0x1020,"CyberParallel (1-port)"},

  {0x131f,0x1021,"CyberParallel (2-port)"},

  {0x131f,0x1030,"CyberSerial (2-port) 16550"},

  {0x131f,0x1031,"CyberSerial (2-port) 16650"},

  {0x131f,0x1032,"CyberSerial (2-port) 16850"},

  {0x131f,0x1034,"Trio 2S(16550)+1P"},

  {0x131f,0x1035,"Trio 2S(16650)+1P"},

  {0x131f,0x1036,"Trio 2S(16850)+1P"},

  {0x131f,0x1050,"CyberSerial (4-port) 16550"},

  {0x131f,0x1051,"CyberSerial (4-port) 16650"},

  {0x131f,0x1052,"CyberSerial (4-port) 16850"},

  {0x131f,0x2000,"CyberSerial (1-port) 16550"},

  {0x131f,0x2001,"CyberSerial (1-port) 16650"},

  {0x131f,0x2002,"CyberSerial (1-port) 16850"},

  {0x131f,0x2010,"Duet 1S(16550)+1P"},

  {0x131f,0x2011,"Duet 1S(16650)+1P"},

  {0x131f,0x2012,"Duet 1S(16850)+1P"},

  {0x131f,0x2020,"CyberParallel (1-port)"},

  {0x131f,0x2021,"CyberParallel (2-port)"},

  {0x131f,0x2030,"CyberSerial (2-port) 16550"},

  {0x131f,0x2031,"CyberSerial (2-port) 16650"},

  {0x131f,0x2032,"CyberSerial (2-port) 16850"},

  {0x131f,0x2040,"Trio 1S(16550)+2P"},

  {0x131f,0x2041,"Trio 1S(16650)+2P"},

  {0x131f,0x2042,"Trio 1S(16850)+2P"},

  {0x131f,0x2050,"CyberSerial (4-port) 16550"},

  {0x131f,0x2051,"CyberSerial (4-port) 16650"},

  {0x131f,0x2052,"CyberSerial (4-port) 16850"},

  {0x131f,0x2060,"Trio 2S(16550)+1P"},

  {0x131f,0x2061,"Trio 2S(16650)+1P"},

  {0x131f,0x2062,"Trio 2S(16850)+1P"},

  {0x131f,0x2081,"CyberSerial (8-port) ST16654"},

  {0x1331,0x0030,"ENP-2611"},

  {0x1331,0x8200,"82600 Host Bridge"},

  {0x1331,0x8201,"82600 IDE"},

  {0x1331,0x8202,"82600 USB"},

  {0x1331,0x8210,"82600 PCI Bridge"},

  {0x1332,0x5415,"MM-5415CN PCI Memory Module with Battery Backup"},

  {0x1332,0x5425,"MM-5425CN PCI 64/66 Memory Module with Battery Backup"},

  {0x1332,0x6140,"MM-6140D"},

  {0x1344,0x5150,"RealSSD P320h"},

  {0x1344,0x5151,"RealSSD P320m"},

  {0x1344,0x5152,"RealSSD P320s"},

  {0x1344,0x5153,"RealSSD P325m"},

  {0x1344,0x5160,"RealSSD P420h"},

  {0x1344,0x5161,"RealSSD P420m"},

  {0x1344,0x5163,"RealSSD P425m"},

  {0x134a,0x0001,"Domex 536"},

  {0x134a,0x0002,"Domex DMX3194UP SCSI Adapter"},

  {0x134d,0x2189,"HSP56 MicroModem"},

  {0x134d,0x2486,"2304WT V.92 MDC Modem"},

  {0x134d,0x7890,"HSP MicroModem 56"},

  {0x134d,0x7891,"HSP MicroModem 56"},

  {0x134d,0x7892,"HSP MicroModem 56"},

  {0x134d,0x7893,"HSP MicroModem 56"},

  {0x134d,0x7894,"HSP MicroModem 56"},

  {0x134d,0x7895,"HSP MicroModem 56"},

  {0x134d,0x7896,"HSP MicroModem 56"},

  {0x134d,0x7897,"HSP MicroModem 56"},

  {0x1353,0x0002,"Proserver"},

  {0x1353,0x0003,"PCI-FUT"},

  {0x1353,0x0004,"PCI-S0"},

  {0x1353,0x0005,"PCI-FUT-S0"},

  {0x135a,0x0a61,"UC-324 [VELOCITY RS422/485]"},

  {0x135c,0x0010,"QSC-100"},

  {0x135c,0x0020,"DSC-100"},

  {0x135c,0x0030,"DSC-200/300"},

  {0x135c,0x0040,"QSC-200/300"},

  {0x135c,0x0050,"ESC-100D"},

  {0x135c,0x0060,"ESC-100M"},

  {0x135c,0x00f0,"MPAC-100 Syncronous Serial Card (Zilog 85230)"},

  {0x135c,0x0170,"QSCLP-100"},

  {0x135c,0x0180,"DSCLP-100"},

  {0x135c,0x0190,"SSCLP-100"},

  {0x135c,0x01a0,"QSCLP-200/300"},

  {0x135c,0x01b0,"DSCLP-200/300"},

  {0x135c,0x01c0,"SSCLP-200/300"},

  {0x135c,0x0258,"DSPSX-200/300"},

  {0x135e,0x5101,"Route 56.PCI - Multi-Protocol Serial Interface (Zilog Z16C32)"},

  {0x135e,0x7101,"Single Port RS-232/422/485/530"},

  {0x135e,0x7201,"Dual Port RS-232/422/485 Interface"},

  {0x135e,0x7202,"Dual Port RS-232 Interface"},

  {0x135e,0x7401,"Four Port RS-232 Interface"},

  {0x135e,0x7402,"Four Port RS-422/485 Interface"},

  {0x135e,0x7801,"Eight Port RS-232 Interface"},

  {0x135e,0x7804,"Eight Port RS-232/422/485 Interface"},

  {0x135e,0x8001,"8001 Digital I/O Adapter"},

  {0x1360,0x0101,"PCI32 DCF77 Radio Clock"},

  {0x1360,0x0102,"PCI509 DCF77 Radio Clock"},

  {0x1360,0x0103,"PCI510 DCF77 Radio Clock"},

  {0x1360,0x0104,"PCI511 DCF77 Radio Clock"},

  {0x1360,0x0105,"PEX511 DCF77 Radio Clock (PCI Express)"},

  {0x1360,0x0106,"PZF180PEX High Precision DCF77 Radio Clock (PCI Express)"},

  {0x1360,0x0201,"GPS167PCI GPS Receiver"},

  {0x1360,0x0202,"GPS168PCI GPS Receiver"},

  {0x1360,0x0203,"GPS169PCI GPS Receiver"},

  {0x1360,0x0204,"GPS170PCI GPS Receiver"},

  {0x1360,0x0205,"GPS170PEX GPS Receiver (PCI Express)"},

  {0x1360,0x0206,"GPS180PEX GPS Receiver (PCI Express)"},

  {0x1360,0x0207,"GLN180PEX GPS/GLONASS receiver (PCI Express)"},

  {0x1360,0x0208,"GPS180AMC GPS Receiver (PCI Express / MicroTCA / AdvancedMC)"},

  {0x1360,0x0209,"GNS181PEX GPS/Galileo/GLONASS/BEIDOU receiver (PCI Express)"},

  {0x1360,0x0301,"TCR510PCI IRIG Timecode Reader"},

  {0x1360,0x0302,"TCR167PCI IRIG Timecode Reader"},

  {0x1360,0x0303,"TCR511PCI IRIG Timecode Reader"},

  {0x1360,0x0304,"TCR511PEX IRIG Timecode Reader (PCI Express)"},

  {0x1360,0x0305,"TCR170PEX IRIG Timecode Reader (PCI Express)"},

  {0x1360,0x0306,"TCR180PEX IRIG Timecode Reader (PCI Express)"},

  {0x1360,0x0501,"PTP270PEX PTP/IEEE1588 slave card (PCI Express)"},

  {0x1360,0x0601,"FRC511PEX Free Running Clock (PCI Express)"},

  {0x136a,0x0004,"HST Saphir VII mini PCI"},

  {0x136a,0x0007,"HST Saphir III E MultiLink 4"},

  {0x136a,0x0008,"HST Saphir III E MultiLink 8"},

  {0x136a,0x000a,"HST Saphir III E MultiLink 2"},

  {0x136b,0xff01,"KL5A72002 Motion JPEG"},

  {0x1371,0x434e,"GigaCard Network Adapter"},

  {0x1374,0x0024,"Silicom Dual port Giga Ethernet BGE Bypass Server Adapter"},

  {0x1374,0x0025,"Silicom Quad port Giga Ethernet BGE Bypass Server Adapter"},

  {0x1374,0x0026,"Silicom Dual port Fiber Giga Ethernet 546 Bypass Server Adapter"},

  {0x1374,0x0027,"Silicom Dual port Fiber LX Giga Ethernet 546 Bypass Server Adapter"},

  {0x1374,0x0029,"Silicom Dual port Copper Giga Ethernet 546GB Bypass Server Adapter"},

  {0x1374,0x002a,"Silicom Dual port Fiber Giga Ethernet 546 TAP/Bypass Server Adapter"},

  {0x1374,0x002b,"Silicom Dual port Copper Fast Ethernet 546 TAP/Bypass Server Adapter (PXE2TBI)"},

  {0x1374,0x002c,"Silicom Quad port Copper Giga Ethernet 546GB Bypass Server Adapter (PXG4BPI)"},

  {0x1374,0x002d,"Silicom Quad port Fiber-SX Giga Ethernet 546GB Bypass Server Adapter (PXG4BPFI)"},

  {0x1374,0x002e,"Silicom Quad port Fiber-LX Giga Ethernet 546GB Bypass Server Adapter (PXG4BPFI-LX)"},

  {0x1374,0x002f,"Silicom Dual port Fiber-SX Giga Ethernet 546GB Low profile Bypass Server Adapter (PXG2BPFIL)"},

  {0x1374,0x0030,"Silicom Dual port Fiber-LX Giga Ethernet 546GB Low profile Bypass Server Adapter"},

  {0x1374,0x0031,"Silicom Quad port Copper Giga Ethernet PCI-E Bypass Server Adapter"},

  {0x1374,0x0032,"Silicom Dual port Copper Fast Ethernet 546 TAP/Bypass Server Adapter"},

  {0x1374,0x0034,"Silicom Dual port Copper Giga Ethernet PCI-E BGE Bypass Server Adapter"},

  {0x1374,0x0035,"Silicom Quad port Copper Giga Ethernet PCI-E BGE Bypass Server Adapter"},

  {0x1374,0x0036,"Silicom Dual port Fiber Giga Ethernet PCI-E BGE Bypass Server Adapter"},

  {0x1374,0x0037,"Silicom Dual port Copper Ethernet PCI-E Intel based Bypass Server Adapter"},

  {0x1374,0x0038,"Silicom Quad port Copper Ethernet PCI-E Intel based Bypass Server Adapter"},

  {0x1374,0x0039,"Silicom Dual port Fiber-SX Ethernet PCI-E Intel based Bypass Server Adapter"},

  {0x1374,0x003a,"Silicom Dual port Fiber-LX Ethernet PCI-E Intel based Bypass Server Adapter"},

  {0x1374,0x003b,"Silicom Dual port Fiber Ethernet PMC Intel based Bypass Server Adapter (PMCX2BPFI)"},

  {0x1374,0x003c,"Silicom Dual port Copper Ethernet PCI-X BGE based Bypass Server Adapter (PXG2BPRB)"},

  {0x1374,0x003d,"2-port Copper GBE Bypass with Caviume 1010 PCI-X"},

  {0x1374,0x003e,"Silicom Dual port Fiber Giga Ethernet PCI-E 571 TAP/Bypass Server Adapter (PEG2TBFI)"},

  {0x1374,0x003f,"Silicom Dual port Copper Giga Ethernet PCI-X 546 TAP/Bypass Server Adapter (PXG2TBI)"},

  {0x1374,0x0040,"Silicom Quad port Fiber-SX Giga Ethernet 571 Bypass Server Adapter (PEG4BPFI)"},

  {0x1374,0x0042,"4-port Copper GBE PMC-X Bypass"},

  {0x1374,0x0043,"Silicom Quad port Fiber-SX Giga Ethernet 546 Bypass Server Adapter (PXG4BPFID)"},

  {0x1374,0x0045,"Silicom 6 port Copper Giga Ethernet 546 Bypass Server Adapter (PXG6BPI)"},

  {0x1374,0x0046,"4-port bypass PCI-E w disconnect low profile"},

  {0x1374,0x0047,"Silicom Dual port Fiber-SX Giga Ethernet 571 Bypass Disconnect Server Adapter (PEG2BPFID)"},

  {0x1374,0x004a,"Silicom Quad port Fiber-LX Giga Ethernet 571 Bypass Server Adapter (PEG4BPFI-LX)"},

  {0x1374,0x004d,"Dual port Copper Giga Ethernet PCI-E Bypass Server Adapter"},

  {0x1374,0x0401,"Gigabit Ethernet ExpressModule Bypass Server Adapter"},

  {0x1374,0x0420,"Gigabit Ethernet ExpressModule Bypass Server Adapter"},

  {0x1374,0x0460,"Gigabit Ethernet Express Module Bypass Server Adapter"},

  {0x1374,0x0461,"Gigabit Ethernet ExpressModule Bypass Server Adapter"},

  {0x1374,0x0462,"Gigabit Ethernet ExpressModule Bypass Server Adapter"},

  {0x1374,0x0470,"Octal-port Copper Gigabit Ethernet Express Module Bypass Server Adapter"},

  {0x1374,0x0482,"Dual-port Fiber (SR) 10 Gigabit Ethernet ExpressModule Bypass Server Adapter"},

  {0x1374,0x0483,"Dual-port Fiber (LR) 10 Gigabit Ethernet ExpressModule Bypass Server Adapter"},

  {0x137a,0x0001,"PCI-324 Audiowire Interface"},

  {0x1382,0x0001,"ARC88 audio recording card"},

  {0x1382,0x2008,"Prodif 96 Pro sound system"},

  {0x1382,0x2048,"Prodif Plus sound system"},

  {0x1382,0x2088,"Marc 8 Midi sound system"},

  {0x1382,0x20c8,"Marc A sound system"},

  {0x1382,0x4008,"Marc 2 sound system"},

  {0x1382,0x4010,"Marc 2 Pro sound system"},

  {0x1382,0x4048,"Marc 4 MIDI sound system"},

  {0x1382,0x4088,"Marc 4 Digi sound system"},

  {0x1382,0x4248,"Marc X sound system"},

  {0x1382,0x4424,"TRACE D4 Sound System"},

  {0x1385,0x006b,"WA301 802.11b Wireless PCI Adapter"},

  {0x1385,0x4100,"MA301 802.11b Wireless PCI Adapter"},

  {0x1385,0x4601,"WAG511 802.11a/b/g Dual Band Wireless PC Card"},

  {0x1385,0x620a,"GA620 Gigabit Ethernet"},

  {0x1385,0x630a,"GA630 Gigabit Ethernet"},

  {0x1389,0x0001,"PCI1500PFB [Intelligent fieldbus adaptor]"},

  {0x138a,0x003d,"VFS491 Validity Sensor"},

  {0x1393,0x0001,"UC7000 Serial"},

  {0x1393,0x1020,"CP102 (2-port RS-232 PCI)"},

  {0x1393,0x1021,"CP102UL (2-port RS-232 Universal PCI)"},

  {0x1393,0x1022,"CP102U (2-port RS-232 Universal PCI)"},

  {0x1393,0x1023,"CP-102UF"},

  {0x1393,0x1024,"CP-102E (2-port RS-232 Smart PCI Express Serial Board)"},

  {0x1393,0x1025,"CP-102EL (2-port RS-232 Smart PCI Express Serial Board)"},

  {0x1393,0x1040,"Smartio C104H/PCI"},

  {0x1393,0x1041,"CP104U (4-port RS-232 Universal PCI)"},

  {0x1393,0x1042,"CP104JU (4-port RS-232 Universal PCI)"},

  {0x1393,0x1043,"CP104EL (4-port RS-232 Smart PCI Express)"},

  {0x1393,0x1044,"POS104UL (4-port RS-232 Universal PCI)"},

  {0x1393,0x1045,"CP-104EL-A (4-port RS-232 PCI Express Serial Board)"},

  {0x1393,0x1080,"CB108 (8-port RS-232 PC/104-plus Module)"},

  {0x1393,0x1140,"CT-114 series"},

  {0x1393,0x1141,"Industrio CP-114"},

  {0x1393,0x1142,"CB114 (4-port RS-232/422/485 PC/104-plus Module)"},

  {0x1393,0x1143,"CP-114UL (4-port RS-232/422/485 Smart Universal PCI Serial Board)"},

  {0x1393,0x1144,"CP-114EL (4-port RS-232/422/485 Smart PCI Express Serial Board)"},

  {0x1393,0x1180,"CP118U (8-port RS-232/422/485 Smart Universal PCI)"},

  {0x1393,0x1181,"CP118EL (8-port RS-232/422/485 Smart PCI Express)"},

  {0x1393,0x1182,"CP-118EL-A (8-port RS-232/422/485 PCI Express Serial Board)"},

  {0x1393,0x1320,"CP132 (2-port RS-422/485 PCI)"},

  {0x1393,0x1321,"CP132U (2-Port RS-422/485 Universal PCI)"},

  {0x1393,0x1322,"CP-132EL (2-port RS-422/485 Smart PCI Express Serial Board)"},

  {0x1393,0x1340,"CP134U (4-Port RS-422/485 Universal PCI)"},

  {0x1393,0x1341,"CB134I (4-port RS-422/485 PC/104-plus Module)"},

  {0x1393,0x1380,"CP138U (8-port RS-232/422/485 Smart Universal PCI)"},

  {0x1393,0x1680,"Smartio C168H/PCI"},

  {0x1393,0x1681,"CP-168U V2 Smart Serial Board (8-port RS-232)"},

  {0x1393,0x1682,"CP168EL (8-port RS-232 Smart PCI Express)"},

  {0x1393,0x1683,"CP-168EL-A (8-port RS-232 PCI Express Serial Board)"},

  {0x1393,0x2040,"Intellio CP-204J"},

  {0x1393,0x2180,"Intellio C218 Turbo PCI"},

  {0x1393,0x3200,"Intellio C320 Turbo PCI"},

  {0x1394,0x0001,"LXT1001 Gigabit Ethernet"},

  {0x1397,0x08b4,"ISDN network Controller [HFC-4S]"},

  {0x1397,0x16b8,"ISDN network Controller [HFC-8S]"},

  {0x1397,0x2bd0,"ISDN network controller [HFC-PCI]"},

  {0x1397,0x30b1,"ISDN network Controller [HFC-E1]"},

  {0x1397,0xb700,"ISDN network controller PrimuX S0 [HFC-PCI]"},

  {0x1397,0xf001,"GSM Network Controller [HFC-4GSM]"},

  {0x139a,0x0001,"Quad Port 10/100 Server Accelerator"},

  {0x139a,0x0003,"Single Port 10/100 Server Accelerator"},

  {0x139a,0x0005,"Single Port Gigabit Server Accelerator"},

  {0x13a3,0x0005,"7751 Security Processor"},

  {0x13a3,0x0006,"6500 Public Key Processor"},

  {0x13a3,0x0007,"7811 Security Processor"},

  {0x13a3,0x0012,"7951 Security Processor"},

  {0x13a3,0x0014,"78XX Security Processor"},

  {0x13a3,0x0016,"8065 Security Processor"},

  {0x13a3,0x0017,"8165 Security Processor"},

  {0x13a3,0x0018,"8154 Security Processor"},

  {0x13a3,0x001d,"7956 Security Processor"},

  {0x13a3,0x001f,"7855 Security Processor"},

  {0x13a3,0x0020,"7955 Security Processor"},

  {0x13a3,0x0026,"8155 Security Processor"},

  {0x13a3,0x002e,"9630 Compression Processor"},

  {0x13a3,0x002f,"9725 Compression and Security Processor"},

  {0x13a3,0x0033,"8201 Acceleration Processor"},

  {0x13a3,0x0034,"8202 Acceleration Processor"},

  {0x13a3,0x0035,"8203 Acceleration Processor"},

  {0x13a3,0x0037,"8204 Acceleration Processor"},

  {0x13a8,0x0152,"XR17C/D152 Dual PCI UART"},

  {0x13a8,0x0154,"XR17C154 Quad UART"},

  {0x13a8,0x0158,"XR17C158 Octal UART"},

  {0x13a8,0x0252,"XR17V252 Dual UART PCI controller"},

  {0x13a8,0x0254,"XR17V254 Quad UART PCI controller"},

  {0x13a8,0x0258,"XR17V258 Octal UART PCI controller"},

  {0x13c0,0x0010,"SyncLink Adapter v1"},

  {0x13c0,0x0020,"SyncLink SCC Adapter"},

  {0x13c0,0x0030,"SyncLink Multiport Adapter"},

  {0x13c0,0x0070,"SyncLink GT Adapter"},

  {0x13c0,0x0080,"SyncLink GT4 Adapter"},

  {0x13c0,0x00a0,"SyncLink GT2 Adapter"},

  {0x13c0,0x0210,"SyncLink Adapter v2"},

  {0x13c1,0x1000,"5xxx/6xxx-series PATA-RAID"},

  {0x13c1,0x1001,"7xxx/8xxx-series PATA/SATA-RAID"},

  {0x13c1,0x1002,"9xxx-series SATA-RAID"},

  {0x13c1,0x1003,"9550SX SATA-II RAID PCI-X"},

  {0x13c1,0x1004,"9650SE SATA-II RAID PCIe"},

  {0x13c1,0x1005,"9690SA SAS/SATA-II RAID PCIe"},

  {0x13c1,0x1010,"9750 SAS2/SATA-II RAID PCIe"},

  {0x13c2,0x000e,"Technotrend/Hauppauge DVB card rev2.3"},

  {0x13c2,0x1019,"TTechnoTrend-budget DVB S2-3200"},

  {0x13c6,0x0520,"CEI-520 A429 Card"},

  {0x13c6,0x0620,"CEI-620 A429 Card"},

  {0x13c6,0x0820,"CEI-820 A429 Card"},

  {0x13c6,0x0830,"CEI-830 A429 Card"},

  {0x13c6,0x1004,"P-SER Multi-channel PMC to RS-485/422/232 adapter"},

  {0x13c7,0x0adc,"PCI-ADC"},

  {0x13c7,0x0b10,"PCI-PIO"},

  {0x13c7,0x0d10,"PCI-DIO"},

  {0x13c7,0x524c,"PCI-RLY"},

  {0x13c7,0x5744,"PCI-WDT"},

  {0x13d0,0x2103,"B2C2 FlexCopII DVB chip / Technisat SkyStar2 DVB card"},

  {0x13d0,0x2104,"B2C2 FlexCopIII DVB chip / Technisat SkyStar2 DVB card (rev 01)"},

  {0x13d0,0x2200,"B2C2 FlexCopIII DVB chip / Technisat SkyStar2 DVB card"},

  {0x13d1,0xab02,"ADMtek Centaur-C rev 17 [D-Link DFE-680TX] CardBus Fast Ethernet Adapter"},

  {0x13d1,0xab03,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x13d1,0xab06,"RTL8139 [FE2000VX] CardBus Fast Ethernet Attached Port Adapter"},

  {0x13d1,0xab08,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x13df,0x0001,"PCI56RVP Modem"},

  {0x13ec,0x000a,"NPC-RC01 Remote control receiver"},

  {0x13f0,0x0200,"IC Plus IP100A Integrated 10/100 Ethernet MAC + PHY"},

  {0x13f0,0x0201,"ST201 Sundance Ethernet"},

  {0x13f0,0x1021,"TC902x Gigabit Ethernet"},

  {0x13f0,0x1023,"IP1000 Family Gigabit Ethernet"},

  {0x13f4,0x1401,"Zentai Fibre Channel Adapter"},

  {0x13f6,0x0011,"CMI8738"},

  {0x13f6,0x0100,"CM8338A"},

  {0x13f6,0x0101,"CM8338B"},

  {0x13f6,0x0111,"CMI8738/CMI8768 PCI Audio"},

  {0x13f6,0x0211,"CM8738"},

  {0x13f6,0x5011,"CM8888 [Oxygen Express]"},

  {0x13f6,0x8788,"CMI8788 [Oxygen HD Audio]"},

  {0x13fe,0x1240,"PCI-1240 4-channel stepper motor controller card"},

  {0x13fe,0x1600,"PCI-16xx series PCI multiport serial board (function 0)"},

  {0x13fe,0x1603,"PCI-1603 2-port isolated RS-232/current loop"},

  {0x13fe,0x1604,"PCI-1604 2-port RS-232"},

  {0x13fe,0x16ff,"PCI-16xx series PCI multiport serial board (function 1: RX/TX steering CPLD)"},

  {0x13fe,0x1711,"PCI-1711 16-channel data acquisition card 12-bit, 100kS/s"},

  {0x13fe,0x1733,"PCI-1733 32-channel isolated digital input card"},

  {0x13fe,0x1752,"PCI-1752"},

  {0x13fe,0x1754,"PCI-1754"},

  {0x13fe,0x1756,"PCI-1756"},

  {0x13fe,0xc302,"MIOe-3680 2-Port CAN-Bus MIOe Module with Isolation Protection"},

  {0x1400,0x1401,"9432 TX"},

  {0x1402,0x0630,"ME-630"},

  {0x1402,0x0940,"ME-94"},

  {0x1402,0x0950,"ME-95"},

  {0x1402,0x0960,"ME-96"},

  {0x1402,0x1000,"ME-1000"},

  {0x1402,0x100a,"ME-1000"},

  {0x1402,0x100b,"ME-1000"},

  {0x1402,0x1400,"ME-1400"},

  {0x1402,0x140a,"ME-1400A"},

  {0x1402,0x140b,"ME-1400B"},

  {0x1402,0x140c,"ME-1400C"},

  {0x1402,0x140d,"ME-1400D"},

  {0x1402,0x140e,"ME-1400E"},

  {0x1402,0x14ea,"ME-1400EA"},

  {0x1402,0x14eb,"ME-1400EB"},

  {0x1402,0x1604,"ME-1600/4U"},

  {0x1402,0x1608,"ME-1600/8U"},

  {0x1402,0x160c,"ME-1600/12U"},

  {0x1402,0x160f,"ME-1600/16U"},

  {0x1402,0x168f,"ME-1600/16U8I"},

  {0x1402,0x4610,"ME-4610"},

  {0x1402,0x4650,"ME-4650"},

  {0x1402,0x4660,"ME-4660"},

  {0x1402,0x4661,"ME-4660I"},

  {0x1402,0x4662,"ME-4660"},

  {0x1402,0x4663,"ME-4660I"},

  {0x1402,0x4670,"ME-4670"},

  {0x1402,0x4671,"ME-4670I"},

  {0x1402,0x4672,"ME-4670S"},

  {0x1402,0x4673,"ME-4670IS"},

  {0x1402,0x4680,"ME-4680"},

  {0x1402,0x4681,"ME-4680I"},

  {0x1402,0x4682,"ME-4680S"},

  {0x1402,0x4683,"ME-4680IS"},

  {0x1402,0x6004,"ME-6000/4"},

  {0x1402,0x6008,"ME-6000/8"},

  {0x1402,0x600f,"ME-6000/16"},

  {0x1402,0x6014,"ME-6000I/4"},

  {0x1402,0x6018,"ME-6000I/8"},

  {0x1402,0x601f,"ME-6000I/16"},

  {0x1402,0x6034,"ME-6000ISLE/4"},

  {0x1402,0x6038,"ME-6000ISLE/8"},

  {0x1402,0x603f,"ME-6000ISLE/16"},

  {0x1402,0x6044,"ME-6000/4/DIO"},

  {0x1402,0x6048,"ME-6000/8/DIO"},

  {0x1402,0x604f,"ME-6000/16/DIO"},

  {0x1402,0x6054,"ME-6000I/4/DIO"},

  {0x1402,0x6058,"ME-6000I/8/DIO"},

  {0x1402,0x605f,"ME-6000I/16/DIO"},

  {0x1402,0x6074,"ME-6000ISLE/4/DIO"},

  {0x1402,0x6078,"ME-6000ISLE/8/DIO"},

  {0x1402,0x607f,"ME-6000ISLE/16/DIO"},

  {0x1402,0x6104,"ME-6100/4"},

  {0x1402,0x6108,"ME-6100/8"},

  {0x1402,0x610f,"ME-6100/16"},

  {0x1402,0x6114,"ME-6100I/4"},

  {0x1402,0x6118,"ME-6100I/8"},

  {0x1402,0x611f,"ME-6100I/16"},

  {0x1402,0x6134,"ME-6100ISLE/4"},

  {0x1402,0x6138,"ME-6100ISLE/8"},

  {0x1402,0x613f,"ME-6100ISLE/16"},

  {0x1402,0x6144,"ME-6100/4/DIO"},

  {0x1402,0x6148,"ME-6100/8/DIO"},

  {0x1402,0x614f,"ME-6100/16/DIO"},

  {0x1402,0x6154,"ME-6100I/4/DIO"},

  {0x1402,0x6158,"ME-6100I/8/DIO"},

  {0x1402,0x615f,"ME-6100I/16/DIO"},

  {0x1402,0x6174,"ME-6100ISLE/4/DIO"},

  {0x1402,0x6178,"ME-6100ISLE/8/DIO"},

  {0x1402,0x617f,"ME-6100ISLE/16/DIO"},

  {0x1402,0x6259,"ME-6200I/9/DIO"},

  {0x1402,0x6359,"ME-6300I/9/DIO"},

  {0x1402,0x810a,"ME-8100A"},

  {0x1402,0x810b,"ME-8100B"},

  {0x1402,0x820a,"ME-8200A"},

  {0x1402,0x820b,"ME-8200B"},

  {0x1407,0x0100,"Lava Dual Serial"},

  {0x1407,0x0101,"Lava Quatro A"},

  {0x1407,0x0102,"Lava Quatro B"},

  {0x1407,0x0110,"Lava DSerial-PCI Port A"},

  {0x1407,0x0111,"Lava DSerial-PCI Port B"},

  {0x1407,0x0120,"Quattro-PCI A"},

  {0x1407,0x0121,"Quattro-PCI B"},

  {0x1407,0x0180,"Lava Octo A"},

  {0x1407,0x0181,"Lava Octo B"},

  {0x1407,0x0200,"Lava Port Plus"},

  {0x1407,0x0201,"Lava Quad A"},

  {0x1407,0x0202,"Lava Quad B"},

  {0x1407,0x0220,"Lava Quattro PCI Ports A/B"},

  {0x1407,0x0221,"Lava Quattro PCI Ports C/D"},

  {0x1407,0x0400,"Lava 8255-PIO-PCI"},

  {0x1407,0x0500,"Lava Single Serial"},

  {0x1407,0x0520,"Lava RS422-SS-PCI"},

  {0x1407,0x0600,"Lava Port 650"},

  {0x1407,0x8000,"Lava Parallel"},

  {0x1407,0x8001,"Dual parallel port controller A"},

  {0x1407,0x8002,"Lava Dual Parallel port A"},

  {0x1407,0x8003,"Lava Dual Parallel port B"},

  {0x1407,0x8800,"BOCA Research IOPPAR"},

  {0x1409,0x7168,"PCI2S550 (Dual 16550 UART)"},

  {0x1409,0x7268,"SUN1888 (Dual IEEE1284 parallel port)"},

  {0x1412,0x1712,"ICE1712 [Envy24] PCI Multi-Channel I/O Controller"},

  {0x1412,0x1724,"VT1720/24 [Envy24PT/HT] PCI Multi-Channel Audio Controller"},

  {0x1414,0x0001,"MN-120 (ADMtek Centaur-C based)"},

  {0x1414,0x0002,"MN-130 (ADMtek Centaur-P based)"},

  {0x1414,0x5353,"Hyper-V virtual VGA"},

  {0x1414,0x5801,"XMA Decoder (Xenon)"},

  {0x1414,0x5802,"SATA Controller - CdRom (Xenon)"},

  {0x1414,0x5803,"SATA Controller - Disk (Xenon)"},

  {0x1414,0x5804,"OHCI Controller 0 (Xenon)"},

  {0x1414,0x5805,"EHCI Controller 0 (Xenon)"},

  {0x1414,0x5806,"OHCI Controller 1 (Xenon)"},

  {0x1414,0x5807,"EHCI Controller 1 (Xenon)"},

  {0x1414,0x580a,"Fast Ethernet Adapter (Xenon)"},

  {0x1414,0x580b,"Secure Flash Controller (Xenon)"},

  {0x1414,0x580d,"System Management Controller (Xenon)"},

  {0x1414,0x5811,"Xenos GPU (Xenon)"},

  {0x1415,0x8401,"OX9162 Mode 1 (8-bit bus)"},

  {0x1415,0x8403,"OX9162 Mode 0 (parallel port)"},

  {0x1415,0x9500,"OX16PCI954 (Quad 16950 UART) function 0 (Disabled)"},

  {0x1415,0x9501,"OX16PCI954 (Quad 16950 UART) function 0 (Uart)"},

  {0x1415,0x9505,"OXuPCI952 (Dual 16C950 UART)"},

  {0x1415,0x950a,"EXSYS EX-41092 Dual 16950 Serial adapter"},

  {0x1415,0x950b,"OXCB950 Cardbus 16950 UART"},

  {0x1415,0x9510,"OX16PCI954 (Quad 16950 UART) function 1 (Disabled)"},

  {0x1415,0x9511,"OX16PCI954 (Quad 16950 UART) function 1 (8bit bus)"},

  {0x1415,0x9512,"OX16PCI954 (Quad 16950 UART) function 1 (32bit bus)"},

  {0x1415,0x9513,"OX16PCI954 (Quad 16950 UART) function 1 (parallel port)"},

  {0x1415,0x9521,"OX16PCI952 (Dual 16950 UART)"},

  {0x1415,0x9523,"OX16PCI952 Integrated Parallel Port"},

  {0x1415,0xc158,"OXPCIe952 Dual 16C950 UART"},

  {0x1415,0xc308,"EX-44016 16-port serial"},

  {0x1420,0x8002,"Gold Card NetGlobal 56k+10/100Mb CardBus (Ethernet part)"},

  {0x1420,0x8003,"Gold Card NetGlobal 56k+10/100Mb CardBus (Modem part)"},

  {0x1425,0x000b,"T210 Protocol Engine"},

  {0x1425,0x000c,"T204 Protocol Engine"},

  {0x1425,0x0022,"10GbE Ethernet Adapter"},

  {0x1425,0x0030,"T310 10GbE Single Port Adapter"},

  {0x1425,0x0031,"T320 10GbE Dual Port Adapter"},

  {0x1425,0x0032,"T302 1GbE Dual Port Adapter"},

  {0x1425,0x0033,"T304 1GbE Quad Port Adapter"},

  {0x1425,0x0034,"B320 10GbE Dual Port Adapter"},

  {0x1425,0x0035,"S310-CR 10GbE Single Port Adapter"},

  {0x1425,0x0036,"S320-LP-CR 10GbE Dual Port Adapter"},

  {0x1425,0x0037,"N320-G2-CR 10GbE Dual Port Adapter"},

  {0x1425,0x4001,"T420-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4002,"T422-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4003,"T440-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4004,"T420-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x4005,"T440-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x4006,"T440-CH Unified Wire Ethernet Controller"},

  {0x1425,0x4007,"T420-SO Unified Wire Ethernet Controller"},

  {0x1425,0x4008,"T420-CX Unified Wire Ethernet Controller"},

  {0x1425,0x4009,"T420-BT Unified Wire Ethernet Controller"},

  {0x1425,0x400a,"T404-BT Unified Wire Ethernet Controller"},

  {0x1425,0x400b,"B420-SR Unified Wire Ethernet Controller"},

  {0x1425,0x400c,"B404-BT Unified Wire Ethernet Controller"},

  {0x1425,0x400d,"T480 Unified Wire Ethernet Controller"},

  {0x1425,0x400e,"T440-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x400f,"T440 [Amsterdam] Unified Wire Ethernet Controller"},

  {0x1425,0x4080,"T480-4080 T480 Unified Wire Ethernet Controller"},

  {0x1425,0x4081,"T440F-4081 T440-FCoE Unified Wire Ethernet Controller"},

  {0x1425,0x4082,"T420-4082  Unified Wire Ethernet Controller"},

  {0x1425,0x4083,"T420X-4083 Unified Wire Ethernet Controller"},

  {0x1425,0x4084,"T440-4084 Unified Wire Ethernet Controller"},

  {0x1425,0x4085,"T420-4085 SFP+ Unified Wire Ethernet Controller"},

  {0x1425,0x4086,"T440-4086 10Gbase-T Unified Wire Ethernet Controller"},

  {0x1425,0x4087,"T440T-4087 Unified Wire Ethernet Controller"},

  {0x1425,0x4088,"T440-4088 Unified Wire Ethernet Controller"},

  {0x1425,0x4401,"T420-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4402,"T422-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4403,"T440-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4404,"T420-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x4405,"T440-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x4406,"T440-CH Unified Wire Ethernet Controller"},

  {0x1425,0x4407,"T420-SO Unified Wire Ethernet Controller"},

  {0x1425,0x4408,"T420-CX Unified Wire Ethernet Controller"},

  {0x1425,0x4409,"T420-BT Unified Wire Ethernet Controller"},

  {0x1425,0x440a,"T404-BT Unified Wire Ethernet Controller"},

  {0x1425,0x440b,"B420-SR Unified Wire Ethernet Controller"},

  {0x1425,0x440c,"B404-BT Unified Wire Ethernet Controller"},

  {0x1425,0x440d,"T480 Unified Wire Ethernet Controller"},

  {0x1425,0x440e,"T440-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x440f,"T440 [Amsterdam] Unified Wire Ethernet Controller"},

  {0x1425,0x4480,"T480-4080 T480 Unified Wire Ethernet Controller"},

  {0x1425,0x4481,"T440F-4081 T440-FCoE Unified Wire Ethernet Controller"},

  {0x1425,0x4482,"T420-4082  Unified Wire Ethernet Controller"},

  {0x1425,0x4483,"T420X-4083 Unified Wire Ethernet Controller"},

  {0x1425,0x4484,"T440-4084 Unified Wire Ethernet Controller"},

  {0x1425,0x4485,"T420-4085 SFP+ Unified Wire Ethernet Controller"},

  {0x1425,0x4486,"T440-4086 10Gbase-T Unified Wire Ethernet Controller"},

  {0x1425,0x4487,"T440T-4087 Unified Wire Ethernet Controller"},

  {0x1425,0x4488,"T440-4088 Unified Wire Ethernet Controller"},

  {0x1425,0x4501,"T420-CR Unified Wire Storage Controller"},

  {0x1425,0x4502,"T422-CR Unified Wire Storage Controller"},

  {0x1425,0x4503,"T440-CR Unified Wire Storage Controller"},

  {0x1425,0x4504,"T420-BCH Unified Wire Storage Controller"},

  {0x1425,0x4505,"T440-BCH Unified Wire Storage Controller"},

  {0x1425,0x4506,"T440-CH Unified Wire Storage Controller"},

  {0x1425,0x4507,"T420-SO Unified Wire Storage Controller"},

  {0x1425,0x4508,"T420-CX Unified Wire Storage Controller"},

  {0x1425,0x4509,"T420-BT Unified Wire Storage Controller"},

  {0x1425,0x450a,"T404-BT Unified Wire Storage Controller"},

  {0x1425,0x450b,"B420-SR Unified Wire Storage Controller"},

  {0x1425,0x450c,"B404-BT Unified Wire Storage Controller"},

  {0x1425,0x450d,"T480 Unified Wire Storage Controller"},

  {0x1425,0x450e,"T440-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x450f,"T440 [Amsterdam] Unified Wire Storage Controller"},

  {0x1425,0x4580,"T480-4080 T480 Unified Wire Storage Controller"},

  {0x1425,0x4581,"T440F-4081 T440-FCoE Unified Wire Storage Controller"},

  {0x1425,0x4582,"T420-4082  Unified Wire Storage Controller"},

  {0x1425,0x4583,"T420X-4083 Unified Wire Storage Controller"},

  {0x1425,0x4584,"T440-4084 Unified Wire Storage Controller"},

  {0x1425,0x4585,"T420-4085 SFP+ Unified Wire Storage Controller"},

  {0x1425,0x4586,"T440-4086 10Gbase-T Unified Wire Storage Controller"},

  {0x1425,0x4587,"T440T-4087 Unified Wire Storage Controller"},

  {0x1425,0x4588,"T440-4088 Unified Wire Storage Controller"},

  {0x1425,0x4601,"T420-CR Unified Wire Storage Controller"},

  {0x1425,0x4602,"T422-CR Unified Wire Storage Controller"},

  {0x1425,0x4603,"T440-CR Unified Wire Storage Controller"},

  {0x1425,0x4604,"T420-BCH Unified Wire Storage Controller"},

  {0x1425,0x4605,"T440-BCH Unified Wire Storage Controller"},

  {0x1425,0x4606,"T440-CH Unified Wire Storage Controller"},

  {0x1425,0x4607,"T420-SO Unified Wire Storage Controller"},

  {0x1425,0x4608,"T420-CX Unified Wire Storage Controller"},

  {0x1425,0x4609,"T420-BT Unified Wire Storage Controller"},

  {0x1425,0x460a,"T404-BT Unified Wire Storage Controller"},

  {0x1425,0x460b,"B420-SR Unified Wire Storage Controller"},

  {0x1425,0x460c,"B404-BT Unified Wire Storage Controller"},

  {0x1425,0x460d,"T480 Unified Wire Storage Controller"},

  {0x1425,0x460e,"T440-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x460f,"T440 [Amsterdam] Unified Wire Storage Controller"},

  {0x1425,0x4680,"T480-4080 T480 Unified Wire Storage Controller"},

  {0x1425,0x4681,"T440F-4081 T440-FCoE Unified Wire Storage Controller"},

  {0x1425,0x4682,"T420-4082  Unified Wire Storage Controller"},

  {0x1425,0x4683,"T420X-4083 Unified Wire Storage Controller"},

  {0x1425,0x4684,"T440-4084 Unified Wire Storage Controller"},

  {0x1425,0x4685,"T420-4085 SFP+ Unified Wire Storage Controller"},

  {0x1425,0x4686,"T440-4086 10Gbase-T Unified Wire Storage Controller"},

  {0x1425,0x4687,"T440T-4087 Unified Wire Storage Controller"},

  {0x1425,0x4688,"T440-4088 Unified Wire Storage Controller"},

  {0x1425,0x4701,"T420-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4702,"T422-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4703,"T440-CR Unified Wire Ethernet Controller"},

  {0x1425,0x4704,"T420-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x4705,"T440-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x4706,"T440-CH Unified Wire Ethernet Controller"},

  {0x1425,0x4707,"T420-SO Unified Wire Ethernet Controller"},

  {0x1425,0x4708,"T420-CX Unified Wire Ethernet Controller"},

  {0x1425,0x4709,"T420-BT Unified Wire Ethernet Controller"},

  {0x1425,0x470a,"T404-BT Unified Wire Ethernet Controller"},

  {0x1425,0x470b,"B420-SR Unified Wire Ethernet Controller"},

  {0x1425,0x470c,"B404-BT Unified Wire Ethernet Controller"},

  {0x1425,0x470d,"T480 Unified Wire Ethernet Controller"},

  {0x1425,0x470e,"T440-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x470f,"T440 [Amsterdam] Unified Wire Ethernet Controller"},

  {0x1425,0x4780,"T480-4080 T480 Unified Wire Ethernet Controller"},

  {0x1425,0x4781,"T440F-4081 T440-FCoE Unified Wire Ethernet Controller"},

  {0x1425,0x4782,"T420-4082  Unified Wire Ethernet Controller"},

  {0x1425,0x4783,"T420X-4083 Unified Wire Ethernet Controller"},

  {0x1425,0x4784,"T440-4084 Unified Wire Ethernet Controller"},

  {0x1425,0x4785,"T420-4085 SFP+ Unified Wire Ethernet Controller"},

  {0x1425,0x4786,"T440-4086 10Gbase-T Unified Wire Ethernet Controller"},

  {0x1425,0x4787,"T440T-4087 Unified Wire Ethernet Controller"},

  {0x1425,0x4788,"T440-4088 Unified Wire Ethernet Controller"},

  {0x1425,0x4801,"T420-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4802,"T422-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4803,"T440-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4804,"T420-BCH Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4805,"T440-BCH Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4806,"T440-CH Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4807,"T420-SO Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4808,"T420-CX Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4809,"T420-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x480a,"T404-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x480b,"B420-SR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x480c,"B404-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x480d,"T480 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x480e,"T440-LP-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x480f,"T440 [Amsterdam] Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4880,"T480-4080 T480 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4881,"T440F-4081 T440-FCoE Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4882,"T420-4082 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4883,"T420X-4083 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4884,"T440-4084 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4885,"T420-4085 SFP+ Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4886,"T440-4086 10Gbase-T Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4887,"T440T-4087 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x4888,"T440-4088 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5001,"T520-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5002,"T522-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5003,"T540-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5004,"T520-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x5005,"T540-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x5006,"T540-CH Unified Wire Ethernet Controller"},

  {0x1425,0x5007,"T520-SO Unified Wire Ethernet Controller"},

  {0x1425,0x5008,"T520-CX Unified Wire Ethernet Controller"},

  {0x1425,0x5009,"T520-BT Unified Wire Ethernet Controller"},

  {0x1425,0x500a,"T504-BT Unified Wire Ethernet Controller"},

  {0x1425,0x500b,"B520-SR Unified Wire Ethernet Controller"},

  {0x1425,0x500c,"B504-BT Unified Wire Ethernet Controller"},

  {0x1425,0x500d,"T580-CR Unified Wire Ethernet Controller"},

  {0x1425,0x500e,"T540-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x500f,"T540 [Amsterdam] Unified Wire Ethernet Controller"},

  {0x1425,0x5010,"T580-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5011,"T520-LL-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5012,"T560-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5013,"T580-CHR Unified Wire Ethernet Controller"},

  {0x1425,0x5014,"T580-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5015,"T502-BT Unified Wire Ethernet Controller"},

  {0x1425,0x5016,"T580-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x5017,"T520-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x5018,"T540-BT Unified Wire Ethernet Controller"},

  {0x1425,0x5080,"T540-5080 Unified Wire Ethernet Controller"},

  {0x1425,0x5081,"T540-5081 Unified Wire Ethernet Controller"},

  {0x1425,0x5082,"T504-5082 Unified Wire Ethernet Controller"},

  {0x1425,0x5083,"T540-5083 Unified Wire Ethernet Controller"},

  {0x1425,0x5084,"T540-5084 Unified Wire Ethernet Controller"},

  {0x1425,0x5085,"T580-5085 Unified Wire Ethernet Controller"},

  {0x1425,0x5086,"T580-5086 Unified Wire Ethernet Controller"},

  {0x1425,0x5087,"T580-5087 Unified Wire Ethernet Controller"},

  {0x1425,0x5088,"T570-5088 Unified Wire Ethernet Controller"},

  {0x1425,0x5089,"T520-5089 Unified Wire Ethernet Controller"},

  {0x1425,0x5090,"T540-5090 Unified Wire Ethernet Controller"},

  {0x1425,0x5091,"T522-5091 Unified Wire Ethernet Controller"},

  {0x1425,0x5092,"T520-5092 Unified Wire Ethernet Controller"},

  {0x1425,0x5093,"T580-5093 Unified Wire Ethernet Controller"},

  {0x1425,0x5094,"T540-5094 Unified Wire Ethernet Controller"},

  {0x1425,0x5095,"T540-5095 Unified Wire Ethernet Controller"},

  {0x1425,0x5096,"T580-5096 Unified Wire Ethernet Controller"},

  {0x1425,0x5097,"T520-5097 Unified Wire Ethernet Controller"},

  {0x1425,0x5098,"T580-5098 Unified Wire Ethernet Controller"},

  {0x1425,0x5099,"T580-5099 Unified Wire Ethernet Controller"},

  {0x1425,0x509a,"T520-509A Unified Wire Ethernet Controller"},

  {0x1425,0x509b,"T540-509B Unified Wire Ethernet Controller"},

  {0x1425,0x509c,"T520-509C Unified Wire Ethernet Controller"},

  {0x1425,0x509d,"T540-509D Unified Wire Ethernet Controller"},

  {0x1425,0x509e,"T520-509E Unified Wire Ethernet Controller"},

  {0x1425,0x509f,"T540-509F Unified Wire Ethernet Controller"},

  {0x1425,0x50a0,"T540-50A0 Unified Wire Ethernet Controller"},

  {0x1425,0x50a1,"T540-50A1 Unified Wire Ethernet Controller"},

  {0x1425,0x50a2,"T580-50A2 Unified Wire Ethernet Controller"},

  {0x1425,0x5401,"T520-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5402,"T522-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5403,"T540-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5404,"T520-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x5405,"T540-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x5406,"T540-CH Unified Wire Ethernet Controller"},

  {0x1425,0x5407,"T520-SO Unified Wire Ethernet Controller"},

  {0x1425,0x5408,"T520-CX Unified Wire Ethernet Controller"},

  {0x1425,0x5409,"T520-BT Unified Wire Ethernet Controller"},

  {0x1425,0x540a,"T504-BT Unified Wire Ethernet Controller"},

  {0x1425,0x540b,"B520-SR Unified Wire Ethernet Controller"},

  {0x1425,0x540c,"B504-BT Unified Wire Ethernet Controller"},

  {0x1425,0x540d,"T580-CR Unified Wire Ethernet Controller"},

  {0x1425,0x540e,"T540-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x540f,"T540 [Amsterdam] Unified Wire Ethernet Controller"},

  {0x1425,0x5410,"T580-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5411,"T520-LL-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5412,"T560-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5413,"T580-CHR Unified Wire Ethernet Controller"},

  {0x1425,0x5414,"T580-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5415,"T502-BT Unified Wire Ethernet Controller"},

  {0x1425,0x5416,"T580-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x5417,"T520-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x5418,"T540-BT Unified Wire Ethernet Controller"},

  {0x1425,0x5480,"T540-5080 Unified Wire Ethernet Controller"},

  {0x1425,0x5481,"T540-5081 Unified Wire Ethernet Controller"},

  {0x1425,0x5482,"T504-5082 Unified Wire Ethernet Controller"},

  {0x1425,0x5483,"T540-5083 Unified Wire Ethernet Controller"},

  {0x1425,0x5484,"T540-5084 Unified Wire Ethernet Controller"},

  {0x1425,0x5485,"T580-5085 Unified Wire Ethernet Controller"},

  {0x1425,0x5486,"T580-5086 Unified Wire Ethernet Controller"},

  {0x1425,0x5487,"T580-5087 Unified Wire Ethernet Controller"},

  {0x1425,0x5488,"T570-5088 Unified Wire Ethernet Controller"},

  {0x1425,0x5489,"T520-5089 Unified Wire Ethernet Controller"},

  {0x1425,0x5490,"T540-5090 Unified Wire Ethernet Controller"},

  {0x1425,0x5491,"T522-5091 Unified Wire Ethernet Controller"},

  {0x1425,0x5492,"T520-5092 Unified Wire Ethernet Controller"},

  {0x1425,0x5493,"T580-5093 Unified Wire Ethernet Controller"},

  {0x1425,0x5494,"T540-5094 Unified Wire Ethernet Controller"},

  {0x1425,0x5495,"T540-5095 Unified Wire Ethernet Controller"},

  {0x1425,0x5496,"T580-5096 Unified Wire Ethernet Controller"},

  {0x1425,0x5497,"T520-5097 Unified Wire Ethernet Controller"},

  {0x1425,0x5498,"T580-5098 Unified Wire Ethernet Controller"},

  {0x1425,0x5499,"T580-5099 Unified Wire Ethernet Controller"},

  {0x1425,0x549a,"T520-509A Unified Wire Ethernet Controller"},

  {0x1425,0x549b,"T540-509B Unified Wire Ethernet Controller"},

  {0x1425,0x549c,"T520-509C Unified Wire Ethernet Controller"},

  {0x1425,0x549d,"T540-509D Unified Wire Ethernet Controller"},

  {0x1425,0x549e,"T520-509E Unified Wire Ethernet Controller"},

  {0x1425,0x549f,"T540-509F Unified Wire Ethernet Controller"},

  {0x1425,0x54a0,"T540-50A0 Unified Wire Ethernet Controller"},

  {0x1425,0x54a1,"T540-50A1 Unified Wire Ethernet Controller"},

  {0x1425,0x54a2,"T580-50A2 Unified Wire Ethernet Controller"},

  {0x1425,0x5501,"T520-CR Unified Wire Storage Controller"},

  {0x1425,0x5502,"T522-CR Unified Wire Storage Controller"},

  {0x1425,0x5503,"T540-CR Unified Wire Storage Controller"},

  {0x1425,0x5504,"T520-BCH Unified Wire Storage Controller"},

  {0x1425,0x5505,"T540-BCH Unified Wire Storage Controller"},

  {0x1425,0x5506,"T540-CH Unified Wire Storage Controller"},

  {0x1425,0x5507,"T520-SO Unified Wire Storage Controller"},

  {0x1425,0x5508,"T520-CX Unified Wire Storage Controller"},

  {0x1425,0x5509,"T520-BT Unified Wire Storage Controller"},

  {0x1425,0x550a,"T504-BT Unified Wire Storage Controller"},

  {0x1425,0x550b,"B520-SR Unified Wire Storage Controller"},

  {0x1425,0x550c,"B504-BT Unified Wire Storage Controller"},

  {0x1425,0x550d,"T580-CR Unified Wire Storage Controller"},

  {0x1425,0x550e,"T540-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x550f,"T540 [Amsterdam] Unified Wire Storage Controller"},

  {0x1425,0x5510,"T580-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x5511,"T520-LL-CR Unified Wire Storage Controller"},

  {0x1425,0x5512,"T560-CR Unified Wire Storage Controller"},

  {0x1425,0x5513,"T580-CHR Unified Wire Storage Controller"},

  {0x1425,0x5514,"T580-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x5515,"T502-BT Unified Wire Storage Controller"},

  {0x1425,0x5516,"T580-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x5517,"T520-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x5518,"T540-BT Unified Wire Storage Controller"},

  {0x1425,0x5580,"T540-5080 Unified Wire Storage Controller"},

  {0x1425,0x5581,"T540-5081 Unified Wire Storage Controller"},

  {0x1425,0x5582,"T504-5082 Unified Wire Storage Controller"},

  {0x1425,0x5583,"T540-5083 Unified Wire Storage Controller"},

  {0x1425,0x5584,"T540-5084 Unified Wire Storage Controller"},

  {0x1425,0x5585,"T580-5085 Unified Wire Storage Controller"},

  {0x1425,0x5586,"T580-5086 Unified Wire Storage Controller"},

  {0x1425,0x5587,"T580-5087 Unified Wire Storage Controller"},

  {0x1425,0x5588,"T570-5088 Unified Wire Storage Controller"},

  {0x1425,0x5589,"T520-5089 Unified Wire Storage Controller"},

  {0x1425,0x5590,"T540-5090 Unified Wire Storage Controller"},

  {0x1425,0x5591,"T522-5091 Unified Wire Storage Controller"},

  {0x1425,0x5592,"T520-5092 Unified Wire Storage Controller"},

  {0x1425,0x5593,"T580-5093 Unified Wire Storage Controller"},

  {0x1425,0x5594,"T540-5094 Unified Wire Storage Controller"},

  {0x1425,0x5595,"T540-5095 Unified Wire Storage Controller"},

  {0x1425,0x5596,"T580-5096 Unified Wire Storage Controller"},

  {0x1425,0x5597,"T520-5097 Unified Wire Storage Controller"},

  {0x1425,0x5598,"T580-5098 Unified Wire Storage Controller"},

  {0x1425,0x5599,"T580-5099 Unified Wire Storage Controller"},

  {0x1425,0x559a,"T520-509A Unified Wire Storage Controller"},

  {0x1425,0x559b,"T540-509B Unified Wire Storage Controller"},

  {0x1425,0x559c,"T520-509C Unified Wire Storage Controller"},

  {0x1425,0x559d,"T540-509D Unified Wire Storage Controller"},

  {0x1425,0x559e,"T520-509E Unified Wire Storage Controller"},

  {0x1425,0x559f,"T540-509F Unified Wire Storage Controller"},

  {0x1425,0x55a0,"T540-50A0 Unified Wire Storage Controller"},

  {0x1425,0x55a1,"T540-50A1 Unified Wire Storage Controller"},

  {0x1425,0x55a2,"T580-50A2 Unified Wire Storage Controller"},

  {0x1425,0x5601,"T520-CR Unified Wire Storage Controller"},

  {0x1425,0x5602,"T522-CR Unified Wire Storage Controller"},

  {0x1425,0x5603,"T540-CR Unified Wire Storage Controller"},

  {0x1425,0x5604,"T520-BCH Unified Wire Storage Controller"},

  {0x1425,0x5605,"T540-BCH Unified Wire Storage Controller"},

  {0x1425,0x5606,"T540-CH Unified Wire Storage Controller"},

  {0x1425,0x5607,"T520-SO Unified Wire Storage Controller"},

  {0x1425,0x5608,"T520-CX Unified Wire Storage Controller"},

  {0x1425,0x5609,"T520-BT Unified Wire Storage Controller"},

  {0x1425,0x560a,"T504-BT Unified Wire Storage Controller"},

  {0x1425,0x560b,"B520-SR Unified Wire Storage Controller"},

  {0x1425,0x560c,"B504-BT Unified Wire Storage Controller"},

  {0x1425,0x560d,"T580-CR Unified Wire Storage Controller"},

  {0x1425,0x560e,"T540-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x560f,"T540 [Amsterdam] Unified Wire Storage Controller"},

  {0x1425,0x5610,"T580-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x5611,"T520-LL-CR Unified Wire Storage Controller"},

  {0x1425,0x5612,"T560-CR Unified Wire Storage Controller"},

  {0x1425,0x5613,"T580-CHR Unified Wire Storage Controller"},

  {0x1425,0x5614,"T580-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x5615,"T502-BT Unified Wire Storage Controller"},

  {0x1425,0x5616,"T580-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x5617,"T520-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x5618,"T540-BT Unified Wire Storage Controller"},

  {0x1425,0x5680,"T540-5080 Unified Wire Storage Controller"},

  {0x1425,0x5681,"T540-5081 Unified Wire Storage Controller"},

  {0x1425,0x5682,"T504-5082 Unified Wire Storage Controller"},

  {0x1425,0x5683,"T540-5083 Unified Wire Storage Controller"},

  {0x1425,0x5684,"T540-5084 Unified Wire Storage Controller"},

  {0x1425,0x5685,"T580-5085 Unified Wire Storage Controller"},

  {0x1425,0x5686,"T580-5086 Unified Wire Storage Controller"},

  {0x1425,0x5687,"T580-5087 Unified Wire Storage Controller"},

  {0x1425,0x5688,"T570-5088 Unified Wire Storage Controller"},

  {0x1425,0x5689,"T520-5089 Unified Wire Storage Controller"},

  {0x1425,0x5690,"T540-5090 Unified Wire Storage Controller"},

  {0x1425,0x5691,"T522-5091 Unified Wire Storage Controller"},

  {0x1425,0x5692,"T520-5092 Unified Wire Storage Controller"},

  {0x1425,0x5693,"T580-5093 Unified Wire Storage Controller"},

  {0x1425,0x5694,"T540-5094 Unified Wire Storage Controller"},

  {0x1425,0x5695,"T540-5095 Unified Wire Storage Controller"},

  {0x1425,0x5696,"T580-5096 Unified Wire Storage Controller"},

  {0x1425,0x5697,"T520-5097 Unified Wire Storage Controller"},

  {0x1425,0x5698,"T580-5098 Unified Wire Storage Controller"},

  {0x1425,0x5699,"T580-5099 Unified Wire Storage Controller"},

  {0x1425,0x569a,"T520-509A Unified Wire Storage Controller"},

  {0x1425,0x569b,"T540-509B Unified Wire Storage Controller"},

  {0x1425,0x569c,"T520-509C Unified Wire Storage Controller"},

  {0x1425,0x569d,"T540-509D Unified Wire Storage Controller"},

  {0x1425,0x569e,"T520-509E Unified Wire Storage Controller"},

  {0x1425,0x569f,"T540-509F Unified Wire Storage Controller"},

  {0x1425,0x56a0,"T540-50A0 Unified Wire Storage Controller"},

  {0x1425,0x56a1,"T540-50A1 Unified Wire Storage Controller"},

  {0x1425,0x56a2,"T580-50A2 Unified Wire Storage Controller"},

  {0x1425,0x5701,"T520-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5702,"T522-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5703,"T540-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5704,"T520-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x5705,"T540-BCH Unified Wire Ethernet Controller"},

  {0x1425,0x5706,"T540-CH Unified Wire Ethernet Controller"},

  {0x1425,0x5707,"T520-SO Unified Wire Ethernet Controller"},

  {0x1425,0x5708,"T520-CX Unified Wire Ethernet Controller"},

  {0x1425,0x5709,"T520-BT Unified Wire Ethernet Controller"},

  {0x1425,0x570a,"T504-BT Unified Wire Ethernet Controller"},

  {0x1425,0x570b,"B520-SR Unified Wire Ethernet Controller"},

  {0x1425,0x570c,"B504-BT Unified Wire Ethernet Controller"},

  {0x1425,0x570d,"T580-CR Unified Wire Ethernet Controller"},

  {0x1425,0x570e,"T540-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x570f,"T540 [Amsterdam] Unified Wire Ethernet Controller"},

  {0x1425,0x5710,"T580-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5711,"T520-LL-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5712,"T560-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5713,"T580-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5714,"T580-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x5715,"T502-BT Unified Wire Ethernet Controller"},

  {0x1425,0x5780,"T540-5080 Unified Wire Ethernet Controller"},

  {0x1425,0x5781,"T540-5081 Unified Wire Ethernet Controller"},

  {0x1425,0x5782,"T504-5082 Unified Wire Ethernet Controller"},

  {0x1425,0x5783,"T540-5083 Unified Wire Ethernet Controller"},

  {0x1425,0x5784,"T580-5084 Unified Wire Ethernet Controller"},

  {0x1425,0x5785,"T580-5085 Unified Wire Ethernet Controller"},

  {0x1425,0x5786,"T580-5086 Unified Wire Ethernet Controller"},

  {0x1425,0x5787,"T580-5087 Unified Wire Ethernet Controller"},

  {0x1425,0x5788,"T570-5088 Unified Wire Ethernet Controller"},

  {0x1425,0x5789,"T520-5089 Unified Wire Ethernet Controller"},

  {0x1425,0x5790,"T540-5090 Unified Wire Ethernet Controller"},

  {0x1425,0x5791,"T522-5091 Unified Wire Ethernet Controller"},

  {0x1425,0x5792,"T520-5092 Unified Wire Ethernet Controller"},

  {0x1425,0x5793,"T580-5093 Unified Wire Ethernet Controller"},

  {0x1425,0x5794,"T540-5094 Unified Wire Ethernet Controller"},

  {0x1425,0x5795,"T540-5095 Unified Wire Ethernet Controller"},

  {0x1425,0x5796,"T580-5096 Unified Wire Ethernet Controller"},

  {0x1425,0x5797,"T520-5097 Unified Wire Ethernet Controller"},

  {0x1425,0x5801,"T520-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5802,"T522-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5803,"T540-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5804,"T520-BCH Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5805,"T540-BCH Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5806,"T540-CH Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5807,"T520-SO Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5808,"T520-CX Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5809,"T520-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x580a,"T504-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x580b,"B520-SR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x580c,"B504-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x580d,"T580-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x580e,"T540-LP-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x580f,"T540 [Amsterdam] Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5810,"T580-LP-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5811,"T520-LL-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5812,"T560-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5813,"T580-CHR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5814,"T580-SO-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5815,"T502-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5816,"T580-OCP-SO Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5817,"T520-OCP-SO Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5818,"T540-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5880,"T540-5080 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5881,"T540-5081 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5882,"T504-5082 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5883,"T540-5083 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5884,"T540-5084 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5885,"T580-5085 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5886,"T580-5086 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5887,"T580-5087 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5888,"T570-5088 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5889,"T520-5089 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5890,"T540-5090 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5891,"T522-5091 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5892,"T520-5092 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5893,"T580-5093 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5894,"T540-5094 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5895,"T540-5095 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5896,"T580-5096 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5897,"T520-5097 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5898,"T580-5098 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x5899,"T580-5099 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x589a,"T520-509A Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x589b,"T540-509B Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x589c,"T520-509C Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x589d,"T540-509D Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x589e,"T520-509E Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x589f,"T540-509F Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x58a0,"T540-50A0 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x58a1,"T540-50A1 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x58a2,"T580-50A2 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6001,"T6225-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6002,"T6225-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6003,"T6425-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6004,"T6425-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6005,"T6225-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x6006,"T62100-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x6007,"T62100-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6008,"T62100-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6009,"T6210-BT Unified Wire Ethernet Controller"},

  {0x1425,0x600d,"T62100-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6011,"T6225-LL-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6014,"T61100-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x6015,"T6201-BT Unified Wire Ethernet Controller"},

  {0x1425,0x6080,"T6225-6080 Unified Wire Ethernet Controller"},

  {0x1425,0x6081,"T62100-6081 Unified Wire Ethernet Controller"},

  {0x1425,0x6082,"T6225-6082 Unified Wire Ethernet Controller"},

  {0x1425,0x6083,"T62100-6083 Unified Wire Ethernet Controller"},

  {0x1425,0x6084,"T64100-6084 Unified Wire Ethernet Controller"},

  {0x1425,0x6401,"T6225-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6402,"T6225-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6403,"T6425-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6404,"T6425-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6405,"T6225-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x6406,"T62100-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x6407,"T62100-LP-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6408,"T62100-SO-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6409,"T6210-BT Unified Wire Ethernet Controller"},

  {0x1425,0x640d,"T62100-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6411,"T6225-LL-CR Unified Wire Ethernet Controller"},

  {0x1425,0x6414,"T61100-OCP-SO Unified Wire Ethernet Controller"},

  {0x1425,0x6415,"T6201-BT Unified Wire Ethernet Controller"},

  {0x1425,0x6480,"T6225-6080 Unified Wire Ethernet Controller"},

  {0x1425,0x6481,"T62100-6081 Unified Wire Ethernet Controller"},

  {0x1425,0x6482,"T6225-6082 Unified Wire Ethernet Controller"},

  {0x1425,0x6483,"T62100-6083 Unified Wire Ethernet Controller"},

  {0x1425,0x6484,"T64100-6084 Unified Wire Ethernet Controller"},

  {0x1425,0x6501,"T6225-CR Unified Wire Storage Controller"},

  {0x1425,0x6502,"T6225-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x6503,"T6425-CR Unified Wire Storage Controller"},

  {0x1425,0x6504,"T6425-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x6505,"T6225-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x6506,"T62100-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x6507,"T62100-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x6508,"T62100-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x6509,"T6210-BT Unified Wire Storage Controller"},

  {0x1425,0x650d,"T62100-CR Unified Wire Storage Controller"},

  {0x1425,0x6511,"T6225-LL-CR Unified Wire Storage Controller"},

  {0x1425,0x6514,"T61100-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x6515,"T6201-BT Unified Wire Storage Controller"},

  {0x1425,0x6580,"T6225-6080 Unified Wire Storage Controller"},

  {0x1425,0x6581,"T62100-6081 Unified Wire Storage Controller"},

  {0x1425,0x6582,"T6225-6082 Unified Wire Storage Controller"},

  {0x1425,0x6583,"T62100-6083 Unified Wire Storage Controller"},

  {0x1425,0x6584,"T64100-6084 Unified Wire Storage Controller"},

  {0x1425,0x6601,"T6225-CR Unified Wire Storage Controller"},

  {0x1425,0x6602,"T6225-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x6603,"T6425-CR Unified Wire Storage Controller"},

  {0x1425,0x6604,"T6425-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x6605,"T6225-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x6606,"T62100-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x6607,"T62100-LP-CR Unified Wire Storage Controller"},

  {0x1425,0x6608,"T62100-SO-CR Unified Wire Storage Controller"},

  {0x1425,0x6609,"T6210-BT Unified Wire Storage Controller"},

  {0x1425,0x660d,"T62100-CR Unified Wire Storage Controller"},

  {0x1425,0x6611,"T6225-LL-CR Unified Wire Storage Controller"},

  {0x1425,0x6614,"T61100-OCP-SO Unified Wire Storage Controller"},

  {0x1425,0x6615,"T6201-BT Unified Wire Storage Controller"},

  {0x1425,0x6680,"T6225-6080 Unified Wire Storage Controller"},

  {0x1425,0x6681,"T62100-6081 Unified Wire Storage Controller"},

  {0x1425,0x6682,"T6225-6082 Unified Wire Storage Controller"},

  {0x1425,0x6683,"T62100-6083 Unified Wire Storage Controller"},

  {0x1425,0x6684,"T64100-6084 Unified Wire Storage Controller"},

  {0x1425,0x6801,"T6225-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6802,"T6225-SO-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6803,"T6425-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6804,"T6425-SO-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6805,"T6225-OCP-SO Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6806,"T62100-OCP-SO Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6807,"T62100-LP-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6808,"T62100-SO-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6809,"T6210-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x680d,"T62100-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6811,"T6225-LL-CR Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6814,"T61100-OCP-SO Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6815,"T6201-BT Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6880,"T6225-6080 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6881,"T62100-6081 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6882,"T6225-6082 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6883,"T62100-6083 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0x6884,"T64100-6084 Unified Wire Ethernet Controller [VF]"},

  {0x1425,0xa000,"PE10K Unified Wire Ethernet Controller"},

  {0x142e,0x4020,"VM2-2 [Video Maker 2] MPEG1/2 Encoder"},

  {0x142e,0x4337,"VM2-2-C7 [Video Maker 2 rev. C7] MPEG1/2 Encoder"},

  {0x1432,0x9130,"RTL81xx Fast Ethernet"},

  {0x1435,0x4520,"PCI4520"},

  {0x1435,0x6020,"SPM6020"},

  {0x1435,0x6030,"SPM6030"},

  {0x1435,0x6420,"SPM186420"},

  {0x1435,0x6430,"SPM176430"},

  {0x1435,0x6431,"SPM176431"},

  {0x1435,0x7520,"DM7520"},

  {0x1435,0x7540,"SDM7540"},

  {0x1435,0x7820,"DM7820"},

  {0x144a,0x6208,"PCI-6208V"},

  {0x144a,0x7250,"PCI-7250"},

  {0x144a,0x7296,"PCI-7296"},

  {0x144a,0x7432,"PCI-7432"},

  {0x144a,0x7433,"PCI-7433"},

  {0x144a,0x7434,"PCI-7434"},

  {0x144a,0x7841,"PCI-7841"},

  {0x144a,0x8133,"PCI-8133"},

  {0x144a,0x8164,"PCI-8164"},

  {0x144a,0x8554,"PCI-8554"},

  {0x144a,0x9111,"PCI-9111"},

  {0x144a,0x9113,"PCI-9113"},

  {0x144a,0x9114,"PCI-9114"},

  {0x144a,0xa001,"ADi-BSEC"},

  {0x144d,0x1600,"Apple PCIe SSD"},

  {0x144d,0xa800,"XP941 PCIe SSD"},

  {0x144d,0xa802,"NVMe SSD Controller SM951/PM951"},

  {0x144d,0xa804,"NVMe SSD Controller SM961/PM961"},

  {0x144d,0xa820,"NVMe SSD Controller 171X"},

  {0x144d,0xa821,"NVMe SSD Controller 172X"},

  {0x144d,0xa822,"NVMe SSD Controller 172Xa"},

  {0x145f,0x0001,"NextMove PCI"},

  {0x1461,0xa3ce,"M179"},

  {0x1461,0xa3cf,"M179"},

  {0x1461,0xa836,"M115 DVB-T, PAL/SECAM/NTSC Tuner"},

  {0x1461,0xe836,"M115S Hybrid Analog/DVB PAL/SECAM/NTSC Tuner"},

  {0x1461,0xf436,"AVerTV Hybrid+FM"},

  {0x146a,0x3010,"3010 RF Synthesizer"},

  {0x146a,0x3a11,"3011A PXI RF Synthesizer"},

  {0x146c,0x1430,"FE-1430TX Fast Ethernet PCI Adapter"},

  {0x147b,0x1084,"IP35 [Dark Raider]"},

  {0x1482,0x0001,"PCI-16 Host Interface for ITC-16"},

  {0x148d,0x1003,"HCF 56k Data/Fax Modem"},

  {0x1497,0x1497,"SMA Technologie AG"},

  {0x1498,0x0330,"TPMC816 2 Channel CAN bus controller."},

  {0x1498,0x035d,"TPMC861 4-Channel Isolated Serial Interface RS422/RS485"},

  {0x1498,0x0385,"TPMC901 Extended CAN bus with 2/4/6 CAN controller"},

  {0x1498,0x21cc,"TCP460 CompactPCI 16 Channel Serial Interface RS232/RS422"},

  {0x1498,0x21cd,"TCP461 CompactPCI 8 Channel Serial Interface RS232/RS422"},

  {0x1498,0x3064,"TPCI100 (2 Slot IndustryPack PCI Carrier)"},

  {0x1498,0x30c8,"TPCI200 4 Slot IndustryPack PCI Carrier"},

  {0x1498,0x70c8,"TPCE200 4 Slot IndustryPack PCIe Carrier"},

  {0x1498,0x9177,"TXMC375 8 channel RS232/RS422/RS485 programmable serial interface"},

  {0x149d,0x0001,"Video Toaster for PC"},

  {0x14a4,0x22f1,"M8Pe Series NVMe SSD"},

  {0x14a4,0x4318,"Broadcom BCM4318 [AirForce One 54g] 802.11g WLAN Controller"},

  {0x14af,0x7102,"3D Prophet II MX"},

  {0x14b5,0x0200,"Scope"},

  {0x14b5,0x0300,"Pulsar"},

  {0x14b5,0x0400,"PulsarSRB"},

  {0x14b5,0x0600,"Pulsar2"},

  {0x14b5,0x0800,"DSP-Board"},

  {0x14b5,0x0900,"DSP-Board"},

  {0x14b5,0x0a00,"DSP-Board"},

  {0x14b5,0x0b00,"DSP-Board"},

  {0x14b7,0x0001,"Symphony 4110"},

  {0x14b9,0x0001,"PC4800"},

  {0x14b9,0x0340,"PC4800"},

  {0x14b9,0x0350,"350 series 802.11b Wireless LAN Adapter"},

  {0x14b9,0x4500,"PC4500"},

  {0x14b9,0x4800,"Cisco Aironet 340 802.11b Wireless LAN Adapter/Aironet PC4800"},

  {0x14b9,0xa504,"Cisco Aironet Wireless 802.11b"},

  {0x14b9,0xa505,"Cisco Aironet CB20a 802.11a Wireless LAN Adapter"},

  {0x14b9,0xa506,"Cisco Aironet Mini PCI b/g"},

  {0x14ba,0x0600,"ARC-PCI/22"},

  {0x14bc,0xd002,"Pulsar [PCI ADSL Card]"},

  {0x14bc,0xd00f,"Pulsar [PCI ADSL Card]"},

  {0x14c1,0x0008,"Myri-10G Dual-Protocol NIC"},

  {0x14c1,0x8043,"Myrinet 2000 Scalable Cluster Interconnect"},

  {0x14c3,0x7630,"MT7630e 802.11bgn Wireless Network Adapter"},

  {0x14c3,0x7662,"MT7662E 802.11ac PCI Express Wireless Network Adapter"},

  {0x14cd,0x0001,"USI-1514-1GbaseT [OCP1]"},

  {0x14cd,0x0002,"USI-4227-SFP [OCP2]"},

  {0x14cd,0x0003,"USI-X557-10GbaseT [OCP3]"},

  {0x14d2,0x8001,"VScom 010L 1 port parallel adaptor"},

  {0x14d2,0x8002,"VScom 020L 2 port parallel adaptor"},

  {0x14d2,0x8010,"VScom 100L 1 port serial adaptor"},

  {0x14d2,0x8011,"VScom 110L 1 port serial and 1 port parallel adaptor"},

  {0x14d2,0x8020,"VScom 200L 1 or 2 port serial adaptor"},

  {0x14d2,0x8021,"VScom 210L 2 port serial and 1 port parallel adaptor"},

  {0x14d2,0x8028,"VScom 200I/200I-SI 2-port serial adapter"},

  {0x14d2,0x8040,"VScom 400L 4 port serial adaptor"},

  {0x14d2,0x8043,"VScom 430L 4-port serial and 3-port parallel adapter"},

  {0x14d2,0x8048,"VScom 400I 4-port serial adapter"},

  {0x14d2,0x8080,"VScom 800L 8 port serial adaptor"},

  {0x14d2,0x8088,"VScom 800I 8-port serial adapter"},

  {0x14d2,0xa000,"VScom 010H 1 port parallel adaptor"},

  {0x14d2,0xa001,"VScom 100H 1 port serial adaptor"},

  {0x14d2,0xa003,"VScom 400H 4 port serial adaptor"},

  {0x14d2,0xa004,"VScom 400HF1 4 port serial adaptor"},

  {0x14d2,0xa005,"VScom 200H 2 port serial adaptor"},

  {0x14d2,0xa007,"VScom PCI800EH (PCIe) 8-port serial adapter Port 1-4"},

  {0x14d2,0xa008,"VScom PCI800EH (PCIe) 8-port serial adapter Port 5-8"},

  {0x14d2,0xa009,"VScom PCI400EH (PCIe) 4-port serial adapter"},

  {0x14d2,0xe001,"VScom 010HV2 1 port parallel adaptor"},

  {0x14d2,0xe010,"VScom 100HV2 1 port serial adaptor"},

  {0x14d2,0xe020,"VScom 200HV2 2 port serial adaptor"},

  {0x14d6,0x6101,"ACS-61xxx, PCIe to SAS/SATA RAID HBA"},

  {0x14d6,0x6201,"ACS-62xxx, External PCIe to SAS/SATA RAID controller"},

  {0x14d9,0x0010,"AP1011/SP1011 HyperTransport-PCI Bridge [Sturgeon]"},

  {0x14d9,0x9000,"AS90L10204/10208 HyperTransport to PCI-X Bridge"},

  {0x14db,0x2120,"TK9902"},

  {0x14db,0x2182,"AFAVLAB Technology Inc. 8-port serial card"},

  {0x14dc,0x0001,"PCI242"},

  {0x14dc,0x0002,"PCI244"},

  {0x14dc,0x0003,"PCI247"},

  {0x14dc,0x0004,"PCI248"},

  {0x14dc,0x0005,"PCI249"},

  {0x14dc,0x0006,"PCI260"},

  {0x14dc,0x0007,"PCI224"},

  {0x14dc,0x0008,"PCI234"},

  {0x14dc,0x0009,"PCI236"},

  {0x14dc,0x000a,"PCI272"},

  {0x14dc,0x000b,"PCI215"},

  {0x14e4,0x0576,"BCM43224 802.11a/b/g/n"},

  {0x14e4,0x0800,"Sentry5 Chipcommon I/O Controller"},

  {0x14e4,0x0804,"Sentry5 PCI Bridge"},

  {0x14e4,0x0805,"Sentry5 MIPS32 CPU"},

  {0x14e4,0x0806,"Sentry5 Ethernet Controller"},

  {0x14e4,0x080b,"Sentry5 Crypto Accelerator"},

  {0x14e4,0x080f,"Sentry5 DDR/SDR RAM Controller"},

  {0x14e4,0x0811,"Sentry5 External Interface Core"},

  {0x14e4,0x0816,"BCM3302 Sentry5 MIPS32 CPU"},

  {0x14e4,0x1570,"720p FaceTime HD Camera"},

  {0x14e4,0x1600,"NetXtreme BCM5752 Gigabit Ethernet PCI Express"},

  {0x14e4,0x1601,"NetXtreme BCM5752M Gigabit Ethernet PCI Express"},

  {0x14e4,0x1612,"BCM70012 Video Decoder [Crystal HD]"},

  {0x14e4,0x1615,"BCM70015 Video Decoder [Crystal HD]"},

  {0x14e4,0x1639,"NetXtreme II BCM5709 Gigabit Ethernet"},

  {0x14e4,0x163a,"NetXtreme II BCM5709S Gigabit Ethernet"},

  {0x14e4,0x163b,"NetXtreme II BCM5716 Gigabit Ethernet"},

  {0x14e4,0x163c,"NetXtreme II BCM5716S Gigabit Ethernet"},

  {0x14e4,0x163d,"NetXtreme II BCM57811 10-Gigabit Ethernet"},

  {0x14e4,0x163e,"NetXtreme II BCM57811 10 Gigabit Ethernet Multi Function"},

  {0x14e4,0x163f,"NetXtreme II BCM57811 10-Gigabit Ethernet Virtual Function"},

  {0x14e4,0x1641,"NetXtreme BCM57787 Gigabit Ethernet PCIe"},

  {0x14e4,0x1642,"NetXtreme BCM57764 Gigabit Ethernet PCIe"},

  {0x14e4,0x1643,"NetXtreme BCM5725 Gigabit Ethernet PCIe"},

  {0x14e4,0x1644,"NetXtreme BCM5700 Gigabit Ethernet"},

  {0x14e4,0x1645,"NetXtreme BCM5701 Gigabit Ethernet"},

  {0x14e4,0x1646,"NetXtreme BCM5702 Gigabit Ethernet"},

  {0x14e4,0x1647,"NetXtreme BCM5703 Gigabit Ethernet"},

  {0x14e4,0x1648,"NetXtreme BCM5704 Gigabit Ethernet"},

  {0x14e4,0x1649,"NetXtreme BCM5704S_2 Gigabit Ethernet"},

  {0x14e4,0x164a,"NetXtreme II BCM5706 Gigabit Ethernet"},

  {0x14e4,0x164c,"NetXtreme II BCM5708 Gigabit Ethernet"},

  {0x14e4,0x164d,"NetXtreme BCM5702FE Gigabit Ethernet"},

  {0x14e4,0x164e,"NetXtreme II BCM57710 10-Gigabit PCIe [Everest]"},

  {0x14e4,0x164f,"NetXtreme II BCM57711 10-Gigabit PCIe"},

  {0x14e4,0x1650,"NetXtreme II BCM57711E 10-Gigabit PCIe"},

  {0x14e4,0x1653,"NetXtreme BCM5705 Gigabit Ethernet"},

  {0x14e4,0x1654,"NetXtreme BCM5705_2 Gigabit Ethernet"},

  {0x14e4,0x1655,"NetXtreme BCM5717 Gigabit Ethernet PCIe"},

  {0x14e4,0x1656,"NetXtreme BCM5718 Gigabit Ethernet PCIe"},

  {0x14e4,0x1657,"NetXtreme BCM5719 Gigabit Ethernet PCIe"},

  {0x14e4,0x1659,"NetXtreme BCM5721 Gigabit Ethernet PCI Express"},

  {0x14e4,0x165a,"NetXtreme BCM5722 Gigabit Ethernet PCI Express"},

  {0x14e4,0x165b,"NetXtreme BCM5723 Gigabit Ethernet PCIe"},

  {0x14e4,0x165c,"NetXtreme BCM5724 Gigabit Ethernet PCIe"},

  {0x14e4,0x165d,"NetXtreme BCM5705M Gigabit Ethernet"},

  {0x14e4,0x165e,"NetXtreme BCM5705M_2 Gigabit Ethernet"},

  {0x14e4,0x165f,"NetXtreme BCM5720 Gigabit Ethernet PCIe"},

  {0x14e4,0x1662,"NetXtreme II BCM57712 10 Gigabit Ethernet"},

  {0x14e4,0x1663,"NetXtreme II BCM57712 10 Gigabit Ethernet Multi Function"},

  {0x14e4,0x1665,"NetXtreme BCM5717 Gigabit Ethernet PCIe"},

  {0x14e4,0x1668,"NetXtreme BCM5714 Gigabit Ethernet"},

  {0x14e4,0x1669,"NetXtreme 5714S Gigabit Ethernet"},

  {0x14e4,0x166a,"NetXtreme BCM5780 Gigabit Ethernet"},

  {0x14e4,0x166b,"NetXtreme BCM5780S Gigabit Ethernet"},

  {0x14e4,0x166e,"570x 10/100 Integrated Controller"},

  {0x14e4,0x166f,"NetXtreme II BCM57712 10 Gigabit Ethernet Virtual Function"},

  {0x14e4,0x1672,"NetXtreme BCM5754M Gigabit Ethernet PCI Express"},

  {0x14e4,0x1673,"NetXtreme BCM5755M Gigabit Ethernet PCI Express"},

  {0x14e4,0x1674,"NetXtreme BCM5756ME Gigabit Ethernet PCI Express"},

  {0x14e4,0x1677,"NetXtreme BCM5751 Gigabit Ethernet PCI Express"},

  {0x14e4,0x1678,"NetXtreme BCM5715 Gigabit Ethernet"},

  {0x14e4,0x1679,"NetXtreme BCM5715S Gigabit Ethernet"},

  {0x14e4,0x167a,"NetXtreme BCM5754 Gigabit Ethernet PCI Express"},

  {0x14e4,0x167b,"NetXtreme BCM5755 Gigabit Ethernet PCI Express"},

  {0x14e4,0x167d,"NetXtreme BCM5751M Gigabit Ethernet PCI Express"},

  {0x14e4,0x167e,"NetXtreme BCM5751F Fast Ethernet PCI Express"},

  {0x14e4,0x167f,"NetLink BCM5787F Fast Ethernet PCI Express"},

  {0x14e4,0x1680,"NetXtreme BCM5761e Gigabit Ethernet PCIe"},

  {0x14e4,0x1681,"NetXtreme BCM5761 Gigabit Ethernet PCIe"},

  {0x14e4,0x1682,"NetXtreme BCM57762 Gigabit Ethernet PCIe"},

  {0x14e4,0x1683,"NetXtreme BCM57767 Gigabit Ethernet PCIe"},

  {0x14e4,0x1684,"NetXtreme BCM5764M Gigabit Ethernet PCIe"},

  {0x14e4,0x1685,"NetXtreme II BCM57500S Gigabit Ethernet"},

  {0x14e4,0x1686,"NetXtreme BCM57766 Gigabit Ethernet PCIe"},

  {0x14e4,0x1687,"NetXtreme BCM5762 Gigabit Ethernet PCIe"},

  {0x14e4,0x1688,"NetXtreme BCM5761 10/100/1000BASE-T Ethernet"},

  {0x14e4,0x168a,"NetXtreme II BCM57800 1/10 Gigabit Ethernet"},

  {0x14e4,0x168d,"NetXtreme II BCM57840 10/20 Gigabit Ethernet"},

  {0x14e4,0x168e,"NetXtreme II BCM57810 10 Gigabit Ethernet"},

  {0x14e4,0x1690,"NetXtreme BCM57760 Gigabit Ethernet PCIe"},

  {0x14e4,0x1691,"NetLink BCM57788 Gigabit Ethernet PCIe"},

  {0x14e4,0x1692,"NetLink BCM57780 Gigabit Ethernet PCIe"},

  {0x14e4,0x1693,"NetLink BCM5787M Gigabit Ethernet PCI Express"},

  {0x14e4,0x1694,"NetLink BCM57790 Gigabit Ethernet PCIe"},

  {0x14e4,0x1696,"NetXtreme BCM5782 Gigabit Ethernet"},

  {0x14e4,0x1698,"NetLink BCM5784M Gigabit Ethernet PCIe"},

  {0x14e4,0x1699,"NetLink BCM5785 Gigabit Ethernet"},

  {0x14e4,0x169a,"NetLink BCM5786 Gigabit Ethernet PCI Express"},

  {0x14e4,0x169b,"NetLink BCM5787 Gigabit Ethernet PCI Express"},

  {0x14e4,0x169c,"NetXtreme BCM5788 Gigabit Ethernet"},

  {0x14e4,0x169d,"NetLink BCM5789 Gigabit Ethernet PCI Express"},

  {0x14e4,0x16a0,"NetLink BCM5785 Fast Ethernet"},

  {0x14e4,0x16a1,"BCM57840 NetXtreme II 10 Gigabit Ethernet"},

  {0x14e4,0x16a2,"BCM57840 NetXtreme II 10/20-Gigabit Ethernet"},

  {0x14e4,0x16a3,"NetXtreme BCM57786 Gigabit Ethernet PCIe"},

  {0x14e4,0x16a4,"BCM57840 NetXtreme II Ethernet Multi Function"},

  {0x14e4,0x16a5,"NetXtreme II BCM57800 1/10 Gigabit Ethernet Multi Function"},

  {0x14e4,0x16a6,"NetXtreme BCM5702X Gigabit Ethernet"},

  {0x14e4,0x16a7,"NetXtreme BCM5703X Gigabit Ethernet"},

  {0x14e4,0x16a8,"NetXtreme BCM5704S Gigabit Ethernet"},

  {0x14e4,0x16a9,"NetXtreme II BCM57800 1/10 Gigabit Ethernet Virtual Function"},

  {0x14e4,0x16aa,"NetXtreme II BCM5706S Gigabit Ethernet"},

  {0x14e4,0x16ab,"NetXtreme II BCM57840 10/20 Gigabit Ethernet Multi Function"},

  {0x14e4,0x16ac,"NetXtreme II BCM5708S Gigabit Ethernet"},

  {0x14e4,0x16ad,"NetXtreme II BCM57840 10/20 Gigabit Ethernet Virtual Function"},

  {0x14e4,0x16ae,"NetXtreme II BCM57810 10 Gigabit Ethernet Multi Function"},

  {0x14e4,0x16af,"NetXtreme II BCM57810 10 Gigabit Ethernet Virtual Function"},

  {0x14e4,0x16b0,"NetXtreme BCM57761 Gigabit Ethernet PCIe"},

  {0x14e4,0x16b1,"NetLink BCM57781 Gigabit Ethernet PCIe"},

  {0x14e4,0x16b2,"NetLink BCM57791 Gigabit Ethernet PCIe"},

  {0x14e4,0x16b3,"NetXtreme BCM57786 Gigabit Ethernet PCIe"},

  {0x14e4,0x16b4,"NetXtreme BCM57765 Gigabit Ethernet PCIe"},

  {0x14e4,0x16b5,"NetLink BCM57785 Gigabit Ethernet PCIe"},

  {0x14e4,0x16b6,"NetLink BCM57795 Gigabit Ethernet PCIe"},

  {0x14e4,0x16b7,"NetXtreme BCM57782 Gigabit Ethernet PCIe"},

  {0x14e4,0x16bc,"BCM57765/57785 SDXC/MMC Card Reader"},

  {0x14e4,0x16be,"BCM57765/57785 MS Card Reader"},

  {0x14e4,0x16bf,"BCM57765/57785 xD-Picture Card Reader"},

  {0x14e4,0x16c1,"NetXtreme-E RDMA Virtual Function"},

  {0x14e4,0x16c6,"NetXtreme BCM5702A3 Gigabit Ethernet"},

  {0x14e4,0x16c7,"NetXtreme BCM5703 Gigabit Ethernet"},

  {0x14e4,0x16c8,"BCM57301 NetXtreme-C 10Gb Ethernet Controller"},

  {0x14e4,0x16c9,"BCM57302 NetXtreme-C 10Gb/25Gb Ethernet Controller"},

  {0x14e4,0x16ca,"BCM57304 NetXtreme-C 10Gb/25Gb/40Gb/50Gb Ethernet Controller"},

  {0x14e4,0x16cb,"NetXtreme-C Ethernet Virtual Function"},

  {0x14e4,0x16cc,"BCM57417 NetXtreme-E Ethernet Partition"},

  {0x14e4,0x16ce,"BCM57311 NetXtreme-C 10Gb RDMA Ethernet Controller"},

  {0x14e4,0x16cf,"BCM57312 NetXtreme-C 10Gb/25Gb RDMA Ethernet Controller"},

  {0x14e4,0x16d0,"BCM57402 NetXtreme-E 10Gb Ethernet Controller"},

  {0x14e4,0x16d1,"BCM57404 NetXtreme-E 10Gb/25Gb Ethernet Controller"},

  {0x14e4,0x16d2,"BCM57406 NetXtreme-E 10GBASE-T Ethernet Controller"},

  {0x14e4,0x16d3,"NetXtreme-E Ethernet Virtual Function"},

  {0x14e4,0x16d4,"BCM57402 NetXtreme-E Ethernet Partition"},

  {0x14e4,0x16d5,"BCM57407 NetXtreme-E 10GBase-T Ethernet Controller"},

  {0x14e4,0x16d6,"BCM57412 NetXtreme-E 10Gb RDMA Ethernet Controller"},

  {0x14e4,0x16d7,"BCM57414 NetXtreme-E 10Gb/25Gb RDMA Ethernet Controller"},

  {0x14e4,0x16d8,"BCM57416 NetXtreme-E 10GBase-T RDMA Ethernet Controller"},

  {0x14e4,0x16d9,"BCM57417 NetXtreme-E 10GBASE-T RDMA Ethernet Controller"},

  {0x14e4,0x16dc,"NetXtreme-E Ethernet Virtual Function"},

  {0x14e4,0x16dd,"NetLink BCM5781 Gigabit Ethernet PCI Express"},

  {0x14e4,0x16de,"BCM57412 NetXtreme-E Ethernet Partition"},

  {0x14e4,0x16df,"BCM57314 NetXtreme-C 10Gb/25Gb/40Gb/50Gb RDMA Ethernet Controller"},

  {0x14e4,0x16e1,"NetXtreme-C Ethernet Virtual Function"},

  {0x14e4,0x16e2,"BCM57417 NetXtreme-E 10Gb/25Gb RDMA Ethernet Controller"},

  {0x14e4,0x16e3,"BCM57416 NetXtreme-E 10Gb RDMA Ethernet Controller"},

  {0x14e4,0x16e5,"NetXtreme-C RDMA Virtual Function"},

  {0x14e4,0x16e7,"BCM57404 NetXtreme-E Ethernet Partition"},

  {0x14e4,0x16e8,"BCM57406 NetXtreme-E Ethernet Partition"},

  {0x14e4,0x16e9,"BCM57407 NetXtreme-E 25Gb Ethernet Controller"},

  {0x14e4,0x16ec,"BCM57414 NetXtreme-E Ethernet Partition"},

  {0x14e4,0x16ed,"BCM57414 NetXtreme-E RDMA Partition"},

  {0x14e4,0x16ee,"BCM57416 NetXtreme-E Ethernet Partition"},

  {0x14e4,0x16ef,"BCM57416 NetXtreme-E RDMA Partition"},

  {0x14e4,0x16f3,"NetXtreme BCM5727 Gigabit Ethernet PCIe"},

  {0x14e4,0x16f7,"NetXtreme BCM5753 Gigabit Ethernet PCI Express"},

  {0x14e4,0x16fd,"NetXtreme BCM5753M Gigabit Ethernet PCI Express"},

  {0x14e4,0x16fe,"NetXtreme BCM5753F Fast Ethernet PCI Express"},

  {0x14e4,0x170c,"BCM4401-B0 100Base-TX"},

  {0x14e4,0x170d,"NetXtreme BCM5901 100Base-TX"},

  {0x14e4,0x170e,"NetXtreme BCM5901 100Base-TX"},

  {0x14e4,0x1712,"NetLink BCM5906 Fast Ethernet PCI Express"},

  {0x14e4,0x1713,"NetLink BCM5906M Fast Ethernet PCI Express"},

  {0x14e4,0x3352,"BCM3352"},

  {0x14e4,0x3360,"BCM3360"},

  {0x14e4,0x4210,"BCM4210 iLine10 HomePNA 2.0"},

  {0x14e4,0x4211,"BCM4211 iLine10 HomePNA 2.0 + V.90 56k modem"},

  {0x14e4,0x4212,"BCM4212 v.90 56k modem"},

  {0x14e4,0x4220,"802-11b/g Wireless PCI controller, packaged as a Linksys WPC54G ver 1.2 PCMCIA card"},

  {0x14e4,0x4222,"NetXtreme BCM5753M Gigabit Ethernet PCI Express"},

  {0x14e4,0x4301,"BCM4301 802.11b Wireless LAN Controller"},

  {0x14e4,0x4305,"BCM4307 V.90 56k Modem"},

  {0x14e4,0x4306,"BCM4306 802.11bg Wireless LAN controller"},

  {0x14e4,0x4307,"BCM4306 802.11bg Wireless LAN Controller"},

  {0x14e4,0x4310,"BCM4310 Chipcommon I/OController"},

  {0x14e4,0x4311,"BCM4311 802.11b/g WLAN"},

  {0x14e4,0x4312,"BCM4311 802.11a/b/g"},

  {0x14e4,0x4313,"BCM4311 802.11a"},

  {0x14e4,0x4315,"BCM4312 802.11b/g LP-PHY"},

  {0x14e4,0x4318,"BCM4318 [AirForce One 54g] 802.11g Wireless LAN Controller"},

  {0x14e4,0x4319,"BCM4318 [AirForce 54g] 802.11a/b/g PCI Express Transceiver"},

  {0x14e4,0x4320,"BCM4306 802.11b/g Wireless LAN Controller"},

  {0x14e4,0x4321,"BCM4321 802.11a Wireless Network Controller"},

  {0x14e4,0x4322,"BCM4322 802.11bgn Wireless Network Controller"},

  {0x14e4,0x4324,"BCM4309 802.11abg Wireless Network Controller"},

  {0x14e4,0x4325,"BCM4306 802.11bg Wireless Network Controller"},

  {0x14e4,0x4326,"BCM4307 Chipcommon I/O Controller?"},

  {0x14e4,0x4328,"BCM4321 802.11a/b/g/n"},

  {0x14e4,0x4329,"BCM4321 802.11b/g/n"},

  {0x14e4,0x432a,"BCM4321 802.11an Wireless Network Controller"},

  {0x14e4,0x432b,"BCM4322 802.11a/b/g/n Wireless LAN Controller"},

  {0x14e4,0x432c,"BCM4322 802.11b/g/n"},

  {0x14e4,0x432d,"BCM4322 802.11an Wireless Network Controller"},

  {0x14e4,0x4331,"BCM4331 802.11a/b/g/n"},

  {0x14e4,0x4333,"Serial (EDGE/GPRS modem part of Option GT Combo Edge)"},

  {0x14e4,0x4344,"EDGE/GPRS data and 802.11b/g combo cardbus [GC89]"},

  {0x14e4,0x4350,"BCM43222 Wireless Network Adapter"},

  {0x14e4,0x4351,"BCM43222 802.11abgn Wireless Network Adapter"},

  {0x14e4,0x4353,"BCM43224 802.11a/b/g/n"},

  {0x14e4,0x4357,"BCM43225 802.11b/g/n"},

  {0x14e4,0x4358,"BCM43227 802.11b/g/n"},

  {0x14e4,0x4359,"BCM43228 802.11a/b/g/n"},

  {0x14e4,0x4360,"BCM4360 802.11ac Wireless Network Adapter"},

  {0x14e4,0x4365,"BCM43142 802.11b/g/n"},

  {0x14e4,0x43a0,"BCM4360 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43a1,"BCM4360 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43a2,"BCM4360 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43a3,"BCM4350 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43a9,"BCM43217 802.11b/g/n"},

  {0x14e4,0x43aa,"BCM43131 802.11b/g/n"},

  {0x14e4,0x43ae,"BCM43162 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43b1,"BCM4352 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43ba,"BCM43602 802.11ac Wireless LAN SoC"},

  {0x14e4,0x43bb,"BCM43602 802.11ac Wireless LAN SoC"},

  {0x14e4,0x43bc,"BCM43602 802.11ac Wireless LAN SoC"},

  {0x14e4,0x43d3,"BCM43567 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43d9,"BCM43570 802.11ac Wireless Network Adapter"},

  {0x14e4,0x43df,"BCM4354 802.11ac Wireless LAN SoC"},

  {0x14e4,0x43e9,"BCM4358 802.11ac Wireless LAN SoC"},

  {0x14e4,0x43ec,"BCM4356 802.11ac Wireless Network Adapter"},

  {0x14e4,0x4401,"BCM4401 100Base-T"},

  {0x14e4,0x4402,"BCM4402 Integrated 10/100BaseT"},

  {0x14e4,0x4403,"BCM4402 V.90 56k Modem"},

  {0x14e4,0x4410,"BCM4413 iLine32 HomePNA 2.0"},

  {0x14e4,0x4411,"BCM4413 V.90 56k modem"},

  {0x14e4,0x4412,"BCM4412 10/100BaseT"},

  {0x14e4,0x4430,"BCM44xx CardBus iLine32 HomePNA 2.0"},

  {0x14e4,0x4432,"BCM4432 CardBus 10/100BaseT"},

  {0x14e4,0x4610,"BCM4610 Sentry5 PCI to SB Bridge"},

  {0x14e4,0x4611,"BCM4610 Sentry5 iLine32 HomePNA 1.0"},

  {0x14e4,0x4612,"BCM4610 Sentry5 V.90 56k Modem"},

  {0x14e4,0x4613,"BCM4610 Sentry5 Ethernet Controller"},

  {0x14e4,0x4614,"BCM4610 Sentry5 External Interface"},

  {0x14e4,0x4615,"BCM4610 Sentry5 USB Controller"},

  {0x14e4,0x4704,"BCM4704 PCI to SB Bridge"},

  {0x14e4,0x4705,"BCM4704 Sentry5 802.11b Wireless LAN Controller"},

  {0x14e4,0x4706,"BCM4704 Sentry5 Ethernet Controller"},

  {0x14e4,0x4707,"BCM4704 Sentry5 USB Controller"},

  {0x14e4,0x4708,"BCM4704 Crypto Accelerator"},

  {0x14e4,0x4710,"BCM4710 Sentry5 PCI to SB Bridge"},

  {0x14e4,0x4711,"BCM47xx Sentry5 iLine32 HomePNA 2.0"},

  {0x14e4,0x4712,"BCM47xx V.92 56k modem"},

  {0x14e4,0x4713,"Sentry5 Ethernet Controller"},

  {0x14e4,0x4714,"BCM47xx Sentry5 External Interface"},

  {0x14e4,0x4715,"BCM47xx Sentry5 USB / Ethernet Controller"},

  {0x14e4,0x4716,"BCM47xx Sentry5 USB Host Controller"},

  {0x14e4,0x4717,"BCM47xx Sentry5 USB Device Controller"},

  {0x14e4,0x4718,"Sentry5 Crypto Accelerator"},

  {0x14e4,0x4719,"BCM47xx/53xx RoboSwitch Core"},

  {0x14e4,0x4720,"BCM4712 MIPS CPU"},

  {0x14e4,0x4727,"BCM4313 802.11bgn Wireless Network Adapter"},

  {0x14e4,0x5365,"BCM5365P Sentry5 Host Bridge"},

  {0x14e4,0x5600,"BCM5600 StrataSwitch 24+2 Ethernet Switch Controller"},

  {0x14e4,0x5605,"BCM5605 StrataSwitch 24+2 Ethernet Switch Controller"},

  {0x14e4,0x5615,"BCM5615 StrataSwitch 24+2 Ethernet Switch Controller"},

  {0x14e4,0x5625,"BCM5625 StrataSwitch 24+2 Ethernet Switch Controller"},

  {0x14e4,0x5645,"BCM5645 StrataSwitch 24+2 Ethernet Switch Controller"},

  {0x14e4,0x5670,"BCM5670 8-Port 10GE Ethernet Switch Fabric"},

  {0x14e4,0x5680,"BCM5680 G-Switch 8 Port Gigabit Ethernet Switch Controller"},

  {0x14e4,0x5690,"BCM5690 12-port Multi-Layer Gigabit Ethernet Switch"},

  {0x14e4,0x5691,"BCM5691 GE/10GE 8+2 Gigabit Ethernet Switch Controller"},

  {0x14e4,0x5692,"BCM5692 12-port Multi-Layer Gigabit Ethernet Switch"},

  {0x14e4,0x5695,"BCM5695 12-port + HiGig Multi-Layer Gigabit Ethernet Switch"},

  {0x14e4,0x5698,"BCM5698 12-port Multi-Layer Gigabit Ethernet Switch"},

  {0x14e4,0x5820,"BCM5820 Crypto Accelerator"},

  {0x14e4,0x5821,"BCM5821 Crypto Accelerator"},

  {0x14e4,0x5822,"BCM5822 Crypto Accelerator"},

  {0x14e4,0x5823,"BCM5823 Crypto Accelerator"},

  {0x14e4,0x5824,"BCM5824 Crypto Accelerator"},

  {0x14e4,0x5840,"BCM5840 Crypto Accelerator"},

  {0x14e4,0x5841,"BCM5841 Crypto Accelerator"},

  {0x14e4,0x5850,"BCM5850 Crypto Accelerator"},

  {0x14e4,0x8602,"BCM7400/BCM7405 Serial ATA Controller"},

  {0x14e4,0xa8d8,"BCM43224/5 Wireless Network Adapter"},

  {0x14e4,0xaa52,"BCM43602 802.11ac Wireless LAN SoC"},

  {0x14e4,0xb302,"BCM56302 StrataXGS 24x1GE 2x10GE Switch Controller"},

  {0x14e4,0xb334,"BCM56334 StrataXGS 24x1GE 4x10GE Switch Controller"},

  {0x14e4,0xb800,"BCM56800 StrataXGS 10GE Switch Controller"},

  {0x14e4,0xb842,"BCM56842 Trident 10GE Switch Controller"},

  {0x14e4,0xb850,"Broadcom BCM56850 Switch ASIC"},

  {0x14e4,0xb960,"Broadcom BCM56960 Switch ASIC"},

  {0x14ea,0xab06,"FNW-3603-TX CardBus Fast Ethernet"},

  {0x14ea,0xab07,"RTL81xx RealTek Ethernet"},

  {0x14ea,0xab08,"FNW-3602-TX CardBus Fast Ethernet"},

  {0x14f1,0x1002,"HCF 56k Modem"},

  {0x14f1,0x1003,"HCF 56k Modem"},

  {0x14f1,0x1004,"HCF 56k Modem"},

  {0x14f1,0x1005,"HCF 56k Modem"},

  {0x14f1,0x1006,"HCF 56k Modem"},

  {0x14f1,0x1022,"HCF 56k Modem"},

  {0x14f1,0x1023,"HCF 56k Modem"},

  {0x14f1,0x1024,"HCF 56k Modem"},

  {0x14f1,0x1025,"HCF 56k Modem"},

  {0x14f1,0x1026,"HCF 56k Modem"},

  {0x14f1,0x1032,"HCF 56k Modem"},

  {0x14f1,0x1033,"HCF 56k Data/Fax Modem"},

  {0x14f1,0x1034,"HCF 56k Data/Fax/Voice Modem"},

  {0x14f1,0x1035,"HCF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x14f1,0x1036,"HCF 56k Data/Fax/Voice/Spkp Modem"},

  {0x14f1,0x1052,"HCF 56k Data/Fax Modem (Worldwide)"},

  {0x14f1,0x1053,"HCF 56k Data/Fax Modem (Worldwide)"},

  {0x14f1,0x1054,"HCF 56k Data/Fax/Voice Modem (Worldwide)"},

  {0x14f1,0x1055,"HCF 56k Data/Fax/Voice/Spkp (w/Handset) Modem (Worldwide)"},

  {0x14f1,0x1056,"HCF 56k Data/Fax/Voice/Spkp Modem (Worldwide)"},

  {0x14f1,0x1057,"HCF 56k Data/Fax/Voice/Spkp Modem (Worldwide)"},

  {0x14f1,0x1059,"HCF 56k Data/Fax/Voice Modem (Worldwide)"},

  {0x14f1,0x1063,"HCF 56k Data/Fax Modem"},

  {0x14f1,0x1064,"HCF 56k Data/Fax/Voice Modem"},

  {0x14f1,0x1065,"HCF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x14f1,0x1066,"HCF 56k Data/Fax/Voice/Spkp Modem"},

  {0x14f1,0x1085,"HCF V90 56k Data/Fax/Voice/Spkp PCI Modem"},

  {0x14f1,0x10b6,"CX06834-11 HCF V.92 56k Data/Fax/Voice/Spkp Modem"},

  {0x14f1,0x1433,"HCF 56k Data/Fax Modem"},

  {0x14f1,0x1434,"HCF 56k Data/Fax/Voice Modem"},

  {0x14f1,0x1435,"HCF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x14f1,0x1436,"HCF 56k Data/Fax Modem"},

  {0x14f1,0x1453,"HCF 56k Data/Fax Modem"},

  {0x14f1,0x1454,"HCF 56k Data/Fax/Voice Modem"},

  {0x14f1,0x1455,"HCF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x14f1,0x1456,"HCF 56k Data/Fax/Voice/Spkp Modem"},

  {0x14f1,0x1610,"ADSL AccessRunner PCI Arbitration Device"},

  {0x14f1,0x1611,"AccessRunner PCI ADSL Interface Device"},

  {0x14f1,0x1620,"AccessRunner V2 PCI ADSL Arbitration Device"},

  {0x14f1,0x1621,"AccessRunner V2 PCI ADSL Interface Device"},

  {0x14f1,0x1622,"AccessRunner V2 PCI ADSL Yukon WAN Adapter"},

  {0x14f1,0x1803,"HCF 56k Modem"},

  {0x14f1,0x1811,"MiniPCI Network Adapter"},

  {0x14f1,0x1815,"HCF 56k Modem"},

  {0x14f1,0x1830,"CX861xx Integrated Host Bridge"},

  {0x14f1,0x2003,"HSF 56k Data/Fax Modem"},

  {0x14f1,0x2004,"HSF 56k Data/Fax/Voice Modem"},

  {0x14f1,0x2005,"HSF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x14f1,0x2006,"HSF 56k Data/Fax/Voice/Spkp Modem"},

  {0x14f1,0x2013,"HSF 56k Data/Fax Modem"},

  {0x14f1,0x2014,"HSF 56k Data/Fax/Voice Modem"},

  {0x14f1,0x2015,"HSF 56k Data/Fax/Voice/Spkp (w/Handset) Modem"},

  {0x14f1,0x2016,"HSF 56k Data/Fax/Voice/Spkp Modem"},

  {0x14f1,0x2043,"HSF 56k Data/Fax Modem (WorldW SmartDAA)"},

  {0x14f1,0x2044,"HSF 56k Data/Fax/Voice Modem (WorldW SmartDAA)"},

  {0x14f1,0x2045,"HSF 56k Data/Fax/Voice/Spkp (w/Handset) Modem (WorldW SmartDAA)"},

  {0x14f1,0x2046,"HSF 56k Data/Fax/Voice/Spkp Modem (WorldW SmartDAA)"},

  {0x14f1,0x2063,"HSF 56k Data/Fax Modem (SmartDAA)"},

  {0x14f1,0x2064,"HSF 56k Data/Fax/Voice Modem (SmartDAA)"},

  {0x14f1,0x2065,"HSF 56k Data/Fax/Voice/Spkp (w/Handset) Modem (SmartDAA)"},

  {0x14f1,0x2066,"HSF 56k Data/Fax/Voice/Spkp Modem (SmartDAA)"},

  {0x14f1,0x2093,"HSF 56k Modem"},

  {0x14f1,0x2143,"HSF 56k Data/Fax/Cell Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2144,"HSF 56k Data/Fax/Voice/Cell Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2145,"HSF 56k Data/Fax/Voice/Spkp (w/HS)/Cell Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2146,"HSF 56k Data/Fax/Voice/Spkp/Cell Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2163,"HSF 56k Data/Fax/Cell Modem (Mob SmartDAA)"},

  {0x14f1,0x2164,"HSF 56k Data/Fax/Voice/Cell Modem (Mob SmartDAA)"},

  {0x14f1,0x2165,"HSF 56k Data/Fax/Voice/Spkp (w/HS)/Cell Modem (Mob SmartDAA)"},

  {0x14f1,0x2166,"HSF 56k Data/Fax/Voice/Spkp/Cell Modem (Mob SmartDAA)"},

  {0x14f1,0x2343,"HSF 56k Data/Fax CardBus Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2344,"HSF 56k Data/Fax/Voice CardBus Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2345,"HSF 56k Data/Fax/Voice/Spkp (w/HS) CardBus Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2346,"HSF 56k Data/Fax/Voice/Spkp CardBus Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2363,"HSF 56k Data/Fax CardBus Modem (Mob SmartDAA)"},

  {0x14f1,0x2364,"HSF 56k Data/Fax/Voice CardBus Modem (Mob SmartDAA)"},

  {0x14f1,0x2365,"HSF 56k Data/Fax/Voice/Spkp (w/HS) CardBus Modem (Mob SmartDAA)"},

  {0x14f1,0x2366,"HSF 56k Data/Fax/Voice/Spkp CardBus Modem (Mob SmartDAA)"},

  {0x14f1,0x2443,"HSF 56k Data/Fax Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2444,"HSF 56k Data/Fax/Voice Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2445,"HSF 56k Data/Fax/Voice/Spkp (w/HS) Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2446,"HSF 56k Data/Fax/Voice/Spkp Modem (Mob WorldW SmartDAA)"},

  {0x14f1,0x2463,"HSF 56k Data/Fax Modem (Mob SmartDAA)"},

  {0x14f1,0x2464,"HSF 56k Data/Fax/Voice Modem (Mob SmartDAA)"},

  {0x14f1,0x2465,"HSF 56k Data/Fax/Voice/Spkp (w/HS) Modem (Mob SmartDAA)"},

  {0x14f1,0x2466,"HSF 56k Data/Fax/Voice/Spkp Modem (Mob SmartDAA)"},

  {0x14f1,0x2702,"HSFi modem RD01-D270"},

  {0x14f1,0x2f00,"HSF 56k HSFi Modem"},

  {0x14f1,0x2f02,"HSF 56k HSFi Data/Fax"},

  {0x14f1,0x2f11,"HSF 56k HSFi Modem"},

  {0x14f1,0x2f20,"HSF 56k Data/Fax Modem"},

  {0x14f1,0x2f30,"SoftV92 SpeakerPhone SoftRing Modem with SmartSP"},

  {0x14f1,0x2f50,"Conexant SoftK56 Data/Fax Modem"},

  {0x14f1,0x5b7a,"CX23418 Single-Chip MPEG-2 Encoder with Integrated Analog Video/Broadcast Audio Decoder"},

  {0x14f1,0x8200,"CX25850"},

  {0x14f1,0x8234,"RS8234 ATM SAR Controller [ServiceSAR Plus]"},

  {0x14f1,0x8800,"CX23880/1/2/3 PCI Video and Audio Decoder"},

  {0x14f1,0x8801,"CX23880/1/2/3 PCI Video and Audio Decoder [Audio Port]"},

  {0x14f1,0x8802,"CX23880/1/2/3 PCI Video and Audio Decoder [MPEG Port]"},

  {0x14f1,0x8804,"CX23880/1/2/3 PCI Video and Audio Decoder [IR Port]"},

  {0x14f1,0x8811,"CX23880/1/2/3 PCI Video and Audio Decoder [Audio Port]"},

  {0x14f1,0x8852,"CX23885 PCI Video and Audio Decoder"},

  {0x14f1,0x8880,"CX23887/8 PCIe Broadcast Audio and Video Decoder with 3D Comb"},

  {0x14f2,0x0120,"EV1000 bridge"},

  {0x14f2,0x0121,"EV1000 Parallel port"},

  {0x14f2,0x0122,"EV1000 Serial port"},

  {0x14f2,0x0123,"EV1000 Keyboard controller"},

  {0x14f2,0x0124,"EV1000 Mouse controller"},

  {0x14f3,0x2030,"2030 DVB-S Satellite Receiver"},

  {0x14f3,0x2035,"2035 DVB-S Satellite Receiver"},

  {0x14f3,0x2050,"2050 DVB-T Terrestrial (Cable) Receiver"},

  {0x14f3,0x2060,"2060 ATSC Terrestrial (Cable) Receiver"},

  {0x14f8,0x2077,"TP-240 dual span E1 VoIP PCI card"},

  {0x14fc,0x0001,"QsNetII Elan4 Network Adapter"},

  {0x14fc,0x0002,"QsNetIII Elan5 Network Adapter"},

  {0x1500,0x1360,"RTL81xx RealTek Ethernet"},

  {0x1507,0x0001,"MPC105 [Eagle]"},

  {0x1507,0x0002,"MPC106 [Grackle]"},

  {0x1507,0x0003,"MPC8240 [Kahlua]"},

  {0x1507,0x0100,"MC145575 [HFC-PCI]"},

  {0x1507,0x0431,"KTI829c 100VG"},

  {0x1507,0x4801,"Raven"},

  {0x1507,0x4802,"Falcon"},

  {0x1507,0x4803,"Hawk"},

  {0x1507,0x4806,"CPX8216"},

  {0x1516,0x0800,"MTD-8xx 100/10M Ethernet PCI Adapter"},

  {0x1516,0x0803,"SURECOM EP-320X-S 100/10M Ethernet PCI Adapter"},

  {0x1516,0x0891,"MTD-8xx 100/10M Ethernet PCI Adapter"},

  {0x151a,0x1002,"PCI-1002"},

  {0x151a,0x1004,"PCI-1004"},

  {0x151a,0x1008,"PCI-1008"},

  {0x151c,0x0003,"Prodif T 2496"},

  {0x151c,0x4000,"Prodif 88"},

  {0x1522,0x0100,"PCI <-> IOBus Bridge"},

  {0x1522,0x4000,"PCI Express UART"},

  {0x1524,0x0510,"CB710 Memory Card Reader Controller"},

  {0x1524,0x0520,"FLASH memory: ENE Technology Inc:"},

  {0x1524,0x0530,"ENE PCI Memory Stick Card Reader Controller"},

  {0x1524,0x0550,"ENE PCI Secure Digital Card Reader Controller"},

  {0x1524,0x0551,"SD/MMC Card Reader Controller"},

  {0x1524,0x0610,"PCI Smart Card Reader Controller"},

  {0x1524,0x0720,"Memory Stick Card Reader Controller"},

  {0x1524,0x0730,"ENE PCI Memory Stick Card Reader Controller"},

  {0x1524,0x0750,"ENE PCI SmartMedia / xD Card Reader Controller"},

  {0x1524,0x0751,"ENE PCI Secure Digital / MMC Card Reader Controller"},

  {0x1524,0x1211,"CB1211 Cardbus Controller"},

  {0x1524,0x1225,"CB1225 Cardbus Controller"},

  {0x1524,0x1410,"CB1410 Cardbus Controller"},

  {0x1524,0x1411,"CB-710/2/4 Cardbus Controller"},

  {0x1524,0x1412,"CB-712/4 Cardbus Controller"},

  {0x1524,0x1420,"CB1420 Cardbus Controller"},

  {0x1524,0x1421,"CB-720/2/4 Cardbus Controller"},

  {0x1524,0x1422,"CB-722/4 Cardbus Controller"},

  {0x1532,0x0020,"LonWorks PCLTA-20 PCI LonTalk Adapter"},

  {0x1538,0x0303,"ARS106S Ultra ATA 133/100/66 Host Controller"},

  {0x153b,0x1144,"Aureon 5.1"},

  {0x153b,0x1147,"Aureon 5.1 Sky"},

  {0x153b,0x1158,"Philips Semiconductors SAA7134 (rev 01) [Terratec Cinergy 600 TV]"},

  {0x153f,0x0001,"SOC-it 101 System Controller"},

  {0x1542,0x9260,"RCIM-II Real-Time Clock & Interrupt Module"},

  {0x1542,0x9271,"RCIM-III Real-Time Clock & Interrupt Module (PCIe)"},

  {0x1542,0x9272,"Pulse Width Modulator Card"},

  {0x1542,0x9277,"5 Volt Delta Sigma Converter Card"},

  {0x1542,0x9278,"10 Volt Delta Sigma Converter Card"},

  {0x1542,0x9287,"Analog Output Card"},

  {0x1542,0x9290,"FPGA Card"},

  {0x1543,0x3052,"Intel 537 [Winmodem]"},

  {0x1543,0x4c22,"Si3036 MC'97 DAA"},

  {0x1556,0x1100,"PCI Express Core Reference Design"},

  {0x1556,0x110f,"PCI Express Core Reference Design Virtual Function"},

  {0x1571,0xa001,"CCSI PCI20-485 ARCnet"},

  {0x1571,0xa002,"CCSI PCI20-485D ARCnet"},

  {0x1571,0xa003,"CCSI PCI20-485X ARCnet"},

  {0x1571,0xa004,"CCSI PCI20-CXB ARCnet"},

  {0x1571,0xa005,"CCSI PCI20-CXS ARCnet"},

  {0x1571,0xa006,"CCSI PCI20-FOG-SMA ARCnet"},

  {0x1571,0xa007,"CCSI PCI20-FOG-ST ARCnet"},

  {0x1571,0xa008,"CCSI PCI20-TB5 ARCnet"},

  {0x1571,0xa009,"CCSI PCI20-5-485 5Mbit ARCnet"},

  {0x1571,0xa00a,"CCSI PCI20-5-485D 5Mbit ARCnet"},

  {0x1571,0xa00b,"CCSI PCI20-5-485X 5Mbit ARCnet"},

  {0x1571,0xa00c,"CCSI PCI20-5-FOG-ST 5Mbit ARCnet"},

  {0x1571,0xa00d,"CCSI PCI20-5-FOG-SMA 5Mbit ARCnet"},

  {0x1571,0xa201,"CCSI PCI22-485 10Mbit ARCnet"},

  {0x1571,0xa202,"CCSI PCI22-485D 10Mbit ARCnet"},

  {0x1571,0xa203,"CCSI PCI22-485X 10Mbit ARCnet"},

  {0x1571,0xa204,"CCSI PCI22-CHB 10Mbit ARCnet"},

  {0x1571,0xa205,"CCSI PCI22-FOG_ST 10Mbit ARCnet"},

  {0x1571,0xa206,"CCSI PCI22-THB 10Mbit ARCnet"},

  {0x1578,0x4d34,"VPMK4 [Video Processor Mk IV]"},

  {0x1578,0x5615,"VPMK3 [Video Processor Mk III]"},

  {0x157c,0x8001,"Fix2000 PCI Y2K Compliance Card"},

  {0x1589,0x0008,"Leutron Vision PicPortExpress CL"},

  {0x1589,0x0009,"Leutron Vision PicPortExpress CL Stereo"},

  {0x1590,0x0001,"Eagle Cluster Manager"},

  {0x1590,0x0002,"Osprey Cluster Manager"},

  {0x1590,0x0003,"Harrier Cluster Manager"},

  {0x1590,0xa01d,"FC044X Fibre Channel HBA"},

  {0x1592,0x0781,"Multi-IO Card"},

  {0x1592,0x0782,"Parallel Port Card 2xEPP"},

  {0x1592,0x0783,"Multi-IO Card"},

  {0x1592,0x0785,"Multi-IO Card"},

  {0x1592,0x0786,"Multi-IO Card"},

  {0x1592,0x0787,"Multi-IO Card"},

  {0x1592,0x0788,"Multi-IO Card"},

  {0x1592,0x078a,"Multi-IO Card"},

  {0x159b,0x4321,"StorLink SL3516 (Gemini) Host Bridge"},

  {0x15a2,0x0001,"TA700 PCI Bus Analyzer/Exerciser"},

  {0x15ac,0x6893,"3U OpenVPX Multi-function I/O Board [Model 68C3]"},

  {0x15ad,0x0405,"SVGA II Adapter"},

  {0x15ad,0x0710,"SVGA Adapter"},

  {0x15ad,0x0720,"VMXNET Ethernet Controller"},

  {0x15ad,0x0740,"Virtual Machine Communication Interface"},

  {0x15ad,0x0770,"USB2 EHCI Controller"},

  {0x15ad,0x0774,"USB1.1 UHCI Controller"},

  {0x15ad,0x0778,"USB3 xHCI 0.96 Controller"},

  {0x15ad,0x0779,"USB3 xHCI 1.0 Controller"},

  {0x15ad,0x0790,"PCI bridge"},

  {0x15ad,0x07a0,"PCI Express Root Port"},

  {0x15ad,0x07b0,"VMXNET3 Ethernet Controller"},

  {0x15ad,0x07c0,"PVSCSI SCSI Controller"},

  {0x15ad,0x07e0,"SATA AHCI controller"},

  {0x15ad,0x0801,"Virtual Machine Interface"},

  {0x15ad,0x0820,"Paravirtual RDMA controller"},

  {0x15ad,0x1977,"HD Audio Controller"},

  {0x15b3,0x0191,"MT25408 [ConnectX IB Flash Recovery]"},

  {0x15b3,0x01f6,"MT27500 Family [ConnectX-3 Flash Recovery]"},

  {0x15b3,0x01f8,"MT27520 Family [ConnectX-3 Pro Flash Recovery]"},

  {0x15b3,0x01ff,"MT27600 Family [Connect-IB Flash Recovery]"},

  {0x15b3,0x0209,"MT27700 Family [ConnectX-4 Flash Recovery]"},

  {0x15b3,0x020b,"MT27710 Family [ConnectX-4 Lx Flash Recovery]"},

  {0x15b3,0x020d,"MT28800 Family [ConnectX-5 Flash Recovery]"},

  {0x15b3,0x020f,"MT28908A0 Family [ConnectX-6 Flash Recovery]"},

  {0x15b3,0x0211,"MT416842 Family [BlueField SoC Flash Recovery]"},

  {0x15b3,0x024e,"MT53100 [Spectrum-2, Flash recovery mode]"},

  {0x15b3,0x024f,"MT53100 [Spectrum-2, Flash recovery mode]"},

  {0x15b3,0x0262,"MT27710 [ConnectX-4 Lx Programmable] EN"},

  {0x15b3,0x0263,"MT27710 [ConnectX-4 Lx Programmable Virtual Function] EN"},

  {0x15b3,0x0281,"NPS-600 Flash Recovery"},

  {0x15b3,0x1002,"MT25400 Family [ConnectX-2 Virtual Function]"},

  {0x15b3,0x1003,"MT27500 Family [ConnectX-3]"},

  {0x15b3,0x1004,"MT27500/MT27520 Family [ConnectX-3/ConnectX-3 Pro Virtual Function]"},

  {0x15b3,0x1005,"MT27510 Family"},

  {0x15b3,0x1006,"MT27511 Family"},

  {0x15b3,0x1007,"MT27520 Family [ConnectX-3 Pro]"},

  {0x15b3,0x1009,"MT27530 Family"},

  {0x15b3,0x100a,"MT27531 Family"},

  {0x15b3,0x100b,"MT27540 Family"},

  {0x15b3,0x100c,"MT27541 Family"},

  {0x15b3,0x100d,"MT27550 Family"},

  {0x15b3,0x100e,"MT27551 Family"},

  {0x15b3,0x100f,"MT27560 Family"},

  {0x15b3,0x1010,"MT27561 Family"},

  {0x15b3,0x1011,"MT27600 [Connect-IB]"},

  {0x15b3,0x1012,"MT27600 Family [Connect-IB Virtual Function]"},

  {0x15b3,0x1013,"MT27700 Family [ConnectX-4]"},

  {0x15b3,0x1014,"MT27700 Family [ConnectX-4 Virtual Function]"},

  {0x15b3,0x1015,"MT27710 Family [ConnectX-4 Lx]"},

  {0x15b3,0x1016,"MT27710 Family [ConnectX-4 Lx Virtual Function]"},

  {0x15b3,0x1017,"MT27800 Family [ConnectX-5]"},

  {0x15b3,0x1018,"MT27800 Family [ConnectX-5 Virtual Function]"},

  {0x15b3,0x1019,"MT28800 Family [ConnectX-5 Ex]"},

  {0x15b3,0x101a,"MT28800 Family [ConnectX-5 Ex Virtual Function]"},

  {0x15b3,0x101b,"MT28908 Family [ConnectX-6]"},

  {0x15b3,0x101c,"MT28908 Family [ConnectX-6 Virtual Function]"},

  {0x15b3,0x101d,"MT28841"},

  {0x15b3,0x101e,"MT28850"},

  {0x15b3,0x101f,"MT28851"},

  {0x15b3,0x1020,"MT28860"},

  {0x15b3,0x1021,"MT28861"},

  {0x15b3,0x1974,"MT28800 Family [ConnectX-5 PCIe Bridge]"},

  {0x15b3,0x1975,"MT416842 Family [BlueField SoC PCIe Bridge]"},

  {0x15b3,0x5274,"MT21108 InfiniBridge"},

  {0x15b3,0x5a44,"MT23108 InfiniHost"},

  {0x15b3,0x5a45,"MT23108 [Infinihost HCA Flash Recovery]"},

  {0x15b3,0x5a46,"MT23108 PCI Bridge"},

  {0x15b3,0x5e8c,"MT24204 [InfiniHost III Lx HCA]"},

  {0x15b3,0x5e8d,"MT25204 [InfiniHost III Lx HCA Flash Recovery]"},

  {0x15b3,0x6274,"MT25204 [InfiniHost III Lx HCA]"},

  {0x15b3,0x6278,"MT25208 InfiniHost III Ex (Tavor compatibility mode)"},

  {0x15b3,0x6279,"MT25208 [InfiniHost III Ex HCA Flash Recovery]"},

  {0x15b3,0x6282,"MT25208 [InfiniHost III Ex]"},

  {0x15b3,0x6340,"MT25408 [ConnectX VPI - IB SDR / 10GigE]"},

  {0x15b3,0x634a,"MT25418 [ConnectX VPI PCIe 2.0 2.5GT/s - IB DDR / 10GigE]"},

  {0x15b3,0x6368,"MT25448 [ConnectX EN 10GigE, PCIe 2.0 2.5GT/s]"},

  {0x15b3,0x6372,"MT25408 [ConnectX EN 10GigE 10GBaseT, PCIe 2.0 2.5GT/s]"},

  {0x15b3,0x6732,"MT26418 [ConnectX VPI PCIe 2.0 5GT/s - IB DDR / 10GigE]"},

  {0x15b3,0x673c,"MT26428 [ConnectX VPI PCIe 2.0 5GT/s - IB QDR / 10GigE]"},

  {0x15b3,0x6746,"MT26438 [ConnectX VPI PCIe 2.0 5GT/s - IB QDR / 10GigE Virtualization+]"},

  {0x15b3,0x6750,"MT26448 [ConnectX EN 10GigE, PCIe 2.0 5GT/s]"},

  {0x15b3,0x675a,"MT25408 [ConnectX EN 10GigE 10GBaseT, PCIe Gen2 5GT/s]"},

  {0x15b3,0x6764,"MT26468 [ConnectX EN 10GigE, PCIe 2.0 5GT/s Virtualization+]"},

  {0x15b3,0x676e,"MT26478 [ConnectX EN 40GigE, PCIe 2.0 5GT/s]"},

  {0x15b3,0x6778,"MT26488 [ConnectX VPI PCIe 2.0 5GT/s - IB DDR / 10GigE Virtualization+]"},

  {0x15b3,0x7101,"NPS-400 configuration and management interface"},

  {0x15b3,0x7102,"NPS-400 network interface PF"},

  {0x15b3,0x7103,"NPS-400 network interface VF"},

  {0x15b3,0x7121,"NPS-600 configuration and management interface"},

  {0x15b3,0x7122,"NPS-600 network interface PF"},

  {0x15b3,0x7123,"NPS-600 network interface VF"},

  {0x15b3,0xa2d0,"MT416842 BlueField SoC Crypto enabled"},

  {0x15b3,0xa2d1,"MT416842 BlueField SoC Crypto disabled"},

  {0x15b3,0xa2d2,"MT416842 BlueField integrated ConnectX-5 network controller"},

  {0x15b3,0xa2d3,"MT416842 BlueField multicore SoC family VF"},

  {0x15b3,0xc738,"MT51136"},

  {0x15b3,0xc739,"MT51136 GW"},

  {0x15b3,0xc838,"MT52236"},

  {0x15b3,0xc839,"MT52236 router"},

  {0x15b3,0xcaf1,"ConnectX-4 CAPI Function"},

  {0x15b3,0xcb84,"MT52100"},

  {0x15b3,0xcf08,"MT53236"},

  {0x15b3,0xcf6c,"MT53100 [Spectrum-2, 64 x 100GbE switch]"},

  {0x15b3,0xd2f0,"Switch-IB 3 HDR (200Gbps) switch"},

  {0x15b6,0x0001,"XP15 DSP Accelerator"},

  {0x15b6,0x0002,"XP30 DSP Accelerator"},

  {0x15b6,0x0003,"XP00 Data Acquisition Device"},

  {0x15b6,0x0004,"XP35 DSP Accelerator"},

  {0x15b6,0x0007,"XP100 DSP Accelerator [XP100-T0]"},

  {0x15b6,0x0008,"XP100 DSP Accelerator [XP100-T1]"},

  {0x15b6,0x0009,"XP100 DSP Accelerator [XP100-E0]"},

  {0x15b6,0x000a,"XP100 DSP Accelerator [XP100-E1]"},

  {0x15b6,0x000e,"XP100 DSP Accelerator [XP100-0]"},

  {0x15b6,0x000f,"XP100 DSP Accelerator [XP100-1]"},

  {0x15b6,0x0010,"XP100 DSP Accelerator [XP100-P0]"},

  {0x15b6,0x0011,"XP100 DSP Accelerator [XP100-P1]"},

  {0x15b6,0x0012,"XP100 DSP Accelerator [XP100-P2]"},

  {0x15b6,0x0013,"XP100 DSP Accelerator [XP100-P3]"},

  {0x15b6,0x0014,"RamSan Flash SSD"},

  {0x15b6,0x0015,"ZBox"},

  {0x15b8,0x1001,"APCI1516 SP controller (16 digi outputs)"},

  {0x15b8,0x1003,"APCI1032 SP controller (32 digi inputs w/ opto coupler)"},

  {0x15b8,0x1004,"APCI2032 SP controller (32 digi outputs)"},

  {0x15b8,0x1005,"APCI2200 SP controller (8/16 digi outputs (relay))"},

  {0x15b8,0x1006,"APCI1564 SP controller (32 digi ins, 32 digi outs)"},

  {0x15b8,0x100a,"APCI1696 SP controller (96 TTL I/Os)"},

  {0x15b8,0x3001,"APCI3501 SP controller (analog output board)"},

  {0x15b8,0x300f,"APCI3600 Noise and vibration measurement board"},

  {0x15b8,0x7001,"APCI7420 2-port Serial Controller"},

  {0x15b8,0x7002,"APCI7300 Serial Controller"},

  {0x15bc,0x0100,"HPFC-5600 Tachyon DX2+ FC"},

  {0x15bc,0x0103,"QX4 PCI Express quad 4-gigabit Fibre Channel controller"},

  {0x15bc,0x0105,"Celerity FC-44XS/FC-42XS/FC-41XS/FC-44ES/FC-42ES/FC-41ES"},

  {0x15bc,0x1100,"E8001-66442 PCI Express CIC"},

  {0x15bc,0x2922,"64 Bit, 133MHz PCI-X Exerciser & Protocol Checker"},

  {0x15bc,0x2928,"64 Bit, 66MHz PCI Exerciser & Analyzer"},

  {0x15bc,0x2929,"64 Bit, 133MHz PCI-X Analyzer & Exerciser"},

  {0x15c5,0x8010,"1394b - 1394 Firewire 3-Port Host Adapter Card"},

  {0x15c7,0x0349,"Tateyama C-PCI PLC/NC card Rev.01A"},

  {0x15dc,0x0001,"Argus 300 PCI Cryptography Module"},

  {0x15e2,0x0500,"PhoneJack-PCI"},

  {0x15e8,0x0130,"Wireless PCI Card"},

  {0x15e8,0x0131,"NCP130A2 Wireless NIC"},

  {0x15e9,0x1841,"ADMA-100 DiscStaQ ATA Controller"},

  {0x15ec,0x3101,"FC3101 Profibus DP 1 Channel PCI"},

  {0x15ec,0x5102,"FC5102"},

  {0x1618,0x0001,"RDX 11"},

  {0x1618,0x0002,"HFT-01"},

  {0x1618,0x0400,"FarSync T2P (2 port X.21/V.35/V.24)"},

  {0x1618,0x0440,"FarSync T4P (4 port X.21/V.35/V.24)"},

  {0x1618,0x0610,"FarSync T1U (1 port X.21/V.35/V.24)"},

  {0x1618,0x0620,"FarSync T2U (2 port X.21/V.35/V.24)"},

  {0x1618,0x0640,"FarSync T4U (4 port X.21/V.35/V.24)"},

  {0x1618,0x1610,"FarSync TE1 (T1,E1)"},

  {0x1618,0x2610,"FarSync DSL-S1 (SHDSL)"},

  {0x1618,0x3640,"FarSync T4E (4-port X.21/V.35/V.24)"},

  {0x1618,0x4620,"FarSync T2Ue PCI Express (2-port X.21/V.35/V.24)"},

  {0x1618,0x4640,"FarSync T4Ue PCI Express (4-port X.21/V.35/V.24)"},

  {0x1619,0x0400,"FarSync T2P (2 port X.21/V.35/V.24)"},

  {0x1619,0x0440,"FarSync T4P (4 port X.21/V.35/V.24)"},

  {0x1619,0x0610,"FarSync T1U (1 port X.21/V.35/V.24)"},

  {0x1619,0x0620,"FarSync T2U (2 port X.21/V.35/V.24)"},

  {0x1619,0x0640,"FarSync T4U (4 port X.21/V.35/V.24)"},

  {0x1619,0x1610,"FarSync TE1 (T1,E1)"},

  {0x1619,0x1612,"FarSync TE1 PCI Express (T1,E1)"},

  {0x1619,0x2610,"FarSync DSL-S1 (SHDSL)"},

  {0x1619,0x3640,"FarSync T4E (4-port X.21/V.35/V.24)"},

  {0x1619,0x4620,"FarSync T2Ue PCI Express (2-port X.21/V.35/V.24)"},

  {0x1619,0x4640,"FarSync T4Ue PCI Express (4-port X.21/V.35/V.24)"},

  {0x1619,0x5621,"FarSync T2Ee PCI Express (2 port X.21/V.35/V.24)"},

  {0x1619,0x5641,"FarSync T4Ee PCI Express (4 port X.21/V.35/V.24)"},

  {0x1619,0x6620,"FarSync T2U-PMC PCI Express (2 port X.21/V.35/V.24)"},

  {0x1626,0x8410,"RTL81xx Fast Ethernet"},

  {0x1629,0x1003,"Format synchronizer v3.0"},

  {0x1629,0x1006,"Format synchronizer, model 10500"},

  {0x1629,0x1007,"Format synchronizer, model 21000"},

  {0x1629,0x2002,"Fast Universal Data Output"},

  {0x1638,0x1100,"SMC2602W EZConnect / Addtron AWA-100 / Eumitcom PCI WL11000"},

  {0x163c,0x3052,"SmartLink SmartPCI562 56K Modem"},

  {0x163c,0x5449,"SmartPCI561 Modem"},

  {0x1657,0x0013,"425/825/42B/82B 4Gbps/8Gbps PCIe dual port FC HBA"},

  {0x1657,0x0014,"1010/1020/1007/1741 10Gbps CNA"},

  {0x1657,0x0017,"415/815/41B/81B 4Gbps/8Gbps PCIe single port FC HBA"},

  {0x1657,0x0021,"804 8Gbps FC HBA for HP Bladesystem c-class"},

  {0x1657,0x0022,"1860 16Gbps/10Gbps Fabric Adapter"},

  {0x1657,0x0023,"1867/1869 16Gbps FC HBA"},

  {0x1657,0x0646,"400 4Gbps PCIe FC HBA"},

  {0x165a,0xc100,"PIXCI(R) CL1 Camera Link Video Capture Board [custom QL5232]"},

  {0x165a,0xd200,"PIXCI(R) D2X Digital Video Capture Board [custom QL5232]"},

  {0x165a,0xd300,"PIXCI(R) D3X Digital Video Capture Board [custom QL5232]"},

  {0x165a,0xeb01,"PIXCI(R) EB1 PCI Camera Link Video Capture Board"},

  {0x165c,0x5361,"PROCStarII60-1"},

  {0x165c,0x5362,"PROCStarII60-2"},

  {0x165c,0x5364,"PROCStarII60-4"},

  {0x165c,0x5435,"ProcSparkII"},

  {0x165c,0x5661,"ProcE60"},

  {0x165c,0x56e1,"ProcE180"},

  {0x165c,0x5911,"ProcStarIII110-1"},

  {0x165c,0x5912,"ProcStarIII110-2"},

  {0x165c,0x5913,"ProcStarIII110-3"},

  {0x165c,0x5914,"ProcStarIII110-4"},

  {0x165c,0x5921,"ProcStarIII150-1"},

  {0x165c,0x5922,"ProcStarIII150-2"},

  {0x165c,0x5923,"ProcStarIII150-3"},

  {0x165c,0x5924,"ProcStarIII150-4"},

  {0x165c,0x5931,"ProcStarIII260-1"},

  {0x165c,0x5932,"ProcStarIII260-2"},

  {0x165c,0x5933,"ProcStarIII260-3"},

  {0x165c,0x5934,"ProcStarIII260-4"},

  {0x165c,0x5941,"ProcStarIII340-1"},

  {0x165c,0x5942,"ProcStarIII340-2"},

  {0x165c,0x5943,"ProcStarIII340-3"},

  {0x165c,0x5944,"ProcStarIII340-4"},

  {0x165c,0x5a01,"ProceIII80"},

  {0x165c,0x5a11,"ProceIII110"},

  {0x165c,0x5a21,"ProceIII150"},

  {0x165c,0x5a31,"ProceIII260"},

  {0x165c,0x5a41,"ProceIII340"},

  {0x165c,0x5b51,"ProceIV360"},

  {0x165c,0x5b61,"ProceIV530"},

  {0x165c,0x5b71,"ProceIV820"},

  {0x165c,0x5c01,"ProcStarIV80-1"},

  {0x165c,0x5c02,"ProcStarIV80-2"},

  {0x165c,0x5c03,"ProcStarIV80-3"},

  {0x165c,0x5c04,"ProcStarIV80-4"},

  {0x165c,0x5c11,"ProcStarIV110-1"},

  {0x165c,0x5c12,"ProcStarIV110-2"},

  {0x165c,0x5c13,"ProcStarIV110-3"},

  {0x165c,0x5c14,"ProcStarIV110-4"},

  {0x165c,0x5c51,"ProcStarIV360-1"},

  {0x165c,0x5c52,"ProcStarIV360-2"},

  {0x165c,0x5c53,"ProcStarIV360-3"},

  {0x165c,0x5c54,"ProcStarIV360-4"},

  {0x165c,0x5c61,"ProcStarIV530-1"},

  {0x165c,0x5c62,"ProcStarIV530-2"},

  {0x165c,0x5c63,"ProcStarIV530-3"},

  {0x165c,0x5c64,"ProcStarIV530-4"},

  {0x165c,0x5c71,"ProcStarIV820-1"},

  {0x165c,0x5c72,"ProcStarIV820-2"},

  {0x165c,0x5c73,"ProcStarIV820-3"},

  {0x165c,0x5c74,"ProcStarIV820-4"},

  {0x165c,0x5d01,"Proc10480"},

  {0x165c,0x5d11,"Proc104110"},

  {0x165c,0x5f01,"ProceV_A3"},

  {0x165c,0x5f11,"ProceV_A7"},

  {0x165c,0x5f21,"ProceV_AB"},

  {0x165c,0x5f31,"ProceV_D5"},

  {0x165c,0x5f41,"ProceV_D8"},

  {0x165c,0x6732,"Proc6M"},

  {0x165c,0x6832,"Proc12M"},

  {0x165c,0x7101,"Proc10a_27"},

  {0x165c,0x7111,"Proc10a_48"},

  {0x165c,0x7121,"Proc10a_66"},

  {0x165c,0x7141,"Proc10a_115"},

  {0x165c,0x7181,"Proc10a_27S"},

  {0x165c,0x7191,"Proc10a_48S"},

  {0x165c,0x71a1,"Proc10a_66S"},

  {0x165c,0x71b1,"Proc10A"},

  {0x165f,0x1020,"LMLM4 MPEG-4 encoder"},

  {0x1668,0x0100,"Mini-PCI bridge"},

  {0x166d,0x0001,"SiByte BCM1125/1125H/1250 System-on-a-Chip PCI"},

  {0x166d,0x0002,"SiByte BCM1125H/1250 System-on-a-Chip HyperTransport"},

  {0x166d,0x0012,"SiByte BCM1280/BCM1480 System-on-a-Chip PCI-X"},

  {0x166d,0x0014,"Sibyte BCM1280/BCM1480 System-on-a-Chip HyperTransport"},

  {0x1677,0x104e,"5LS172.6 B&R Dual CAN Interface Card"},

  {0x1677,0x12d7,"5LS172.61 B&R Dual CAN Interface Card"},

  {0x1677,0x20ad,"5ACPCI.MFIO-K01 Profibus DP / K-Feldbus / COM"},

  {0x1678,0x0100,"NE020 10Gb Accelerated Ethernet Adapter (iWARP RNIC)"},

  {0x1679,0x3000,"SD Standard host controller [Ellen]"},

  {0x167b,0x2102,"ZyDAS ZD1202"},

  {0x167b,0x2116,"ZD1212B Wireless Adapter"},

  {0x167d,0xa000,"MagicLAN SWL-2210P 802.11b [Intersil ISL3874]"},

  {0x1688,0x1170,"WLAN 802.11b card"},

  {0x168c,0x0007,"AR5210 Wireless Network Adapter [AR5000 802.11a]"},

  {0x168c,0x0011,"AR5211 Wireless Network Adapter [AR5001A 802.11a]"},

  {0x168c,0x0012,"AR5211 Wireless Network Adapter [AR5001X 802.11ab]"},

  {0x168c,0x0013,"AR5212/5213/2414 Wireless Network Adapter"},

  {0x168c,0x001a,"AR2413/AR2414 Wireless Network Adapter [AR5005G(S) 802.11bg]"},

  {0x168c,0x001b,"AR5413/AR5414 Wireless Network Adapter [AR5006X(S) 802.11abg]"},

  {0x168c,0x001c,"AR242x / AR542x Wireless Network Adapter (PCI-Express)"},

  {0x168c,0x001d,"AR2417 Wireless Network Adapter [AR5007G 802.11bg]"},

  {0x168c,0x0020,"AR5513 802.11abg Wireless NIC"},

  {0x168c,0x0023,"AR5416 Wireless Network Adapter [AR5008 802.11(a)bgn]"},

  {0x168c,0x0024,"AR5418 Wireless Network Adapter [AR5008E 802.11(a)bgn] (PCI-Express)"},

  {0x168c,0x0027,"AR9160 Wireless Network Adapter [AR9001 802.11(a)bgn]"},

  {0x168c,0x0029,"AR922X Wireless Network Adapter"},

  {0x168c,0x002a,"AR928X Wireless Network Adapter (PCI-Express)"},

  {0x168c,0x002b,"AR9285 Wireless Network Adapter (PCI-Express)"},

  {0x168c,0x002c,"AR2427 802.11bg Wireless Network Adapter (PCI-Express)"},

  {0x168c,0x002d,"AR9227 Wireless Network Adapter"},

  {0x168c,0x002e,"AR9287 Wireless Network Adapter (PCI-Express)"},

  {0x168c,0x0030,"AR93xx Wireless Network Adapter"},

  {0x168c,0x0032,"AR9485 Wireless Network Adapter"},

  {0x168c,0x0033,"AR958x 802.11abgn Wireless Network Adapter"},

  {0x168c,0x0034,"AR9462 Wireless Network Adapter"},

  {0x168c,0x0036,"QCA9565 / AR9565 Wireless Network Adapter"},

  {0x168c,0x0037,"AR9485 Wireless Network Adapter"},

  {0x168c,0x003c,"QCA986x/988x 802.11ac Wireless Network Adapter"},

  {0x168c,0x003e,"QCA6174 802.11ac Wireless Network Adapter"},

  {0x168c,0x0040,"QCA9980/9990 802.11ac Wireless Network Adapter"},

  {0x168c,0x0041,"QCA6164 802.11ac Wireless Network Adapter"},

  {0x168c,0x0042,"QCA9377 802.11ac Wireless Network Adapter"},

  {0x168c,0x0050,"QCA9887 802.11ac Wireless Network Adapter"},

  {0x168c,0x0207,"AR5210 Wireless Network Adapter [AR5000 802.11a]"},

  {0x168c,0x1014,"AR5212 802.11abg NIC"},

  {0x168c,0x9013,"AR5002X Wireless Network Adapter"},

  {0x168c,0xff19,"AR5006X Wireless Network Adapter"},

  {0x168c,0xff1b,"AR2425 Wireless Network Adapter [AR5007EG 802.11bg]"},

  {0x168c,0xff1c,"AR5008 Wireless Network Adapter"},

  {0x168c,0xff1d,"AR922x Wireless Network Adapter"},

  {0x169c,0x0044,"Revolution Storage Processing Card"},

  {0x16ab,0x1100,"GL24110P"},

  {0x16ab,0x1101,"PLX9052 PCMCIA-to-PCI Wireless LAN"},

  {0x16ab,0x1102,"PCMCIA-to-PCI Wireless Network Bridge"},

  {0x16ab,0x8501,"WL-8305 Wireless LAN PCI Adapter"},

  {0x16ae,0x0001,"SafeXcel 1140"},

  {0x16ae,0x000a,"SafeXcel 1841"},

  {0x16ae,0x1141,"SafeXcel 1141"},

  {0x16ae,0x1841,"SafeXcel 1842"},

  {0x16c6,0x8695,"Centaur KS8695 ARM processor"},

  {0x16c6,0x8842,"KSZ8842-PMQL 2-Port Ethernet Switch"},

  {0x16ca,0x0001,"Rocket Drive DL"},

  {0x16cd,0x0101,"DirectPCI SRAM for DPX-11x series"},

  {0x16cd,0x0102,"DirectPCI SRAM for DPX-S/C/E-series"},

  {0x16cd,0x0103,"DirectPCI ROM for DPX-11x series"},

  {0x16cd,0x0104,"DirectPCI ROM for DPX-S/C/E-series"},

  {0x16cd,0x0105,"DirectPCI I/O for DPX-114/DPX-115"},

  {0x16cd,0x0106,"DirectPCI I/O for DPX-116"},

  {0x16cd,0x0107,"DirectPCI I/O for DPX-116U"},

  {0x16cd,0x0108,"DirectPCI I/O for DPX-117"},

  {0x16cd,0x0109,"DirectPCI I/O for DPX-112"},

  {0x16cd,0x010a,"DirectPCI I/O for DPX-C/E-series"},

  {0x16cd,0x010b,"DirectPCI I/O for DPX-S series"},

  {0x16d5,0x0504,"PMC-DX504 Reconfigurable FPGA with LVDS I/O"},

  {0x16d5,0x0520,"PMC520 Serial Communication, 232 Octal"},

  {0x16d5,0x0521,"PMC521 Serial Communication, 422/485 Octal"},

  {0x16d5,0x1020,"PMC-AX1020 Reconfigurable FPGA with A/D & D/A"},

  {0x16d5,0x1065,"PMC-AX1065 Reconfigurable FPGA with A/D & D/A"},

  {0x16d5,0x2004,"PMC-DX2004 Reconfigurable FPGA with LVDS I/O"},

  {0x16d5,0x2020,"PMC-AX2020 Reconfigurable FPGA with A/D & D/A"},

  {0x16d5,0x2065,"PMC-AX2065 Reconfigurable FPGA with A/D & D/A"},

  {0x16d5,0x3020,"PMC-AX3020 Reconfigurable FPGA with A/D & D/A"},

  {0x16d5,0x3065,"PMC-AX3065 Reconfigurable FPGA with A/D & D/A"},

  {0x16d5,0x4243,"PMC424, APC424, AcPC424 Digital I/O and Counter Timer Module"},

  {0x16d5,0x4248,"PMC464, APC464, AcPC464 Digital I/O and Counter Timer Module"},

  {0x16d5,0x424b,"PMC-DX2002 Reconfigurable FPGA with Differential I/O"},

  {0x16d5,0x4253,"PMC-DX503 Reconfigurable FPGA with TTL and Differential I/O"},

  {0x16d5,0x4312,"PMC-CX1002 Reconfigurable Conduction-Cooled FPGA Virtex-II with Differential I/O"},

  {0x16d5,0x4313,"PMC-CX1003 Reconfigurable Conduction-Cooled FPGA Virtex-II with CMOS and Differential I/O"},

  {0x16d5,0x4322,"PMC-CX2002 Reconfigurable Conduction-Cooled FPGA Virtex-II with Differential I/O"},

  {0x16d5,0x4323,"PMC-CX2003 Reconfigurable Conduction-Cooled FPGA Virtex-II with CMOS and Differential I/O"},

  {0x16d5,0x4350,"PMC-DX501 Reconfigurable Digital I/O Module"},

  {0x16d5,0x4353,"PMC-DX2003 Reconfigurable FPGA with TTL and Differential I/O"},

  {0x16d5,0x4357,"PMC-DX502 Reconfigurable Differential I/O Module"},

  {0x16d5,0x4457,"PMC730, APC730, AcPC730 Multifunction Module"},

  {0x16d5,0x464d,"PMC408 32-Channel Digital Input/Output Module"},

  {0x16d5,0x4850,"PMC220-16 12-Bit Analog Output Module"},

  {0x16d5,0x4a42,"PMC483, APC483, AcPC483 Counter Timer Module"},

  {0x16d5,0x4a50,"PMC484, APC484, AcPC484 Counter Timer Module"},

  {0x16d5,0x4a56,"PMC230 16-Bit Analog Output Module"},

  {0x16d5,0x4b47,"PMC330, APC330, AcPC330 Analog Input Module, 16-bit A/D"},

  {0x16d5,0x4c40,"PMC-LX40 Reconfigurable Virtex-4 FPGA with plug-in I/O"},

  {0x16d5,0x4c60,"PMC-LX60 Reconfigurable Virtex-4 FPGA with plug-in I/O"},

  {0x16d5,0x4d4d,"PMC341, APC341, AcPC341 Analog Input Module, Simultaneous Sample & Hold"},

  {0x16d5,0x4d4e,"PMC482, APC482, AcPC482 Counter Timer Board"},

  {0x16d5,0x524d,"PMC-DX2001 Reconfigurable FPGA with TTL I/O"},

  {0x16d5,0x5335,"PMC-SX35 Reconfigurable Virtex-4 FPGA with plug-in I/O"},

  {0x16d5,0x5456,"PMC470 48-Channel Digital Input/Output Module"},

  {0x16d5,0x5601,"PMC-VLX85 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5602,"PMC-VLX110 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5603,"PMC-VSX95 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5604,"PMC-VLX155 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5605,"PMC-VFX70 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5606,"PMC-VLX155-1M Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5701,"PMC-SLX150: Reconfigurable Spartan-6 FPGA with plug-in I/O"},

  {0x16d5,0x5702,"PMC-SLX150-1M: Reconfigurable Spartan-6 FPGA with plug-in I/O"},

  {0x16d5,0x5801,"XMC-VLX85 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5802,"XMC-VLX110 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5803,"XMC-VSX95 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5804,"XMC-VLX155 Reconfigurable Virtex-5 FPGA with plug-in I/O"},

  {0x16d5,0x5807,"XMC-SLX150: Reconfigurable Spartan-6 FPGA with plug-in I/O"},

  {0x16d5,0x5808,"XMC-SLX150-1M: Reconfigurable Spartan-6 FPGA with plug-in I/O"},

  {0x16d5,0x5901,"APCe8650 PCI Express IndustryPack Carrier Card"},

  {0x16d5,0x6301,"XMC Module with user-configurable Virtex-6 FPGA, 240k logic cells, SFP front I/O"},

  {0x16d5,0x6302,"XMC Module with user-configurable Virtex-6 FPGA, 365k logic cells, SFP front I/O"},

  {0x16d5,0x6303,"XMC Module with user-configurable Virtex-6 FPGA, 240k logic cells, no front I/O"},

  {0x16d5,0x6304,"XMC Module with user-configurable Virtex-6 FPGA, 365k logic cells, no front I/O"},

  {0x16d5,0x7000,"XMC-7K325F: User-configurable Kintex-7 FPGA, 325k logic cells plus SFP front I/O"},

  {0x16d5,0x7001,"XMC-7K410F: User-configurable Kintex-7 FPGA, 410k logic cells plus SFP front I/O"},

  {0x16d5,0x7002,"XMC-7K325AX: User-Configurable Kintex-7 FPGA, 325k logic cells with AXM Plug-In I/O"},

  {0x16d5,0x7003,"XMC-7K410AX: User-Configurable Kintex-7 FPGA, 410k logic cells with AXM Plug-In I/O"},

  {0x16d5,0x7004,"XMC-7K325CC: User-Configurable Kintex-7 FPGA, 325k logic cells, conduction-cooled"},

  {0x16d5,0x7005,"XMC-7K410CC: User-Configurable Kintex-7 FPGA, 410k logic cells, conduction-cooled"},

  {0x16d5,0x7006,"XMC-7A200: User-Configurable Artix-7 FPGA, 200k logic cells with Plug-In I/O"},

  {0x16d5,0x7007,"XMC-7A200CC: User-Configurable Conduction-Cooled Artix-7 FPGA, with 200k logic cells"},

  {0x16d5,0x7011,"AP440-1: 32-Channel Isolated Digital Input Module"},

  {0x16d5,0x7012,"AP440-2: 32-Channel Isolated Digital Input Module"},

  {0x16d5,0x7013,"AP440-3: 32-Channel Isolated Digital Input Module"},

  {0x16d5,0x7014,"AP445: 32-Channel Isolated Digital Output Module"},

  {0x16d5,0x7016,"AP470 48-Channel TTL Level Digital Input/Output Module"},

  {0x16d5,0x7017,"AP323 16-bit, 20 or 40 Channel Analog Input Module"},

  {0x16d5,0x7018,"AP408: 32-Channel Digital I/O Module"},

  {0x16d5,0x701a,"AP220-16 12-Bit, 16-Channel Analog Output Module"},

  {0x16d5,0x701b,"AP231-16 16-Bit, 16-Channel Analog Output Module"},

  {0x16d5,0x7021,"APA7-201 Reconfigurable Artix-7 FPGA module 48 TTL channels"},

  {0x16d5,0x7022,"APA7-202 Reconfigurable Artix-7 FPGA module 24 RS485 channels"},

  {0x16d5,0x7023,"APA7-203 Reconfigurable Artix-7 FPGA module 24 TTL & 12 RS485 channels"},

  {0x16d5,0x7024,"APA7-204 Reconfigurable Artix-7 FPGA module 24 LVDS channels"},

  {0x16d5,0x7042,"AP482 Counter Timer Module with TTL Level Input/Output"},

  {0x16d5,0x7043,"AP483 Counter Timer Module with TTL Level and RS422 Input/Output"},

  {0x16d5,0x7044,"AP484 Counter Timer Module with RS422 Input/Output"},

  {0x16da,0x0011,"INES GPIB-PCI"},

  {0x16e3,0x1e0f,"LEON2FT Processor"},

  {0x16e5,0x6000,"INT6000 Ethernet-to-Powerline Bridge [HomePlug AV]"},

  {0x16e5,0x6300,"INT6300 Ethernet-to-Powerline Bridge [HomePlug AV]"},

  {0x16ec,0x00ed,"USR997900"},

  {0x16ec,0x0116,"USR997902 10/100/1000 Mbps PCI Network Card"},

  {0x16ec,0x2f00,"USR5660A (USR265660A, USR5660A-BP) 56K PCI Faxmodem"},

  {0x16ec,0x3685,"Wireless Access PCI Adapter Model 022415"},

  {0x16ec,0x4320,"USR997904 10/100/1000 64-bit NIC (Marvell Yukon)"},

  {0x16ec,0xab06,"USR997901A 10/100 Cardbus NIC"},

  {0x16ed,0x1001,"UMIO communication card"},

  {0x16f2,0x0200,"I/O board"},

  {0x16f4,0x8000,"VW2010"},

  {0x170b,0x0100,"NSP2000-SSL crypto accelerator"},

  {0x1719,0x1000,"NPA Access Network Processor Family"},

  {0x1725,0x7174,"VSC7174 PCI/PCI-X Serial ATA Host Bus Controller"},

  {0x172a,0x13c8,"AEP SureWare Runner 1000V3"},

  {0x1737,0x0029,"WPG54G ver. 4 PCI Card"},

  {0x1737,0x1032,"Gigabit Network Adapter"},

  {0x1737,0x1064,"Gigabit Network Adapter"},

  {0x1737,0xab08,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x1737,0xab09,"21x4x DEC-Tulip compatible 10/100 Ethernet"},

  {0x173b,0x03e8,"AC1000 Gigabit Ethernet"},

  {0x173b,0x03e9,"AC1001 Gigabit Ethernet"},

  {0x173b,0x03ea,"AC9100 Gigabit Ethernet"},

  {0x173b,0x03eb,"AC1003 Gigabit Ethernet"},

  {0x1743,0x8139,"ROL/F-100 Fast Ethernet Adapter with ROL"},

  {0x1745,0x2020,"XCode II Series"},

  {0x1745,0x2100,"XCode 2100 Series"},

  {0x1760,0x0101,"PCD-7004 Digital Bi-Directional Ports PCI Card"},

  {0x1760,0x0102,"PCD-7104 Digital Input & Output PCI Card"},

  {0x1760,0x0303,"PCD-7006C Digital Input & Output PCI Card"},

  {0x177d,0x0001,"Nitrox XL N1"},

  {0x177d,0x0003,"Nitrox XL N1 Lite"},

  {0x177d,0x0004,"Octeon (and older) FIPS"},

  {0x177d,0x0005,"Octeon CN38XX Network Processor Pass 3.x"},

  {0x177d,0x0006,"RoHS"},

  {0x177d,0x0010,"Nitrox XL NPX"},

  {0x177d,0x0020,"Octeon CN31XX Network Processor"},

  {0x177d,0x0030,"Octeon CN30XX Network Processor"},

  {0x177d,0x0040,"Octeon CN58XX Network Processor"},

  {0x177d,0x0050,"Octeon CN57XX Network Processor (CN54XX/CN55XX/CN56XX)"},

  {0x177d,0x0070,"Octeon CN50XX Network Processor"},

  {0x177d,0x0080,"Octeon CN52XX Network Processor"},

  {0x177d,0x0090,"Octeon II CN63XX Network Processor"},

  {0x177d,0x0091,"Octeon II CN68XX Network Processor"},

  {0x177d,0x0092,"Octeon II CN65XX Network Processor"},

  {0x177d,0x0093,"Octeon II CN61XX Network Processor"},

  {0x177d,0x0094,"Octeon Fusion CNF71XX Cell processor"},

  {0x177d,0x0095,"Octeon III CN78XX Network Processor"},

  {0x177d,0x0096,"Octeon III CN70XX Network Processor"},

  {0x177d,0x9700,"Octeon III CN73XX Network Processor"},

  {0x177d,0x9702,"CN23XX [LiquidIO II] Intelligent Adapter"},

  {0x177d,0x9703,"CN23XX [LiquidIO II] NVMe Controller"},

  {0x177d,0x9712,"CN23XX [LiquidIO II] SRIOV Virtual Function"},

  {0x177d,0x9713,"CN23XX [LiquidIO II] NVMe SRIOV Virtual Function"},

  {0x177d,0x9800,"Octeon Fusion CNF75XX Processor"},

  {0x177d,0xa001,"ThunderX MRML(Master RML Bridge to RSL devices)"},

  {0x177d,0xa002,"THUNDERX PCC Bridge"},

  {0x177d,0xa008,"THUNDERX SMMU"},

  {0x177d,0xa009,"THUNDERX Generic Interrupt Controller"},

  {0x177d,0xa00a,"THUNDERX GPIO Controller"},

  {0x177d,0xa00b,"THUNDERX MPI / SPI Controller"},

  {0x177d,0xa00c,"THUNDERX MIO-PTP Controller"},

  {0x177d,0xa00d,"THUNDERX MIX Network Controller"},

  {0x177d,0xa00e,"THUNDERX Reset Controller"},

  {0x177d,0xa00f,"THUNDERX UART Controller"},

  {0x177d,0xa010,"THUNDERX eMMC/SD Controller"},

  {0x177d,0xa011,"THUNDERX MIO-BOOT Controller"},

  {0x177d,0xa012,"THUNDERX TWSI / I2C Controller"},

  {0x177d,0xa013,"THUNDERX CCPI (Multi-node connect)"},

  {0x177d,0xa014,"THUNDERX Voltage Regulator Module"},

  {0x177d,0xa015,"THUNDERX PCIe Switch Logic Interface"},

  {0x177d,0xa016,"THUNDERX Key Memory"},

  {0x177d,0xa017,"THUNDERX GTI (Global System Timers)"},

  {0x177d,0xa018,"THUNDERX Random Number Generator"},

  {0x177d,0xa019,"THUNDERX DFA"},

  {0x177d,0xa01a,"THUNDERX Zip Coprocessor"},

  {0x177d,0xa01b,"THUNDERX xHCI USB Controller"},

  {0x177d,0xa01c,"THUNDERX AHCI SATA Controller"},

  {0x177d,0xa01d,"THUNDERX RAID Coprocessor"},

  {0x177d,0xa01e,"THUNDERX Network Interface Controller"},

  {0x177d,0xa01f,"THUNDERX Traffic Network Switch"},

  {0x177d,0xa020,"THUNDERX PEM (PCI Express Interface)"},

  {0x177d,0xa021,"THUNDERX L2C (Level-2 Cache Controller)"},

  {0x177d,0xa022,"THUNDERX LMC (DRAM Controller)"},

  {0x177d,0xa023,"THUNDERX OCLA (On-Chip Logic Analyzer)"},

  {0x177d,0xa024,"THUNDERX OSM"},

  {0x177d,0xa025,"THUNDERX GSER (General Serializer/Deserializer)"},

  {0x177d,0xa026,"THUNDERX BGX (Common Ethernet Interface)"},

  {0x177d,0xa027,"THUNDERX IOBN"},

  {0x177d,0xa029,"THUNDERX NCSI (Network Controller Sideband Interface)"},

  {0x177d,0xa02a,"ThunderX SGPIO (Serial GPIO controller for SATA disk lights)"},

  {0x177d,0xa02b,"THUNDERX SMI / MDIO Controller"},

  {0x177d,0xa02c,"THUNDERX DAP (Debug Access Port)"},

  {0x177d,0xa02d,"THUNDERX PCIERC (PCIe Root Complex)"},

  {0x177d,0xa02e,"ThunderX L2C-TAD (Level 2 cache tag and data)"},

  {0x177d,0xa02f,"THUNDERX L2C-CBC"},

  {0x177d,0xa030,"THUNDERX L2C-MCI"},

  {0x177d,0xa031,"THUNDERX MIO-FUS (Fuse Access Controller)"},

  {0x177d,0xa032,"THUNDERX FUSF (Fuse Controller)"},

  {0x177d,0xa033,"THUNDERX Random Number Generator virtual function"},

  {0x177d,0xa034,"THUNDERX Network Interface Controller virtual function"},

  {0x177d,0xa035,"THUNDERX Parallel Bus"},

  {0x177d,0xa036,"ThunderX RAD (RAID acceleration engine) virtual function"},

  {0x177d,0xa037,"THUNDERX ZIP virtual function"},

  {0x177d,0xa040,"THUNDERX CPT Cryptographic Accelerator"},

  {0x177d,0xa100,"THUNDERX CN88XX 48 core SoC"},

  {0x177d,0xa200,"OCTEON TX CN81XX/CN80XX"},

  {0x177d,0xa300,"OCTEON TX CN83XX"},

  {0x1796,0x0001,"SIS1100 [Gigabit link]"},

  {0x1796,0x0002,"HOTlink"},

  {0x1796,0x0003,"Counter Timer"},

  {0x1796,0x0004,"CAMAC Controller"},

  {0x1796,0x0005,"PROFIBUS"},

  {0x1796,0x0006,"AMCC HOTlink"},

  {0x1796,0x000d,"Synchronisation Slave"},

  {0x1796,0x000e,"SIS1100-eCMC"},

  {0x1796,0x000f,"TDC (GPX)"},

  {0x1796,0x0010,"PCIe Counter Timer"},

  {0x1796,0x0011,"SIS1100-e single link"},

  {0x1796,0x0012,"SIS1100-e quad link"},

  {0x1796,0x0015,"SIS8100 [Gigabit link, MicroTCA]"},

  {0x1797,0x5864,"TW5864 multimedia video controller"},

  {0x1797,0x6801,"TW6802 multimedia video card"},

  {0x1797,0x6802,"TW6802 multimedia other device"},

  {0x1797,0x6810,"TW6816 multimedia video controller"},

  {0x1797,0x6811,"TW6816 multimedia video controller"},

  {0x1797,0x6812,"TW6816 multimedia video controller"},

  {0x1797,0x6813,"TW6816 multimedia video controller"},

  {0x1797,0x6814,"TW6816 multimedia video controller"},

  {0x1797,0x6815,"TW6816 multimedia video controller"},

  {0x1797,0x6816,"TW6816 multimedia video controller"},

  {0x1797,0x6817,"TW6816 multimedia video controller"},

  {0x1797,0x6864,"TW6864 multimedia video controller"},

  {0x1799,0x6001,"F5D6001 Wireless PCI Card [Realtek RTL8180]"},

  {0x1799,0x6020,"F5D6020 v3000 Wireless PCMCIA Card [Realtek RTL8180]"},

  {0x1799,0x6060,"F5D6060 Wireless PDA Card"},

  {0x1799,0x700f,"F5D7000 v7000 Wireless G Desktop Card [Realtek RTL8185]"},

  {0x1799,0x701f,"F5D7010 v7000 Wireless G Notebook Card [Realtek RTL8185]"},

  {0x179a,0x0001,"Quantis PCI 16Mbps"},

  {0x179c,0x0557,"DP-PCI-557 [PCI 1553B]"},

  {0x179c,0x0566,"DP-PCI-566 [Intelligent PCI 1553B]"},

  {0x179c,0x1152,"DP-cPCI-1152 (8-channel Isolated ADC Module)"},

  {0x179c,0x5031,"DP-CPCI-5031-Synchro Module"},

  {0x179c,0x5112,"DP-cPCI-5112 [MM-Carrier]"},

  {0x179c,0x5121,"DP-CPCI-5121-IP Carrier"},

  {0x179c,0x5211,"DP-CPCI-5211-IP Carrier"},

  {0x179c,0x5679,"AGE Display Module"},

  {0x17a0,0x7163,"GL9701 PCIe to PCI Bridge"},

  {0x17a0,0x8083,"GL880 USB 1.1 UHCI controller"},

  {0x17a0,0x8084,"GL880 USB 2.0 EHCI controller"},

  {0x17aa,0x402b,"Intel 82599ES 10Gb 2-port Server Adapter X520-2"},

  {0x17b3,0xab08,"PN672TX 10/100 Ethernet"},

  {0x17b4,0x0011,"WebEnhance 100 GZIP Compression Card"},

  {0x17b4,0x0012,"WebEnhance 200 GZIP Compression Card"},

  {0x17b4,0x0015,"WebEnhance 300 GZIP Compression Card"},

  {0x17b4,0x0016,"StorCompress 300 GZIP Compression Card"},

  {0x17b4,0x0017,"StorSecure 300 GZIP Compression and AES Encryption Card"},

  {0x17cb,0x0001,"AGN100 802.11 a/b/g True MIMO Wireless Card"},

  {0x17cb,0x0002,"AGN300 802.11 a/b/g True MIMO Wireless Card"},

  {0x17cb,0x0400,"Datacenter Technologies QDF2432 PCI Express Root Port"},

  {0x17cb,0x0401,"Datacenter Technologies QDF2400 PCI Express Root Port"},

  {0x17cc,0x2280,"USB 2.0"},

  {0x17d3,0x1110,"ARC-1110 4-Port PCI-X to SATA RAID Controller"},

  {0x17d3,0x1120,"ARC-1120 8-Port PCI-X to SATA RAID Controller"},

  {0x17d3,0x1130,"ARC-1130 12-Port PCI-X to SATA RAID Controller"},

  {0x17d3,0x1160,"ARC-1160 16-Port PCI-X to SATA RAID Controller"},

  {0x17d3,0x1170,"ARC-1170 24-Port PCI-X to SATA RAID Controller"},

  {0x17d3,0x1201,"ARC-1200 2-Port PCI-Express to SATA II RAID Controller"},

  {0x17d3,0x1203,"ARC-1203 2/4/8 Port PCIe 2.0 to SATA 6Gb RAID Controller"},

  {0x17d3,0x1210,"ARC-1210 4-Port PCI-Express to SATA RAID Controller"},

  {0x17d3,0x1214,"ARC-12x4 PCIe 2.0 to SAS/SATA 6Gb RAID Controller"},

  {0x17d3,0x1220,"ARC-1220 8-Port PCI-Express to SATA RAID Controller"},

  {0x17d3,0x1222,"ARC-1222 8-Port PCI-Express to SAS/SATA II RAID Controller"},

  {0x17d3,0x1230,"ARC-1230 12-Port PCI-Express to SATA RAID Controller"},

  {0x17d3,0x1260,"ARC-1260 16-Port PCI-Express to SATA RAID Controller"},

  {0x17d3,0x1280,"ARC-1280/1280ML 24-Port PCI-Express to SATA II RAID Controller"},

  {0x17d3,0x1300,"ARC-1300ix-16 16-Port PCI-Express to SAS Non-RAID Host Adapter"},

  {0x17d3,0x1320,"ARC-1320 8/16 Port PCIe 2.0 to SAS/SATA 6Gb Non-RAID Host Adapter"},

  {0x17d3,0x1330,"ARC-1330 16 Port PCIe 3.0 to SAS/SATA 12Gb Non-RAID Host Adapter"},

  {0x17d3,0x1680,"ARC-1680 series PCIe to SAS/SATA 3Gb RAID Controller"},

  {0x17d3,0x1880,"ARC-188x series PCIe 2.0/3.0 to SAS/SATA 6/12Gb RAID Controller"},

  {0x17d5,0x5731,"Xframe 10-Gigabit Ethernet PCI-X"},

  {0x17d5,0x5732,"Xframe II 10-Gigabit Ethernet PCI-X 2.0"},

  {0x17d5,0x5831,"Xframe 10-Gigabit Ethernet PCI-X"},

  {0x17d5,0x5832,"Xframe II 10-Gigabit Ethernet PCI-X 2.0"},

  {0x17d5,0x5833,"X3100 Series 10 Gigabit Ethernet PCIe"},

  {0x17db,0x0101,"XT Series [Seastar] 3D Toroidal Router"},

  {0x17df,0x1864,"Virtex4 PCI Board w/ QL5064 Bridge [DN7000K10PCI/DN8000K10PCI/DN8000K10PSX/NOTUS]"},

  {0x17df,0x1865,"Virtex4 ASIC Emulator [DN8000K10PCIe]"},

  {0x17df,0x1866,"Virtex4 ASIC Emulator Cable Connection [DN8000K10PCI]"},

  {0x17df,0x1867,"Virtex4 ASIC Emulator Cable Connection [DN8000K10PCIe]"},

  {0x17df,0x1868,"Virtex4 ASIC Emulator [DN8000K10PCIe-8]"},

  {0x17df,0x1900,"Virtex5 PCIe ASIC Emulator [DN9000K10PCIe8T/DN9002K10PCIe8T/DN9200K10PCIe8T/DN7006K10PCIe8T/DN7406K10PCIe8T]"},

  {0x17df,0x1901,"Virtex5 PCIe ASIC Emulator Large BARs [DN9000K10PCIe8T/DN9002K10PCIe8T/DN9200K10PCIe8T/DN7006K10PCIe8T/DN7406K10PCIe8T]"},

  {0x17df,0x1902,"Virtex5 PCIe ASIC Emulator Low Power [Interceptor]"},

  {0x17df,0x1903,"Spartan6 PCIe FPGA Accelerator Board [DNBFCS12PCIe]"},

  {0x17df,0x1904,"Virtex6 PCIe ASIC Emulation Board [DNDUALV6_PCIe4]"},

  {0x17df,0x1905,"Virtex6 PCIe ASIC Emulation Board [DNV6F6PCIe]"},

  {0x17df,0x1906,"Virtex6 PCIe ASIC Emulation Board [DN2076K10]"},

  {0x17df,0x1907,"Virtex6 PCIe ASIC Emulation Board [DNV6F2PCIe]"},

  {0x17df,0x1908,"Virtex6 PCIe ASIC Emulation Board Large BARs[DNV6F2PCIe]"},

  {0x17df,0x1909,"Kintex7 PCIe FPGA Accelerator Board [DNK7F5PCIe]"},

  {0x17df,0x190a,"Virtex7 PCIe ASIC Emulation Board [DNV7F1A]"},

  {0x17df,0x190b,"Stratix5 PCIe ASIC Emulation Board [DNS5GXF2]"},

  {0x17df,0x190c,"Virtex7 PCIe ASIC Emulation Board [DNV7F2A]"},

  {0x17df,0x190d,"Virtex7 PCIe ASIC Emulation Board [DNV7F4A]"},

  {0x17df,0x190e,"Virtex7 PCIe ASIC Emulation Board [DNV7F2B]"},

  {0x17df,0x190f,"KintexUS PCIe MainRef Design [DNPCIE_40G_KU_LL]"},

  {0x17df,0x1910,"VirtexUS ASIC Emulation Board [DNVUF4A]"},

  {0x17df,0x1911,"VirtexUS PCIe ASIC Emulation Board [DNVU_F2PCIe]"},

  {0x17df,0x1912,"KintexUS PCIe MainRef Design [DNPCIe_40G_KU_LL_QSFP]"},

  {0x17df,0x1913,"VirtexUS ASIC Emulation Board [DNVUF1A]"},

  {0x17df,0x1914,"VirtexUS ASIC Emulation Board [DNVUF2A]"},

  {0x17df,0x1915,"Arria10 PCIe MainRef Design [DNPCIe_80G_A10_LL]"},

  {0x17df,0x1916,"VirtexUS PCIe Accelerator Board [DNVUF2_HPC_PCIe]"},

  {0x17df,0x1a00,"Virtex6 PCIe DMA Netlist Design"},

  {0x17df,0x1a01,"Virtex6 PCIe Darklite Design [DNPCIe_HXT_10G_LL]"},

  {0x17df,0x1a02,"Virtex7 PCIe DMA Netlist Design"},

  {0x17df,0x1a03,"Kintex7 PCIe Darklite Design [DNPCIe_K7_10G_LL]"},

  {0x17df,0x1a05,"Stratix5 PCIe Darklite Design [DNS5GX_F2]"},

  {0x17df,0x1a06,"VirtexUS PCIe DMA Netlist Design"},

  {0x17df,0x1a07,"KintexUS PCIe Darklite Design [DNPCIe_40G_KU_LL]"},

  {0x17df,0x1a08,"KintexUS PCIe Darklite Design [DNPCIe_40G_KU_LL_QSFP]"},

  {0x17df,0x1a09,"Arria10 PCIe Darklite Design [DNPCIe_80G_A10_LL]"},

  {0x17e4,0x0001,"KK671 Cardbus encryption board"},

  {0x17e4,0x0002,"KK672 Cardbus encryption board"},

  {0x17e6,0x0010,"EN2010 [c.Link] MoCA Network Controller (Coax, PCI interface)"},

  {0x17e6,0x0011,"EN2010 [c.Link] MoCA Network Controller (Coax, MPEG interface)"},

  {0x17e6,0x0021,"EN2210 [c.Link] MoCA Network Controller (Coax)"},

  {0x17e6,0x0025,"EN2510 [c.Link] MoCA Network Controller (Coax, PCIe interface)"},

  {0x17e6,0x0027,"EN2710 [c.Link] MoCA 2.0 Network Controller (Coax, PCIe interface)"},

  {0x17f3,0x1010,"R1010 IDE Controller"},

  {0x17f3,0x2012,"M2012/R3308 VGA-compatible graphics adapter"},

  {0x17f3,0x6020,"R6020 North Bridge"},

  {0x17f3,0x6021,"R6021 Host Bridge"},

  {0x17f3,0x6030,"R6030 ISA Bridge"},

  {0x17f3,0x6031,"R6031 ISA Bridge"},

  {0x17f3,0x6040,"R6040 MAC Controller"},

  {0x17f3,0x6060,"R6060 USB 1.1 Controller"},

  {0x17f3,0x6061,"R6061 USB 2.0 Controller"},

  {0x17fe,0x2120,"IPN 2120 802.11b"},

  {0x17fe,0x2220,"IPN 2220 802.11g"},

  {0x1800,0x1100,"Nanospeed Trading Gateway"},

  {0x1813,0x4000,"HaM controllerless modem"},

  {0x1813,0x4100,"HaM plus Data Fax Modem"},

  {0x1814,0x0101,"Wireless PCI Adapter RT2400 / RT2460"},

  {0x1814,0x0200,"RT2500 802.11g PCI [PC54G2]"},

  {0x1814,0x0201,"RT2500 Wireless 802.11bg"},

  {0x1814,0x0300,"Wireless Adapter Canyon CN-WF511"},

  {0x1814,0x0301,"RT2561/RT61 802.11g PCI"},

  {0x1814,0x0302,"RT2561/RT61 rev B 802.11g"},

  {0x1814,0x0401,"RT2600 802.11 MIMO"},

  {0x1814,0x0601,"RT2800 802.11n PCI"},

  {0x1814,0x0681,"RT2890 Wireless 802.11n PCIe"},

  {0x1814,0x0701,"RT2760 Wireless 802.11n 1T/2R"},

  {0x1814,0x0781,"RT2790 Wireless 802.11n 1T/2R PCIe"},

  {0x1814,0x3060,"RT3060 Wireless 802.11n 1T/1R"},

  {0x1814,0x3062,"RT3062 Wireless 802.11n 2T/2R"},

  {0x1814,0x3090,"RT3090 Wireless 802.11n 1T/1R PCIe"},

  {0x1814,0x3091,"RT3091 Wireless 802.11n 1T/2R PCIe"},

  {0x1814,0x3092,"RT3092 Wireless 802.11n 2T/2R PCIe"},

  {0x1814,0x3290,"RT3290 Wireless 802.11n 1T/1R PCIe"},

  {0x1814,0x3298,"RT3290 Bluetooth"},

  {0x1814,0x3592,"RT3592 Wireless 802.11abgn 2T/2R PCIe"},

  {0x1814,0x359f,"RT3592 PCIe Wireless Network Adapter"},

  {0x1814,0x5360,"RT5360 Wireless 802.11n 1T/1R"},

  {0x1814,0x5362,"RT5362 PCI 802.11n Wireless Network Adapter"},

  {0x1814,0x5390,"RT5390 Wireless 802.11n 1T/1R PCIe"},

  {0x1814,0x5392,"RT5392 PCIe Wireless Network Adapter"},

  {0x1814,0x539b,"RT5390R 802.11bgn PCIe Wireless Network Adapter"},

  {0x1814,0x539f,"RT5390 [802.11 b/g/n 1T1R G-band PCI Express Single Chip]"},

  {0x1814,0x5592,"RT5592 PCIe Wireless Network Adapter"},

  {0x1814,0xe932,"RT2560F 802.11 b/g PCI"},

  {0x1822,0x4e35,"Mantis DTV PCI Bridge Controller [Ver 1.0]"},

  {0x182d,0x3069,"ISDN PCI DC-105V2"},

  {0x182d,0x9790,"WL-121 Wireless Network Adapter 100g+ [Ver.3]"},

  {0x182e,0x0008,"XLR516 Processor"},

  {0x182f,0x000b,"BCM5785 [HT1000] SATA (RAID Mode)"},

  {0x183b,0x08a7,"MVC100 DVI"},

  {0x183b,0x08a8,"MVC101 SDI"},

  {0x183b,0x08a9,"MVC102 DVI+Audio"},

  {0x183b,0x08b0,"MVC200-DC"},

  {0x184a,0x1100,"MAX II cPLD"},

  {0x1850,0x0048,"EK220-66401 Computer Interface Card"},

  {0x185b,0x1489,"VideoMate Vista T100"},

  {0x1864,0x2110,"ISNAP 2110"},

  {0x1867,0x5a44,"MT23108 InfiniHost HCA"},

  {0x1867,0x5a45,"MT23108 InfiniHost HCA flash recovery"},

  {0x1867,0x5a46,"MT23108 InfiniHost HCA bridge"},

  {0x1867,0x6278,"MT25208 InfiniHost III Ex (Tavor compatibility mode)"},

  {0x1867,0x6282,"MT25208 InfiniHost III Ex"},

  {0x186c,0x0612,"AD612 Data Acquisition Device"},

  {0x186c,0x0614,"MF614 Multifunction I/O Card"},

  {0x186c,0x0622,"AD622 Data Acquisition Device"},

  {0x186c,0x0624,"MF624 Multifunction I/O PCI Card"},

  {0x186c,0x0625,"MF625 3-phase Motor Driver"},

  {0x186c,0x0634,"MF634 Multifunction I/O PCIe Card"},

  {0x1876,0xa101,"VigraWATCH PCI"},

  {0x1876,0xa102,"VigraWATCH PMC"},

  {0x1876,0xa103,"Vigra I/O"},

  {0x187e,0x3403,"ZyAir G-110 802.11g"},

  {0x187e,0x340e,"M-302 802.11g XtremeMIMO"},

  {0x1888,0x0301,"VMFX1 FPGA PMC module"},

  {0x1888,0x0601,"VSM2 dual PMC carrier"},

  {0x1888,0x0710,"VS14x series PowerPC PCI board"},

  {0x1888,0x0720,"VS24x series PowerPC PCI board"},

  {0x1896,0x4202,"MIport 3PCIU2 2-port Serial"},

  {0x1896,0x4204,"MIport 3PCIU4 4-port Serial"},

  {0x1896,0x4208,"MIport 3PCIU8 8-port Serial"},

  {0x1896,0x4211,"MIport 3PCIOU1 1-port Isolated Serial"},

  {0x1896,0x4212,"MIport 3PCIOU2 2-port Isolated Serial"},

  {0x1896,0x4214,"MIport 3PCIOU4 4-port Isolated Serial"},

  {0x1896,0xbb10,"3PCI2 2-Port Serial"},

  {0x1896,0xbb11,"3PCIO1 1-Port Isolated Serial"},

  {0x18a2,0x0002,"VRC6016 16-Channel PCIe DVR Card"},

  {0x18ac,0xd500,"FusionHDTV 5"},

  {0x18ac,0xd800,"FusionHDTV 3 Gold"},

  {0x18ac,0xd810,"FusionHDTV 3 Gold-Q"},

  {0x18ac,0xd820,"FusionHDTV 3 Gold-T"},

  {0x18ac,0xdb30,"FusionHDTV DVB-T Pro"},

  {0x18ac,0xdb40,"FusionHDTV DVB-T Hybrid"},

  {0x18ac,0xdb78,"FusionHDTV DVB-T Dual Express"},

  {0x18b8,0xb001,"AMSO 1100 iWARP/RDMA Gigabit Ethernet Coprocessor"},

  {0x18c3,0x0720,"nGene PCI-Express Multimedia Controller"},

  {0x18ca,0x0020,"Z7/Z9 (XG20 core)"},

  {0x18ca,0x0021,"Z9s/Z9m (XG21 core)"},

  {0x18ca,0x0027,"Z11/Z11M"},

  {0x18ca,0x0040,"Volari V3XT/V5/V8"},

  {0x18ca,0x0047,"Volari 8300 (chip: XP10, codename: XG47)"},

  {0x18d2,0x3069,"DC-105v2 ISDN controller"},

  {0x18dd,0x4c6f,"Artimi RTMI-100 UWB adapter"},

  {0x18e6,0x0001,"OSCI [Octal Serial Communication Interface]"},

  {0x18ec,0x6d05,"ML555"},

  {0x18ec,0xc006,"COMBO6"},

  {0x18ec,0xc032,"COMBO-LXT110"},

  {0x18ec,0xc045,"COMBO6E"},

  {0x18ec,0xc050,"COMBO-PTM"},

  {0x18ec,0xc058,"COMBO6X"},

  {0x18ec,0xc132,"COMBO-LXT155"},

  {0x18ec,0xc232,"COMBO-FXT100"},

  {0x18f4,0x0031,"NT20X Network Adapter"},

  {0x18f4,0x0051,"NT20X Capture Card"},

  {0x18f4,0x0061,"NT20E Capture Card"},

  {0x18f4,0x0064,"NT20E Inline Card"},

  {0x18f4,0x0071,"NT4E Capture Card"},

  {0x18f4,0x0074,"NT4E Inline Card"},

  {0x18f4,0x0081,"NT4E 4-port Expansion Card"},

  {0x18f4,0x0091,"NT20X Capture Card [New Rev]"},

  {0x18f4,0x00a1,"NT4E-STD Capture Card"},

  {0x18f4,0x00a4,"NT4E-STD Inline Card"},

  {0x18f4,0x00b1,"NTBPE Optical Bypass Adapter"},

  {0x18f4,0x00c5,"NT20E2 Network Adapter 2x10Gb"},

  {0x18f4,0x00d5,"NT40E2-4 Network Adapter 4x10Gb"},

  {0x18f4,0x00e5,"NT40E2-1 Network Adapter 1x40Gb"},

  {0x18f4,0x00f5,"NT4E2-4T-BP Network Adapter 4x1Gb with Electrical Bypass"},

  {0x18f4,0x0105,"NT4E2-4-PTP Network Adapter 4x1Gb"},

  {0x18f4,0x0115,"NT20E2-PTP Network Adapter 2x10Gb"},

  {0x18f4,0x0125,"NT4E2-4-PTP Network Adapter 4x1Gb"},

  {0x18f4,0x0135,"NT20E2-PTP Network Adapter 2x10Gb"},

  {0x18f4,0x0145,"NT40E3-4-PTP Network Adapter 4x10Gb"},

  {0x18f4,0x0155,"NT100E3-1-PTP Network Adapter 1x100Gb"},

  {0x18f4,0x0165,"NT80E3-2-PTP Network Adapter 2x40Gb"},

  {0x18f4,0x0175,"NT20E3-2-PTP Network Adapter 2x10Gb"},

  {0x18f4,0x0185,"NT40A01 Network Adapter"},

  {0x18f4,0x01a5,"NT200A01 Network Adapter"},

  {0x18f6,0x1000,"[Nexsis] Switch Virtual P2P PCIe Bridge"},

  {0x18f6,0x1001,"[Texsis] Switch Virtual P2P PCIe Bridge"},

  {0x18f6,0x1050,"[Nexsis] Switch Virtual P2P PCI Bridge"},

  {0x18f6,0x1051,"[Texsis] Switch Virtual P2P PCI Bridge"},

  {0x18f6,0x2000,"[Nexsis] Switch Integrated Mgmt. Endpoint"},

  {0x18f6,0x2001,"[Texsis] Switch Integrated Mgmt. Endpoint"},

  {0x18f7,0x0001,"ESCC-PCI-335 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0002,"422/4-PCI-335 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0003,"232/4-1M-PCI Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0004,"422/2-PCI-335 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0005,"IGESCC-PCI-ISO/1 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x000a,"232/4-PCI-335 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x000b,"232/8-PCI-335 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x000f,"FSCC Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0010,"GSCC Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0011,"QSSB Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0014,"SuperFSCC Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0015,"SuperFSCC-104-LVDS Serial PC/104+ Adapter [Fastcom]"},

  {0x18f7,0x0016,"FSCC-232 RS-232 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0017,"SuperFSCC-104 Serial PC/104+ Adapter [Fastcom]"},

  {0x18f7,0x0018,"SuperFSCC/4 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0019,"SuperFSCC Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x001a,"SuperFSCC-LVDS Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x001b,"FSCC/4 Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x001c,"SuperFSCC/4-LVDS Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x001d,"FSCC Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x001e,"SuperFSCC/4 Serial PCIe Adapter [Fastcom]"},

  {0x18f7,0x001f,"SuperFSCC/4 Serial cPCI Adapter [Fastcom]"},

  {0x18f7,0x0020,"422/4-PCIe Serial PCIe Adapter [Fastcom]"},

  {0x18f7,0x0021,"422/8-PCIe Serial PCIe Adapter [Fastcom]"},

  {0x18f7,0x0022,"SuperFSCC/4-LVDS Serial PCIe Adapter [Fastcom]"},

  {0x18f7,0x0023,"SuperFSCC/4 Serial cPCI Adapter [Fastcom]"},

  {0x18f7,0x0025,"SuperFSCC/4-LVDS Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0026,"SuperFSCC-LVDS Serial PCI Adapter [Fastcom]"},

  {0x18f7,0x0027,"FSCC/4 Serial PCIe Adapter [Fastcom]"},

  {0x1904,0x2031,"SC92031 PCI Fast Ethernet Adapter"},

  {0x1904,0x8139,"RTL8139D [Realtek] PCI 10/100BaseTX ethernet adaptor"},

  {0x1912,0x0002,"SH7780 PCI Controller (PCIC)"},

  {0x1912,0x0011,"SH7757 PCIe End-Point [PBI]"},

  {0x1912,0x0012,"SH7757 PCIe-PCI Bridge [PPB]"},

  {0x1912,0x0013,"SH7757 PCIe Switch [PS]"},

  {0x1912,0x0014,"uPD720201 USB 3.0 Host Controller"},

  {0x1912,0x0015,"uPD720202 USB 3.0 Host Controller"},

  {0x1912,0x001a,"SH7758 PCIe-PCI Bridge [PPB]"},

  {0x1912,0x001b,"SH7758 PCIe End-Point [PBI]"},

  {0x1912,0x001d,"SH7758 PCIe Switch [PS]"},

  {0x1923,0x0040,"A200/Remora FXO/FXS Analog AFT card"},

  {0x1923,0x0100,"A104d QUAD T1/E1 AFT card"},

  {0x1923,0x0300,"A101 single-port T1/E1"},

  {0x1923,0x0400,"A104u Quad T1/E1 AFT"},

  {0x1924,0x0703,"SFC4000 rev A net [Solarstorm]"},

  {0x1924,0x0710,"SFC4000 rev B [Solarstorm]"},

  {0x1924,0x0803,"SFC9020 10G Ethernet Controller"},

  {0x1924,0x0813,"SFL9021 10GBASE-T Ethernet Controller"},

  {0x1924,0x0903,"SFC9120 10G Ethernet Controller"},

  {0x1924,0x0923,"SFC9140 10/40G Ethernet Controller"},

  {0x1924,0x0a03,"SFC9220 10/40G Ethernet Controller"},

  {0x1924,0x1803,"SFC9020 10G Ethernet Controller (Virtual Function)"},

  {0x1924,0x1813,"SFL9021 10GBASE-T Ethernet Controller (Virtual Function)"},

  {0x1924,0x1903,"SFC9120 10G Ethernet Controller (Virtual Function)"},

  {0x1924,0x1923,"SFC9140 10/40G Ethernet Controller (Virtual Function)"},

  {0x1924,0x1a03,"SFC9220 10/40G Ethernet Controller (Virtual Function)"},

  {0x1924,0x6703,"SFC4000 rev A iSCSI/Onload [Solarstorm]"},

  {0x1924,0xc101,"EF1-21022T [EtherFabric]"},

  {0x1931,0x000c,"Qualcomm MSM6275 UMTS chip"},

  {0x193f,0x0001,"AHA36x-PCIX"},

  {0x193f,0x0360,"AHA360-PCIe"},

  {0x193f,0x0363,"AHA363-PCIe"},

  {0x193f,0x0364,"AHA364-PCIe"},

  {0x193f,0x0367,"AHA367-PCIe"},

  {0x193f,0x0370,"AHA370-PCIe"},

  {0x193f,0x0604,"AHA604"},

  {0x193f,0x0605,"AHA605"},

  {0x193f,0x3641,"AHA3641"},

  {0x193f,0x3642,"AHA3642"},

  {0x193f,0x6101,"AHA6101"},

  {0x193f,0x6102,"AHA6102"},

  {0x1942,0xe511,"Advance X620 accelerator card"},

  {0x1942,0xe521,"Advance e620 accelerator card"},

  {0x1947,0x4743,"CG200 Dual SD/SDIO Host controller device"},

  {0x194a,0x1111,"FireSpy3850"},

  {0x194a,0x1112,"FireSpy450b"},

  {0x194a,0x1113,"FireSpy450bT"},

  {0x194a,0x1114,"FireSpy850"},

  {0x194a,0x1115,"FireSpy850bT"},

  {0x194a,0x1200,"FireTrac 3460bT"},

  {0x194a,0x1201,"FireTrac 3460bT (fallback firmware)"},

  {0x194a,0x1202,"FireTrac 3460bT"},

  {0x194a,0x1203,"FireTrac 3460bT (fallback firmware)"},

  {0x1957,0x0012,"MPC8548E"},

  {0x1957,0x0013,"MPC8548"},

  {0x1957,0x0014,"MPC8543E"},

  {0x1957,0x0015,"MPC8543"},

  {0x1957,0x0018,"MPC8547E"},

  {0x1957,0x0019,"MPC8545E"},

  {0x1957,0x001a,"MPC8545"},

  {0x1957,0x0020,"MPC8568E"},

  {0x1957,0x0021,"MPC8568"},

  {0x1957,0x0022,"MPC8567E"},

  {0x1957,0x0023,"MPC8567"},

  {0x1957,0x0030,"MPC8533E"},

  {0x1957,0x0031,"MPC8533"},

  {0x1957,0x0032,"MPC8544E"},

  {0x1957,0x0033,"MPC8544"},

  {0x1957,0x0040,"MPC8572E"},

  {0x1957,0x0041,"MPC8572"},

  {0x1957,0x0050,"MPC8536E"},

  {0x1957,0x0051,"MPC8536"},

  {0x1957,0x0052,"MPC8535E"},

  {0x1957,0x0053,"MPC8535"},

  {0x1957,0x0060,"MPC8569"},

  {0x1957,0x0061,"MPC8569E"},

  {0x1957,0x0070,"P2020E"},

  {0x1957,0x0071,"P2020"},

  {0x1957,0x0078,"P2010E"},

  {0x1957,0x0079,"P2010"},

  {0x1957,0x0080,"MPC8349E"},

  {0x1957,0x0081,"MPC8349"},

  {0x1957,0x0082,"MPC8347E TBGA"},

  {0x1957,0x0083,"MPC8347 TBGA"},

  {0x1957,0x0084,"MPC8347E PBGA"},

  {0x1957,0x0085,"MPC8347 PBGA"},

  {0x1957,0x0086,"MPC8343E"},

  {0x1957,0x0087,"MPC8343"},

  {0x1957,0x00b4,"MPC8315E"},

  {0x1957,0x00b6,"MPC8314E"},

  {0x1957,0x00c2,"MPC8379E"},

  {0x1957,0x00c3,"MPC8379"},

  {0x1957,0x00c4,"MPC8378E"},

  {0x1957,0x00c5,"MPC8378"},

  {0x1957,0x00c6,"MPC8377E"},

  {0x1957,0x00c7,"MPC8377"},

  {0x1957,0x0100,"P1020E"},

  {0x1957,0x0101,"P1020"},

  {0x1957,0x0102,"P1021E"},

  {0x1957,0x0103,"P1021"},

  {0x1957,0x0108,"P1011E"},

  {0x1957,0x0109,"P1011"},

  {0x1957,0x010a,"P1012E"},

  {0x1957,0x010b,"P1012"},

  {0x1957,0x0110,"P1022E"},

  {0x1957,0x0111,"P1022"},

  {0x1957,0x0118,"P1013E"},

  {0x1957,0x0119,"P1013"},

  {0x1957,0x0128,"P1010"},

  {0x1957,0x0400,"P4080E"},

  {0x1957,0x0401,"P4080"},

  {0x1957,0x0408,"P4040E"},

  {0x1957,0x0409,"P4040"},

  {0x1957,0x041f,"P3041"},

  {0x1957,0x0440,"T4240 with security"},

  {0x1957,0x0441,"T4240 without security"},

  {0x1957,0x0446,"T4160 with security"},

  {0x1957,0x0447,"T4160 without security"},

  {0x1957,0x0830,"T2080 with security"},

  {0x1957,0x0831,"T2080 without security"},

  {0x1957,0x0838,"T2081 with security"},

  {0x1957,0x0839,"T2081 without security"},

  {0x1957,0x580c,"MPC5121e"},

  {0x1957,0x7010,"MPC8641 PCI Host Bridge"},

  {0x1957,0x7011,"MPC8641D PCI Host Bridge"},

  {0x1957,0x7018,"MPC8610"},

  {0x1957,0xc006,"MPC8308"},

  {0x1957,0xfc02,"RedStone"},

  {0x1957,0xfc03,"CFI"},

  {0x1959,0xa000,"PA6T Core"},

  {0x1959,0xa001,"PWRficient Host Bridge"},

  {0x1959,0xa002,"PWRficient PCI-Express Port"},

  {0x1959,0xa003,"PWRficient SMBus Controller"},

  {0x1959,0xa004,"PWRficient 16550 UART"},

  {0x1959,0xa005,"PWRficient Gigabit Ethernet"},

  {0x1959,0xa006,"PWRficient 10-Gigabit Ethernet"},

  {0x1959,0xa007,"PWRficient DMA Controller"},

  {0x1959,0xa008,"PWRficient LPC/Localbus Interface"},

  {0x1959,0xa009,"PWRficient L2 Cache"},

  {0x1959,0xa00a,"PWRficient DDR2 Memory Controller"},

  {0x1959,0xa00b,"PWRficient SERDES"},

  {0x1959,0xa00c,"PWRficient System/Debug Controller"},

  {0x1959,0xa00d,"PWRficient PCI-Express Internal Endpoint"},

  {0x1966,0x1975,"DVG64 family"},

  {0x1966,0x1977,"DVG128 family"},

  {0x1969,0x1026,"AR8121/AR8113/AR8114 Gigabit or Fast Ethernet"},

  {0x1969,0x1048,"Attansic L1 Gigabit Ethernet"},

  {0x1969,0x1062,"AR8132 Fast Ethernet"},

  {0x1969,0x1063,"AR8131 Gigabit Ethernet"},

  {0x1969,0x1066,"Attansic L2c Gigabit Ethernet"},

  {0x1969,0x1067,"Attansic L1c Gigabit Ethernet"},

  {0x1969,0x1073,"AR8151 v1.0 Gigabit Ethernet"},

  {0x1969,0x1083,"AR8151 v2.0 Gigabit Ethernet"},

  {0x1969,0x1090,"AR8162 Fast Ethernet"},

  {0x1969,0x1091,"AR8161 Gigabit Ethernet"},

  {0x1969,0x10a0,"QCA8172 Fast Ethernet"},

  {0x1969,0x10a1,"QCA8171 Gigabit Ethernet"},

  {0x1969,0x2048,"Attansic L2 Fast Ethernet"},

  {0x1969,0x2060,"AR8152 v1.1 Fast Ethernet"},

  {0x1969,0x2062,"AR8152 v2.0 Fast Ethernet"},

  {0x1969,0xe091,"Killer E220x Gigabit Ethernet Controller"},

  {0x1969,0xe0a1,"Killer E2400 Gigabit Ethernet Controller"},

  {0x196a,0x0101,"NodalCore C-1000 Content Classification Accelerator"},

  {0x196a,0x0102,"NodalCore C-2000 Content Classification Accelerator"},

  {0x196a,0x0105,"NodalCore C-3000 Content Classification Accelerator"},

  {0x1971,0x1011,"Physics Processing Unit [PhysX]"},

  {0x197b,0x0250,"JMC250 PCI Express Gigabit Ethernet Controller"},

  {0x197b,0x0260,"JMC260 PCI Express Fast Ethernet Controller"},

  {0x197b,0x0368,"JMB368 IDE controller"},

  {0x197b,0x2360,"JMB360 AHCI Controller"},

  {0x197b,0x2361,"JMB361 AHCI/IDE"},

  {0x197b,0x2362,"JMB362 SATA Controller"},

  {0x197b,0x2363,"JMB363 SATA/IDE Controller"},

  {0x197b,0x2364,"JMB364 AHCI Controller"},

  {0x197b,0x2365,"JMB365 AHCI/IDE"},

  {0x197b,0x2366,"JMB366 AHCI/IDE"},

  {0x197b,0x2368,"JMB368 IDE controller"},

  {0x197b,0x2369,"JMB369 Serial ATA Controller"},

  {0x197b,0x2380,"IEEE 1394 Host Controller"},

  {0x197b,0x2381,"Standard SD Host Controller"},

  {0x197b,0x2382,"SD/MMC Host Controller"},

  {0x197b,0x2383,"MS Host Controller"},

  {0x197b,0x2384,"xD Host Controller"},

  {0x197b,0x2386,"Standard SD Host Controller"},

  {0x197b,0x2387,"SD/MMC Host Controller"},

  {0x197b,0x2388,"MS Host Controller"},

  {0x197b,0x2389,"xD Host Controller"},

  {0x197b,0x2391,"Standard SD Host Controller"},

  {0x197b,0x2392,"SD/MMC Host Controller"},

  {0x197b,0x2393,"MS Host Controller"},

  {0x197b,0x2394,"xD Host Controller"},

  {0x1982,0x1600,"OX16C954 HOST-A"},

  {0x1982,0x16ff,"OX16C954 HOST-B"},

  {0x1989,0x0001,"RapidFile Bridge"},

  {0x1989,0x8001,"RapidFile"},

  {0x1999,0xa900,"AM-7209 Video Processor"},

  {0x199d,0x8209,"Virtual NIC Device"},

  {0x199d,0x890a,"Virtual HBA Device"},

  {0x199f,0x8501,"AU85X1 PCI REV1.1"},

  {0x199f,0x8521,"AU8521 TV card"},

  {0x19a2,0x0120,"x1 PCIe Gen2 Bridge[Pilot4]"},

  {0x19a2,0x0200,"BladeEngine 10Gb PCI-E iSCSI adapter"},

  {0x19a2,0x0201,"BladeEngine 10Gb PCIe Network Adapter"},

  {0x19a2,0x0211,"BladeEngine2 10Gb Gen2 PCIe Network Adapter"},

  {0x19a2,0x0212,"BladeEngine2 10Gb Gen2 PCIe iSCSI Adapter"},

  {0x19a2,0x0221,"BladeEngine3 10Gb Gen2 PCIe Network Adapter"},

  {0x19a2,0x0222,"BladeEngine3 10Gb Gen2 PCIe iSCSI Adapter"},

  {0x19a2,0x0700,"OneConnect OCe10100/OCe10102 Series 10 GbE"},

  {0x19a2,0x0702,"OneConnect 10Gb iSCSI Initiator"},

  {0x19a2,0x0704,"OneConnect 10Gb FCoE Initiator"},

  {0x19a2,0x0710,"OneConnect 10Gb NIC (be3)"},

  {0x19a2,0x0712,"OneConnect 10Gb iSCSI Initiator (be3)"},

  {0x19a2,0x0714,"OneConnect 10Gb FCoE Initiator (be3)"},

  {0x19a2,0x0800,"ServerView iRMC HTI"},

  {0x19ac,0x0001,"ACA2400 Crypto Accelerator"},

  {0x19ae,0x0520,"4135 HFT Interface Controller"},

  {0x19ae,0x0521,"Decimator"},

  {0x19ba,0x2330,"ZyWALL Turbo Card"},

  {0x19e3,0x5801,"DDRdrive X1"},

  {0x19e3,0x5808,"DDRdrive X8"},

  {0x19e3,0xdd52,"DDRdrive X1-30"},

  {0x19e5,0x1711,"Hi1710 [iBMC Intelligent Management system chip w/VGA support]"},

  {0x19e7,0x1001,"STIX DSP Card"},

  {0x19e7,0x1002,"STIX - 1 Port T1/E1 Card"},

  {0x19e7,0x1003,"STIX - 2 Port T1/E1 Card"},

  {0x19e7,0x1004,"STIX - 4 Port T1/E1 Card"},

  {0x19e7,0x1005,"STIX - 4 Port FXS Card"},

  {0x1a03,0x1150,"AST1150 PCI-to-PCI Bridge"},

  {0x1a03,0x2000,"ASPEED Graphics Family"},

  {0x1a07,0x0006,"CAN interface PC104+ HS/HS"},

  {0x1a07,0x0007,"CAN interface PCIcanx II HS or HS/HS"},

  {0x1a07,0x0008,"CAN interface PCIEcan HS or HS/HS"},

  {0x1a07,0x0009,"CAN interface PCI104 HS/HS"},

  {0x1a0e,0x083f,"DTA-2111 VHF/UHF Modulator"},

  {0x1a17,0x8002,"PB-10GE-2P 10GbE Security Card"},

  {0x1a1d,0x1a17,"Meta Networks MTP-1G IDPS NIC"},

  {0x1a29,0x4338,"CP8 Content Processor ASIC"},

  {0x1a29,0x4e36,"NP6 Network Processor"},

  {0x1a2b,0x0001,"GESP v1.3"},

  {0x1a2b,0x0002,"ECOMP v1.3"},

  {0x1a2b,0x0005,"ETP v1.4"},

  {0x1a2b,0x000a,"ETP-104 v1.1"},

  {0x1a2b,0x000e,"DSLP-104 v1.1"},

  {0x1a30,0x0680,"MtW8171 [Hyperion II]"},

  {0x1a30,0x0700,"Wave300 PSB8224 [Hyperion III]"},

  {0x1a30,0x0710,"Wave300 PSB8231 [Hyperion III]"},

  {0x1a3b,0x1112,"AR9285 Wireless Network Adapter (PCI-Express)"},

  {0x1a41,0x0001,"TILE64 processor"},

  {0x1a41,0x0002,"TILEPro processor"},

  {0x1a41,0x0200,"TILE-Gx processor"},

  {0x1a41,0x0201,"TILE-Gx Processor Virtual Function"},

  {0x1a41,0x2000,"TILE-Gx PCI Express Root Port"},

  {0x1a4a,0x1000,"MCOR Power Supply Controller"},

  {0x1a4a,0x1010,"AMC EVR - Stockholm Timing Board"},

  {0x1a4a,0x2000,"PGPCard - 4 Lane"},

  {0x1a4a,0x2001,"PGPCard - 8 Lane Plus EVR"},

  {0x1a4a,0x2010,"PCI-Express EVR"},

  {0x1a55,0x0010,"SDStationOEM"},

  {0x1a55,0x0011,"SDStationOEM II"},

  {0x1a55,0x0020,"Centaurus"},

  {0x1a55,0x0021,"Centaurus II"},

  {0x1a55,0x0022,"Centaurus II LT"},

  {0x1a55,0x0030,"CLIPSTER-VPU 1.x (Hugo)"},

  {0x1a55,0x0040,"Hydra Cinema (JPEG)"},

  {0x1a55,0x0050,"CLIPSTER-VPU 2.x (DigiLab)"},

  {0x1a55,0x0060,"CLIPSTER-DCI 2.x (HydraX)"},

  {0x1a55,0x0061,"Atomix"},

  {0x1a55,0x0062,"Atomix LT"},

  {0x1a55,0x0063,"Atomix HDMI"},

  {0x1a55,0x0064,"Atomix STAN"},

  {0x1a55,0x0065,"Atomix HDMI STAN"},

  {0x1a55,0x0070,"RED Rocket"},

  {0x1a55,0x0090,"CinePlay"},

  {0x1a73,0x0001,"Mozart [Memory Appliance 1010]"},

  {0x1a78,0x0031,"FlashMAX Drive"},

  {0x1a78,0x0040,"FlashMAX II"},

  {0x1a78,0x0041,"FlashMAX II"},

  {0x1a78,0x0042,"FlashMAX II"},

  {0x1a78,0x0050,"FlashMAX III"},

  {0x1a84,0x0001,"Vulcan SP HT6210 10-Gigabit Ethernet (rev 02)"},

  {0x1a88,0x4d45,"Multifunction IP core"},

  {0x1a8c,0x1100,"E8001-66443 PCI Express CIC"},

  {0x1a8e,0x2090,"Model 2090 PCI Express"},

  {0x1aa8,0x0009,"RAIDCore Controller"},

  {0x1aa8,0x000a,"RAIDCore Controller"},

  {0x1ab6,0x6201,"RAID Card"},

  {0x1ab8,0x4000,"Virtual Machine Communication Interface"},

  {0x1ab8,0x4005,"Accelerated Virtual Video Adapter"},

  {0x1ab8,0x4006,"Memory Ballooning Controller"},

  {0x1ad7,0x8000,"TSync-PCIe Time Code Processor"},

  {0x1ad7,0x9100,"TPRO-PCI-66U Timecode Reader/Generator"},

  {0x1ade,0x1501,"Swipetech barcode scanner"},

  {0x1ade,0x3038,"PCIe Video Bridge"},

  {0x1ae7,0x0520,"HFC-S PCI A [X-TENSIONS XC-520]"},

  {0x1ae8,0x0a40,"microEnable IV-BASE x1"},

  {0x1ae8,0x0a41,"microEnable IV-FULL x1"},

  {0x1ae8,0x0a44,"microEnable IV-FULL x4"},

  {0x1ae8,0x0e44,"microEnable IV-GigE x4"},

  {0x1ae9,0x0101,"Wil6200 PCI Express Root Port"},

  {0x1ae9,0x0200,"Wil6200 PCI Express Port"},

  {0x1ae9,0x0201,"Wil6200 Wireless PCI Express Port"},

  {0x1ae9,0x0301,"Wil6200 802.11ad Wireless Network Adapter"},

  {0x1ae9,0x0302,"Wil6200 802.11ad Wireless Network Adapter"},

  {0x1ae9,0x0310,"Wil6200 802.11ad Wireless Network Adapter"},

  {0x1aea,0x6601,"AU6601 PCI-E Flash card reader controller"},

  {0x1aed,0x1003,"ioDimm3 (v1.2)"},

  {0x1aed,0x1005,"ioDimm3"},

  {0x1aed,0x1006,"ioXtreme"},

  {0x1aed,0x1007,"ioXtreme Pro"},

  {0x1aed,0x1008,"ioXtreme-2"},

  {0x1aed,0x2001,"ioDrive2"},

  {0x1aed,0x3001,"ioMemory FHHL"},

  {0x1aed,0x3002,"ioMemory HHHL"},

  {0x1aed,0x3003,"ioMemory Mezzanine"},

  {0x1af4,0x1000,"Virtio network device"},

  {0x1af4,0x1001,"Virtio block device"},

  {0x1af4,0x1002,"Virtio memory balloon"},

  {0x1af4,0x1003,"Virtio console"},

  {0x1af4,0x1004,"Virtio SCSI"},

  {0x1af4,0x1005,"Virtio RNG"},

  {0x1af4,0x1009,"Virtio filesystem"},

  {0x1af4,0x1041,"Virtio network device"},

  {0x1af4,0x1042,"Virtio block device"},

  {0x1af4,0x1043,"Virtio console"},

  {0x1af4,0x1044,"Virtio RNG"},

  {0x1af4,0x1045,"Virtio memory balloon"},

  {0x1af4,0x1048,"Virtio SCSI"},

  {0x1af4,0x1049,"Virtio filesystem"},

  {0x1af4,0x1050,"Virtio GPU"},

  {0x1af4,0x1052,"Virtio input"},

  {0x1af4,0x1110,"Inter-VM shared memory"},

  {0x1b03,0x6100,"DXT/DXTPro Multiformat Broadcast HD/SD Encoder/Decoder/Transcoder"},

  {0x1b03,0x7000,"D7 Multiformat Broadcast HD/SD Encoder/Decoder/Transcoder"},

  {0x1b1a,0x0e70,"GRAPE"},

  {0x1b21,0x0611,"ASM1061 SATA IDE Controller"},

  {0x1b21,0x0612,"ASM1062 Serial ATA Controller"},

  {0x1b21,0x1042,"ASM1042 SuperSpeed USB Host Controller"},

  {0x1b21,0x1080,"ASM1083/1085 PCIe to PCI Bridge"},

  {0x1b21,0x1142,"ASM1042A USB 3.0 Host Controller"},

  {0x1b21,0x1242,"ASM1142 USB 3.1 Host Controller"},

  {0x1b36,0x0001,"QEMU PCI-PCI bridge"},

  {0x1b36,0x0002,"QEMU PCI 16550A Adapter"},

  {0x1b36,0x0003,"QEMU PCI Dual-port 16550A Adapter"},

  {0x1b36,0x0004,"QEMU PCI Quad-port 16550A Adapter"},

  {0x1b36,0x0005,"QEMU PCI Test Device"},

  {0x1b36,0x0006,"PCI Rocker Ethernet switch device"},

  {0x1b36,0x0007,"PCI SD Card Host Controller Interface"},

  {0x1b36,0x0008,"QEMU PCIe Host bridge"},

  {0x1b36,0x0009,"QEMU PCI Expander bridge"},

  {0x1b36,0x000a,"PCI-PCI bridge (multiseat)"},

  {0x1b36,0x000b,"QEMU PCIe Expander bridge"},

  {0x1b36,0x000c,"QEMU PCIe Root port"},

  {0x1b36,0x000d,"QEMU XHCI Host Controller"},

  {0x1b36,0x0100,"QXL paravirtual graphic card"},

  {0x1b37,0x0001,"ADQ214"},

  {0x1b37,0x0003,"ADQ114"},

  {0x1b37,0x0005,"ADQ112"},

  {0x1b37,0x000e,"ADQ108"},

  {0x1b37,0x000f,"ADQDSP"},

  {0x1b37,0x0014,"ADQ412"},

  {0x1b37,0x0015,"ADQ212"},

  {0x1b37,0x001b,"SDR14"},

  {0x1b37,0x001c,"ADQ1600"},

  {0x1b37,0x001e,"ADQ208"},

  {0x1b37,0x001f,"DSU"},

  {0x1b37,0x0020,"ADQ14"},

  {0x1b37,0x0023,"ADQ7"},

  {0x1b37,0x2014,"TX320"},

  {0x1b37,0x2019,"S6000"},

  {0x1b39,0x0001,"S1120 PCIe Accelerator SSD"},

  {0x1b3a,0x7589,"HRED J2000 - JPEG 2000 Video Codec Device"},

  {0x1b3e,0x1fa8,"BYNET BIC2SE/X"},

  {0x1b47,0x0601,"NumaChip N601"},

  {0x1b47,0x0602,"NumaChip N602"},

  {0x1b4b,0x0640,"88SE9128 SATA III 6Gb/s RAID Controller"},

  {0x1b4b,0x9120,"88SE9120 SATA 6Gb/s Controller"},

  {0x1b4b,0x9123,"88SE9123 PCIe SATA 6.0 Gb/s controller"},

  {0x1b4b,0x9125,"88SE9125 PCIe SATA 6.0 Gb/s controller"},

  {0x1b4b,0x9128,"88SE9128 PCIe SATA 6 Gb/s RAID controller"},

  {0x1b4b,0x9130,"88SE9128 PCIe SATA 6 Gb/s RAID controller with HyperDuo"},

  {0x1b4b,0x9172,"88SE9172 SATA 6Gb/s Controller"},

  {0x1b4b,0x9178,"88SE9170 PCIe SATA 6Gb/s Controller"},

  {0x1b4b,0x917a,"88SE9172 SATA III 6Gb/s RAID Controller"},

  {0x1b4b,0x9183,"88SS9183 PCIe SSD Controller"},

  {0x1b4b,0x9192,"88SE9172 SATA III 6Gb/s RAID Controller"},

  {0x1b4b,0x91a0,"88SE912x SATA 6Gb/s Controller [IDE mode]"},

  {0x1b4b,0x91a4,"88SE912x IDE Controller"},

  {0x1b4b,0x9220,"88SE9220 PCIe 2.0 x2 2-port SATA 6 Gb/s RAID Controller"},

  {0x1b4b,0x9230,"88SE9230 PCIe SATA 6Gb/s Controller"},

  {0x1b4b,0x9235,"88SE9235 PCIe 2.0 x2 4-port SATA 6 Gb/s Controller"},

  {0x1b4b,0x9445,"88SE9445 PCIe 2.0 x4 4-Port SAS/SATA 6 Gbps RAID Controller"},

  {0x1b4b,0x9480,"88SE9480 SAS/SATA 6Gb/s RAID controller"},

  {0x1b4b,0x9485,"88SE9485 SAS/SATA 6Gb/s controller"},

  {0x1b55,0x18f6,"Dual DVB Universal CI card"},

  {0x1b55,0x18f7,"Dual DVB Universal CI card rev 1.4"},

  {0x1b55,0x2a2c,"Dual DVB-S2-CI card"},

  {0x1b55,0xe2e4,"Dual DVB-T/C-CI RF card"},

  {0x1b55,0xe5f4,"MPEG2 and H264 Encoder-Transcoder"},

  {0x1b55,0xf1c4,"Dual ASI-RX/TX-CI card"},

  {0x1b66,0x0007,"Delta-3G-elp-11 SDI I/O Board"},

  {0x1b6f,0x7023,"EJ168 USB 3.0 Host Controller"},

  {0x1b6f,0x7052,"EJ188/EJ198 USB 3.0 Host Controller"},

  {0x1b73,0x1000,"FL1000G USB 3.0 Host Controller"},

  {0x1b73,0x1009,"FL1009 USB 3.0 Host Controller"},

  {0x1b73,0x1100,"FL1100 USB 3.0 Host Controller"},

  {0x1b74,0x0115,"D115P/D115E Single-port E1/T1 card"},

  {0x1b74,0xd130,"D130P/D130E Single-port E1/T1 card (3rd GEN)"},

  {0x1b74,0xd210,"D210P/D210E Dual-port E1/T1 card(2nd generation)"},

  {0x1b74,0xd230,"D230 Dual-port E1/T1 card (2nd generation)"},

  {0x1b74,0xd410,"D410/430 Quad-port E1/T1 card"},

  {0x1b74,0xd430,"D410/430 Quad-port E1/T1 card"},

  {0x1b85,0x1041,"RevoDrive 3 X2 PCI-Express SSD 240 GB (Marvell Controller)"},

  {0x1b85,0x6018,"RD400/400A SSD"},

  {0x1b85,0x8788,"RevoDrive Hybrid"},

  {0x1b94,0xe400,"PX14400 Dual Xilinx Virtex5 based Digitizer"},

  {0x1bb0,0x0002,"OmniCube Accelerator OA-3000"},

  {0x1bb0,0x0010,"OmniCube Accelerator OA-3000-2"},

  {0x1bb1,0x005d,"Nytro PCIe Flash Storage"},

  {0x1bb1,0x0100,"Nytro Flash Storage"},

  {0x1bb3,0x4304,"BC-04120A MPEG4 4 port video encoder / decoder"},

  {0x1bb3,0x4309,"BC-08240A MPEG4 4 port video encoder / decoder"},

  {0x1bb3,0x4310,"BC-16480A MPEG4 16 port video encoder / decoder"},

  {0x1bb3,0x4e04,"BC-04120A 4 port MPEG4 video encoder / decoder"},

  {0x1bb3,0x4e09,"BC-08240A 8 port MPEG4 video encoder / decoder"},

  {0x1bb3,0x4e10,"BC-16480A 16 port MPEG4 video encoder / decoder"},

  {0x1bb3,0x5304,"BC-H04120A 4 port H.264 video and audio encoder / decoder"},

  {0x1bb3,0x5308,"BC-H08240A 8 port H.264 video and audio encoder / decoder"},

  {0x1bb3,0x5310,"BC-H16480A 16 port H.264 video and audio encoder / decoder"},

  {0x1bbf,0x0003,"MAX3"},

  {0x1bbf,0x0004,"MAX4"},

  {0x1bd0,0x1001,"Mx5 PMC/XMC Databus Interface Card"},

  {0x1bd0,0x1002,"PM1553-5 (PC/104+ MIL-STD-1553 Interface Card)"},

  {0x1bd0,0x1004,"AB3000 Series Rugged Computer"},

  {0x1bd0,0x1005,"PE1000 (Multi-Protocol PCIe/104 Interface Card)"},

  {0x1bd0,0x1101,"OmniBus II PCIe Multi-Protocol Interface Card"},

  {0x1bd0,0x1102,"OmniBusBox II Multi-Protocol Interface Core"},

  {0x1bd0,0x1103,"OmniBus II cPCIe/PXIe Multi-Protocol Interface Card"},

  {0x1bee,0x0003,"CAN-IB200/PCIe"},

  {0x1bef,0x0011,"MIPS SoC PCI Express Port"},

  {0x1bf4,0x0001,"SentinelEX"},

  {0x1c09,0x4254,"10G-PCIE3-8D-2S"},

  {0x1c09,0x4255,"10G-PCIE3-8D-Q"},

  {0x1c09,0x4256,"10G-PCIE3-8D-2S"},

  {0x1c09,0x4258,"10G-PCIE3-8E-2S Network Adapter"},

  {0x1c09,0x4260,"10G-PCIE3-8E-4S Network Adapter"},

  {0x1c09,0x4261,"10G-PCIE3-8E-4S Network Adapter"},

  {0x1c09,0x4262,"10G-PCIE3-8E-4S Network Adapter"},

  {0x1c09,0x4263,"10G-PCIE3-8E-4S Network Adapter"},

  {0x1c09,0x4264,"10G-PCIE3-8E-2S Network Adapter"},

  {0x1c09,0x4265,"10G-PCIE3-8E-2S Network Adapter"},

  {0x1c1c,0x0001,"82C101"},

  {0x1c28,0x0122,"M6e PCI Express SSD [Marvell 88SS9183]"},

  {0x1c2c,0x000a,"Capture"},

  {0x1c2c,0x000f,"SmartNIC"},

  {0x1c2c,0x00a0,"FBC4G Capture 4x1Gb"},

  {0x1c2c,0x00a1,"FBC4XG Capture 4x10Gb"},

  {0x1c2c,0x00a2,"FBC8XG Capture 8x10Gb"},

  {0x1c2c,0x00a3,"FBC2XG Capture 2x10Gb"},

  {0x1c2c,0x00a4,"FBC4XGG3 Capture 4x10Gb"},

  {0x1c2c,0x00a5,"FBC2XLG Capture 2x40Gb"},

  {0x1c2c,0x00a6,"FBC1CG Capture 1x100Gb"},

  {0x1c2c,0x00a9,"FBC2XGHH Capture 2x10Gb"},

  {0x1c2c,0x00ad,"FBC2CGG3HL Capture 2x200Gb"},

  {0x1c2c,0x00af,"Capture slave device"},

  {0x1c2c,0xa001,"FBC2CGG3 Capture 2x200Gb"},

  {0x1c3b,0x0200,"Telas2"},

  {0x1c3b,0x0300,"Telas 2.V"},

  {0x1c44,0x8000,"8000 Storage IO Controller"},

  {0x1c58,0x0003,"Ultrastar SN100 Series NVMe SSD"},

  {0x1c5f,0x0540,"PBlaze4 NVMe SSD"},

  {0x1c63,0x0008,"K1927BB1Ya [EC8430] Angara Interconnection Network Adapter"},

  {0x1c7e,0x0200,"zFAS Debug Port"},

  {0x1c7f,0x5100,"EB5100"},

  {0x1c8a,0x0001,"Hunter PCI Express"},

  {0x1cc5,0x0100,"CAN-PCIe-02"},

  {0x1cc7,0x0200,"RMS-200"},

  {0x1cc7,0x0250,"RMS-250"},

  {0x1cd2,0x0301,"Simulyzer-RT CompactPCI Serial DIO-1 card"},

  {0x1cd2,0x0302,"Simulyzer-RT CompactPCI Serial PSI5-ECU-1 card"},

  {0x1cd2,0x0303,"Simulyzer-RT CompactPCI Serial PSI5-SIM-1 card"},

  {0x1cd2,0x0304,"Simulyzer-RT CompactPCI Serial PWR-ANA-1 card"},

  {0x1cd2,0x0305,"Simulyzer-RT CompactPCI Serial CAN-1 card"},

  {0x1cd7,0x0010,"Pro Capture Endpoint"},

  {0x1ce4,0x0001,"ExaNIC X4"},

  {0x1ce4,0x0002,"ExaNIC X2"},

  {0x1ce4,0x0003,"ExaNIC X10"},

  {0x1ce4,0x0004,"ExaNIC X10-GM"},

  {0x1ce4,0x0005,"ExaNIC X40"},

  {0x1ce4,0x0006,"ExaNIC X10-HPT"},

  {0x1ce4,0x0007,"ExaNIC X40"},

  {0x1d18,0x0001,"Fireface UFX+"},

  {0x1d1d,0x1f1f,"QEMU NVM Express LightNVM Controller"},

  {0x1d1d,0x2807,"8800 series NVMe SSD"},

  {0x1d26,0x0040,"Turbocard2 Accelerator"},

  {0x1d26,0x0080,"Open Network Interface Card 80G"},

  {0x1d26,0x00c0,"Turbocard3 Accelerator"},

  {0x1d26,0xe004,"AB01/EMB01 Development Board"},

  {0x1d44,0xa400,"PM2x24/PM3224"},

  {0x1d65,0x04de,"Taurus/McKinley"},

  {0x1d6c,0x1001,"A5PL-E1"},

  {0x1d6c,0x1002,"A5PL-E7"},

  {0x1d6c,0x1003,"S5PEDS-AB"},

  {0x1d6c,0x1004,"KC705-K325"},

  {0x1d6c,0x1005,"ZC706-Z045"},

  {0x1d6c,0x1006,"KCU105-KU040"},

  {0x1d6c,0x1007,"XUSP3S-VU095 [Jasper]"},

  {0x1d6c,0x1008,"XUSPL4-VU065 [Mustang UltraScale]"},

  {0x1d6c,0x1009,"XUSPL4-VU3P [Mustang UltraScale+]"},

  {0x1d6c,0x100a,"A10PL4-A10GX115"},

  {0x1d6c,0x100b,"K35-2SFP"},

  {0x1d6c,0x100c,"K35-4SFP"},

  {0x1d6c,0x100d,"AR-ARKA-FX0 [Arkville 32B DPDK Data Mover]"},

  {0x1d6c,0x100e,"AR-ARKA-FX1 [Arkville 64B DPDK Data Mover]"},

  {0x1d6c,0x4200,"A5PL-E1-10GETI [10 GbE Ethernet Traffic Instrument]"},

  {0x1de1,0x0391,"TRM-S1040 [DC-315 / DC-395 series]"},

  {0x1de1,0x2020,"DC-390"},

  {0x1de1,0x690c,"690c"},

  {0x1de1,0xdc29,"DC290"},

  {0x1fc0,0x0300,"E2200 Dual E1/Rawpipe Card"},

  {0x1fc0,0x0301,"C5400 SHDSL/E1 Card"},

  {0x1fc1,0x000d,"IBA6110 InfiniBand HCA"},

  {0x1fc1,0x0010,"IBA6120 InfiniBand HCA"},

  {0x1fc9,0x3009,"10-Giga TOE SmartNIC"},

  {0x1fc9,0x3010,"10-Giga TOE SmartNIC"},

  {0x1fc9,0x3014,"10-Giga TOE SmartNIC 2-Port"},

  {0x1fc9,0x3110,"10-Giga TOE Single Port SmartNIC"},

  {0x1fc9,0x3114,"10-Giga TOE Dual Port Low Profile SmartNIC"},

  {0x1fc9,0x3310,"10-Giga TOE SFP+ Single Port SmartNIC"},

  {0x1fc9,0x3314,"10-Giga TOE Dual Port Low Profile SmartNIC"},

  {0x1fc9,0x4010,"TN4010 Clean SROM"},

  {0x1fc9,0x4020,"TN9030 10GbE CX4 Ethernet Adapter"},

  {0x1fc9,0x4022,"TN9310 10GbE SFP+ Ethernet Adapter"},

  {0x1fc9,0x4024,"TN9210 10GBase-T Ethernet Adapter"},

  {0x1fc9,0x4025,"TN9510 10GBase-T/NBASE-T Ethernet Adapter"},

  {0x1fc9,0x4026,"TN9610 10GbE SFP+ Ethernet Adapter"},

  {0x1fc9,0x4027,"TN9710P 10GBase-T/NBASE-T Ethernet Adapter"},

  {0x1fc9,0x4527,"TN9710Q 5GBase-T/NBASE-T Ethernet Adapter"},

  {0x1fcc,0xf416,"MS416"},

  {0x1fcc,0xfb01,"MH4LM"},

  {0x1fce,0x0001,"Spectrum Analyzer PC Card (SAgE)"},

  {0x1fd4,0x0001,"Matrix multiport serial adapter"},

  {0x1fd4,0x1999,"Multiport serial controller"},

  {0x2000,0x2800,"SmartPCI2800 V.92 PCI Soft DFT"},

  {0x2003,0x8800,"LM-I56N"},

  {0x2348,0x2010,"8142 100VG/AnyLAN"},

  {0x2955,0x6e61,"OHCI USB 1.1 controller"},

  {0x31ab,0x1faa,"ZEW1602 802.11b/g Wireless Adapter"},

  {0x3388,0x0013,"HiNT HC4 PCI to ISDN bridge, Multimedia audio controller"},

  {0x3388,0x0014,"HiNT HC4 PCI to ISDN bridge, Network controller"},

  {0x3388,0x0020,"HB6 Universal PCI-PCI bridge (transparent mode)"},

  {0x3388,0x0021,"HB6 Universal PCI-PCI bridge (non-transparent mode)"},

  {0x3388,0x0022,"HiNT HB4 PCI-PCI Bridge (PCI6150)"},

  {0x3388,0x0026,"HB2 PCI-PCI Bridge"},

  {0x3388,0x1014,"AudioTrak Maya"},

  {0x3388,0x1018,"Audiotrak INCA88"},

  {0x3388,0x1019,"Miditrak 2120"},

  {0x3388,0x101a,"E.Band [AudioTrak Inca88]"},

  {0x3388,0x101b,"E.Band [AudioTrak Inca88]"},

  {0x3388,0x8011,"VXPro II Chipset"},

  {0x3388,0x8012,"VXPro II Chipset"},

  {0x3388,0x8013,"VXPro II IDE"},

  {0x3388,0xa103,"Blackmagic Design DeckLink HD Pro"},

  {0x3442,0x1783,"AS-i 3.0 cPCI Master"},

  {0x3442,0x1922,"AS-i 3.0 PCI Master"},

  {0x37d9,0x1138,"SCHD-PH-8 Phase detector"},

  {0x37d9,0x1140,"VR-12-PCI"},

  {0x37d9,0x1141,"PCI-485(422)"},

  {0x37d9,0x1142,"PCI-CAN2"},

  {0x3d3d,0x0001,"GLINT 300SX"},

  {0x3d3d,0x0002,"GLINT 500TX"},

  {0x3d3d,0x0003,"GLINT Delta"},

  {0x3d3d,0x0004,"Permedia"},

  {0x3d3d,0x0005,"Permedia"},

  {0x3d3d,0x0006,"GLINT MX"},

  {0x3d3d,0x0007,"3D Extreme"},

  {0x3d3d,0x0008,"GLINT Gamma G1"},

  {0x3d3d,0x0009,"Permedia II 2D+3D"},

  {0x3d3d,0x000a,"GLINT R3"},

  {0x3d3d,0x000c,"GLINT R3 [Oxygen VX1]"},

  {0x3d3d,0x000d,"GLint R4 rev A"},

  {0x3d3d,0x000e,"GLINT Gamma G2"},

  {0x3d3d,0x0011,"GLint R4 rev B"},

  {0x3d3d,0x0012,"GLint R5 rev A"},

  {0x3d3d,0x0013,"GLint R5 rev B"},

  {0x3d3d,0x0020,"VP10 visual processor"},

  {0x3d3d,0x0022,"VP10 visual processor"},

  {0x3d3d,0x0024,"VP9 visual processor"},

  {0x3d3d,0x002c,"Wildcat Realizm 100/200"},

  {0x3d3d,0x0030,"Wildcat Realizm 800"},

  {0x3d3d,0x0032,"Wildcat Realizm 500"},

  {0x3d3d,0x0100,"Permedia II 2D+3D"},

  {0x3d3d,0x07a1,"Wildcat III 6210"},

  {0x3d3d,0x07a2,"Sun XVR-500 Graphics Accelerator"},

  {0x3d3d,0x07a3,"Wildcat IV 7210"},

  {0x3d3d,0x1004,"Permedia"},

  {0x3d3d,0x3d04,"Permedia"},

  {0x3d3d,0xffff,"Glint VGA"},

  {0x4005,0x0300,"ALS300 PCI Audio Device"},

  {0x4005,0x0308,"ALS300+ PCI Audio Device"},

  {0x4005,0x0309,"PCI Input Controller"},

  {0x4005,0x1064,"ALG-2064"},

  {0x4005,0x2064,"ALG-2064i"},

  {0x4005,0x2128,"ALG-2364A GUI Accelerator"},

  {0x4005,0x2301,"ALG-2301"},

  {0x4005,0x2302,"ALG-2302"},

  {0x4005,0x2303,"AVG-2302 GUI Accelerator"},

  {0x4005,0x2364,"ALG-2364A"},

  {0x4005,0x2464,"ALG-2464"},

  {0x4005,0x2501,"ALG-2564A/25128A"},

  {0x4005,0x4000,"ALS4000 Audio Chipset"},

  {0x4005,0x4710,"ALC200/200P"},

  {0x4033,0x1360,"RTL8139 Ethernet"},

  {0x4040,0x0001,"NXB-10GXSR 10-Gigabit Ethernet PCIe Adapter with SR-XFP optical interface"},

  {0x4040,0x0002,"NXB-10GCX4 10-Gigabit Ethernet PCIe Adapter with CX4 copper interface"},

  {0x4040,0x0003,"NXB-4GCU Quad Gigabit Ethernet PCIe Adapter with 1000-BASE-T interface"},

  {0x4040,0x0004,"BladeCenter-H 10-Gigabit Ethernet High Speed Daughter Card"},

  {0x4040,0x0005,"NetXen Dual Port 10GbE Multifunction Adapter for c-Class"},

  {0x4040,0x0024,"XG Mgmt"},

  {0x4040,0x0025,"XG Mgmt"},

  {0x4040,0x0100,"NX3031 Multifunction 1/10-Gigabit Server Adapter"},

  {0x4144,0x0044,"ADM-XRCIIPro"},

  {0x4150,0x0001,"PCI32TLITE FILSTRUP1 PCI to VME Bridge Controller"},

  {0x4150,0x0006,"PCI32TLITE UART 16550 Opencores"},

  {0x4150,0x0007,"PCI32TLITE CAN Controller Opencores"},

  {0x416c,0x0100,"AladdinCARD"},

  {0x416c,0x0200,"CPC"},

  {0x4348,0x2273,"CH351 PCI Dual Serial Port Controller"},

  {0x4348,0x3253,"CH352 PCI Dual Serial Port Controller"},

  {0x4348,0x3453,"CH353 PCI Quad Serial Port Controller"},

  {0x4348,0x5053,"CH352 PCI Serial and Parallel Port Controller"},

  {0x4348,0x7053,"CH353 PCI Dual Serial and Parallel Ports Controller"},

  {0x4348,0x7073,"CH356 PCI Quad Serial and Parallel Ports Controller"},

  {0x4348,0x7173,"CH355 PCI Quad Serial Port Controller"},

  {0x4444,0x0016,"iTVC16 (CX23416) Video Decoder"},

  {0x4444,0x0803,"iTVC15 (CX23415) Video Decoder"},

  {0x4624,0xadc1,"ADC200ME High speed ADC"},

  {0x4624,0xde01,"DL200ME High resolution delay line PCI based card"},

  {0x4624,0xde02,"DL200ME Middle resolution delay line PCI based card"},

  {0x4916,0x1960,"RedCreek PCI adapter"},

  {0x494f,0x0508,"PCI-IDO-16A FET Output Card"},

  {0x494f,0x0518,"PCI-IDO-32A FET Output Card"},

  {0x494f,0x0520,"PCI-IDO-48 FET Output Card"},

  {0x494f,0x0521,"PCI-IDO-48A FET Output Card"},

  {0x494f,0x0703,"PCIe-RO-4 Electromechanical Relay Output Card"},

  {0x494f,0x07d0,"PCIe-IDO-24 FET Output Card"},

  {0x494f,0x0920,"PCI-IDI-48 Isolated Digital Input Card"},

  {0x494f,0x0bd0,"PCIe-IDI-24 Isolated Digital Input Card"},

  {0x494f,0x0c50,"PCI-DIO-24H 1x 8255 Digital Input / Output Card"},

  {0x494f,0x0c51,"PCI-DIO-24D 1x 8255 Digital Input / Output Card"},

  {0x494f,0x0c52,"PCIe-DIO-24 1x 8255 Digital Input / Output Card"},

  {0x494f,0x0c53,"PCIe-DIO-24H 8255 Digital Input / Output Card"},

  {0x494f,0x0c57,"mPCIe-DIO-24 8255 Digital Input / Output Card"},

  {0x494f,0x0c60,"PCI-DIO-48H 8255 Digital Input / Output Card"},

  {0x494f,0x0c61,"PCIe-DIO-48 8255 Digital Input / Output Card"},

  {0x494f,0x0c62,"P104-DIO-48 8255 Digital Input / Output Card"},

  {0x494f,0x0c68,"PCI-DIO-72 8255 Digital Input / Output Card"},

  {0x494f,0x0c69,"P104-DIO-96 8255 Digital Input / Output Card"},

  {0x494f,0x0c70,"PCI-DIO-96 8255 Digital Input / Output Card"},

  {0x494f,0x0c78,"PCI-DIO-120 8255 Digital Input / Output Card"},

  {0x494f,0x0dc8,"PCI-IDIO-16 Isolated Digital Input / FET Output Card"},

  {0x494f,0x0e50,"PCI-DIO-24S 8255 Digital Input / Output Card"},

  {0x494f,0x0e51,"PCI-DIO-24H(C) 8255 Digital Input / Output Card"},

  {0x494f,0x0e52,"PCI-DIO-24D(C) 8255 Digital Input / Output Card"},

  {0x494f,0x0e53,"PCIe-DIO-24S 8255 Digital Input / Output Card"},

  {0x494f,0x0e54,"PCIe-DIO-24HS 8255 Digital Input / Output Card"},

  {0x494f,0x0e55,"PCIe-DIO-24DC 8255 Digital Input / Output Card"},

  {0x494f,0x0e56,"PCIe-DIO-24DCS 8255 Digital Input / Output Card"},

  {0x494f,0x0e57,"mPCIe-DIO-24S 8255 Digital Input / Output Card"},

  {0x494f,0x0e60,"PCI-DIO-48S 2x 8255 Digital Input / Output Card"},

  {0x494f,0x0e61,"PCIe-DIO-48S 2x 8255 Digital Input / Output Card"},

  {0x494f,0x0e62,"P104-DIO-48S 2x 8255 Digital Input / Output Card"},

  {0x494f,0x0f00,"PCI-IIRO-8 Isolated Digital / Relay Output Card"},

  {0x494f,0x0f01,"LPCI-IIRO-8 Isolated Digital / Relay Output Card"},

  {0x494f,0x0f02,"PCIe-IIRO-8 Isolated Digital / Relay Output Card"},

  {0x494f,0x0f08,"PCI-IIRO-16 Isolated Digital / Relay Output Card"},

  {0x494f,0x0f09,"PCIe-IIRO-16 Isolated Digital / Relay Output Card"},

  {0x494f,0x0fc0,"PCIe-IDIO-12 Isolated Digital Input / FET Output Card"},

  {0x494f,0x0fc1,"PCIe-IDI-12 Isolated Digital Input Card"},

  {0x494f,0x0fc2,"PCIe-IDO-12 FET Output Card"},

  {0x494f,0x0fd0,"PCIe-IDIO-24 Isolated Digital Input / FET Output Card"},

  {0x494f,0x1050,"PCI-422/485-2 2x RS422/RS484 Card"},

  {0x494f,0x1051,"PCIe-COM-2SRJ 2x RS422/RS484 Card w/RJ45 Connectors"},

  {0x494f,0x1052,"104I-COM-2S 2x RS422/RS484 PCI/104 Board"},

  {0x494f,0x1053,"mPCIe-COM-2S 2x RS422/RS484 PCI Express Mini Card"},

  {0x494f,0x1058,"PCI-COM422/4 4x RS422 Card"},

  {0x494f,0x1059,"PCI-COM485/4 4x RS485 Card"},

  {0x494f,0x105a,"PCIe-COM422-4 4x RS422 Card"},

  {0x494f,0x105b,"PCIe-COM485-4 4x RS485 Card"},

  {0x494f,0x105c,"PCIe-COM-4SRJ 4x RS422/RS485 Card w/RJ45 Connectors"},

  {0x494f,0x105d,"104I-COM-4S 4x RS422/RS484 PCI/104 Board"},

  {0x494f,0x105e,"mPCIe-COM-4S 4x RS422/RS484 PCI Express Mini Card"},

  {0x494f,0x1068,"PCI-COM422/8 8x RS422 Card"},

  {0x494f,0x1069,"PCI-COM485/8 8x RS485 Card"},

  {0x494f,0x106a,"PCIe-COM422-8 8x RS422 Card"},

  {0x494f,0x106b,"PCIe-COM485-8 8x RS485 Card"},

  {0x494f,0x106c,"104I-COM-8S 8x RS422/RS485 PCI/104 Board"},

  {0x494f,0x1088,"PCI-COM232/1 1x RS232 Card"},

  {0x494f,0x1090,"PCI-COM232/2 2x RS232 Card"},

  {0x494f,0x1091,"PCIe-COM232-2RJ 2x RS232 Card w/RJ45 Connectors"},

  {0x494f,0x1093,"mPCIe-COM232-2 2x RS232 PCI Express Mini Card"},

  {0x494f,0x1098,"PCIe-COM232-4 4x RS232 Card"},

  {0x494f,0x1099,"PCIe-COM232-4RJ 4x RS232 Card w/RJ45 Connectors"},

  {0x494f,0x109b,"mPCIe-COM232-4 4x RS232 PCI Express Mini Card"},

  {0x494f,0x10a8,"P104-COM232-8 8x RS232 PC-104+ Board"},

  {0x494f,0x10a9,"PCIe-COM232-8 8x RS232 Card"},

  {0x494f,0x10c9,"PCI-COM-1S 1x RS422/RS485 Card"},

  {0x494f,0x10d0,"PCI-COM2S 2x RS422/RS485 Card"},

  {0x494f,0x10d1,"PCIe-COM-2SMRJ 2x RS232/RS422/RS485 Card w/RJ45 Connectors"},

  {0x494f,0x10d2,"104I-COM-2SM 2x RS232/RS422/RS485 PCI/104 Board"},

  {0x494f,0x10d3,"mPCIe-COM-2SM 2x RS232/RS422/RS485 PCI Express Mini Card"},

  {0x494f,0x10d8,"PCI-COM-4SM 4x RS232/RS422/RS485 Card"},

  {0x494f,0x10d9,"PCIe-COM-4SM 4x RS232/RS422/RS485 Card"},

  {0x494f,0x10da,"PCIe-COM-4SMRJ 4x RS232/RS422/RS485 Card w/RJ45 Connectors"},

  {0x494f,0x10db,"104I-COM-4SM 4x RS232/RS422/RS485 PCI/104 Board"},

  {0x494f,0x10dc,"mPCIe-COM-4SM 4x RS232/RS422/RS485 PCI Express Mini Card"},

  {0x494f,0x10e8,"PCI-COM-8SM 8x RS232/RS422/RS485 Card"},

  {0x494f,0x10e9,"PCIe-COM-8SM 8x RS232/RS422/RS485 Card"},

  {0x494f,0x10ea,"104I-COM-8SM 8x RS232/RS422/RS485 PCI-104 Board"},

  {0x494f,0x1108,"mPCIe-ICM485-1 1x Isolated RS485 PCI Express Mini Card"},

  {0x494f,0x1110,"mPCIe-ICM422-2 2x Isolated RS422 PCI Express Mini Card"},

  {0x494f,0x1111,"mPCIe-ICM485-2 2x Isolated RS485 PCI Express Mini Card"},

  {0x494f,0x1118,"mPCIe-ICM422-4 4x Isolated RS422 PCI Express Mini Card"},

  {0x494f,0x1119,"mPCIe-ICM485-4 4x Isolated RS485 PCI Express Mini Card"},

  {0x494f,0x1148,"PCI-ICM-1S 1x Isolated RS422/RS485 Card"},

  {0x494f,0x1150,"PCI-ICM-2S 2x Isolated RS422/RS485 Card"},

  {0x494f,0x1152,"PCIe-ICM-2S 2x Isolated RS422/RS485 Card"},

  {0x494f,0x1158,"PCI-ICM422/4 4x Isolated RS422 Card"},

  {0x494f,0x1159,"PCI-ICM485/4 4x Isolated RS485 Card"},

  {0x494f,0x115a,"PCIe-ICM-4S 4x Isolated RS422/RS485 Card"},

  {0x494f,0x1190,"PCIe-ICM232-2 2x Isolated RS232 Card"},

  {0x494f,0x1191,"mPCIe-ICM232-2 2x Isolated RS232 PCI Express Mini Card"},

  {0x494f,0x1198,"PCIe-ICM232-4 4x Isolated RS232 Card"},

  {0x494f,0x1199,"mPCIe-ICM232-4 4x Isolated RS422 PCI Express Mini Card"},

  {0x494f,0x11d0,"PCIe-ICM-2SM 2x Isolated RS232/RS422/RS485 Card"},

  {0x494f,0x11d8,"PCIe-ICM-4SM 4x Isolated RS232/RS422/RS485 Card"},

  {0x494f,0x1250,"PCI-WDG-2S Watchdog and 2x Serial Card"},

  {0x494f,0x12d0,"PCI-WDG-IMPAC"},

  {0x494f,0x2230,"PCI-QUAD-8 8x Quadrature Input Card"},

  {0x494f,0x2231,"PCI-QUAD-4 4x Quadrature Input Card"},

  {0x494f,0x22c0,"PCI-WDG-CSM Watchdog Card"},

  {0x494f,0x25c0,"P104-WDG-E Watchdog PC/104+ Board"},

  {0x494f,0x2c50,"PCI-DIO-96CT 96x Digital Input / Output Card"},

  {0x494f,0x2c58,"PCI-DIO-96C3 96x Digital Input / Output Card w/3x 8254 Counter Card"},

  {0x494f,0x2ee0,"PCIe-DIO24S-CTR12 24x Digital Input / Output Card w/4x 8254 Counter Card"},

  {0x494f,0x2fc0,"P104-WDG-CSM Watchdog PC/104+ Board"},

  {0x494f,0x2fc1,"P104-WDG-CSMA Advanced Watchdog PC/104+ Board"},

  {0x494f,0x5ed0,"PCI-DAC"},

  {0x494f,0x6c90,"PCI-DA12-2 2x 12-bit Analog Output Card"},

  {0x494f,0x6c98,"PCI-DA12-4 4x 12-bit Analog Output Card"},

  {0x494f,0x6ca0,"PCI-DA12-6 6x 12-bit Analog Output Card"},

  {0x494f,0x6ca8,"PCI-DA12-8 8x 12-bit Analog Output Card"},

  {0x494f,0x6ca9,"PCI-DA12-8V"},

  {0x494f,0x6cb0,"PCI-DA12-16 16x 12-bit Analog Output Card"},

  {0x494f,0x6cb1,"PCI-DA12-16V"},

  {0x494f,0x8ef0,"P104-FAS16-16"},

  {0x494f,0xaca8,"PCI-AI12-16 12-bit 100kHz Analog Input Card"},

  {0x494f,0xaca9,"PCI-AI12-16A 12-bit 100kHz Analog Input w/FIFO Card"},

  {0x494f,0xeca8,"PCI-AIO12-16 12-bit 100kHz Analog Input w/2x Analog Output and FIFO Card"},

  {0x494f,0xecaa,"PCI-A12-16A 12-bit 100kHz Analog Input w/2x Analog Output and FIFO Card"},

  {0x494f,0xece8,"LPCI-A16-16A 16-bit 500kHz Analog Input low-profile Card"},

  {0x494f,0xece9,"LPCI-AIO16A 16-bit 500kHz Analog Input low-profile Card"},

  {0x4a14,0x5000,"NV5000SC"},

  {0x4c53,0x0001,"PLUSTEST-MM device"},

  {0x4d51,0x0200,"MQ-200"},

  {0x4d56,0x0001,"[mvHYPERION-CLf/CLm] CameraLink PCI Express x4 Frame Grabber"},

  {0x4d56,0x0010,"[mvHYPERION-16R16/-32R16] 16 Video Channel PCI Express x4 Frame Grabber"},

  {0x4d56,0x0020,"[mvHYPERION-HD-SDI] HD-SDI PCI Express x4 Frame Grabber"},

  {0x4d56,0x0030,"[mvHYPERION-HD-SDI-Merger] HD-SDI PCI Express x4 Frame Grabber"},

  {0x4ddc,0x0100,"DD-42924I5-300 (ARINC 429 Data Bus)"},

  {0x4ddc,0x0801,"BU-65570I1 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0802,"BU-65570I2 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0811,"BU-65572I1 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0812,"BU-65572I2 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0881,"BU-65570T1 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0882,"BU-65570T2 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0891,"BU-65572T1 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0892,"BU-65572T2 MIL-STD-1553 Test and Simulation"},

  {0x4ddc,0x0901,"BU-65565C1 MIL-STD-1553 Data Bus"},

  {0x4ddc,0x0902,"BU-65565C2 MIL-STD-1553 Data Bus"},

  {0x4ddc,0x0903,"BU-65565C3 MIL-STD-1553 Data Bus"},

  {0x4ddc,0x0904,"BU-65565C4 MIL-STD-1553 Data Bus"},

  {0x4ddc,0x0b01,"BU-65569I1 MIL-STD-1553 Data Bus"},

  {0x4ddc,0x0b02,"BU-65569I2 MIL-STD-1553 Data Bus"},

  {0x4ddc,0x0b03,"BU-65569I3 MIL-STD-1553 Data Bus"},

  {0x4ddc,0x0b04,"BU-65569I4 MIL-STD-1553 Data Bus"},

  {0x5045,0x4243,"BLASTbus PCI Interface Card v1"},

  {0x5046,0x1001,"PCI Radio"},

  {0x5053,0x2010,"Daytona Audio Adapter"},

  {0x5145,0x3031,"Concert AudioPCI"},

  {0x5168,0x0300,"FlyDVB-S"},

  {0x5168,0x0301,"FlyDVB-T"},

  {0x5301,0x0001,"ProMotion aT3D"},

  {0x5333,0x0551,"Plato/PX (system)"},

  {0x5333,0x5631,"86c325 [ViRGE]"},

  {0x5333,0x8800,"86c866 [Vision 866]"},

  {0x5333,0x8801,"86c964 [Vision 964]"},

  {0x5333,0x8810,"86c764_0 [Trio 32 vers 0]"},

  {0x5333,0x8811,"86c764/765 [Trio32/64/64V+]"},

  {0x5333,0x8812,"86cM65 [Aurora64V+]"},

  {0x5333,0x8813,"86c764_3 [Trio 32/64 vers 3]"},

  {0x5333,0x8814,"86c767 [Trio 64UV+]"},

  {0x5333,0x8815,"86cM65 [Aurora 128]"},

  {0x5333,0x883d,"86c988 [ViRGE/VX]"},

  {0x5333,0x8870,"FireGL"},

  {0x5333,0x8880,"86c868 [Vision 868 VRAM] vers 0"},

  {0x5333,0x8881,"86c868 [Vision 868 VRAM] vers 1"},

  {0x5333,0x8882,"86c868 [Vision 868 VRAM] vers 2"},

  {0x5333,0x8883,"86c868 [Vision 868 VRAM] vers 3"},

  {0x5333,0x88b0,"86c928 [Vision 928 VRAM] vers 0"},

  {0x5333,0x88b1,"86c928 [Vision 928 VRAM] vers 1"},

  {0x5333,0x88b2,"86c928 [Vision 928 VRAM] vers 2"},

  {0x5333,0x88b3,"86c928 [Vision 928 VRAM] vers 3"},

  {0x5333,0x88c0,"86c864 [Vision 864 DRAM] vers 0"},

  {0x5333,0x88c1,"86c864 [Vision 864 DRAM] vers 1"},

  {0x5333,0x88c2,"86c864 [Vision 864-P DRAM] vers 2"},

  {0x5333,0x88c3,"86c864 [Vision 864-P DRAM] vers 3"},

  {0x5333,0x88d0,"86c964 [Vision 964 VRAM] vers 0"},

  {0x5333,0x88d1,"86c964 [Vision 964 VRAM] vers 1"},

  {0x5333,0x88d2,"86c964 [Vision 964-P VRAM] vers 2"},

  {0x5333,0x88d3,"86c964 [Vision 964-P VRAM] vers 3"},

  {0x5333,0x88f0,"86c968 [Vision 968 VRAM] rev 0"},

  {0x5333,0x88f1,"86c968 [Vision 968 VRAM] rev 1"},

  {0x5333,0x88f2,"86c968 [Vision 968 VRAM] rev 2"},

  {0x5333,0x88f3,"86c968 [Vision 968 VRAM] rev 3"},

  {0x5333,0x8900,"86c755 [Trio 64V2/DX]"},

  {0x5333,0x8901,"86c775/86c785 [Trio 64V2/DX or /GX]"},

  {0x5333,0x8902,"Plato/PX"},

  {0x5333,0x8903,"Trio 3D business multimedia"},

  {0x5333,0x8904,"86c365, 86c366 [Trio 3D]"},

  {0x5333,0x8905,"Trio 64V+ family"},

  {0x5333,0x8906,"Trio 64V+ family"},

  {0x5333,0x8907,"Trio 64V+ family"},

  {0x5333,0x8908,"Trio 64V+ family"},

  {0x5333,0x8909,"Trio 64V+ family"},

  {0x5333,0x890a,"Trio 64V+ family"},

  {0x5333,0x890b,"Trio 64V+ family"},

  {0x5333,0x890c,"Trio 64V+ family"},

  {0x5333,0x890d,"Trio 64V+ family"},

  {0x5333,0x890e,"Trio 64V+ family"},

  {0x5333,0x890f,"Trio 64V+ family"},

  {0x5333,0x8a01,"86c375 [ViRGE/DX] or 86c385 [ViRGE/GX]"},

  {0x5333,0x8a10,"ViRGE/GX2"},

  {0x5333,0x8a13,"86c360 [Trio 3D/1X], 86c362, 86c368 [Trio 3D/2X]"},

  {0x5333,0x8a20,"86c794 [Savage 3D]"},

  {0x5333,0x8a21,"86c390 [Savage 3D/MV]"},

  {0x5333,0x8a22,"Savage 4"},

  {0x5333,0x8a23,"Savage 4"},

  {0x5333,0x8a25,"ProSavage PM133"},

  {0x5333,0x8a26,"ProSavage KM133"},

  {0x5333,0x8c00,"ViRGE/M3"},

  {0x5333,0x8c01,"ViRGE/MX"},

  {0x5333,0x8c02,"ViRGE/MX+"},

  {0x5333,0x8c03,"ViRGE/MX+MV"},

  {0x5333,0x8c10,"86C270-294 [SavageMX-MV]"},

  {0x5333,0x8c11,"82C270-294 [SavageMX]"},

  {0x5333,0x8c12,"86C270-294 [SavageIX-MV]"},

  {0x5333,0x8c13,"86C270-294 [SavageIX]"},

  {0x5333,0x8c22,"SuperSavage MX/128"},

  {0x5333,0x8c24,"SuperSavage MX/64"},

  {0x5333,0x8c26,"SuperSavage MX/64C"},

  {0x5333,0x8c2a,"SuperSavage IX/128 SDR"},

  {0x5333,0x8c2b,"SuperSavage IX/128 DDR"},

  {0x5333,0x8c2c,"SuperSavage IX/64 SDR"},

  {0x5333,0x8c2d,"SuperSavage IX/64 DDR"},

  {0x5333,0x8c2e,"SuperSavage IX/C SDR"},

  {0x5333,0x8c2f,"SuperSavage IX/C DDR"},

  {0x5333,0x8d01,"86C380 [ProSavageDDR K4M266]"},

  {0x5333,0x8d02,"VT8636A [ProSavage KN133] AGP4X VGA Controller (TwisterK)"},

  {0x5333,0x8d03,"VT8751 [ProSavageDDR P4M266]"},

  {0x5333,0x8d04,"VT8375 [ProSavage8 KM266/KL266]"},

  {0x5333,0x8e00,"DeltaChrome"},

  {0x5333,0x8e26,"ProSavage"},

  {0x5333,0x8e40,"2300E Graphics Processor"},

  {0x5333,0x8e48,"Matrix [Chrome S25 / S27]"},

  {0x5333,0x9043,"Chrome 430 GT"},

  {0x5333,0x9045,"Chrome 430 ULP / 435 ULP / 440 GTX"},

  {0x5333,0x9060,"Chrome 530 GT"},

  {0x5333,0x9102,"86C410 [Savage 2000]"},

  {0x5333,0xca00,"SonicVibes"},

  {0x544c,0x0350,"TL880-based HDTV/ATSC tuner"},

  {0x544d,0x6178,"DVB-S2 4 Tuner PCIe Card"},

  {0x5452,0x3443,"RTC4"},

  {0x5455,0x4458,"S5933"},

  {0x5544,0x0001,"I-30xx Scanner Interface"},

  {0x5555,0x0003,"TURBOstor HFP-832 [HiPPI NIC]"},

  {0x5555,0x3b00,"Epiphan DVI2PCIe video capture card"},

  {0x5851,0x8008,"tDVR8008 8-port video capture card"},

  {0x5851,0x8016,"tDVR8016 16-chan video capture card"},

  {0x5851,0x8032,"tDVR8032 32-chan video capture card"},

  {0x5853,0x0001,"Xen Platform Device"},

  {0x5853,0xc000,"Citrix XenServer PCI Device for Windows Update"},

  {0x5853,0xc110,"Virtualized HID"},

  {0x5853,0xc147,"Virtualized Graphics Device"},

  {0x631c,0x1652,"PXI-1652 Signal Generator"},

  {0x631c,0x2504,"PXI-2504 Signal Interrogator"},

  {0x6374,0x6773,"GPPCI"},

  {0x6549,0x1200,"TERA1200 PC-over-IP Host"},

  {0x6666,0x0001,"PCCOM4"},

  {0x6666,0x0002,"PCCOM8"},

  {0x6666,0x0004,"PCCOM2"},

  {0x6666,0x0101,"PCI 8255/8254 I/O Card"},

  {0x6666,0x0200,"12-bit AD/DA Card"},

  {0x6666,0x0201,"14-bit AD/DA Card"},

  {0x6666,0x1011,"Industrial Card"},

  {0x6666,0x1021,"8 photo couple 8 relay Card"},

  {0x6666,0x1022,"4 photo couple 4 relay Card"},

  {0x6666,0x1025,"16 photo couple 16 relay Card"},

  {0x6666,0x4000,"WatchDog Card"},

  {0x6688,0x1200,"CooVox TDM Analog Module"},

  {0x6688,0x1400,"CooVOX TDM GSM Module"},

  {0x6688,0x1600,"CooVOX TDM E1/T1 Module"},

  {0x6688,0x1800,"CooVOX TDM BRI Module"},

  {0x7063,0x2000,"HD-2000"},

  {0x7063,0x3000,"HD-3000"},

  {0x7063,0x5500,"HD5500 HDTV"},

  {0x7401,0xe100,"PTP3100 PCIe PTP Slave Clock"},

  {0x8008,0x0010,"WDOG1 [PCI-Watchdog 1]"},

  {0x8008,0x0011,"PWDOG2 [PCI-Watchdog 2]"},

  {0x8008,0x0015,"Clock77/PCI & Clock77/PCIe (DCF-77 receiver)"},

  {0x8086,0x0007,"82379AB"},

  {0x8086,0x0008,"Extended Express System Support Controller"},

  {0x8086,0x0039,"21145 Fast Ethernet"},

  {0x8086,0x0040,"Core Processor DRAM Controller"},

  {0x8086,0x0041,"Core Processor PCI Express x16 Root Port"},

  {0x8086,0x0042,"Core Processor Integrated Graphics Controller"},

  {0x8086,0x0043,"Core Processor Secondary PCI Express Root Port"},

  {0x8086,0x0044,"Core Processor DRAM Controller"},

  {0x8086,0x0045,"Core Processor PCI Express x16 Root Port"},

  {0x8086,0x0046,"Core Processor Integrated Graphics Controller"},

  {0x8086,0x0047,"Core Processor Secondary PCI Express Root Port"},

  {0x8086,0x0048,"Core Processor DRAM Controller"},

  {0x8086,0x0049,"Core Processor PCI Express x16 Root Port"},

  {0x8086,0x004a,"Core Processor Integrated Graphics Controller"},

  {0x8086,0x004b,"Core Processor Secondary PCI Express Root Port"},

  {0x8086,0x0050,"Core Processor Thermal Management Controller"},

  {0x8086,0x0069,"Core Processor DRAM Controller"},

  {0x8086,0x0082,"Centrino Advanced-N 6205 [Taylor Peak]"},

  {0x8086,0x0083,"Centrino Wireless-N 1000 [Condor Peak]"},

  {0x8086,0x0084,"Centrino Wireless-N 1000 [Condor Peak]"},

  {0x8086,0x0085,"Centrino Advanced-N 6205 [Taylor Peak]"},

  {0x8086,0x0087,"Centrino Advanced-N + WiMAX 6250 [Kilmer Peak]"},

  {0x8086,0x0089,"Centrino Advanced-N + WiMAX 6250 [Kilmer Peak]"},

  {0x8086,0x008a,"Centrino Wireless-N 1030 [Rainbow Peak]"},

  {0x8086,0x008b,"Centrino Wireless-N 1030 [Rainbow Peak]"},

  {0x8086,0x0090,"Centrino Advanced-N 6230 [Rainbow Peak]"},

  {0x8086,0x0091,"Centrino Advanced-N 6230 [Rainbow Peak]"},

  {0x8086,0x0100,"2nd Generation Core Processor Family DRAM Controller"},

  {0x8086,0x0101,"Xeon E3-1200/2nd Generation Core Processor Family PCI Express Root Port"},

  {0x8086,0x0102,"2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0104,"2nd Generation Core Processor Family DRAM Controller"},

  {0x8086,0x0105,"Xeon E3-1200/2nd Generation Core Processor Family PCI Express Root Port"},

  {0x8086,0x0106,"2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0108,"Xeon E3-1200 Processor Family DRAM Controller"},

  {0x8086,0x0109,"Xeon E3-1200/2nd Generation Core Processor Family PCI Express Root Port"},

  {0x8086,0x010a,"Xeon E3-1200 Processor Family Integrated Graphics Controller"},

  {0x8086,0x010b,"Xeon E3-1200/2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x010c,"Xeon E3-1200/2nd Generation Core Processor Family DRAM Controller"},

  {0x8086,0x010d,"Xeon E3-1200/2nd Generation Core Processor Family PCI Express Root Port"},

  {0x8086,0x010e,"Xeon E3-1200/2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0112,"2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0116,"2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0122,"2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0126,"2nd Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0150,"Xeon E3-1200 v2/3rd Gen Core processor DRAM Controller"},

  {0x8086,0x0151,"Xeon E3-1200 v2/3rd Gen Core processor PCI Express Root Port"},

  {0x8086,0x0152,"Xeon E3-1200 v2/3rd Gen Core processor Graphics Controller"},

  {0x8086,0x0153,"3rd Gen Core Processor Thermal Subsystem"},

  {0x8086,0x0154,"3rd Gen Core processor DRAM Controller"},

  {0x8086,0x0155,"Xeon E3-1200 v2/3rd Gen Core processor PCI Express Root Port"},

  {0x8086,0x0156,"3rd Gen Core processor Graphics Controller"},

  {0x8086,0x0158,"Xeon E3-1200 v2/Ivy Bridge DRAM Controller"},

  {0x8086,0x0159,"Xeon E3-1200 v2/3rd Gen Core processor PCI Express Root Port"},

  {0x8086,0x015a,"Xeon E3-1200 v2/Ivy Bridge Graphics Controller"},

  {0x8086,0x015c,"Xeon E3-1200 v2/3rd Gen Core processor DRAM Controller"},

  {0x8086,0x015d,"Xeon E3-1200 v2/3rd Gen Core processor PCI Express Root Port"},

  {0x8086,0x015e,"Xeon E3-1200 v2/3rd Gen Core processor Graphics Controller"},

  {0x8086,0x0162,"Xeon E3-1200 v2/3rd Gen Core processor Graphics Controller"},

  {0x8086,0x0166,"3rd Gen Core processor Graphics Controller"},

  {0x8086,0x016a,"Xeon E3-1200 v2/3rd Gen Core processor Graphics Controller"},

  {0x8086,0x0172,"Xeon E3-1200 v2/3rd Gen Core processor Graphics Controller"},

  {0x8086,0x0176,"3rd Gen Core processor Graphics Controller"},

  {0x8086,0x0309,"80303 I/O Processor PCI-to-PCI Bridge"},

  {0x8086,0x030d,"80312 I/O Companion Chip PCI-to-PCI Bridge"},

  {0x8086,0x0326,"6700/6702PXH I/OxAPIC Interrupt Controller A"},

  {0x8086,0x0327,"6700PXH I/OxAPIC Interrupt Controller B"},

  {0x8086,0x0329,"6700PXH PCI Express-to-PCI Bridge A"},

  {0x8086,0x032a,"6700PXH PCI Express-to-PCI Bridge B"},

  {0x8086,0x032c,"6702PXH PCI Express-to-PCI Bridge A"},

  {0x8086,0x0330,"80332 [Dobson] I/O processor (A-Segment Bridge)"},

  {0x8086,0x0331,"80332 [Dobson] I/O processor (A-Segment IOAPIC)"},

  {0x8086,0x0332,"80332 [Dobson] I/O processor (B-Segment Bridge)"},

  {0x8086,0x0333,"80332 [Dobson] I/O processor (B-Segment IOAPIC)"},

  {0x8086,0x0334,"80332 [Dobson] I/O processor (ATU)"},

  {0x8086,0x0335,"80331 [Lindsay] I/O processor (PCI-X Bridge)"},

  {0x8086,0x0336,"80331 [Lindsay] I/O processor (ATU)"},

  {0x8086,0x0340,"41210 [Lanai] Serial to Parallel PCI Bridge (A-Segment Bridge)"},

  {0x8086,0x0341,"41210 [Lanai] Serial to Parallel PCI Bridge (B-Segment Bridge)"},

  {0x8086,0x0370,"80333 Segment-A PCIe Express to PCI-X bridge"},

  {0x8086,0x0371,"80333 A-Bus IOAPIC"},

  {0x8086,0x0372,"80333 Segment-B PCIe Express to PCI-X bridge"},

  {0x8086,0x0373,"80333 B-Bus IOAPIC"},

  {0x8086,0x0374,"80333 Address Translation Unit"},

  {0x8086,0x0402,"Xeon E3-1200 v3/4th Gen Core Processor Integrated Graphics Controller"},

  {0x8086,0x0406,"4th Gen Core Processor Integrated Graphics Controller"},

  {0x8086,0x040a,"Xeon E3-1200 v3 Processor Integrated Graphics Controller"},

  {0x8086,0x0412,"Xeon E3-1200 v3/4th Gen Core Processor Integrated Graphics Controller"},

  {0x8086,0x0416,"4th Gen Core Processor Integrated Graphics Controller"},

  {0x8086,0x041a,"Xeon E3-1200 v3 Processor Integrated Graphics Controller"},

  {0x8086,0x041e,"4th Generation Core Processor Family Integrated Graphics Controller"},

  {0x8086,0x0434,"DH89XXCC Series QAT"},

  {0x8086,0x0435,"DH895XCC Series QAT"},

  {0x8086,0x0436,"DH8900CC Null Device"},

  {0x8086,0x0438,"DH8900CC Series Gigabit Network Connection"},

  {0x8086,0x043a,"DH8900CC Series Gigabit Fiber Network Connection"},

  {0x8086,0x043c,"DH8900CC Series Gigabit Backplane Network Connection"},

  {0x8086,0x0440,"DH8900CC Series Gigabit SFP Network Connection"},

  {0x8086,0x0442,"DH89XXCC Series QAT Virtual Function"},

  {0x8086,0x0443,"DH895XCC Series QAT Virtual Function"},

  {0x8086,0x0482,"82375EB/SB PCI to EISA Bridge"},

  {0x8086,0x0483,"82424TX/ZX [Saturn] CPU to PCI bridge"},

  {0x8086,0x0484,"82378ZB/IB, 82379AB (SIO, SIO.A) PCI to ISA Bridge"},

  {0x8086,0x0486,"82425EX/ZX [Aries] PCIset with ISA bridge"},

  {0x8086,0x04a3,"82434LX/NX [Mercury/Neptune] Processor to PCI bridge"},

  {0x8086,0x04d0,"82437FX [Triton FX]"},

  {0x8086,0x0500,"E8870 Processor bus control"},

  {0x8086,0x0501,"E8870 Memory controller"},

  {0x8086,0x0502,"E8870 Scalability Port 0"},

  {0x8086,0x0503,"E8870 Scalability Port 1"},

  {0x8086,0x0510,"E8870IO Hub Interface Port 0 registers (8-bit compatibility port)"},

  {0x8086,0x0511,"E8870IO Hub Interface Port 1 registers"},

  {0x8086,0x0512,"E8870IO Hub Interface Port 2 registers"},

  {0x8086,0x0513,"E8870IO Hub Interface Port 3 registers"},

  {0x8086,0x0514,"E8870IO Hub Interface Port 4 registers"},

  {0x8086,0x0515,"E8870IO General SIOH registers"},

  {0x8086,0x0516,"E8870IO RAS registers"},

  {0x8086,0x0530,"E8870SP Scalability Port 0 registers"},

  {0x8086,0x0531,"E8870SP Scalability Port 1 registers"},

  {0x8086,0x0532,"E8870SP Scalability Port 2 registers"},

  {0x8086,0x0533,"E8870SP Scalability Port 3 registers"},

  {0x8086,0x0534,"E8870SP Scalability Port 4 registers"},

  {0x8086,0x0535,"E8870SP Scalability Port 5 registers"},

  {0x8086,0x0536,"E8870SP Interleave registers 0 and 1"},

  {0x8086,0x0537,"E8870SP Interleave registers 2 and 3"},

  {0x8086,0x0600,"RAID Controller"},

  {0x8086,0x061f,"80303 I/O Processor"},

  {0x8086,0x0700,"CE Media Processor A/V Bridge"},

  {0x8086,0x0701,"CE Media Processor NAND Flash Controller"},

  {0x8086,0x0703,"CE Media Processor Media Control Unit 1"},

  {0x8086,0x0704,"CE Media Processor Video Capture Interface"},

  {0x8086,0x0707,"CE Media Processor SPI Slave"},

  {0x8086,0x0708,"CE Media Processor 4100"},

  {0x8086,0x0800,"Moorestown SPI Ctrl 0"},

  {0x8086,0x0801,"Moorestown SPI Ctrl 1"},

  {0x8086,0x0802,"Moorestown I2C 0"},

  {0x8086,0x0803,"Moorestown I2C 1"},

  {0x8086,0x0804,"Moorestown I2C 2"},

  {0x8086,0x0805,"Moorestown Keyboard Ctrl"},

  {0x8086,0x0806,"Moorestown USB Ctrl"},

  {0x8086,0x0807,"Moorestown SD Host Ctrl 0"},

  {0x8086,0x0808,"Moorestown SD Host Ctrl 1"},

  {0x8086,0x0809,"Moorestown NAND Ctrl"},

  {0x8086,0x080a,"Moorestown Audio Ctrl"},

  {0x8086,0x080b,"Moorestown ISP"},

  {0x8086,0x080c,"Moorestown Security Controller"},

  {0x8086,0x080d,"Moorestown External Displays"},

  {0x8086,0x080e,"Moorestown SCU IPC"},

  {0x8086,0x080f,"Moorestown GPIO Controller"},

  {0x8086,0x0810,"Moorestown Power Management Unit"},

  {0x8086,0x0811,"Moorestown OTG Ctrl"},

  {0x8086,0x0812,"Moorestown SPI Ctrl 2"},

  {0x8086,0x0813,"Moorestown SC DMA"},

  {0x8086,0x0814,"Moorestown LPE DMA"},

  {0x8086,0x0815,"Moorestown SSP0"},

  {0x8086,0x0817,"Medfield Serial IO I2C Controller #3"},

  {0x8086,0x0818,"Medfield Serial IO I2C Controller #4"},

  {0x8086,0x0819,"Medfield Serial IO I2C Controller #5"},

  {0x8086,0x081a,"Medfield GPIO Controller [Core]"},

  {0x8086,0x081b,"Medfield Serial IO HSUART Controller #1"},

  {0x8086,0x081c,"Medfield Serial IO HSUART Controller #2"},

  {0x8086,0x081d,"Medfield Serial IO HSUART Controller #3"},

  {0x8086,0x081e,"Medfield Serial IO HSUART DMA Controller"},

  {0x8086,0x081f,"Medfield GPIO Controller [AON]"},

  {0x8086,0x0820,"Medfield SD Host Controller"},

  {0x8086,0x0821,"Medfield SDIO Controller #1"},

  {0x8086,0x0822,"Medfield SDIO Controller #2"},

  {0x8086,0x0823,"Medfield eMMC Controller #0"},

  {0x8086,0x0824,"Medfield eMMC Controller #1"},

  {0x8086,0x0827,"Medfield Serial IO DMA Controller"},

  {0x8086,0x0828,"Medfield Power Management Unit"},

  {0x8086,0x0829,"Medfield USB Device Controller (OTG)"},

  {0x8086,0x082a,"Medfield SCU IPC"},

  {0x8086,0x082c,"Medfield Serial IO I2C Controller #0"},

  {0x8086,0x082d,"Medfield Serial IO I2C Controller #1"},

  {0x8086,0x082e,"Medfield Serial IO I2C Controller #2"},

  {0x8086,0x0885,"Centrino Wireless-N + WiMAX 6150"},

  {0x8086,0x0886,"Centrino Wireless-N + WiMAX 6150"},

  {0x8086,0x0887,"Centrino Wireless-N 2230"},

  {0x8086,0x0888,"Centrino Wireless-N 2230"},

  {0x8086,0x088e,"Centrino Advanced-N 6235"},

  {0x8086,0x088f,"Centrino Advanced-N 6235"},

  {0x8086,0x0890,"Centrino Wireless-N 2200"},

  {0x8086,0x0891,"Centrino Wireless-N 2200"},

  {0x8086,0x0892,"Centrino Wireless-N 135"},

  {0x8086,0x0893,"Centrino Wireless-N 135"},

  {0x8086,0x0894,"Centrino Wireless-N 105"},

  {0x8086,0x0895,"Centrino Wireless-N 105"},

  {0x8086,0x0896,"Centrino Wireless-N 130"},

  {0x8086,0x0897,"Centrino Wireless-N 130"},

  {0x8086,0x08ae,"Centrino Wireless-N 100"},

  {0x8086,0x08af,"Centrino Wireless-N 100"},

  {0x8086,0x08b1,"Wireless 7260"},

  {0x8086,0x08b2,"Wireless 7260"},

  {0x8086,0x08b3,"Wireless 3160"},

  {0x8086,0x08b4,"Wireless 3160"},

  {0x8086,0x08cf,"Atom Processor Z2760 Integrated Graphics Controller"},

  {0x8086,0x0953,"PCIe Data Center SSD"},

  {0x8086,0x095a,"Wireless 7265"},

  {0x8086,0x095b,"Wireless 7265"},

  {0x8086,0x0960,"80960RP (i960RP) Microprocessor/Bridge"},

  {0x8086,0x0962,"80960RM (i960RM) Bridge"},

  {0x8086,0x0964,"80960RP (i960RP) Microprocessor/Bridge"},

  {0x8086,0x0a04,"Haswell-ULT DRAM Controller"},

  {0x8086,0x0a06,"Haswell-ULT Integrated Graphics Controller"},

  {0x8086,0x0a0c,"Haswell-ULT HD Audio Controller"},

  {0x8086,0x0a16,"Haswell-ULT Integrated Graphics Controller"},

  {0x8086,0x0a22,"Haswell-ULT Integrated Graphics Controller"},

  {0x8086,0x0a26,"Haswell-ULT Integrated Graphics Controller"},

  {0x8086,0x0a2a,"Haswell-ULT Integrated Graphics Controller"},

  {0x8086,0x0a2e,"Haswell-ULT Integrated Graphics Controller"},

  {0x8086,0x0a53,"DC P3520 SSD"},

  {0x8086,0x0be0,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be1,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be2,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be3,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be4,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be5,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be6,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be7,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be8,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0be9,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0bea,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0beb,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0bec,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0bed,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0bee,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0bef,"Atom Processor D2xxx/N2xxx Integrated Graphics Controller"},

  {0x8086,0x0bf0,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0bf1,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0bf2,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0bf3,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0bf4,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0bf5,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0bf6,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0bf7,"Atom Processor D2xxx/N2xxx DRAM Controller"},

  {0x8086,0x0c00,"4th Gen Core Processor DRAM Controller"},

  {0x8086,0x0c01,"Xeon E3-1200 v3/4th Gen Core Processor PCI Express x16 Controller"},

  {0x8086,0x0c04,"Xeon E3-1200 v3/4th Gen Core Processor DRAM Controller"},

  {0x8086,0x0c05,"Xeon E3-1200 v3/4th Gen Core Processor PCI Express x8 Controller"},

  {0x8086,0x0c08,"Xeon E3-1200 v3 Processor DRAM Controller"},

  {0x8086,0x0c09,"Xeon E3-1200 v3/4th Gen Core Processor PCI Express x4 Controller"},

  {0x8086,0x0c0c,"Xeon E3-1200 v3/4th Gen Core Processor HD Audio Controller"},

  {0x8086,0x0c46,"Atom Processor S1200 PCI Express Root Port 1"},

  {0x8086,0x0c47,"Atom Processor S1200 PCI Express Root Port 2"},

  {0x8086,0x0c48,"Atom Processor S1200 PCI Express Root Port 3"},

  {0x8086,0x0c49,"Atom Processor S1200 PCI Express Root Port 4"},

  {0x8086,0x0c4e,"Atom Processor S1200 NTB Primary"},

  {0x8086,0x0c50,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QuickData Technology Device"},

  {0x8086,0x0c51,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QuickData Technology Device"},

  {0x8086,0x0c52,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QuickData Technology Device"},

  {0x8086,0x0c53,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QuickData Technology Device"},

  {0x8086,0x0c54,"Atom Processor S1200 Internal"},

  {0x8086,0x0c55,"Atom Processor S1200 DFX 1"},

  {0x8086,0x0c56,"Atom Processor S1200 DFX 2"},

  {0x8086,0x0c59,"Atom Processor S1200 SMBus 2.0 Controller 0"},

  {0x8086,0x0c5a,"Atom Processor S1200 SMBus 2.0 Controller 1"},

  {0x8086,0x0c5b,"Atom Processor S1200 SMBus Controller 2"},

  {0x8086,0x0c5c,"Atom Processor S1200 SMBus Controller 3"},

  {0x8086,0x0c5d,"Atom Processor S1200 SMBus Controller 4"},

  {0x8086,0x0c5e,"Atom Processor S1200 SMBus Controller 5"},

  {0x8086,0x0c5f,"Atom Processor S1200 UART"},

  {0x8086,0x0c60,"Atom Processor S1200 Integrated Legacy Bus"},

  {0x8086,0x0c70,"Atom Processor S1200 Internal"},

  {0x8086,0x0c71,"Atom Processor S1200 Internal"},

  {0x8086,0x0c72,"Atom Processor S1200 Internal"},

  {0x8086,0x0c73,"Atom Processor S1200 Internal"},

  {0x8086,0x0c74,"Atom Processor S1200 Internal"},

  {0x8086,0x0c75,"Atom Processor S1200 Internal"},

  {0x8086,0x0c76,"Atom Processor S1200 Internal"},

  {0x8086,0x0c77,"Atom Processor S1200 Internal"},

  {0x8086,0x0c78,"Atom Processor S1200 Internal"},

  {0x8086,0x0c79,"Atom Processor S1200 Internal"},

  {0x8086,0x0c7a,"Atom Processor S1200 Internal"},

  {0x8086,0x0c7b,"Atom Processor S1200 Internal"},

  {0x8086,0x0c7c,"Atom Processor S1200 Internal"},

  {0x8086,0x0c7d,"Atom Processor S1200 Internal"},

  {0x8086,0x0c7e,"Atom Processor S1200 Internal"},

  {0x8086,0x0c7f,"Atom Processor S1200 Internal"},

  {0x8086,0x0d00,"Crystal Well DRAM Controller"},

  {0x8086,0x0d01,"Crystal Well PCI Express x16 Controller"},

  {0x8086,0x0d04,"Crystal Well DRAM Controller"},

  {0x8086,0x0d05,"Crystal Well PCI Express x8 Controller"},

  {0x8086,0x0d09,"Crystal Well PCI Express x4 Controller"},

  {0x8086,0x0d0c,"Crystal Well HD Audio Controller"},

  {0x8086,0x0d16,"Crystal Well Integrated Graphics Controller"},

  {0x8086,0x0d26,"Crystal Well Integrated Graphics Controller"},

  {0x8086,0x0d36,"Crystal Well Integrated Graphics Controller"},

  {0x8086,0x0e00,"Xeon E7 v2/Xeon E5 v2/Core i7 DMI2"},

  {0x8086,0x0e01,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port in DMI2 Mode"},

  {0x8086,0x0e02,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 1a"},

  {0x8086,0x0e03,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 1b"},

  {0x8086,0x0e04,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 2a"},

  {0x8086,0x0e05,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 2b"},

  {0x8086,0x0e06,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 2c"},

  {0x8086,0x0e07,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 2d"},

  {0x8086,0x0e08,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 3a"},

  {0x8086,0x0e09,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 3b"},

  {0x8086,0x0e0a,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 3c"},

  {0x8086,0x0e0b,"Xeon E7 v2/Xeon E5 v2/Core i7 PCI Express Root Port 3d"},

  {0x8086,0x0e10,"Xeon E7 v2/Xeon E5 v2/Core i7 IIO Configuration Registers"},

  {0x8086,0x0e13,"Xeon E7 v2/Xeon E5 v2/Core i7 IIO Configuration Registers"},

  {0x8086,0x0e17,"Xeon E7 v2/Xeon E5 v2/Core i7 IIO Configuration Registers"},

  {0x8086,0x0e18,"Xeon E7 v2/Xeon E5 v2/Core i7 IIO Configuration Registers"},

  {0x8086,0x0e1c,"Xeon E7 v2/Xeon E5 v2/Core i7 IIO Configuration Registers"},

  {0x8086,0x0e1d,"Xeon E7 v2/Xeon E5 v2/Core i7 R2PCIe"},

  {0x8086,0x0e1e,"Xeon E7 v2/Xeon E5 v2/Core i7 UBOX Registers"},

  {0x8086,0x0e1f,"Xeon E7 v2/Xeon E5 v2/Core i7 UBOX Registers"},

  {0x8086,0x0e20,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 0"},

  {0x8086,0x0e21,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 1"},

  {0x8086,0x0e22,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 2"},

  {0x8086,0x0e23,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 3"},

  {0x8086,0x0e24,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 4"},

  {0x8086,0x0e25,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 5"},

  {0x8086,0x0e26,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 6"},

  {0x8086,0x0e27,"Xeon E7 v2/Xeon E5 v2/Core i7 Crystal Beach DMA Channel 7"},

  {0x8086,0x0e28,"Xeon E7 v2/Xeon E5 v2/Core i7 VTd/Memory Map/Misc"},

  {0x8086,0x0e29,"Xeon E7 v2/Xeon E5 v2/Core i7 Memory Hotplug"},

  {0x8086,0x0e2a,"Xeon E7 v2/Xeon E5 v2/Core i7 IIO RAS"},

  {0x8086,0x0e2c,"Xeon E7 v2/Xeon E5 v2/Core i7 IOAPIC"},

  {0x8086,0x0e2e,"Xeon E7 v2/Xeon E5 v2/Core i7 CBDMA"},

  {0x8086,0x0e2f,"Xeon E7 v2/Xeon E5 v2/Core i7 CBDMA"},

  {0x8086,0x0e30,"Xeon E7 v2/Xeon E5 v2/Core i7 Home Agent 0"},

  {0x8086,0x0e32,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link 0"},

  {0x8086,0x0e33,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link 1"},

  {0x8086,0x0e34,"Xeon E7 v2/Xeon E5 v2/Core i7 R2PCIe"},

  {0x8086,0x0e36,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Performance Ring Monitoring"},

  {0x8086,0x0e37,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Performance Ring Monitoring"},

  {0x8086,0x0e38,"Xeon E7 v2/Xeon E5 v2/Core i7 Home Agent 1"},

  {0x8086,0x0e3a,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link 2"},

  {0x8086,0x0e3e,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Performance Ring Monitoring"},

  {0x8086,0x0e3f,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Performance Ring Monitoring"},

  {0x8086,0x0e40,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link 2"},

  {0x8086,0x0e41,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Registers"},

  {0x8086,0x0e43,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Reut 2"},

  {0x8086,0x0e44,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Reut 2"},

  {0x8086,0x0e45,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Agent Register"},

  {0x8086,0x0e47,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Agent Register"},

  {0x8086,0x0e60,"Xeon E7 v2/Xeon E5 v2/Core i7 Home Agent 1"},

  {0x8086,0x0e68,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Target Address/Thermal Registers"},

  {0x8086,0x0e6a,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder Registers"},

  {0x8086,0x0e6b,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder Registers"},

  {0x8086,0x0e6c,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder Registers"},

  {0x8086,0x0e6d,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder Registers"},

  {0x8086,0x0e71,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 RAS Registers"},

  {0x8086,0x0e74,"Xeon E7 v2/Xeon E5 v2/Core i7 R2PCIe"},

  {0x8086,0x0e75,"Xeon E7 v2/Xeon E5 v2/Core i7 R2PCIe"},

  {0x8086,0x0e77,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Registers"},

  {0x8086,0x0e79,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 RAS Registers"},

  {0x8086,0x0e7d,"Xeon E7 v2/Xeon E5 v2/Core i7 UBOX Registers"},

  {0x8086,0x0e7f,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Registers"},

  {0x8086,0x0e80,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link 0"},

  {0x8086,0x0e81,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Ring Registers"},

  {0x8086,0x0e83,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Reut 0"},

  {0x8086,0x0e84,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Reut 0"},

  {0x8086,0x0e85,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Agent Register"},

  {0x8086,0x0e87,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Registers"},

  {0x8086,0x0e90,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link 1"},

  {0x8086,0x0e93,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link 1"},

  {0x8086,0x0e94,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Reut 1"},

  {0x8086,0x0e95,"Xeon E7 v2/Xeon E5 v2/Core i7 QPI Link Agent Register"},

  {0x8086,0x0ea0,"Xeon E7 v2/Xeon E5 v2/Core i7 Home Agent 0"},

  {0x8086,0x0ea8,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Target Address/Thermal Registers"},

  {0x8086,0x0eaa,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder Registers"},

  {0x8086,0x0eab,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder Registers"},

  {0x8086,0x0eac,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder Registers"},

  {0x8086,0x0ead,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder Registers"},

  {0x8086,0x0eae,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO Registers"},

  {0x8086,0x0eaf,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO Registers"},

  {0x8086,0x0eb0,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 Thermal Control 0"},

  {0x8086,0x0eb1,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 Thermal Control 1"},

  {0x8086,0x0eb2,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 ERROR Registers 0"},

  {0x8086,0x0eb3,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 ERROR Registers 1"},

  {0x8086,0x0eb4,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 Thermal Control 2"},

  {0x8086,0x0eb5,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 Thermal Control 3"},

  {0x8086,0x0eb6,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 ERROR Registers 2"},

  {0x8086,0x0eb7,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 1 Channel 0-3 ERROR Registers 3"},

  {0x8086,0x0ebc,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO Registers"},

  {0x8086,0x0ebe,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO Registers"},

  {0x8086,0x0ebf,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO Registers"},

  {0x8086,0x0ec0,"Xeon E7 v2/Xeon E5 v2/Core i7 Power Control Unit 0"},

  {0x8086,0x0ec1,"Xeon E7 v2/Xeon E5 v2/Core i7 Power Control Unit 1"},

  {0x8086,0x0ec2,"Xeon E7 v2/Xeon E5 v2/Core i7 Power Control Unit 2"},

  {0x8086,0x0ec3,"Xeon E7 v2/Xeon E5 v2/Core i7 Power Control Unit 3"},

  {0x8086,0x0ec4,"Xeon E7 v2/Xeon E5 v2/Core i7 Power Control Unit 4"},

  {0x8086,0x0ec8,"Xeon E7 v2/Xeon E5 v2/Core i7 System Address Decoder"},

  {0x8086,0x0ec9,"Xeon E7 v2/Xeon E5 v2/Core i7 Broadcast Registers"},

  {0x8086,0x0eca,"Xeon E7 v2/Xeon E5 v2/Core i7 Broadcast Registers"},

  {0x8086,0x0ed8,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0ed9,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0edc,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0edd,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0ede,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0edf,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0ee0,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee1,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee2,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee3,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee4,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee5,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee6,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee7,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee8,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ee9,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0eea,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0eeb,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0eec,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0eed,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0eee,"Xeon E7 v2/Xeon E5 v2/Core i7 Unicast Registers"},

  {0x8086,0x0ef0,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 Thermal Control 0"},

  {0x8086,0x0ef1,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 Thermal Control 1"},

  {0x8086,0x0ef2,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 ERROR Registers 0"},

  {0x8086,0x0ef3,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 ERROR Registers 1"},

  {0x8086,0x0ef4,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 Thermal Control 2"},

  {0x8086,0x0ef5,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 Thermal Control 3"},

  {0x8086,0x0ef6,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 ERROR Registers 2"},

  {0x8086,0x0ef7,"Xeon E7 v2/Xeon E5 v2/Core i7 Integrated Memory Controller 0 Channel 0-3 ERROR Registers 3"},

  {0x8086,0x0ef8,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0ef9,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0efa,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0efb,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0efc,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0efd,"Xeon E7 v2/Xeon E5 v2/Core i7 DDRIO"},

  {0x8086,0x0f00,"Atom Processor Z36xxx/Z37xxx Series SoC Transaction Register"},

  {0x8086,0x0f04,"Atom Processor Z36xxx/Z37xxx Series High Definition Audio Controller"},

  {0x8086,0x0f06,"Atom Processor Z36xxx/Z37xxx Series LPIO1 DMA Controller"},

  {0x8086,0x0f08,"Atom Processor Z36xxx/Z37xxx Series LPIO1 PWM Controller"},

  {0x8086,0x0f09,"Atom Processor Z36xxx/Z37xxx Series LPIO1 PWM Controller"},

  {0x8086,0x0f0a,"Atom Processor Z36xxx/Z37xxx Series LPIO1 HSUART Controller #1"},

  {0x8086,0x0f0c,"Atom Processor Z36xxx/Z37xxx Series LPIO1 HSUART Controller #2"},

  {0x8086,0x0f0e,"Atom Processor Z36xxx/Z37xxx Series LPIO1 SPI Controller"},

  {0x8086,0x0f12,"Atom Processor E3800 Series SMBus Controller"},

  {0x8086,0x0f14,"Atom Processor Z36xxx/Z37xxx Series SDIO Controller"},

  {0x8086,0x0f15,"Atom Processor Z36xxx/Z37xxx Series SDIO Controller"},

  {0x8086,0x0f16,"Atom Processor Z36xxx/Z37xxx Series SDIO Controller"},

  {0x8086,0x0f18,"Atom Processor Z36xxx/Z37xxx Series Trusted Execution Engine"},

  {0x8086,0x0f1c,"Atom Processor Z36xxx/Z37xxx Series Power Control Unit"},

  {0x8086,0x0f20,"Atom Processor E3800 Series SATA IDE Controller"},

  {0x8086,0x0f21,"Atom Processor E3800 Series SATA IDE Controller"},

  {0x8086,0x0f22,"Atom Processor E3800 Series SATA AHCI Controller"},

  {0x8086,0x0f23,"Atom Processor E3800 Series SATA AHCI Controller"},

  {0x8086,0x0f28,"Atom Processor Z36xxx/Z37xxx Series LPE Audio Controller"},

  {0x8086,0x0f31,"Atom Processor Z36xxx/Z37xxx Series Graphics & Display"},

  {0x8086,0x0f34,"Atom Processor Z36xxx/Z37xxx Series USB EHCI"},

  {0x8086,0x0f35,"Atom Processor Z36xxx/Z37xxx, Celeron N2000 Series USB xHCI"},

  {0x8086,0x0f37,"Atom Processor Z36xxx/Z37xxx Series OTG USB Device"},

  {0x8086,0x0f38,"Atom Processor Z36xxx/Z37xxx Series Camera ISP"},

  {0x8086,0x0f40,"Atom Processor Z36xxx/Z37xxx Series LPIO2 DMA Controller"},

  {0x8086,0x0f41,"Atom Processor Z36xxx/Z37xxx Series LPIO2 I2C Controller #1"},

  {0x8086,0x0f42,"Atom Processor Z36xxx/Z37xxx Series LPIO2 I2C Controller #2"},

  {0x8086,0x0f43,"Atom Processor Z36xxx/Z37xxx Series LPIO2 I2C Controller #3"},

  {0x8086,0x0f44,"Atom Processor Z36xxx/Z37xxx Series LPIO2 I2C Controller #4"},

  {0x8086,0x0f45,"Atom Processor Z36xxx/Z37xxx Series LPIO2 I2C Controller #5"},

  {0x8086,0x0f46,"Atom Processor Z36xxx/Z37xxx Series LPIO2 I2C Controller #6"},

  {0x8086,0x0f47,"Atom Processor Z36xxx/Z37xxx Series LPIO2 I2C Controller #7"},

  {0x8086,0x0f48,"Atom Processor E3800 Series PCI Express Root Port 1"},

  {0x8086,0x0f4a,"Atom Processor E3800 Series PCI Express Root Port 2"},

  {0x8086,0x0f4c,"Atom Processor E3800 Series PCI Express Root Port 3"},

  {0x8086,0x0f4e,"Atom Processor E3800 Series PCI Express Root Port 4"},

  {0x8086,0x0f50,"Atom Processor E3800 Series eMMC 4.5 Controller"},

  {0x8086,0x1000,"82542 Gigabit Ethernet Controller (Fiber)"},

  {0x8086,0x1001,"82543GC Gigabit Ethernet Controller (Fiber)"},

  {0x8086,0x1002,"Pro 100 LAN+Modem 56 Cardbus II"},

  {0x8086,0x1004,"82543GC Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x1008,"82544EI Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x1009,"82544EI Gigabit Ethernet Controller (Fiber)"},

  {0x8086,0x100a,"82540EM Gigabit Ethernet Controller"},

  {0x8086,0x100c,"82544GC Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x100d,"82544GC Gigabit Ethernet Controller (LOM)"},

  {0x8086,0x100e,"82540EM Gigabit Ethernet Controller"},

  {0x8086,0x100f,"82545EM Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x1010,"82546EB Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x1011,"82545EM Gigabit Ethernet Controller (Fiber)"},

  {0x8086,0x1012,"82546EB Gigabit Ethernet Controller (Fiber)"},

  {0x8086,0x1013,"82541EI Gigabit Ethernet Controller"},

  {0x8086,0x1014,"82541ER Gigabit Ethernet Controller"},

  {0x8086,0x1015,"82540EM Gigabit Ethernet Controller (LOM)"},

  {0x8086,0x1016,"82540EP Gigabit Ethernet Controller (Mobile)"},

  {0x8086,0x1017,"82540EP Gigabit Ethernet Controller"},

  {0x8086,0x1018,"82541EI Gigabit Ethernet Controller"},

  {0x8086,0x1019,"82547EI Gigabit Ethernet Controller"},

  {0x8086,0x101a,"82547EI Gigabit Ethernet Controller (Mobile)"},

  {0x8086,0x101d,"82546EB Gigabit Ethernet Controller"},

  {0x8086,0x101e,"82540EP Gigabit Ethernet Controller (Mobile)"},

  {0x8086,0x1026,"82545GM Gigabit Ethernet Controller"},

  {0x8086,0x1027,"82545GM Gigabit Ethernet Controller"},

  {0x8086,0x1028,"82545GM Gigabit Ethernet Controller"},

  {0x8086,0x1029,"82559 Ethernet Controller"},

  {0x8086,0x1030,"82559 InBusiness 10/100"},

  {0x8086,0x1031,"82801CAM (ICH3) PRO/100 VE (LOM) Ethernet Controller"},

  {0x8086,0x1032,"82801CAM (ICH3) PRO/100 VE Ethernet Controller"},

  {0x8086,0x1033,"82801CAM (ICH3) PRO/100 VM (LOM) Ethernet Controller"},

  {0x8086,0x1034,"82801CAM (ICH3) PRO/100 VM Ethernet Controller"},

  {0x8086,0x1035,"82801CAM (ICH3)/82562EH (LOM) Ethernet Controller"},

  {0x8086,0x1036,"82801CAM (ICH3) 82562EH Ethernet Controller"},

  {0x8086,0x1037,"82801CAM (ICH3) Chipset Ethernet Controller"},

  {0x8086,0x1038,"82801CAM (ICH3) PRO/100 VM (KM) Ethernet Controller"},

  {0x8086,0x1039,"82801DB PRO/100 VE (LOM) Ethernet Controller"},

  {0x8086,0x103a,"82801DB PRO/100 VE (CNR) Ethernet Controller"},

  {0x8086,0x103b,"82801DB PRO/100 VM (LOM) Ethernet Controller"},

  {0x8086,0x103c,"82801DB PRO/100 VM (CNR) Ethernet Controller"},

  {0x8086,0x103d,"82801DB PRO/100 VE (MOB) Ethernet Controller"},

  {0x8086,0x103e,"82801DB PRO/100 VM (MOB) Ethernet Controller"},

  {0x8086,0x1040,"536EP Data Fax Modem"},

  {0x8086,0x1043,"PRO/Wireless LAN 2100 3B Mini PCI Adapter"},

  {0x8086,0x1048,"82597EX 10GbE Ethernet Controller"},

  {0x8086,0x1049,"82566MM Gigabit Network Connection"},

  {0x8086,0x104a,"82566DM Gigabit Network Connection"},

  {0x8086,0x104b,"82566DC Gigabit Network Connection"},

  {0x8086,0x104c,"82562V 10/100 Network Connection"},

  {0x8086,0x104d,"82566MC Gigabit Network Connection"},

  {0x8086,0x1050,"82562EZ 10/100 Ethernet Controller"},

  {0x8086,0x1051,"82801EB/ER (ICH5/ICH5R) integrated LAN Controller"},

  {0x8086,0x1052,"PRO/100 VM Network Connection"},

  {0x8086,0x1053,"PRO/100 VM Network Connection"},

  {0x8086,0x1054,"PRO/100 VE Network Connection"},

  {0x8086,0x1055,"PRO/100 VM Network Connection"},

  {0x8086,0x1056,"PRO/100 VE Network Connection"},

  {0x8086,0x1057,"PRO/100 VE Network Connection"},

  {0x8086,0x1059,"82551QM Ethernet Controller"},

  {0x8086,0x105b,"82546GB Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x105e,"82571EB Gigabit Ethernet Controller"},

  {0x8086,0x105f,"82571EB Gigabit Ethernet Controller"},

  {0x8086,0x1060,"82571EB Gigabit Ethernet Controller"},

  {0x8086,0x1064,"82562ET/EZ/GT/GZ - PRO/100 VE (LOM) Ethernet Controller"},

  {0x8086,0x1065,"82562ET/EZ/GT/GZ - PRO/100 VE Ethernet Controller"},

  {0x8086,0x1066,"82562 EM/EX/GX - PRO/100 VM (LOM) Ethernet Controller"},

  {0x8086,0x1067,"82562 EM/EX/GX - PRO/100 VM Ethernet Controller"},

  {0x8086,0x1068,"82562ET/EZ/GT/GZ - PRO/100 VE (LOM) Ethernet Controller Mobile"},

  {0x8086,0x1069,"82562EM/EX/GX - PRO/100 VM (LOM) Ethernet Controller Mobile"},

  {0x8086,0x106a,"82562G - PRO/100 VE (LOM) Ethernet Controller"},

  {0x8086,0x106b,"82562G - PRO/100 VE Ethernet Controller Mobile"},

  {0x8086,0x1075,"82547GI Gigabit Ethernet Controller"},

  {0x8086,0x1076,"82541GI Gigabit Ethernet Controller"},

  {0x8086,0x1077,"82541GI Gigabit Ethernet Controller"},

  {0x8086,0x1078,"82541ER Gigabit Ethernet Controller"},

  {0x8086,0x1079,"82546GB Gigabit Ethernet Controller"},

  {0x8086,0x107a,"82546GB Gigabit Ethernet Controller"},

  {0x8086,0x107b,"82546GB Gigabit Ethernet Controller"},

  {0x8086,0x107c,"82541PI Gigabit Ethernet Controller"},

  {0x8086,0x107d,"82572EI Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x107e,"82572EI Gigabit Ethernet Controller (Fiber)"},

  {0x8086,0x107f,"82572EI Gigabit Ethernet Controller"},

  {0x8086,0x1080,"FA82537EP 56K V.92 Data/Fax Modem PCI"},

  {0x8086,0x1081,"631xESB/632xESB LAN Controller Copper"},

  {0x8086,0x1082,"631xESB/632xESB LAN Controller fiber"},

  {0x8086,0x1083,"631xESB/632xESB LAN Controller SERDES"},

  {0x8086,0x1084,"631xESB/632xESB IDE Redirection"},

  {0x8086,0x1085,"631xESB/632xESB Serial Port Redirection"},

  {0x8086,0x1086,"631xESB/632xESB IPMI/KCS0"},

  {0x8086,0x1087,"631xESB/632xESB UHCI Redirection"},

  {0x8086,0x1089,"631xESB/632xESB BT"},

  {0x8086,0x108a,"82546GB Gigabit Ethernet Controller"},

  {0x8086,0x108b,"82573V Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x108c,"82573E Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x108e,"82573E KCS (Active Management)"},

  {0x8086,0x108f,"Active Management Technology - SOL"},

  {0x8086,0x1091,"PRO/100 VM Network Connection"},

  {0x8086,0x1092,"PRO/100 VE Network Connection"},

  {0x8086,0x1093,"PRO/100 VM Network Connection"},

  {0x8086,0x1094,"PRO/100 VE Network Connection"},

  {0x8086,0x1095,"PRO/100 VE Network Connection"},

  {0x8086,0x1096,"80003ES2LAN Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x1097,"631xESB/632xESB DPT LAN Controller (Fiber)"},

  {0x8086,0x1098,"80003ES2LAN Gigabit Ethernet Controller (Serdes)"},

  {0x8086,0x1099,"82546GB Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x109a,"82573L Gigabit Ethernet Controller"},

  {0x8086,0x109b,"82546GB PRO/1000 GF Quad Port Server Adapter"},

  {0x8086,0x109e,"82597EX 10GbE Ethernet Controller"},

  {0x8086,0x10a0,"82571EB PRO/1000 AT Quad Port Bypass Adapter"},

  {0x8086,0x10a1,"82571EB PRO/1000 AF Quad Port Bypass Adapter"},

  {0x8086,0x10a4,"82571EB Gigabit Ethernet Controller"},

  {0x8086,0x10a5,"82571EB Gigabit Ethernet Controller (Fiber)"},

  {0x8086,0x10a6,"82599EB 10-Gigabit Dummy Function"},

  {0x8086,0x10a7,"82575EB Gigabit Network Connection"},

  {0x8086,0x10a9,"82575EB Gigabit Backplane Connection"},

  {0x8086,0x10b0,"82573L PRO/1000 PL Network Connection"},

  {0x8086,0x10b2,"82573V PRO/1000 PM Network Connection"},

  {0x8086,0x10b3,"82573E PRO/1000 PM Network Connection"},

  {0x8086,0x10b4,"82573L PRO/1000 PL Network Connection"},

  {0x8086,0x10b5,"82546GB Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x10b6,"82598 10GbE PCI-Express Ethernet Controller"},

  {0x8086,0x10b9,"82572EI Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x10ba,"80003ES2LAN Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x10bb,"80003ES2LAN Gigabit Ethernet Controller (Serdes)"},

  {0x8086,0x10bc,"82571EB Gigabit Ethernet Controller (Copper)"},

  {0x8086,0x10bd,"82566DM-2 Gigabit Network Connection"},

  {0x8086,0x10bf,"82567LF Gigabit Network Connection"},

  {0x8086,0x10c0,"82562V-2 10/100 Network Connection"},

  {0x8086,0x10c2,"82562G-2 10/100 Network Connection"},

  {0x8086,0x10c3,"82562GT-2 10/100 Network Connection"},

  {0x8086,0x10c4,"82562GT 10/100 Network Connection"},

  {0x8086,0x10c5,"82562G 10/100 Network Connection"},

  {0x8086,0x10c6,"82598EB 10-Gigabit AF Dual Port Network Connection"},

  {0x8086,0x10c7,"82598EB 10-Gigabit AF Network Connection"},

  {0x8086,0x10c8,"82598EB 10-Gigabit AT Network Connection"},

  {0x8086,0x10c9,"82576 Gigabit Network Connection"},

  {0x8086,0x10ca,"82576 Virtual Function"},

  {0x8086,0x10cb,"82567V Gigabit Network Connection"},

  {0x8086,0x10cc,"82567LM-2 Gigabit Network Connection"},

  {0x8086,0x10cd,"82567LF-2 Gigabit Network Connection"},

  {0x8086,0x10ce,"82567V-2 Gigabit Network Connection"},

  {0x8086,0x10d3,"82574L Gigabit Network Connection"},

  {0x8086,0x10d4,"Matrox Concord GE (customized Intel 82574)"},

  {0x8086,0x10d5,"82571PT Gigabit PT Quad Port Server ExpressModule"},

  {0x8086,0x10d6,"82575GB Gigabit Network Connection"},

  {0x8086,0x10d8,"82599EB 10 Gigabit Unprogrammed"},

  {0x8086,0x10d9,"82571EB Dual Port Gigabit Mezzanine Adapter"},

  {0x8086,0x10da,"82571EB Quad Port Gigabit Mezzanine Adapter"},

  {0x8086,0x10db,"82598EB 10-Gigabit Dual Port Network Connection"},

  {0x8086,0x10dd,"82598EB 10-Gigabit AT CX4 Network Connection"},

  {0x8086,0x10de,"82567LM-3 Gigabit Network Connection"},

  {0x8086,0x10df,"82567LF-3 Gigabit Network Connection"},

  {0x8086,0x10e1,"82598EB 10-Gigabit AF Dual Port Network Connection"},

  {0x8086,0x10e2,"82575GB Gigabit Network Connection"},

  {0x8086,0x10e5,"82567LM-4 Gigabit Network Connection"},

  {0x8086,0x10e6,"82576 Gigabit Network Connection"},

  {0x8086,0x10e7,"82576 Gigabit Network Connection"},

  {0x8086,0x10e8,"82576 Gigabit Network Connection"},

  {0x8086,0x10ea,"82577LM Gigabit Network Connection"},

  {0x8086,0x10eb,"82577LC Gigabit Network Connection"},

  {0x8086,0x10ec,"82598EB 10-Gigabit AT CX4 Network Connection"},

  {0x8086,0x10ed,"82599 Ethernet Controller Virtual Function"},

  {0x8086,0x10ef,"82578DM Gigabit Network Connection"},

  {0x8086,0x10f0,"82578DC Gigabit Network Connection"},

  {0x8086,0x10f1,"82598EB 10-Gigabit AF Dual Port Network Connection"},

  {0x8086,0x10f4,"82598EB 10-Gigabit AF Network Connection"},

  {0x8086,0x10f5,"82567LM Gigabit Network Connection"},

  {0x8086,0x10f6,"82574L Gigabit Network Connection"},

  {0x8086,0x10f7,"10 Gigabit BR KX4 Dual Port Network Connection"},

  {0x8086,0x10f8,"82599 10 Gigabit Dual Port Backplane Connection"},

  {0x8086,0x10f9,"82599 10 Gigabit Dual Port Network Connection"},

  {0x8086,0x10fb,"82599ES 10-Gigabit SFI/SFP+ Network Connection"},

  {0x8086,0x10fc,"82599 10 Gigabit Dual Port Network Connection"},

  {0x8086,0x10fe,"82552 10/100 Network Connection"},

  {0x8086,0x1107,"PRO/1000 MF Server Adapter (LX)"},

  {0x8086,0x1130,"82815 815 Chipset Host Bridge and Memory Controller Hub"},

  {0x8086,0x1131,"82815 815 Chipset AGP Bridge"},

  {0x8086,0x1132,"82815 Chipset Graphics Controller (CGC)"},

  {0x8086,0x1161,"82806AA PCI64 Hub Advanced Programmable Interrupt Controller"},

  {0x8086,0x1162,"Xscale 80200 Big Endian Companion Chip"},

  {0x8086,0x1190,"Merrifield SD/SDIO/eMMC Controller"},

  {0x8086,0x1191,"Merrifield Serial IO HSUART Controller"},

  {0x8086,0x1192,"Merrifield Serial IO HSUART DMA Controller"},

  {0x8086,0x1194,"Merrifield Serial IO SPI Controller"},

  {0x8086,0x1195,"Merrifield Serial IO I2C Controller"},

  {0x8086,0x1196,"Merrifield Serial IO I2C Controller"},

  {0x8086,0x1199,"Merrifield GPIO Controller"},

  {0x8086,0x119e,"Merrifield USB Device Controller (OTG)"},

  {0x8086,0x11a0,"Merrifield SCU IPC"},

  {0x8086,0x11a1,"Merrifield Power Management Unit"},

  {0x8086,0x11a2,"Merrifield Serial IO DMA Controller"},

  {0x8086,0x11a5,"Merrifield Serial IO PWM Controller"},

  {0x8086,0x1200,"IXP1200 Network Processor"},

  {0x8086,0x1209,"8255xER/82551IT Fast Ethernet Controller"},

  {0x8086,0x1221,"82092AA PCI to PCMCIA Bridge"},

  {0x8086,0x1222,"82092AA IDE Controller"},

  {0x8086,0x1223,"SAA7116"},

  {0x8086,0x1225,"82452KX/GX [Orion]"},

  {0x8086,0x1226,"82596 PRO/10 PCI"},

  {0x8086,0x1227,"82865 EtherExpress PRO/100A"},

  {0x8086,0x1228,"82556 EtherExpress PRO/100 Smart"},

  {0x8086,0x1229,"82557/8/9/0/1 Ethernet Pro 100"},

  {0x8086,0x122d,"430FX - 82437FX TSC [Triton I]"},

  {0x8086,0x122e,"82371FB PIIX ISA [Triton I]"},

  {0x8086,0x1230,"82371FB PIIX IDE [Triton I]"},

  {0x8086,0x1231,"DSVD Modem"},

  {0x8086,0x1234,"430MX - 82371MX Mobile PCI I/O IDE Xcelerator (MPIIX)"},

  {0x8086,0x1235,"430MX - 82437MX Mob. System Ctrlr (MTSC) & 82438MX Data Path (MTDP)"},

  {0x8086,0x1237,"440FX - 82441FX PMC [Natoma]"},

  {0x8086,0x1239,"82371FB PIIX IDE Interface"},

  {0x8086,0x123b,"82380PB PCI to PCI Docking Bridge"},

  {0x8086,0x123c,"82380AB (MISA) Mobile PCI-to-ISA Bridge"},

  {0x8086,0x123d,"683053 Programmable Interrupt Device"},

  {0x8086,0x123e,"82466GX (IHPC) Integrated Hot-Plug Controller (hidden mode)"},

  {0x8086,0x123f,"82466GX Integrated Hot-Plug Controller (IHPC)"},

  {0x8086,0x1240,"82752 (752) AGP Graphics Accelerator"},

  {0x8086,0x124b,"82380FB (MPCI2) Mobile Docking Controller"},

  {0x8086,0x1250,"430HX - 82439HX TXC [Triton II]"},

  {0x8086,0x1360,"82806AA PCI64 Hub PCI Bridge"},

  {0x8086,0x1361,"82806AA PCI64 Hub Controller (HRes)"},

  {0x8086,0x1460,"82870P2 P64H2 Hub PCI Bridge"},

  {0x8086,0x1461,"82870P2 P64H2 I/OxAPIC"},

  {0x8086,0x1462,"82870P2 P64H2 Hot Plug Controller"},

  {0x8086,0x1501,"82567V-3 Gigabit Network Connection"},

  {0x8086,0x1502,"82579LM Gigabit Network Connection (Lewisville)"},

  {0x8086,0x1503,"82579V Gigabit Network Connection"},

  {0x8086,0x1507,"Ethernet Express Module X520-P2"},

  {0x8086,0x1508,"82598EB Gigabit BX Network Connection"},

  {0x8086,0x150a,"82576NS Gigabit Network Connection"},

  {0x8086,0x150b,"82598EB 10-Gigabit AT2 Server Adapter"},

  {0x8086,0x150c,"82583V Gigabit Network Connection"},

  {0x8086,0x150d,"82576 Gigabit Backplane Connection"},

  {0x8086,0x150e,"82580 Gigabit Network Connection"},

  {0x8086,0x150f,"82580 Gigabit Fiber Network Connection"},

  {0x8086,0x1510,"82580 Gigabit Backplane Connection"},

  {0x8086,0x1511,"82580 Gigabit SFP Connection"},

  {0x8086,0x1513,"CV82524 Thunderbolt Controller [Light Ridge 4C 2010]"},

  {0x8086,0x1514,"Ethernet X520 10GbE Dual Port KX4 Mezz"},

  {0x8086,0x1515,"X540 Ethernet Controller Virtual Function"},

  {0x8086,0x1516,"82580 Gigabit Network Connection"},

  {0x8086,0x1517,"82599ES 10 Gigabit Network Connection"},

  {0x8086,0x1518,"82576NS SerDes Gigabit Network Connection"},

  {0x8086,0x151a,"DSL2310 Thunderbolt Controller [Eagle Ridge 2C 2011]"},

  {0x8086,0x151b,"CVL2510 Thunderbolt Controller [Light Peak 2C 2010]"},

  {0x8086,0x151c,"82599 10 Gigabit TN Network Connection"},

  {0x8086,0x1520,"I350 Ethernet Controller Virtual Function"},

  {0x8086,0x1521,"I350 Gigabit Network Connection"},

  {0x8086,0x1522,"I350 Gigabit Fiber Network Connection"},

  {0x8086,0x1523,"I350 Gigabit Backplane Connection"},

  {0x8086,0x1524,"I350 Gigabit Connection"},

  {0x8086,0x1525,"82567V-4 Gigabit Network Connection"},

  {0x8086,0x1526,"82576 Gigabit Network Connection"},

  {0x8086,0x1527,"82580 Gigabit Fiber Network Connection"},

  {0x8086,0x1528,"Ethernet Controller 10-Gigabit X540-AT2"},

  {0x8086,0x1529,"82599 10 Gigabit Dual Port Network Connection with FCoE"},

  {0x8086,0x152a,"82599 10 Gigabit Dual Port Backplane Connection with FCoE"},

  {0x8086,0x152e,"82599 Virtual Function"},

  {0x8086,0x152f,"I350 Virtual Function"},

  {0x8086,0x1530,"X540 Virtual Function"},

  {0x8086,0x1533,"I210 Gigabit Network Connection"},

  {0x8086,0x1536,"I210 Gigabit Fiber Network Connection"},

  {0x8086,0x1537,"I210 Gigabit Backplane Connection"},

  {0x8086,0x1538,"I210 Gigabit Network Connection"},

  {0x8086,0x1539,"I211 Gigabit Network Connection"},

  {0x8086,0x153a,"Ethernet Connection I217-LM"},

  {0x8086,0x153b,"Ethernet Connection I217-V"},

  {0x8086,0x1547,"DSL3510 Thunderbolt Controller [Cactus Ridge 4C 2012]"},

  {0x8086,0x1548,"DSL3310 Thunderbolt Controller [Cactus Ridge 2C 2012]"},

  {0x8086,0x1549,"DSL2210 Thunderbolt Controller [Port Ridge 1C 2011]"},

  {0x8086,0x154a,"Ethernet Server Adapter X520-4"},

  {0x8086,0x154c,"XL710/X710 Virtual Function"},

  {0x8086,0x154d,"Ethernet 10G 2P X520 Adapter"},

  {0x8086,0x1557,"82599 10 Gigabit Network Connection"},

  {0x8086,0x1558,"Ethernet Converged Network Adapter X520-Q1"},

  {0x8086,0x1559,"Ethernet Connection I218-V"},

  {0x8086,0x155a,"Ethernet Connection I218-LM"},

  {0x8086,0x155c,"Ethernet Server Bypass Adapter"},

  {0x8086,0x155d,"Ethernet Server Bypass Adapter"},

  {0x8086,0x1560,"Ethernet Controller X540"},

  {0x8086,0x1563,"Ethernet Controller 10G X550T"},

  {0x8086,0x1564,"X550 Virtual Function"},

  {0x8086,0x1565,"X550 Virtual Function"},

  {0x8086,0x1566,"DSL4410 Thunderbolt NHI [Redwood Ridge 2C 2013]"},

  {0x8086,0x1567,"DSL4410 Thunderbolt Bridge [Redwood Ridge 2C 2013]"},

  {0x8086,0x1568,"DSL4510 Thunderbolt NHI [Redwood Ridge 4C 2013]"},

  {0x8086,0x1569,"DSL4510 Thunderbolt Bridge [Redwood Ridge 4C 2013]"},

  {0x8086,0x156a,"DSL5320 Thunderbolt 2 NHI [Falcon Ridge 2C 2013]"},

  {0x8086,0x156b,"DSL5320 Thunderbolt 2 Bridge [Falcon Ridge 2C 2013]"},

  {0x8086,0x156c,"DSL5520 Thunderbolt 2 NHI [Falcon Ridge 4C 2013]"},

  {0x8086,0x156d,"DSL5520 Thunderbolt 2 Bridge [Falcon Ridge 4C 2013]"},

  {0x8086,0x156f,"Ethernet Connection I219-LM"},

  {0x8086,0x1570,"Ethernet Connection I219-V"},

  {0x8086,0x1571,"XL710/X710 Virtual Function"},

  {0x8086,0x1572,"Ethernet Controller X710 for 10GbE SFP+"},

  {0x8086,0x1575,"DSL6340 Thunderbolt 3 NHI [Alpine Ridge 2C 2015]"},

  {0x8086,0x1576,"DSL6340 Thunderbolt 3 Bridge [Alpine Ridge 2C 2015]"},

  {0x8086,0x1577,"DSL6540 Thunderbolt 3 NHI [Alpine Ridge 4C 2015]"},

  {0x8086,0x1578,"DSL6540 Thunderbolt 3 Bridge [Alpine Ridge 4C 2015]"},

  {0x8086,0x157b,"I210 Gigabit Network Connection"},

  {0x8086,0x157c,"I210 Gigabit Backplane Connection"},

  {0x8086,0x157d,"DSL5110 Thunderbolt 2 NHI (Low Power) [Win Ridge 2C 2014]"},

  {0x8086,0x157e,"DSL5110 Thunderbolt 2 Bridge (Low Power) [Win Ridge 2C 2014]"},

  {0x8086,0x1580,"Ethernet Controller XL710 for 40GbE backplane"},

  {0x8086,0x1581,"Ethernet Controller X710 for 10GbE backplane"},

  {0x8086,0x1583,"Ethernet Controller XL710 for 40GbE QSFP+"},

  {0x8086,0x1584,"Ethernet Controller XL710 for 40GbE QSFP+"},

  {0x8086,0x1585,"Ethernet Controller X710 for 10GbE QSFP+"},

  {0x8086,0x1586,"Ethernet Controller X710 for 10GBASE-T"},

  {0x8086,0x1587,"Ethernet Controller XL710 for 20GbE backplane"},

  {0x8086,0x1588,"Ethernet Controller XL710 for 20GbE backplane"},

  {0x8086,0x1589,"Ethernet Controller X710/X557-AT 10GBASE-T"},

  {0x8086,0x158a,"Ethernet Controller XXV710 for 25GbE backplane"},

  {0x8086,0x158b,"Ethernet Controller XXV710 for 25GbE SFP28"},

  {0x8086,0x15a0,"Ethernet Connection (2) I218-LM"},

  {0x8086,0x15a1,"Ethernet Connection (2) I218-V"},

  {0x8086,0x15a2,"Ethernet Connection (3) I218-LM"},

  {0x8086,0x15a3,"Ethernet Connection (3) I218-V"},

  {0x8086,0x15a4,"Ethernet Switch FM10000 Host Interface"},

  {0x8086,0x15a5,"Ethernet Switch FM10000 Host Virtual Interface"},

  {0x8086,0x15a8,"Ethernet Connection X552 Virtual Function"},

  {0x8086,0x15a9,"X552 Virtual Function"},

  {0x8086,0x15aa,"Ethernet Connection X552 10 GbE Backplane"},

  {0x8086,0x15ab,"Ethernet Connection X552 10 GbE Backplane"},

  {0x8086,0x15ac,"Ethernet Connection X552 10 GbE SFP+"},

  {0x8086,0x15ad,"Ethernet Connection X552/X557-AT 10GBASE-T"},

  {0x8086,0x15ae,"Ethernet Connection X552 1000BASE-T"},

  {0x8086,0x15b0,"Ethernet Connection X552 Backplane"},

  {0x8086,0x15b4,"X553 Virtual Function"},

  {0x8086,0x15b5,"DSL6340 USB 3.1 Controller [Alpine Ridge]"},

  {0x8086,0x15b6,"DSL6540 USB 3.1 Controller [Alpine Ridge]"},

  {0x8086,0x15b7,"Ethernet Connection (2) I219-LM"},

  {0x8086,0x15b8,"Ethernet Connection (2) I219-V"},

  {0x8086,0x15b9,"Ethernet Connection (3) I219-LM"},

  {0x8086,0x15bb,"Ethernet Connection (7) I219-LM"},

  {0x8086,0x15bc,"Ethernet Connection (7) I219-V"},

  {0x8086,0x15bd,"Ethernet Connection (6) I219-LM"},

  {0x8086,0x15be,"Ethernet Connection (6) I219-V"},

  {0x8086,0x15bf,"JHL6240 Thunderbolt 3 NHI (Low Power) [Alpine Ridge LP 2016]"},

  {0x8086,0x15c0,"JHL6240 Thunderbolt 3 Bridge (Low Power) [Alpine Ridge LP 2016]"},

  {0x8086,0x15c2,"Ethernet Connection X553 Backplane"},

  {0x8086,0x15c3,"Ethernet Connection X553 Backplane"},

  {0x8086,0x15c4,"Ethernet Connection X553 10 GbE SFP+"},

  {0x8086,0x15c5,"X553 Virtual Function"},

  {0x8086,0x15c6,"Ethernet Connection X553 1GbE"},

  {0x8086,0x15c7,"Ethernet Connection X553 1GbE"},

  {0x8086,0x15c8,"Ethernet Connection X553/X557-AT 10GBASE-T"},

  {0x8086,0x15ce,"Ethernet Connection X553 10 GbE SFP+"},

  {0x8086,0x15d0,"Ethernet SDI Adapter FM10420-100GbE-QDA2"},

  {0x8086,0x15d1,"Ethernet Controller 10G X550T"},

  {0x8086,0x15d2,"JHL6540 Thunderbolt 3 NHI (C step) [Alpine Ridge 4C 2016]"},

  {0x8086,0x15d3,"JHL6540 Thunderbolt 3 Bridge (C step) [Alpine Ridge 4C 2016]"},

  {0x8086,0x15d5,"Ethernet SDI Adapter FM10420-25GbE-DA2"},

  {0x8086,0x15d6,"Ethernet Connection (5) I219-V"},

  {0x8086,0x15d7,"Ethernet Connection (4) I219-LM"},

  {0x8086,0x15d8,"Ethernet Connection (4) I219-V"},

  {0x8086,0x15d9,"JHL6340 Thunderbolt 3 NHI (C step) [Alpine Ridge 2C 2016]"},

  {0x8086,0x15da,"JHL6340 Thunderbolt 3 Bridge (C step) [Alpine Ridge 2C 2016]"},

  {0x8086,0x15df,"Ethernet Connection (8) I219-LM"},

  {0x8086,0x15e0,"Ethernet Connection (8) I219-V"},

  {0x8086,0x15e1,"Ethernet Connection (9) I219-LM"},

  {0x8086,0x15e2,"Ethernet Connection (9) I219-V"},

  {0x8086,0x15e3,"Ethernet Connection (5) I219-LM"},

  {0x8086,0x15e4,"Ethernet Connection X553 1GbE"},

  {0x8086,0x15e5,"Ethernet Connection X553 1GbE"},

  {0x8086,0x1600,"Broadwell-U Host Bridge -OPI"},

  {0x8086,0x1601,"Broadwell-U PCI Express x16 Controller"},

  {0x8086,0x1602,"Broadwell-U Integrated Graphics"},

  {0x8086,0x1603,"Broadwell-U Processor Thermal Subsystem"},

  {0x8086,0x1604,"Broadwell-U Host Bridge -OPI"},

  {0x8086,0x1605,"Broadwell-U PCI Express x8 Controller"},

  {0x8086,0x1606,"HD Graphics"},

  {0x8086,0x1607,"Broadwell-U CHAPS Device"},

  {0x8086,0x1608,"Broadwell-U Host Bridge -OPI"},

  {0x8086,0x1609,"Broadwell-U x4 PCIe"},

  {0x8086,0x160a,"Broadwell-U Integrated Graphics"},

  {0x8086,0x160b,"Broadwell-U Integrated Graphics"},

  {0x8086,0x160c,"Broadwell-U Audio Controller"},

  {0x8086,0x160d,"Broadwell-U Integrated Graphics"},

  {0x8086,0x160e,"Broadwell-U Integrated Graphics"},

  {0x8086,0x160f,"Broadwell-U SoftSKU"},

  {0x8086,0x1610,"Broadwell-U Host Bridge - DMI"},

  {0x8086,0x1612,"HD Graphics 5600"},

  {0x8086,0x1614,"Broadwell-U Host Bridge - DMI"},

  {0x8086,0x1616,"HD Graphics 5500"},

  {0x8086,0x1618,"Broadwell-U Host Bridge - DMI"},

  {0x8086,0x161a,"Broadwell-U Integrated Graphics"},

  {0x8086,0x161b,"Broadwell-U Integrated Graphics"},

  {0x8086,0x161d,"Broadwell-U Integrated Graphics"},

  {0x8086,0x161e,"HD Graphics 5300"},

  {0x8086,0x1622,"Iris Pro Graphics 6200"},

  {0x8086,0x1626,"HD Graphics 6000"},

  {0x8086,0x162a,"Iris Pro Graphics P6300"},

  {0x8086,0x162b,"Iris Graphics 6100"},

  {0x8086,0x162d,"Broadwell-U Integrated Graphics"},

  {0x8086,0x162e,"Broadwell-U Integrated Graphics"},

  {0x8086,0x1632,"Broadwell-U Integrated Graphics"},

  {0x8086,0x1636,"Broadwell-U Integrated Graphics"},

  {0x8086,0x163a,"Broadwell-U Integrated Graphics"},

  {0x8086,0x163b,"Broadwell-U Integrated Graphics"},

  {0x8086,0x163d,"Broadwell-U Integrated Graphics"},

  {0x8086,0x163e,"Broadwell-U Integrated Graphics"},

  {0x8086,0x1889,"Ethernet Adaptive Virtual Function"},

  {0x8086,0x1900,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x1901,"Skylake PCIe Controller (x16)"},

  {0x8086,0x1902,"HD Graphics 510"},

  {0x8086,0x1903,"Skylake Processor Thermal Subsystem"},

  {0x8086,0x1904,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x1905,"Skylake PCIe Controller (x8)"},

  {0x8086,0x1906,"HD Graphics 510"},

  {0x8086,0x1908,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x1909,"Skylake PCIe Controller (x4)"},

  {0x8086,0x190c,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x190f,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x1910,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x1911,"Skylake Gaussian Mixture Model"},

  {0x8086,0x1912,"HD Graphics 530"},

  {0x8086,0x1916,"HD Graphics 520"},

  {0x8086,0x1918,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x1919,"Skylake Imaging Unit"},

  {0x8086,0x191b,"HD Graphics 530"},

  {0x8086,0x191d,"HD Graphics P530"},

  {0x8086,0x191e,"HD Graphics 515"},

  {0x8086,0x191f,"Skylake Host Bridge/DRAM Registers"},

  {0x8086,0x1921,"HD Graphics 520"},

  {0x8086,0x1926,"Iris Graphics 540"},

  {0x8086,0x1927,"Iris Graphics 550"},

  {0x8086,0x192b,"Iris Graphics 555"},

  {0x8086,0x192d,"Iris Graphics P555"},

  {0x8086,0x1932,"Iris Pro Graphics 580"},

  {0x8086,0x193a,"Iris Pro Graphics P580"},

  {0x8086,0x193b,"Iris Pro Graphics 580"},

  {0x8086,0x193d,"Iris Pro Graphics P580"},

  {0x8086,0x1960,"80960RP (i960RP) Microprocessor"},

  {0x8086,0x1962,"80960RM (i960RM) Microprocessor"},

  {0x8086,0x19ac,"DNV SMBus Contoller - Host"},

  {0x8086,0x19b0,"DNV SATA Controller 0"},

  {0x8086,0x19b1,"DNV SATA Controller 0"},

  {0x8086,0x19b2,"DNV SATA Controller 0"},

  {0x8086,0x19b3,"DNV SATA Controller 0"},

  {0x8086,0x19b4,"DNV SATA Controller 0"},

  {0x8086,0x19b5,"DNV SATA Controller 0"},

  {0x8086,0x19b6,"DNV SATA Controller 0"},

  {0x8086,0x19b7,"DNV SATA Controller 0"},

  {0x8086,0x19be,"DNV SATA Controller 0"},

  {0x8086,0x19bf,"DNV SATA Controller 0"},

  {0x8086,0x19c0,"DNV SATA Controller 1"},

  {0x8086,0x19c1,"DNV SATA Controller 1"},

  {0x8086,0x19c2,"DNV SATA Controller 1"},

  {0x8086,0x19c3,"DNV SATA Controller 1"},

  {0x8086,0x19c4,"DNV SATA Controller 1"},

  {0x8086,0x19c5,"DNV SATA Controller 1"},

  {0x8086,0x19c6,"DNV SATA Controller 1"},

  {0x8086,0x19c7,"DNV SATA Controller 1"},

  {0x8086,0x19ce,"DNV SATA Controller 1"},

  {0x8086,0x19cf,"DNV SATA Controller 1"},

  {0x8086,0x19dc,"DNV LPC or eSPI"},

  {0x8086,0x19df,"DNV SMBus controller"},

  {0x8086,0x19e0,"DNV SPI Controller"},

  {0x8086,0x1a21,"82840 840 [Carmel] Chipset Host Bridge (Hub A)"},

  {0x8086,0x1a23,"82840 840 [Carmel] Chipset AGP Bridge"},

  {0x8086,0x1a24,"82840 840 [Carmel] Chipset PCI Bridge (Hub B)"},

  {0x8086,0x1a30,"82845 845 [Brookdale] Chipset Host Bridge"},

  {0x8086,0x1a31,"82845 845 [Brookdale] Chipset AGP Bridge"},

  {0x8086,0x1a38,"5000 Series Chipset DMA Engine"},

  {0x8086,0x1a48,"82597EX 10GbE Ethernet Controller"},

  {0x8086,0x1b48,"82597EX 10GbE Ethernet Controller"},

  {0x8086,0x1c00,"6 Series/C200 Series Chipset Family Desktop SATA Controller (IDE mode, ports 0-3)"},

  {0x8086,0x1c01,"6 Series/C200 Series Chipset Family Mobile SATA Controller (IDE mode, ports 0-3)"},

  {0x8086,0x1c02,"6 Series/C200 Series Chipset Family 6 port Desktop SATA AHCI Controller"},

  {0x8086,0x1c03,"6 Series/C200 Series Chipset Family 6 port Mobile SATA AHCI Controller"},

  {0x8086,0x1c04,"6 Series/C200 Series Desktop SATA RAID Controller"},

  {0x8086,0x1c05,"6 Series/C200 Series Mobile SATA RAID Controller"},

  {0x8086,0x1c06,"Z68 Express Chipset SATA RAID Controller"},

  {0x8086,0x1c08,"6 Series/C200 Series Chipset Family Desktop SATA Controller (IDE mode, ports 4-5)"},

  {0x8086,0x1c09,"6 Series/C200 Series Chipset Family Mobile SATA Controller (IDE mode, ports 4-5)"},

  {0x8086,0x1c10,"6 Series/C200 Series Chipset Family PCI Express Root Port 1"},

  {0x8086,0x1c12,"6 Series/C200 Series Chipset Family PCI Express Root Port 2"},

  {0x8086,0x1c14,"6 Series/C200 Series Chipset Family PCI Express Root Port 3"},

  {0x8086,0x1c16,"6 Series/C200 Series Chipset Family PCI Express Root Port 4"},

  {0x8086,0x1c18,"6 Series/C200 Series Chipset Family PCI Express Root Port 5"},

  {0x8086,0x1c1a,"6 Series/C200 Series Chipset Family PCI Express Root Port 6"},

  {0x8086,0x1c1c,"6 Series/C200 Series Chipset Family PCI Express Root Port 7"},

  {0x8086,0x1c1e,"6 Series/C200 Series Chipset Family PCI Express Root Port 8"},

  {0x8086,0x1c20,"6 Series/C200 Series Chipset Family High Definition Audio Controller"},

  {0x8086,0x1c22,"6 Series/C200 Series Chipset Family SMBus Controller"},

  {0x8086,0x1c24,"6 Series/C200 Series Chipset Family Thermal Management Controller"},

  {0x8086,0x1c25,"6 Series/C200 Series Chipset Family DMI to PCI Bridge"},

  {0x8086,0x1c26,"6 Series/C200 Series Chipset Family USB Enhanced Host Controller #1"},

  {0x8086,0x1c27,"6 Series/C200 Series Chipset Family USB Universal Host Controller #1"},

  {0x8086,0x1c2c,"6 Series/C200 Series Chipset Family USB Universal Host Controller #5"},

  {0x8086,0x1c2d,"6 Series/C200 Series Chipset Family USB Enhanced Host Controller #2"},

  {0x8086,0x1c33,"6 Series/C200 Series Chipset Family LAN Controller"},

  {0x8086,0x1c35,"6 Series/C200 Series Chipset Family VECI Controller"},

  {0x8086,0x1c3a,"6 Series/C200 Series Chipset Family MEI Controller #1"},

  {0x8086,0x1c3b,"6 Series/C200 Series Chipset Family MEI Controller #2"},

  {0x8086,0x1c3c,"6 Series/C200 Series Chipset Family IDE-r Controller"},

  {0x8086,0x1c3d,"6 Series/C200 Series Chipset Family KT Controller"},

  {0x8086,0x1c40,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c41,"Mobile SFF 6 Series Chipset Family LPC Controller"},

  {0x8086,0x1c42,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c43,"Mobile 6 Series Chipset Family LPC Controller"},

  {0x8086,0x1c44,"Z68 Express Chipset Family LPC Controller"},

  {0x8086,0x1c45,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c46,"P67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c47,"UM67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c48,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c49,"HM65 Express Chipset Family LPC Controller"},

  {0x8086,0x1c4a,"H67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c4b,"HM67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c4c,"Q65 Express Chipset Family LPC Controller"},

  {0x8086,0x1c4d,"QS67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c4e,"Q67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c4f,"QM67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c50,"B65 Express Chipset Family LPC Controller"},

  {0x8086,0x1c51,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c52,"C202 Chipset Family LPC Controller"},

  {0x8086,0x1c53,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c54,"C204 Chipset Family LPC Controller"},

  {0x8086,0x1c55,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c56,"C206 Chipset Family LPC Controller"},

  {0x8086,0x1c57,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c58,"Upgraded B65 Express Chipset Family LPC Controller"},

  {0x8086,0x1c59,"Upgraded HM67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c5a,"Upgraded Q67 Express Chipset Family LPC Controller"},

  {0x8086,0x1c5b,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c5c,"H61 Express Chipset Family LPC Controller"},

  {0x8086,0x1c5d,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c5e,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1c5f,"6 Series/C200 Series Chipset Family LPC Controller"},

  {0x8086,0x1d00,"C600/X79 series chipset 4-Port SATA IDE Controller"},

  {0x8086,0x1d02,"C600/X79 series chipset 6-Port SATA AHCI Controller"},

  {0x8086,0x1d04,"C600/X79 series chipset SATA RAID Controller"},

  {0x8086,0x1d06,"C600/X79 series chipset SATA Premium RAID Controller"},

  {0x8086,0x1d08,"C600/X79 series chipset 2-Port SATA IDE Controller"},

  {0x8086,0x1d10,"C600/X79 series chipset PCI Express Root Port 1"},

  {0x8086,0x1d11,"C600/X79 series chipset PCI Express Root Port 1"},

  {0x8086,0x1d12,"C600/X79 series chipset PCI Express Root Port 2"},

  {0x8086,0x1d13,"C600/X79 series chipset PCI Express Root Port 2"},

  {0x8086,0x1d14,"C600/X79 series chipset PCI Express Root Port 3"},

  {0x8086,0x1d15,"C600/X79 series chipset PCI Express Root Port 3"},

  {0x8086,0x1d16,"C600/X79 series chipset PCI Express Root Port 4"},

  {0x8086,0x1d17,"C600/X79 series chipset PCI Express Root Port 4"},

  {0x8086,0x1d18,"C600/X79 series chipset PCI Express Root Port 5"},

  {0x8086,0x1d19,"C600/X79 series chipset PCI Express Root Port 5"},

  {0x8086,0x1d1a,"C600/X79 series chipset PCI Express Root Port 6"},

  {0x8086,0x1d1b,"C600/X79 series chipset PCI Express Root Port 6"},

  {0x8086,0x1d1c,"C600/X79 series chipset PCI Express Root Port 7"},

  {0x8086,0x1d1d,"C600/X79 series chipset PCI Express Root Port 7"},

  {0x8086,0x1d1e,"C600/X79 series chipset PCI Express Root Port 8"},

  {0x8086,0x1d1f,"C600/X79 series chipset PCI Express Root Port 8"},

  {0x8086,0x1d20,"C600/X79 series chipset High Definition Audio Controller"},

  {0x8086,0x1d22,"C600/X79 series chipset SMBus Host Controller"},

  {0x8086,0x1d24,"C600/X79 series chipset Thermal Management Controller"},

  {0x8086,0x1d25,"C600/X79 series chipset DMI to PCI Bridge"},

  {0x8086,0x1d26,"C600/X79 series chipset USB2 Enhanced Host Controller #1"},

  {0x8086,0x1d2d,"C600/X79 series chipset USB2 Enhanced Host Controller #2"},

  {0x8086,0x1d33,"C600/X79 series chipset LAN Controller"},

  {0x8086,0x1d35,"C600/X79 series chipset VECI Controller"},

  {0x8086,0x1d3a,"C600/X79 series chipset MEI Controller #1"},

  {0x8086,0x1d3b,"C600/X79 series chipset MEI Controller #2"},

  {0x8086,0x1d3c,"C600/X79 series chipset IDE-r Controller"},

  {0x8086,0x1d3d,"C600/X79 series chipset KT Controller"},

  {0x8086,0x1d3e,"C600/X79 series chipset PCI Express Virtual Root Port"},

  {0x8086,0x1d3f,"C608/C606/X79 series chipset PCI Express Virtual Switch Port"},

  {0x8086,0x1d40,"C600/X79 series chipset LPC Controller"},

  {0x8086,0x1d41,"C600/X79 series chipset LPC Controller"},

  {0x8086,0x1d50,"C608 chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d54,"C600/X79 series chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d55,"C600/X79 series chipset 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d58,"C606 chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d59,"C604/X79 series chipset 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d5a,"C600/X79 series chipset Dual 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d5b,"C602 chipset 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d5c,"C600/X79 series chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d5d,"C600/X79 series chipset 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d5e,"C600/X79 series chipset Dual 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d5f,"C600/X79 series chipset 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d60,"C608 chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d64,"C600/X79 series chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d65,"C600/X79 series chipset 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d68,"C606 chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d69,"C604/X79 series chipset 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d6a,"C600/X79 series chipset Dual 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d6b,"C602 chipset 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d6c,"C600/X79 series chipset Dual 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d6d,"C600/X79 series chipset 4-Port SATA/SAS Storage Control Unit"},

  {0x8086,0x1d6e,"C600/X79 series chipset Dual 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d6f,"C600/X79 series chipset 4-Port SATA Storage Control Unit"},

  {0x8086,0x1d70,"C600/X79 series chipset SMBus Controller 0"},

  {0x8086,0x1d71,"C608/C606/X79 series chipset SMBus Controller 1"},

  {0x8086,0x1d72,"C608 chipset SMBus Controller 2"},

  {0x8086,0x1d74,"C608/C606/X79 series chipset PCI Express Upstream Port"},

  {0x8086,0x1d76,"C600/X79 series chipset Multi-Function Glue"},

  {0x8086,0x1e00,"7 Series/C210 Series Chipset Family 4-port SATA Controller [IDE mode]"},

  {0x8086,0x1e01,"7 Series Chipset Family 4-port SATA Controller [IDE mode]"},

  {0x8086,0x1e02,"7 Series/C210 Series Chipset Family 6-port SATA Controller [AHCI mode]"},

  {0x8086,0x1e03,"7 Series Chipset Family 6-port SATA Controller [AHCI mode]"},

  {0x8086,0x1e04,"7 Series/C210 Series Chipset Family SATA Controller [RAID mode]"},

  {0x8086,0x1e05,"7 Series Chipset SATA Controller [RAID mode]"},

  {0x8086,0x1e06,"7 Series/C210 Series Chipset Family SATA Controller [RAID mode]"},

  {0x8086,0x1e07,"7 Series Chipset Family SATA Controller [RAID mode]"},

  {0x8086,0x1e08,"7 Series/C210 Series Chipset Family 2-port SATA Controller [IDE mode]"},

  {0x8086,0x1e09,"7 Series Chipset Family 2-port SATA Controller [IDE mode]"},

  {0x8086,0x1e0e,"7 Series/C210 Series Chipset Family SATA Controller [RAID mode]"},

  {0x8086,0x1e10,"7 Series/C216 Chipset Family PCI Express Root Port 1"},

  {0x8086,0x1e12,"7 Series/C210 Series Chipset Family PCI Express Root Port 2"},

  {0x8086,0x1e14,"7 Series/C210 Series Chipset Family PCI Express Root Port 3"},

  {0x8086,0x1e16,"7 Series/C216 Chipset Family PCI Express Root Port 4"},

  {0x8086,0x1e18,"7 Series/C210 Series Chipset Family PCI Express Root Port 5"},

  {0x8086,0x1e1a,"7 Series/C210 Series Chipset Family PCI Express Root Port 6"},

  {0x8086,0x1e1c,"7 Series/C210 Series Chipset Family PCI Express Root Port 7"},

  {0x8086,0x1e1e,"7 Series/C210 Series Chipset Family PCI Express Root Port 8"},

  {0x8086,0x1e20,"7 Series/C216 Chipset Family High Definition Audio Controller"},

  {0x8086,0x1e22,"7 Series/C216 Chipset Family SMBus Controller"},

  {0x8086,0x1e24,"7 Series/C210 Series Chipset Family Thermal Management Controller"},

  {0x8086,0x1e25,"7 Series/C210 Series Chipset Family DMI to PCI Bridge"},

  {0x8086,0x1e26,"7 Series/C216 Chipset Family USB Enhanced Host Controller #1"},

  {0x8086,0x1e2d,"7 Series/C216 Chipset Family USB Enhanced Host Controller #2"},

  {0x8086,0x1e31,"7 Series/C210 Series Chipset Family USB xHCI Host Controller"},

  {0x8086,0x1e33,"7 Series/C210 Series Chipset Family LAN Controller"},

  {0x8086,0x1e3a,"7 Series/C216 Chipset Family MEI Controller #1"},

  {0x8086,0x1e3b,"7 Series/C210 Series Chipset Family MEI Controller #2"},

  {0x8086,0x1e3c,"7 Series/C210 Series Chipset Family IDE-r Controller"},

  {0x8086,0x1e3d,"7 Series/C210 Series Chipset Family KT Controller"},

  {0x8086,0x1e41,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e42,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e43,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e44,"Z77 Express Chipset LPC Controller"},

  {0x8086,0x1e45,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e46,"Z75 Express Chipset LPC Controller"},

  {0x8086,0x1e47,"Q77 Express Chipset LPC Controller"},

  {0x8086,0x1e48,"Q75 Express Chipset LPC Controller"},

  {0x8086,0x1e49,"B75 Express Chipset LPC Controller"},

  {0x8086,0x1e4a,"H77 Express Chipset LPC Controller"},

  {0x8086,0x1e4b,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e4c,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e4d,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e4e,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e4f,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e50,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e51,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e52,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e53,"C216 Series Chipset LPC Controller"},

  {0x8086,0x1e54,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e55,"QM77 Express Chipset LPC Controller"},

  {0x8086,0x1e56,"QS77 Express Chipset LPC Controller"},

  {0x8086,0x1e57,"HM77 Express Chipset LPC Controller"},

  {0x8086,0x1e58,"UM77 Express Chipset LPC Controller"},

  {0x8086,0x1e59,"HM76 Express Chipset LPC Controller"},

  {0x8086,0x1e5a,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e5b,"UM77 Express Chipset LPC Controller"},

  {0x8086,0x1e5c,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e5d,"HM75 Express Chipset LPC Controller"},

  {0x8086,0x1e5e,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1e5f,"7 Series Chipset Family LPC Controller"},

  {0x8086,0x1f00,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f01,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f02,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f03,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f04,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f05,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f06,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f07,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f08,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f09,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f0a,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f0b,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f0c,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f0d,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f0e,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f0f,"Atom processor C2000 SoC Transaction Router"},

  {0x8086,0x1f10,"Atom processor C2000 PCIe Root Port 1"},

  {0x8086,0x1f11,"Atom processor C2000 PCIe Root Port 2"},

  {0x8086,0x1f12,"Atom processor C2000 PCIe Root Port 3"},

  {0x8086,0x1f13,"Atom processor C2000 PCIe Root Port 4"},

  {0x8086,0x1f14,"Atom processor C2000 RAS"},

  {0x8086,0x1f15,"Atom processor C2000 SMBus 2.0"},

  {0x8086,0x1f16,"Atom processor C2000 RCEC"},

  {0x8086,0x1f18,"Atom processor C2000 QAT"},

  {0x8086,0x1f19,"Atom processor C2000 QAT"},

  {0x8086,0x1f20,"Atom processor C2000 4-Port IDE SATA2 Controller"},

  {0x8086,0x1f21,"Atom processor C2000 4-Port IDE SATA2 Controller"},

  {0x8086,0x1f22,"Atom processor C2000 AHCI SATA2 Controller"},

  {0x8086,0x1f23,"Atom processor C2000 AHCI SATA2 Controller"},

  {0x8086,0x1f24,"Atom processor C2000 RAID SATA2 Controller"},

  {0x8086,0x1f25,"Atom processor C2000 RAID SATA2 Controller"},

  {0x8086,0x1f26,"Atom processor C2000 RAID SATA2 Controller"},

  {0x8086,0x1f27,"Atom processor C2000 RAID SATA2 Controller"},

  {0x8086,0x1f2c,"Atom processor C2000 USB Enhanced Host Controller"},

  {0x8086,0x1f2e,"Atom processor C2000 RAID SATA2 Controller"},

  {0x8086,0x1f2f,"Atom processor C2000 RAID SATA2 Controller"},

  {0x8086,0x1f30,"Atom processor C2000 2-Port IDE SATA3 Controller"},

  {0x8086,0x1f31,"Atom processor C2000 2-Port IDE SATA3 Controller"},

  {0x8086,0x1f32,"Atom processor C2000 AHCI SATA3 Controller"},

  {0x8086,0x1f33,"Atom processor C2000 AHCI SATA3 Controller"},

  {0x8086,0x1f34,"Atom processor C2000 RAID SATA3 Controller"},

  {0x8086,0x1f35,"Atom processor C2000 RAID SATA3 Controller"},

  {0x8086,0x1f36,"Atom processor C2000 RAID SATA3 Controller"},

  {0x8086,0x1f37,"Atom processor C2000 RAID SATA3 Controller"},

  {0x8086,0x1f38,"Atom processor C2000 PCU"},

  {0x8086,0x1f39,"Atom processor C2000 PCU"},

  {0x8086,0x1f3a,"Atom processor C2000 PCU"},

  {0x8086,0x1f3b,"Atom processor C2000 PCU"},

  {0x8086,0x1f3c,"Atom processor C2000 PCU SMBus"},

  {0x8086,0x1f3e,"Atom processor C2000 RAID SATA3 Controller"},

  {0x8086,0x1f3f,"Atom processor C2000 RAID SATA3 Controller"},

  {0x8086,0x1f40,"Ethernet Connection I354 1.0 GbE Backplane"},

  {0x8086,0x1f41,"Ethernet Connection I354"},

  {0x8086,0x1f42,"Atom processor C2000 GbE"},

  {0x8086,0x1f44,"Atom processor C2000 GbE Virtual Function"},

  {0x8086,0x1f45,"Ethernet Connection I354 2.5 GbE Backplane"},

  {0x8086,0x2014,"Sky Lake-E Ubox Registers"},

  {0x8086,0x2015,"Sky Lake-E Ubox Registers"},

  {0x8086,0x2016,"Sky Lake-E Ubox Registers"},

  {0x8086,0x2018,"Sky Lake-E M2PCI Registers"},

  {0x8086,0x201a,"Sky Lake-E Non-Transparent Bridge Registers"},

  {0x8086,0x201c,"Sky Lake-E Non-Transparent Bridge Registers"},

  {0x8086,0x2021,"Sky Lake-E CBDMA Registers"},

  {0x8086,0x2024,"Sky Lake-E MM/Vt-d Configuration Registers"},

  {0x8086,0x2030,"Sky Lake-E PCI Express Root Port A"},

  {0x8086,0x2031,"Sky Lake-E PCI Express Root Port B"},

  {0x8086,0x2032,"Sky Lake-E PCI Express Root Port C"},

  {0x8086,0x2033,"Sky Lake-E PCI Express Root Port D"},

  {0x8086,0x2035,"Sky Lake-E RAS Configuration Registers"},

  {0x8086,0x204c,"Sky Lake-E M3KTI Registers"},

  {0x8086,0x204d,"Sky Lake-E M3KTI Registers"},

  {0x8086,0x204e,"Sky Lake-E M3KTI Registers"},

  {0x8086,0x2054,"Sky Lake-E CHA Registers"},

  {0x8086,0x2055,"Sky Lake-E CHA Registers"},

  {0x8086,0x2056,"Sky Lake-E CHA Registers"},

  {0x8086,0x2057,"Sky Lake-E CHA Registers"},

  {0x8086,0x2068,"Sky Lake-E DDRIO Registers"},

  {0x8086,0x2069,"Sky Lake-E DDRIO Registers"},

  {0x8086,0x206a,"Sky Lake-E IOxAPIC Configuration Registers"},

  {0x8086,0x206e,"Sky Lake-E DDRIO Registers"},

  {0x8086,0x206f,"Sky Lake-E DDRIO Registers"},

  {0x8086,0x2078,"Sky Lake-E PCU Registers"},

  {0x8086,0x207a,"Sky Lake-E PCU Registers"},

  {0x8086,0x2080,"Sky Lake-E PCU Registers"},

  {0x8086,0x2081,"Sky Lake-E PCU Registers"},

  {0x8086,0x2082,"Sky Lake-E PCU Registers"},

  {0x8086,0x2083,"Sky Lake-E PCU Registers"},

  {0x8086,0x2084,"Sky Lake-E PCU Registers"},

  {0x8086,0x2085,"Sky Lake-E PCU Registers"},

  {0x8086,0x2086,"Sky Lake-E PCU Registers"},

  {0x8086,0x208d,"Sky Lake-E CHA Registers"},

  {0x8086,0x208e,"Sky Lake-E CHA Registers"},

  {0x8086,0x2250,"Xeon Phi coprocessor 5100 series"},

  {0x8086,0x225c,"Xeon Phi coprocessor SE10/7120 series"},

  {0x8086,0x225d,"Xeon Phi coprocessor 3120 series "},

  {0x8086,0x225e,"Xeon Phi coprocessor 31S1"},

  {0x8086,0x2280,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series SoC Transaction Register"},

  {0x8086,0x2284,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series High Definition Audio Controller"},

  {0x8086,0x2286,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO1 DMA Controller"},

  {0x8086,0x228a,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO1 HSUART Controller #1"},

  {0x8086,0x228c,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO1 HSUART Controller #2"},

  {0x8086,0x2292,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx SMBus Controller"},

  {0x8086,0x2294,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series MMC Controller"},

  {0x8086,0x2295,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series SDIO Controller"},

  {0x8086,0x2296,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series SD Controller"},

  {0x8086,0x2298,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series Trusted Execution Engine"},

  {0x8086,0x229c,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series PCU"},

  {0x8086,0x22a3,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series SATA Controller"},

  {0x8086,0x22a4,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series SATA AHCI Controller"},

  {0x8086,0x22a8,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series Low Power Engine Audio"},

  {0x8086,0x22b0,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series PCI Configuration Registers"},

  {0x8086,0x22b1,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Integrated Graphics Controller"},

  {0x8086,0x22b5,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series USB xHCI Controller"},

  {0x8086,0x22b8,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series Imaging Unit"},

  {0x8086,0x22c0,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 DMA Controller"},

  {0x8086,0x22c1,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 I2C Controller #1"},

  {0x8086,0x22c2,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 I2C Controller #2"},

  {0x8086,0x22c3,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 I2C Controller #3"},

  {0x8086,0x22c4,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 I2C Controller #4"},

  {0x8086,0x22c5,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 I2C Controller #5"},

  {0x8086,0x22c6,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 I2C Controller #6"},

  {0x8086,0x22c7,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series LPIO2 I2C Controller #7"},

  {0x8086,0x22c8,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series PCI Express Port #1"},

  {0x8086,0x22ca,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series PCI Express Port #2"},

  {0x8086,0x22cc,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series PCI Express Port #3"},

  {0x8086,0x22ce,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series PCI Express Port #4"},

  {0x8086,0x22dc,"Atom/Celeron/Pentium Processor x5-E8000/J3xxx/N3xxx Series Power Management Controller"},

  {0x8086,0x2310,"DH89xxCC LPC Controller"},

  {0x8086,0x2323,"DH89xxCC 4 Port SATA AHCI Controller"},

  {0x8086,0x2330,"DH89xxCC SMBus Controller"},

  {0x8086,0x2331,"DH89xxCC Chap Counter"},

  {0x8086,0x2332,"DH89xxCC Thermal Subsystem"},

  {0x8086,0x2334,"DH89xxCC USB2 Enhanced Host Controller #1"},

  {0x8086,0x2335,"DH89xxCC USB2 Enhanced Host Controller #1"},

  {0x8086,0x2342,"DH89xxCC PCI Express Root Port #1"},

  {0x8086,0x2343,"DH89xxCC PCI Express Root Port #1"},

  {0x8086,0x2344,"DH89xxCC PCI Express Root Port #2"},

  {0x8086,0x2345,"DH89xxCC PCI Express Root Port #2"},

  {0x8086,0x2346,"DH89xxCC PCI Express Root Port #3"},

  {0x8086,0x2347,"DH89xxCC PCI Express Root Port #3"},

  {0x8086,0x2348,"DH89xxCC PCI Express Root Port #4"},

  {0x8086,0x2349,"DH89xxCC PCI Express Root Port #4"},

  {0x8086,0x2360,"DH89xxCC Watchdog Timer"},

  {0x8086,0x2364,"DH89xxCC MEI 0"},

  {0x8086,0x2365,"DH89xxCC MEI 1"},

  {0x8086,0x2390,"DH895XCC Series LPC Controller"},

  {0x8086,0x23a1,"DH895XCC Series 2-Port SATA Controller [IDE Mode]"},

  {0x8086,0x23a3,"DH895XCC Series 4-Port SATA Controller [AHCI Mode]"},

  {0x8086,0x23a6,"DH895XCC Series 2-Port SATA Controller [IDE Mode]"},

  {0x8086,0x23b0,"DH895XCC Series SMBus Controller"},

  {0x8086,0x23b1,"DH895XCC Series CHAP Counter"},

  {0x8086,0x23b2,"DH895XCC Series Thermal Management Controller"},

  {0x8086,0x23b4,"DH895XCC Series USB2 Enhanced Host Controller #1"},

  {0x8086,0x23b5,"DH895XCC Series USB2 Enhanced Host Controller #1"},

  {0x8086,0x23c2,"DH895XCC Series PCI Express Root Port #1"},

  {0x8086,0x23c3,"DH895XCC Series PCI Express Root Port #1"},

  {0x8086,0x23c4,"DH895XCC Series PCI Express Root Port #2"},

  {0x8086,0x23c5,"DH895XCC Series PCI Express Root Port #2"},

  {0x8086,0x23c6,"CDH895XCC Series PCI Express Root Port #3"},

  {0x8086,0x23c7,"DH895XCC Series PCI Express Root Port #3"},

  {0x8086,0x23c8,"DH895XCC Series PCI Express Root Port #4"},

  {0x8086,0x23c9,"DH895XCC Series PCI Express Root Port #4"},

  {0x8086,0x23e0,"DH895XCC Series Watchdog Timer"},

  {0x8086,0x23e4,"DH895XCC Series MEI Controller #1"},

  {0x8086,0x23e5,"DH895XCC Series MEI Controller #2"},

  {0x8086,0x2410,"82801AA ISA Bridge (LPC)"},

  {0x8086,0x2411,"82801AA IDE Controller"},

  {0x8086,0x2412,"82801AA USB Controller"},

  {0x8086,0x2413,"82801AA SMBus Controller"},

  {0x8086,0x2415,"82801AA AC'97 Audio Controller"},

  {0x8086,0x2416,"82801AA AC'97 Modem Controller"},

  {0x8086,0x2418,"82801AA PCI Bridge"},

  {0x8086,0x2420,"82801AB ISA Bridge (LPC)"},

  {0x8086,0x2421,"82801AB IDE Controller"},

  {0x8086,0x2422,"82801AB USB Controller"},

  {0x8086,0x2423,"82801AB SMBus Controller"},

  {0x8086,0x2425,"82801AB AC'97 Audio Controller"},

  {0x8086,0x2426,"82801AB AC'97 Modem Controller"},

  {0x8086,0x2428,"82801AB PCI Bridge"},

  {0x8086,0x2440,"82801BA ISA Bridge (LPC)"},

  {0x8086,0x2442,"82801BA/BAM UHCI USB 1.1 Controller #1"},

  {0x8086,0x2443,"82801BA/BAM SMBus Controller"},

  {0x8086,0x2444,"82801BA/BAM UHCI USB 1.1 Controller #2"},

  {0x8086,0x2445,"82801BA/BAM AC'97 Audio Controller"},

  {0x8086,0x2446,"82801BA/BAM AC'97 Modem Controller"},

  {0x8086,0x2448,"82801 Mobile PCI Bridge"},

  {0x8086,0x2449,"82801BA/BAM/CA/CAM Ethernet Controller"},

  {0x8086,0x244a,"82801BAM IDE U100 Controller"},

  {0x8086,0x244b,"82801BA IDE U100 Controller"},

  {0x8086,0x244c,"82801BAM ISA Bridge (LPC)"},

  {0x8086,0x244e,"82801 PCI Bridge"},

  {0x8086,0x2450,"82801E ISA Bridge (LPC)"},

  {0x8086,0x2452,"82801E USB Controller"},

  {0x8086,0x2453,"82801E SMBus Controller"},

  {0x8086,0x2459,"82801E Ethernet Controller 0"},

  {0x8086,0x245b,"82801E IDE U100 Controller"},

  {0x8086,0x245d,"82801E Ethernet Controller 1"},

  {0x8086,0x245e,"82801E PCI Bridge"},

  {0x8086,0x2480,"82801CA LPC Interface Controller"},

  {0x8086,0x2482,"82801CA/CAM USB Controller #1"},

  {0x8086,0x2483,"82801CA/CAM SMBus Controller"},

  {0x8086,0x2484,"82801CA/CAM USB Controller #2"},

  {0x8086,0x2485,"82801CA/CAM AC'97 Audio Controller"},

  {0x8086,0x2486,"82801CA/CAM AC'97 Modem Controller"},

  {0x8086,0x2487,"82801CA/CAM USB Controller #3"},

  {0x8086,0x248a,"82801CAM IDE U100 Controller"},

  {0x8086,0x248b,"82801CA Ultra ATA Storage Controller"},

  {0x8086,0x248c,"82801CAM ISA Bridge (LPC)"},

  {0x8086,0x24c0,"82801DB/DBL (ICH4/ICH4-L) LPC Interface Bridge"},

  {0x8086,0x24c1,"82801DBL (ICH4-L) IDE Controller"},

  {0x8086,0x24c2,"82801DB/DBL/DBM (ICH4/ICH4-L/ICH4-M) USB UHCI Controller #1"},

  {0x8086,0x24c3,"82801DB/DBL/DBM (ICH4/ICH4-L/ICH4-M) SMBus Controller"},

  {0x8086,0x24c4,"82801DB/DBL/DBM (ICH4/ICH4-L/ICH4-M) USB UHCI Controller #2"},

  {0x8086,0x24c5,"82801DB/DBL/DBM (ICH4/ICH4-L/ICH4-M) AC'97 Audio Controller"},

  {0x8086,0x24c6,"82801DB/DBL/DBM (ICH4/ICH4-L/ICH4-M) AC'97 Modem Controller"},

  {0x8086,0x24c7,"82801DB/DBL/DBM (ICH4/ICH4-L/ICH4-M) USB UHCI Controller #3"},

  {0x8086,0x24ca,"82801DBM (ICH4-M) IDE Controller"},

  {0x8086,0x24cb,"82801DB (ICH4) IDE Controller"},

  {0x8086,0x24cc,"82801DBM (ICH4-M) LPC Interface Bridge"},

  {0x8086,0x24cd,"82801DB/DBM (ICH4/ICH4-M) USB2 EHCI Controller"},

  {0x8086,0x24d0,"82801EB/ER (ICH5/ICH5R) LPC Interface Bridge"},

  {0x8086,0x24d1,"82801EB (ICH5) SATA Controller"},

  {0x8086,0x24d2,"82801EB/ER (ICH5/ICH5R) USB UHCI Controller #1"},

  {0x8086,0x24d3,"82801EB/ER (ICH5/ICH5R) SMBus Controller"},

  {0x8086,0x24d4,"82801EB/ER (ICH5/ICH5R) USB UHCI Controller #2"},

  {0x8086,0x24d5,"82801EB/ER (ICH5/ICH5R) AC'97 Audio Controller"},

  {0x8086,0x24d6,"82801EB/ER (ICH5/ICH5R) AC'97 Modem Controller"},

  {0x8086,0x24d7,"82801EB/ER (ICH5/ICH5R) USB UHCI Controller #3"},

  {0x8086,0x24db,"82801EB/ER (ICH5/ICH5R) IDE Controller"},

  {0x8086,0x24dc,"82801EB (ICH5) LPC Interface Bridge"},

  {0x8086,0x24dd,"82801EB/ER (ICH5/ICH5R) USB2 EHCI Controller"},

  {0x8086,0x24de,"82801EB/ER (ICH5/ICH5R) USB UHCI Controller #4"},

  {0x8086,0x24df,"82801ER (ICH5R) SATA Controller"},

  {0x8086,0x24f0,"Omni-Path HFI Silicon 100 Series [discrete]"},

  {0x8086,0x24f1,"Omni-Path HFI Silicon 100 Series [integrated]"},

  {0x8086,0x24f3,"Wireless 8260"},

  {0x8086,0x24f4,"Wireless 8260"},

  {0x8086,0x24fd,"Wireless 8265 / 8275"},

  {0x8086,0x2500,"82820 820 (Camino) Chipset Host Bridge (MCH)"},

  {0x8086,0x2501,"82820 820 (Camino) Chipset Host Bridge (MCH)"},

  {0x8086,0x250b,"82820 820 (Camino) Chipset Host Bridge"},

  {0x8086,0x250f,"82820 820 (Camino) Chipset AGP Bridge"},

  {0x8086,0x2520,"82805AA MTH Memory Translator Hub"},

  {0x8086,0x2521,"82804AA MRH-S Memory Repeater Hub for SDRAM"},

  {0x8086,0x2530,"82850 850 (Tehama) Chipset Host Bridge (MCH)"},

  {0x8086,0x2531,"82860 860 (Wombat) Chipset Host Bridge (MCH)"},

  {0x8086,0x2532,"82850 850 (Tehama) Chipset AGP Bridge"},

  {0x8086,0x2533,"82860 860 (Wombat) Chipset AGP Bridge"},

  {0x8086,0x2534,"82860 860 (Wombat) Chipset PCI Bridge"},

  {0x8086,0x2540,"E7500 Memory Controller Hub"},

  {0x8086,0x2541,"E7500/E7501 Host RASUM Controller"},

  {0x8086,0x2543,"E7500/E7501 Hub Interface B PCI-to-PCI Bridge"},

  {0x8086,0x2544,"E7500/E7501 Hub Interface B RASUM Controller"},

  {0x8086,0x2545,"E7500/E7501 Hub Interface C PCI-to-PCI Bridge"},

  {0x8086,0x2546,"E7500/E7501 Hub Interface C RASUM Controller"},

  {0x8086,0x2547,"E7500/E7501 Hub Interface D PCI-to-PCI Bridge"},

  {0x8086,0x2548,"E7500/E7501 Hub Interface D RASUM Controller"},

  {0x8086,0x254c,"E7501 Memory Controller Hub"},

  {0x8086,0x2550,"E7505 Memory Controller Hub"},

  {0x8086,0x2551,"E7505/E7205 Series RAS Controller"},

  {0x8086,0x2552,"E7505/E7205 PCI-to-AGP Bridge"},

  {0x8086,0x2553,"E7505 Hub Interface B PCI-to-PCI Bridge"},

  {0x8086,0x2554,"E7505 Hub Interface B PCI-to-PCI Bridge RAS Controller"},

  {0x8086,0x255d,"E7205 Memory Controller Hub"},

  {0x8086,0x2560,"82845G/GL[Brookdale-G]/GE/PE DRAM Controller/Host-Hub Interface"},

  {0x8086,0x2561,"82845G/GL[Brookdale-G]/GE/PE Host-to-AGP Bridge"},

  {0x8086,0x2562,"82845G/GL[Brookdale-G]/GE Chipset Integrated Graphics Device"},

  {0x8086,0x2570,"82865G/PE/P DRAM Controller/Host-Hub Interface"},

  {0x8086,0x2571,"82865G/PE/P AGP Bridge"},

  {0x8086,0x2572,"82865G Integrated Graphics Controller"},

  {0x8086,0x2573,"82865G/PE/P PCI to CSA Bridge"},

  {0x8086,0x2576,"82865G/PE/P Processor to I/O Memory Interface"},

  {0x8086,0x2578,"82875P/E7210 Memory Controller Hub"},

  {0x8086,0x2579,"82875P Processor to AGP Controller"},

  {0x8086,0x257b,"82875P/E7210 Processor to PCI to CSA Bridge"},

  {0x8086,0x257e,"82875P/E7210 Processor to I/O Memory Interface"},

  {0x8086,0x2580,"82915G/P/GV/GL/PL/910GL Memory Controller Hub"},

  {0x8086,0x2581,"82915G/P/GV/GL/PL/910GL PCI Express Root Port"},

  {0x8086,0x2582,"82915G/GV/910GL Integrated Graphics Controller"},

  {0x8086,0x2584,"82925X/XE Memory Controller Hub"},

  {0x8086,0x2585,"82925X/XE PCI Express Root Port"},

  {0x8086,0x2588,"E7220/E7221 Memory Controller Hub"},

  {0x8086,0x2589,"E7220/E7221 PCI Express Root Port"},

  {0x8086,0x258a,"E7221 Integrated Graphics Controller"},

  {0x8086,0x2590,"Mobile 915GM/PM/GMS/910GML Express Processor to DRAM Controller"},

  {0x8086,0x2591,"Mobile 915GM/PM Express PCI Express Root Port"},

  {0x8086,0x2592,"Mobile 915GM/GMS/910GML Express Graphics Controller"},

  {0x8086,0x25a1,"6300ESB LPC Interface Controller"},

  {0x8086,0x25a2,"6300ESB PATA Storage Controller"},

  {0x8086,0x25a3,"6300ESB SATA Storage Controller"},

  {0x8086,0x25a4,"6300ESB SMBus Controller"},

  {0x8086,0x25a6,"6300ESB AC'97 Audio Controller"},

  {0x8086,0x25a7,"6300ESB AC'97 Modem Controller"},

  {0x8086,0x25a9,"6300ESB USB Universal Host Controller"},

  {0x8086,0x25aa,"6300ESB USB Universal Host Controller"},

  {0x8086,0x25ab,"6300ESB Watchdog Timer"},

  {0x8086,0x25ac,"6300ESB I/O Advanced Programmable Interrupt Controller"},

  {0x8086,0x25ad,"6300ESB USB2 Enhanced Host Controller"},

  {0x8086,0x25ae,"6300ESB 64-bit PCI-X Bridge"},

  {0x8086,0x25b0,"6300ESB SATA RAID Controller"},

  {0x8086,0x25c0,"5000X Chipset Memory Controller Hub"},

  {0x8086,0x25d0,"5000Z Chipset Memory Controller Hub"},

  {0x8086,0x25d4,"5000V Chipset Memory Controller Hub"},

  {0x8086,0x25d8,"5000P Chipset Memory Controller Hub"},

  {0x8086,0x25e2,"5000 Series Chipset PCI Express x4 Port 2"},

  {0x8086,0x25e3,"5000 Series Chipset PCI Express x4 Port 3"},

  {0x8086,0x25e4,"5000 Series Chipset PCI Express x4 Port 4"},

  {0x8086,0x25e5,"5000 Series Chipset PCI Express x4 Port 5"},

  {0x8086,0x25e6,"5000 Series Chipset PCI Express x4 Port 6"},

  {0x8086,0x25e7,"5000 Series Chipset PCI Express x4 Port 7"},

  {0x8086,0x25f0,"5000 Series Chipset FSB Registers"},

  {0x8086,0x25f1,"5000 Series Chipset Reserved Registers"},

  {0x8086,0x25f3,"5000 Series Chipset Reserved Registers"},

  {0x8086,0x25f5,"5000 Series Chipset FBD Registers"},

  {0x8086,0x25f6,"5000 Series Chipset FBD Registers"},

  {0x8086,0x25f7,"5000 Series Chipset PCI Express x8 Port 2-3"},

  {0x8086,0x25f8,"5000 Series Chipset PCI Express x8 Port 4-5"},

  {0x8086,0x25f9,"5000 Series Chipset PCI Express x8 Port 6-7"},

  {0x8086,0x25fa,"5000X Chipset PCI Express x16 Port 4-7"},

  {0x8086,0x2600,"E8500/E8501 Hub Interface 1.5"},

  {0x8086,0x2601,"E8500/E8501 PCI Express x4 Port D"},

  {0x8086,0x2602,"E8500/E8501 PCI Express x4 Port C0"},

  {0x8086,0x2603,"E8500/E8501 PCI Express x4 Port C1"},

  {0x8086,0x2604,"E8500/E8501 PCI Express x4 Port B0"},

  {0x8086,0x2605,"E8500/E8501 PCI Express x4 Port B1"},

  {0x8086,0x2606,"E8500/E8501 PCI Express x4 Port A0"},

  {0x8086,0x2607,"E8500/E8501 PCI Express x4 Port A1"},

  {0x8086,0x2608,"E8500/E8501 PCI Express x8 Port C"},

  {0x8086,0x2609,"E8500/E8501 PCI Express x8 Port B"},

  {0x8086,0x260a,"E8500/E8501 PCI Express x8 Port A"},

  {0x8086,0x260c,"E8500/E8501 IMI Registers"},

  {0x8086,0x2610,"E8500/E8501 FSB Registers"},

  {0x8086,0x2611,"E8500/E8501 Address Mapping Registers"},

  {0x8086,0x2612,"E8500/E8501 RAS Registers"},

  {0x8086,0x2613,"E8500/E8501 Reserved Registers"},

  {0x8086,0x2614,"E8500/E8501 Reserved Registers"},

  {0x8086,0x2615,"E8500/E8501 Miscellaneous Registers"},

  {0x8086,0x2617,"E8500/E8501 Reserved Registers"},

  {0x8086,0x2618,"E8500/E8501 Reserved Registers"},

  {0x8086,0x2619,"E8500/E8501 Reserved Registers"},

  {0x8086,0x261a,"E8500/E8501 Reserved Registers"},

  {0x8086,0x261b,"E8500/E8501 Reserved Registers"},

  {0x8086,0x261c,"E8500/E8501 Reserved Registers"},

  {0x8086,0x261d,"E8500/E8501 Reserved Registers"},

  {0x8086,0x261e,"E8500/E8501 Reserved Registers"},

  {0x8086,0x2620,"E8500/E8501 eXternal Memory Bridge"},

  {0x8086,0x2621,"E8500/E8501 XMB Miscellaneous Registers"},

  {0x8086,0x2622,"E8500/E8501 XMB Memory Interleaving Registers"},

  {0x8086,0x2623,"E8500/E8501 XMB DDR Initialization and Calibration"},

  {0x8086,0x2624,"E8500/E8501 XMB Reserved Registers"},

  {0x8086,0x2625,"E8500/E8501 XMB Reserved Registers"},

  {0x8086,0x2626,"E8500/E8501 XMB Reserved Registers"},

  {0x8086,0x2627,"E8500/E8501 XMB Reserved Registers"},

  {0x8086,0x2640,"82801FB/FR (ICH6/ICH6R) LPC Interface Bridge"},

  {0x8086,0x2641,"82801FBM (ICH6M) LPC Interface Bridge"},

  {0x8086,0x2642,"82801FW/FRW (ICH6W/ICH6RW) LPC Interface Bridge"},

  {0x8086,0x2651,"82801FB/FW (ICH6/ICH6W) SATA Controller"},

  {0x8086,0x2652,"82801FR/FRW (ICH6R/ICH6RW) SATA Controller"},

  {0x8086,0x2653,"82801FBM (ICH6M) SATA Controller"},

  {0x8086,0x2658,"82801FB/FBM/FR/FW/FRW (ICH6 Family) USB UHCI #1"},

  {0x8086,0x2659,"82801FB/FBM/FR/FW/FRW (ICH6 Family) USB UHCI #2"},

  {0x8086,0x265a,"82801FB/FBM/FR/FW/FRW (ICH6 Family) USB UHCI #3"},

  {0x8086,0x265b,"82801FB/FBM/FR/FW/FRW (ICH6 Family) USB UHCI #4"},

  {0x8086,0x265c,"82801FB/FBM/FR/FW/FRW (ICH6 Family) USB2 EHCI Controller"},

  {0x8086,0x2660,"82801FB/FBM/FR/FW/FRW (ICH6 Family) PCI Express Port 1"},

  {0x8086,0x2662,"82801FB/FBM/FR/FW/FRW (ICH6 Family) PCI Express Port 2"},

  {0x8086,0x2664,"82801FB/FBM/FR/FW/FRW (ICH6 Family) PCI Express Port 3"},

  {0x8086,0x2666,"82801FB/FBM/FR/FW/FRW (ICH6 Family) PCI Express Port 4"},

  {0x8086,0x2668,"82801FB/FBM/FR/FW/FRW (ICH6 Family) High Definition Audio Controller"},

  {0x8086,0x266a,"82801FB/FBM/FR/FW/FRW (ICH6 Family) SMBus Controller"},

  {0x8086,0x266c,"82801FB/FBM/FR/FW/FRW (ICH6 Family) LAN Controller"},

  {0x8086,0x266d,"82801FB/FBM/FR/FW/FRW (ICH6 Family) AC'97 Modem Controller"},

  {0x8086,0x266e,"82801FB/FBM/FR/FW/FRW (ICH6 Family) AC'97 Audio Controller"},

  {0x8086,0x266f,"82801FB/FBM/FR/FW/FRW (ICH6 Family) IDE Controller"},

  {0x8086,0x2670,"631xESB/632xESB/3100 Chipset LPC Interface Controller"},

  {0x8086,0x2680,"631xESB/632xESB/3100 Chipset SATA IDE Controller"},

  {0x8086,0x2681,"631xESB/632xESB SATA AHCI Controller"},

  {0x8086,0x2682,"631xESB/632xESB SATA RAID Controller"},

  {0x8086,0x2683,"631xESB/632xESB SATA RAID Controller"},

  {0x8086,0x2688,"631xESB/632xESB/3100 Chipset UHCI USB Controller #1"},

  {0x8086,0x2689,"631xESB/632xESB/3100 Chipset UHCI USB Controller #2"},

  {0x8086,0x268a,"631xESB/632xESB/3100 Chipset UHCI USB Controller #3"},

  {0x8086,0x268b,"631xESB/632xESB/3100 Chipset UHCI USB Controller #4"},

  {0x8086,0x268c,"631xESB/632xESB/3100 Chipset EHCI USB2 Controller"},

  {0x8086,0x2690,"631xESB/632xESB/3100 Chipset PCI Express Root Port 1"},

  {0x8086,0x2692,"631xESB/632xESB/3100 Chipset PCI Express Root Port 2"},

  {0x8086,0x2694,"631xESB/632xESB/3100 Chipset PCI Express Root Port 3"},

  {0x8086,0x2696,"631xESB/632xESB/3100 Chipset PCI Express Root Port 4"},

  {0x8086,0x2698,"631xESB/632xESB AC '97 Audio Controller"},

  {0x8086,0x2699,"631xESB/632xESB AC '97 Modem Controller"},

  {0x8086,0x269a,"631xESB/632xESB High Definition Audio Controller"},

  {0x8086,0x269b,"631xESB/632xESB/3100 Chipset SMBus Controller"},

  {0x8086,0x269e,"631xESB/632xESB IDE Controller"},

  {0x8086,0x2770,"82945G/GZ/P/PL Memory Controller Hub"},

  {0x8086,0x2771,"82945G/GZ/P/PL PCI Express Root Port"},

  {0x8086,0x2772,"82945G/GZ Integrated Graphics Controller"},

  {0x8086,0x2774,"82955X Memory Controller Hub"},

  {0x8086,0x2775,"82955X PCI Express Root Port"},

  {0x8086,0x2776,"82945G/GZ Integrated Graphics Controller"},

  {0x8086,0x2778,"E7230/3000/3010 Memory Controller Hub"},

  {0x8086,0x2779,"E7230/3000/3010 PCI Express Root Port"},

  {0x8086,0x277a,"82975X/3010 PCI Express Root Port"},

  {0x8086,0x277c,"82975X Memory Controller Hub"},

  {0x8086,0x277d,"82975X PCI Express Root Port"},

  {0x8086,0x2782,"82915G Integrated Graphics Controller"},

  {0x8086,0x2792,"Mobile 915GM/GMS/910GML Express Graphics Controller"},

  {0x8086,0x27a0,"Mobile 945GM/PM/GMS, 943/940GML and 945GT Express Memory Controller Hub"},

  {0x8086,0x27a1,"Mobile 945GM/PM/GMS, 943/940GML and 945GT Express PCI Express Root Port"},

  {0x8086,0x27a2,"Mobile 945GM/GMS, 943/940GML Express Integrated Graphics Controller"},

  {0x8086,0x27a6,"Mobile 945GM/GMS/GME, 943/940GML Express Integrated Graphics Controller"},

  {0x8086,0x27ac,"Mobile 945GSE Express Memory Controller Hub"},

  {0x8086,0x27ad,"Mobile 945GSE Express PCI Express Root Port"},

  {0x8086,0x27ae,"Mobile 945GSE Express Integrated Graphics Controller"},

  {0x8086,0x27b0,"82801GH (ICH7DH) LPC Interface Bridge"},

  {0x8086,0x27b8,"82801GB/GR (ICH7 Family) LPC Interface Bridge"},

  {0x8086,0x27b9,"82801GBM (ICH7-M) LPC Interface Bridge"},

  {0x8086,0x27bc,"NM10 Family LPC Controller"},

  {0x8086,0x27bd,"82801GHM (ICH7-M DH) LPC Interface Bridge"},

  {0x8086,0x27c0,"NM10/ICH7 Family SATA Controller [IDE mode]"},

  {0x8086,0x27c1,"NM10/ICH7 Family SATA Controller [AHCI mode]"},

  {0x8086,0x27c3,"82801GR/GDH (ICH7R/ICH7DH) SATA Controller [RAID mode]"},

  {0x8086,0x27c4,"82801GBM/GHM (ICH7-M Family) SATA Controller [IDE mode]"},

  {0x8086,0x27c5,"82801GBM/GHM (ICH7-M Family) SATA Controller [AHCI mode]"},

  {0x8086,0x27c6,"82801GHM (ICH7-M DH) SATA Controller [RAID mode]"},

  {0x8086,0x27c8,"NM10/ICH7 Family USB UHCI Controller #1"},

  {0x8086,0x27c9,"NM10/ICH7 Family USB UHCI Controller #2"},

  {0x8086,0x27ca,"NM10/ICH7 Family USB UHCI Controller #3"},

  {0x8086,0x27cb,"NM10/ICH7 Family USB UHCI Controller #4"},

  {0x8086,0x27cc,"NM10/ICH7 Family USB2 EHCI Controller"},

  {0x8086,0x27d0,"NM10/ICH7 Family PCI Express Port 1"},

  {0x8086,0x27d2,"NM10/ICH7 Family PCI Express Port 2"},

  {0x8086,0x27d4,"NM10/ICH7 Family PCI Express Port 3"},

  {0x8086,0x27d6,"NM10/ICH7 Family PCI Express Port 4"},

  {0x8086,0x27d8,"NM10/ICH7 Family High Definition Audio Controller"},

  {0x8086,0x27da,"NM10/ICH7 Family SMBus Controller"},

  {0x8086,0x27dc,"NM10/ICH7 Family LAN Controller"},

  {0x8086,0x27dd,"82801G (ICH7 Family) AC'97 Modem Controller"},

  {0x8086,0x27de,"82801G (ICH7 Family) AC'97 Audio Controller"},

  {0x8086,0x27df,"82801G (ICH7 Family) IDE Controller"},

  {0x8086,0x27e0,"82801GR/GH/GHM (ICH7 Family) PCI Express Port 5"},

  {0x8086,0x27e2,"82801GR/GH/GHM (ICH7 Family) PCI Express Port 6"},

  {0x8086,0x2810,"82801HB/HR (ICH8/R) LPC Interface Controller"},

  {0x8086,0x2811,"82801HEM (ICH8M-E) LPC Interface Controller"},

  {0x8086,0x2812,"82801HH (ICH8DH) LPC Interface Controller"},

  {0x8086,0x2814,"82801HO (ICH8DO) LPC Interface Controller"},

  {0x8086,0x2815,"82801HM (ICH8M) LPC Interface Controller"},

  {0x8086,0x2820,"82801H (ICH8 Family) 4 port SATA Controller [IDE mode]"},

  {0x8086,0x2821,"82801HR/HO/HH (ICH8R/DO/DH) 6 port SATA Controller [AHCI mode]"},

  {0x8086,0x2822,"SATA Controller [RAID mode]"},

  {0x8086,0x2823,"C610/X99 series chipset sSATA Controller [RAID mode]"},

  {0x8086,0x2824,"82801HB (ICH8) 4 port SATA Controller [AHCI mode]"},

  {0x8086,0x2825,"82801HR/HO/HH (ICH8R/DO/DH) 2 port SATA Controller [IDE mode]"},

  {0x8086,0x2826,"C600/X79 series chipset SATA RAID Controller"},

  {0x8086,0x2827,"C610/X99 series chipset sSATA Controller [RAID mode]"},

  {0x8086,0x2828,"82801HM/HEM (ICH8M/ICH8M-E) SATA Controller [IDE mode]"},

  {0x8086,0x2829,"82801HM/HEM (ICH8M/ICH8M-E) SATA Controller [AHCI mode]"},

  {0x8086,0x282a,"82801 Mobile SATA Controller [RAID mode]"},

  {0x8086,0x2830,"82801H (ICH8 Family) USB UHCI Controller #1"},

  {0x8086,0x2831,"82801H (ICH8 Family) USB UHCI Controller #2"},

  {0x8086,0x2832,"82801H (ICH8 Family) USB UHCI Controller #3"},

  {0x8086,0x2833,"82801H (ICH8 Family) USB UHCI Controller #4"},

  {0x8086,0x2834,"82801H (ICH8 Family) USB UHCI Controller #4"},

  {0x8086,0x2835,"82801H (ICH8 Family) USB UHCI Controller #5"},

  {0x8086,0x2836,"82801H (ICH8 Family) USB2 EHCI Controller #1"},

  {0x8086,0x283a,"82801H (ICH8 Family) USB2 EHCI Controller #2"},

  {0x8086,0x283e,"82801H (ICH8 Family) SMBus Controller"},

  {0x8086,0x283f,"82801H (ICH8 Family) PCI Express Port 1"},

  {0x8086,0x2841,"82801H (ICH8 Family) PCI Express Port 2"},

  {0x8086,0x2843,"82801H (ICH8 Family) PCI Express Port 3"},

  {0x8086,0x2845,"82801H (ICH8 Family) PCI Express Port 4"},

  {0x8086,0x2847,"82801H (ICH8 Family) PCI Express Port 5"},

  {0x8086,0x2849,"82801H (ICH8 Family) PCI Express Port 6"},

  {0x8086,0x284b,"82801H (ICH8 Family) HD Audio Controller"},

  {0x8086,0x284f,"82801H (ICH8 Family) Thermal Reporting Device"},

  {0x8086,0x2850,"82801HM/HEM (ICH8M/ICH8M-E) IDE Controller"},

  {0x8086,0x2912,"82801IH (ICH9DH) LPC Interface Controller"},

  {0x8086,0x2914,"82801IO (ICH9DO) LPC Interface Controller"},

  {0x8086,0x2916,"82801IR (ICH9R) LPC Interface Controller"},

  {0x8086,0x2917,"ICH9M-E LPC Interface Controller"},

  {0x8086,0x2918,"82801IB (ICH9) LPC Interface Controller"},

  {0x8086,0x2919,"ICH9M LPC Interface Controller"},

  {0x8086,0x2920,"82801IR/IO/IH (ICH9R/DO/DH) 4 port SATA Controller [IDE mode]"},

  {0x8086,0x2921,"82801IB (ICH9) 2 port SATA Controller [IDE mode]"},

  {0x8086,0x2922,"82801IR/IO/IH (ICH9R/DO/DH) 6 port SATA Controller [AHCI mode]"},

  {0x8086,0x2923,"82801IB (ICH9) 4 port SATA Controller [AHCI mode]"},

  {0x8086,0x2925,"82801IR/IO (ICH9R/DO) SATA Controller [RAID mode]"},

  {0x8086,0x2926,"82801I (ICH9 Family) 2 port SATA Controller [IDE mode]"},

  {0x8086,0x2928,"82801IBM/IEM (ICH9M/ICH9M-E) 2 port SATA Controller [IDE mode]"},

  {0x8086,0x2929,"82801IBM/IEM (ICH9M/ICH9M-E) 4 port SATA Controller [AHCI mode]"},

  {0x8086,0x292c,"82801IEM (ICH9M-E) SATA Controller [RAID mode]"},

  {0x8086,0x292d,"82801IBM/IEM (ICH9M/ICH9M-E) 2 port SATA Controller [IDE mode]"},

  {0x8086,0x2930,"82801I (ICH9 Family) SMBus Controller"},

  {0x8086,0x2932,"82801I (ICH9 Family) Thermal Subsystem"},

  {0x8086,0x2934,"82801I (ICH9 Family) USB UHCI Controller #1"},

  {0x8086,0x2935,"82801I (ICH9 Family) USB UHCI Controller #2"},

  {0x8086,0x2936,"82801I (ICH9 Family) USB UHCI Controller #3"},

  {0x8086,0x2937,"82801I (ICH9 Family) USB UHCI Controller #4"},

  {0x8086,0x2938,"82801I (ICH9 Family) USB UHCI Controller #5"},

  {0x8086,0x2939,"82801I (ICH9 Family) USB UHCI Controller #6"},

  {0x8086,0x293a,"82801I (ICH9 Family) USB2 EHCI Controller #1"},

  {0x8086,0x293c,"82801I (ICH9 Family) USB2 EHCI Controller #2"},

  {0x8086,0x293e,"82801I (ICH9 Family) HD Audio Controller"},

  {0x8086,0x2940,"82801I (ICH9 Family) PCI Express Port 1"},

  {0x8086,0x2942,"82801I (ICH9 Family) PCI Express Port 2"},

  {0x8086,0x2944,"82801I (ICH9 Family) PCI Express Port 3"},

  {0x8086,0x2946,"82801I (ICH9 Family) PCI Express Port 4"},

  {0x8086,0x2948,"82801I (ICH9 Family) PCI Express Port 5"},

  {0x8086,0x294a,"82801I (ICH9 Family) PCI Express Port 6"},

  {0x8086,0x294c,"82566DC-2 Gigabit Network Connection"},

  {0x8086,0x2970,"82946GZ/PL/GL Memory Controller Hub"},

  {0x8086,0x2971,"82946GZ/PL/GL PCI Express Root Port"},

  {0x8086,0x2972,"82946GZ/GL Integrated Graphics Controller"},

  {0x8086,0x2973,"82946GZ/GL Integrated Graphics Controller"},

  {0x8086,0x2974,"82946GZ/GL HECI Controller"},

  {0x8086,0x2975,"82946GZ/GL HECI Controller"},

  {0x8086,0x2976,"82946GZ/GL PT IDER Controller"},

  {0x8086,0x2977,"82946GZ/GL KT Controller"},

  {0x8086,0x2980,"82G35 Express DRAM Controller"},

  {0x8086,0x2981,"82G35 Express PCI Express Root Port"},

  {0x8086,0x2982,"82G35 Express Integrated Graphics Controller"},

  {0x8086,0x2983,"82G35 Express Integrated Graphics Controller"},

  {0x8086,0x2984,"82G35 Express HECI Controller"},

  {0x8086,0x2990,"82Q963/Q965 Memory Controller Hub"},

  {0x8086,0x2991,"82Q963/Q965 PCI Express Root Port"},

  {0x8086,0x2992,"82Q963/Q965 Integrated Graphics Controller"},

  {0x8086,0x2993,"82Q963/Q965 Integrated Graphics Controller"},

  {0x8086,0x2994,"82Q963/Q965 HECI Controller"},

  {0x8086,0x2995,"82Q963/Q965 HECI Controller"},

  {0x8086,0x2996,"82Q963/Q965 PT IDER Controller"},

  {0x8086,0x2997,"82Q963/Q965 KT Controller"},

  {0x8086,0x29a0,"82P965/G965 Memory Controller Hub"},

  {0x8086,0x29a1,"82P965/G965 PCI Express Root Port"},

  {0x8086,0x29a2,"82G965 Integrated Graphics Controller"},

  {0x8086,0x29a3,"82G965 Integrated Graphics Controller"},

  {0x8086,0x29a4,"82P965/G965 HECI Controller"},

  {0x8086,0x29a5,"82P965/G965 HECI Controller"},

  {0x8086,0x29a6,"82P965/G965 PT IDER Controller"},

  {0x8086,0x29a7,"82P965/G965 KT Controller"},

  {0x8086,0x29b0,"82Q35 Express DRAM Controller"},

  {0x8086,0x29b1,"82Q35 Express PCI Express Root Port"},

  {0x8086,0x29b2,"82Q35 Express Integrated Graphics Controller"},

  {0x8086,0x29b3,"82Q35 Express Integrated Graphics Controller"},

  {0x8086,0x29b4,"82Q35 Express MEI Controller"},

  {0x8086,0x29b5,"82Q35 Express MEI Controller"},

  {0x8086,0x29b6,"82Q35 Express PT IDER Controller"},

  {0x8086,0x29b7,"82Q35 Express Serial KT Controller"},

  {0x8086,0x29c0,"82G33/G31/P35/P31 Express DRAM Controller"},

  {0x8086,0x29c1,"82G33/G31/P35/P31 Express PCI Express Root Port"},

  {0x8086,0x29c2,"82G33/G31 Express Integrated Graphics Controller"},

  {0x8086,0x29c3,"82G33/G31 Express Integrated Graphics Controller"},

  {0x8086,0x29c4,"82G33/G31/P35/P31 Express MEI Controller"},

  {0x8086,0x29c5,"82G33/G31/P35/P31 Express MEI Controller"},

  {0x8086,0x29c6,"82G33/G31/P35/P31 Express PT IDER Controller"},

  {0x8086,0x29c7,"82G33/G31/P35/P31 Express Serial KT Controller"},

  {0x8086,0x29cf,"Virtual HECI Controller"},

  {0x8086,0x29d0,"82Q33 Express DRAM Controller"},

  {0x8086,0x29d1,"82Q33 Express PCI Express Root Port"},

  {0x8086,0x29d2,"82Q33 Express Integrated Graphics Controller"},

  {0x8086,0x29d3,"82Q33 Express Integrated Graphics Controller"},

  {0x8086,0x29d4,"82Q33 Express MEI Controller"},

  {0x8086,0x29d5,"82Q33 Express MEI Controller"},

  {0x8086,0x29d6,"82Q33 Express PT IDER Controller"},

  {0x8086,0x29d7,"82Q33 Express Serial KT Controller"},

  {0x8086,0x29e0,"82X38/X48 Express DRAM Controller"},

  {0x8086,0x29e1,"82X38/X48 Express Host-Primary PCI Express Bridge"},

  {0x8086,0x29e4,"82X38/X48 Express MEI Controller"},

  {0x8086,0x29e5,"82X38/X48 Express MEI Controller"},

  {0x8086,0x29e6,"82X38/X48 Express PT IDER Controller"},

  {0x8086,0x29e7,"82X38/X48 Express Serial KT Controller"},

  {0x8086,0x29e9,"82X38/X48 Express Host-Secondary PCI Express Bridge"},

  {0x8086,0x29f0,"3200/3210 Chipset DRAM Controller"},

  {0x8086,0x29f1,"3200/3210 Chipset Host-Primary PCI Express Bridge"},

  {0x8086,0x29f4,"3200/3210 Chipset MEI Controller"},

  {0x8086,0x29f5,"3200/3210 Chipset MEI Controller"},

  {0x8086,0x29f6,"3200/3210 Chipset PT IDER Controller"},

  {0x8086,0x29f7,"3200/3210 Chipset Serial KT Controller"},

  {0x8086,0x29f9,"3210 Chipset Host-Secondary PCI Express Bridge"},

  {0x8086,0x2a00,"Mobile PM965/GM965/GL960 Memory Controller Hub"},

  {0x8086,0x2a01,"Mobile PM965/GM965/GL960 PCI Express Root Port"},

  {0x8086,0x2a02,"Mobile GM965/GL960 Integrated Graphics Controller (primary)"},

  {0x8086,0x2a03,"Mobile GM965/GL960 Integrated Graphics Controller (secondary)"},

  {0x8086,0x2a04,"Mobile PM965/GM965 MEI Controller"},

  {0x8086,0x2a05,"Mobile PM965/GM965 MEI Controller"},

  {0x8086,0x2a06,"Mobile PM965/GM965 PT IDER Controller"},

  {0x8086,0x2a07,"Mobile PM965/GM965 KT Controller"},

  {0x8086,0x2a10,"Mobile GME965/GLE960 Memory Controller Hub"},

  {0x8086,0x2a11,"Mobile GME965/GLE960 PCI Express Root Port"},

  {0x8086,0x2a12,"Mobile GME965/GLE960 Integrated Graphics Controller"},

  {0x8086,0x2a13,"Mobile GME965/GLE960 Integrated Graphics Controller"},

  {0x8086,0x2a14,"Mobile GME965/GLE960 MEI Controller"},

  {0x8086,0x2a15,"Mobile GME965/GLE960 MEI Controller"},

  {0x8086,0x2a16,"Mobile GME965/GLE960 PT IDER Controller"},

  {0x8086,0x2a17,"Mobile GME965/GLE960 KT Controller"},

  {0x8086,0x2a40,"Mobile 4 Series Chipset Memory Controller Hub"},

  {0x8086,0x2a41,"Mobile 4 Series Chipset PCI Express Graphics Port"},

  {0x8086,0x2a42,"Mobile 4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2a43,"Mobile 4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2a44,"Mobile 4 Series Chipset MEI Controller"},

  {0x8086,0x2a45,"Mobile 4 Series Chipset MEI Controller"},

  {0x8086,0x2a46,"Mobile 4 Series Chipset PT IDER Controller"},

  {0x8086,0x2a47,"Mobile 4 Series Chipset AMT SOL Redirection"},

  {0x8086,0x2a50,"Cantiga MEI Controller"},

  {0x8086,0x2a51,"Cantiga MEI Controller"},

  {0x8086,0x2a52,"Cantiga PT IDER Controller"},

  {0x8086,0x2a53,"Cantiga AMT SOL Redirection"},

  {0x8086,0x2b00,"Xeon Processor E7 Product Family System Configuration Controller 1"},

  {0x8086,0x2b02,"Xeon Processor E7 Product Family System Configuration Controller 2"},

  {0x8086,0x2b04,"Xeon Processor E7 Product Family Power Controller"},

  {0x8086,0x2b08,"Xeon Processor E7 Product Family Caching Agent 0"},

  {0x8086,0x2b0c,"Xeon Processor E7 Product Family Caching Agent 1"},

  {0x8086,0x2b10,"Xeon Processor E7 Product Family QPI Home Agent 0"},

  {0x8086,0x2b13,"Xeon Processor E7 Product Family Memory Controller 0c"},

  {0x8086,0x2b14,"Xeon Processor E7 Product Family Memory Controller 0a"},

  {0x8086,0x2b16,"Xeon Processor E7 Product Family Memory Controller 0b"},

  {0x8086,0x2b18,"Xeon Processor E7 Product Family QPI Home Agent 1"},

  {0x8086,0x2b1b,"Xeon Processor E7 Product Family Memory Controller 1c"},

  {0x8086,0x2b1c,"Xeon Processor E7 Product Family Memory Controller 1a"},

  {0x8086,0x2b1e,"Xeon Processor E7 Product Family Memory Controller 1b"},

  {0x8086,0x2b20,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 0"},

  {0x8086,0x2b22,"Xeon Processor E7 Product Family System Configuration Controller 3"},

  {0x8086,0x2b24,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 1"},

  {0x8086,0x2b28,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 2"},

  {0x8086,0x2b2a,"Xeon Processor E7 Product Family System Configuration Controller 4"},

  {0x8086,0x2b2c,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 3"},

  {0x8086,0x2b30,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 4"},

  {0x8086,0x2b34,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 5"},

  {0x8086,0x2b38,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 6"},

  {0x8086,0x2b3c,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 7"},

  {0x8086,0x2b40,"Xeon Processor E7 Product Family QPI Router Port 0-1"},

  {0x8086,0x2b42,"Xeon Processor E7 Product Family QPI Router Port 2-3"},

  {0x8086,0x2b44,"Xeon Processor E7 Product Family QPI Router Port 4-5"},

  {0x8086,0x2b46,"Xeon Processor E7 Product Family QPI Router Port 6-7"},

  {0x8086,0x2b48,"Xeon Processor E7 Product Family Test and Debug 0"},

  {0x8086,0x2b4c,"Xeon Processor E7 Product Family Test and Debug 1"},

  {0x8086,0x2b50,"Xeon Processor E7 Product Family QPI Physical Port 0: REUT control/status"},

  {0x8086,0x2b52,"Xeon Processor E7 Product Family QPI Physical Port 0: Misc. control/status"},

  {0x8086,0x2b54,"Xeon Processor E7 Product Family QPI Physical Port 1: REUT control/status"},

  {0x8086,0x2b56,"Xeon Processor E7 Product Family QPI Physical Port 1: Misc. control/status"},

  {0x8086,0x2b58,"Xeon Processor E7 Product Family QPI Physical Port 2: REUT control/status"},

  {0x8086,0x2b5a,"Xeon Processor E7 Product Family QPI Physical Port 2: Misc. control/status"},

  {0x8086,0x2b5c,"Xeon Processor E7 Product Family QPI Physical Port 3: REUT control/status"},

  {0x8086,0x2b5e,"Xeon Processor E7 Product Family QPI Physical Port 3: Misc. control/status"},

  {0x8086,0x2b60,"Xeon Processor E7 Product Family SMI Physical Port 0: REUT control/status"},

  {0x8086,0x2b62,"Xeon Processor E7 Product Family SMI Physical Port 0: Misc control/status"},

  {0x8086,0x2b64,"Xeon Processor E7 Product Family SMI Physical Port 1: REUT control/status"},

  {0x8086,0x2b66,"Xeon Processor E7 Product Family SMI Physical Port 1: Misc control/status"},

  {0x8086,0x2b68,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 8"},

  {0x8086,0x2b6c,"Xeon Processor E7 Product Family Last Level Cache Coherence Engine 9"},

  {0x8086,0x2c01,"Xeon 5500/Core i7 QuickPath Architecture System Address Decoder"},

  {0x8086,0x2c10,"Xeon 5500/Core i7 QPI Link 0"},

  {0x8086,0x2c11,"Xeon 5500/Core i7 QPI Physical 0"},

  {0x8086,0x2c14,"Xeon 5500/Core i7 QPI Link 1"},

  {0x8086,0x2c15,"Xeon 5500/Core i7 QPI Physical 1"},

  {0x8086,0x2c18,"Xeon 5500/Core i7 Integrated Memory Controller"},

  {0x8086,0x2c19,"Xeon 5500/Core i7 Integrated Memory Controller Target Address Decoder"},

  {0x8086,0x2c1a,"Xeon 5500/Core i7 Integrated Memory Controller RAS Registers"},

  {0x8086,0x2c1c,"Xeon 5500/Core i7 Integrated Memory Controller Test Registers"},

  {0x8086,0x2c20,"Xeon 5500/Core i7 Integrated Memory Controller Channel 0 Control Registers"},

  {0x8086,0x2c21,"Xeon 5500/Core i7 Integrated Memory Controller Channel 0 Address Registers"},

  {0x8086,0x2c22,"Xeon 5500/Core i7 Integrated Memory Controller Channel 0 Rank Registers"},

  {0x8086,0x2c23,"Xeon 5500/Core i7 Integrated Memory Controller Channel 0 Thermal Control Registers"},

  {0x8086,0x2c28,"Xeon 5500/Core i7 Integrated Memory Controller Channel 1 Control Registers"},

  {0x8086,0x2c29,"Xeon 5500/Core i7 Integrated Memory Controller Channel 1 Address Registers"},

  {0x8086,0x2c2a,"Xeon 5500/Core i7 Integrated Memory Controller Channel 1 Rank Registers"},

  {0x8086,0x2c2b,"Xeon 5500/Core i7 Integrated Memory Controller Channel 1 Thermal Control Registers"},

  {0x8086,0x2c30,"Xeon 5500/Core i7 Integrated Memory Controller Channel 2 Control Registers"},

  {0x8086,0x2c31,"Xeon 5500/Core i7 Integrated Memory Controller Channel 2 Address Registers"},

  {0x8086,0x2c32,"Xeon 5500/Core i7 Integrated Memory Controller Channel 2 Rank Registers"},

  {0x8086,0x2c33,"Xeon 5500/Core i7 Integrated Memory Controller Channel 2 Thermal Control Registers"},

  {0x8086,0x2c40,"Xeon 5500/Core i7 QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c41,"Xeon 5500/Core i7 QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c50,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c51,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c52,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c53,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c54,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c55,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c56,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c57,"Core Processor QuickPath Architecture Generic Non-Core Registers"},

  {0x8086,0x2c58,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c59,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c5a,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c5b,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c5c,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c5d,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c5e,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c5f,"Xeon C5500/C3500 QPI Generic Non-core Registers"},

  {0x8086,0x2c61,"Core Processor QuickPath Architecture Generic Non-core Registers"},

  {0x8086,0x2c62,"Core Processor QuickPath Architecture Generic Non-core Registers"},

  {0x8086,0x2c70,"Xeon 5600 Series QuickPath Architecture Generic Non-core Registers"},

  {0x8086,0x2c81,"Core Processor QuickPath Architecture System Address Decoder"},

  {0x8086,0x2c90,"Core Processor QPI Link 0"},

  {0x8086,0x2c91,"Core Processor QPI Physical 0"},

  {0x8086,0x2c98,"Core Processor Integrated Memory Controller"},

  {0x8086,0x2c99,"Core Processor Integrated Memory Controller Target Address Decoder"},

  {0x8086,0x2c9a,"Core Processor Integrated Memory Controller Test Registers"},

  {0x8086,0x2c9c,"Core Processor Integrated Memory Controller Test Registers"},

  {0x8086,0x2ca0,"Core Processor Integrated Memory Controller Channel 0 Control Registers"},

  {0x8086,0x2ca1,"Core Processor Integrated Memory Controller Channel 0 Address Registers"},

  {0x8086,0x2ca2,"Core Processor Integrated Memory Controller Channel 0 Rank Registers"},

  {0x8086,0x2ca3,"Core Processor Integrated Memory Controller Channel 0 Thermal Control Registers"},

  {0x8086,0x2ca8,"Core Processor Integrated Memory Controller Channel 1 Control Registers"},

  {0x8086,0x2ca9,"Core Processor Integrated Memory Controller Channel 1 Address Registers"},

  {0x8086,0x2caa,"Core Processor Integrated Memory Controller Channel 1 Rank Registers"},

  {0x8086,0x2cab,"Core Processor Integrated Memory Controller Channel 1 Thermal Control Registers"},

  {0x8086,0x2cc1,"Xeon C5500/C3500 QPI System Address Decoder"},

  {0x8086,0x2cd0,"Xeon C5500/C3500 QPI Link 0"},

  {0x8086,0x2cd1,"Xeon C5500/C3500 QPI Physical 0"},

  {0x8086,0x2cd4,"Xeon C5500/C3500 QPI Link 1"},

  {0x8086,0x2cd5,"Xeon C5500/C3500 QPI Physical 1"},

  {0x8086,0x2cd8,"Xeon C5500/C3500 Integrated Memory Controller Registers"},

  {0x8086,0x2cd9,"Xeon C5500/C3500 Integrated Memory Controller Target Address Decoder"},

  {0x8086,0x2cda,"Xeon C5500/C3500 Integrated Memory Controller RAS Registers"},

  {0x8086,0x2cdc,"Xeon C5500/C3500 Integrated Memory Controller Test Registers"},

  {0x8086,0x2ce0,"Xeon C5500/C3500 Integrated Memory Controller Channel 0 Control"},

  {0x8086,0x2ce1,"Xeon C5500/C3500 Integrated Memory Controller Channel 0 Address"},

  {0x8086,0x2ce2,"Xeon C5500/C3500 Integrated Memory Controller Channel 0 Rank"},

  {0x8086,0x2ce3,"Xeon C5500/C3500 Integrated Memory Controller Channel 0 Thermal Control"},

  {0x8086,0x2ce8,"Xeon C5500/C3500 Integrated Memory Controller Channel 1 Control"},

  {0x8086,0x2ce9,"Xeon C5500/C3500 Integrated Memory Controller Channel 1 Address"},

  {0x8086,0x2cea,"Xeon C5500/C3500 Integrated Memory Controller Channel 1 Rank"},

  {0x8086,0x2ceb,"Xeon C5500/C3500 Integrated Memory Controller Channel 1 Thermal Control"},

  {0x8086,0x2cf0,"Xeon C5500/C3500 Integrated Memory Controller Channel 2 Control"},

  {0x8086,0x2cf1,"Xeon C5500/C3500 Integrated Memory Controller Channel 2 Address"},

  {0x8086,0x2cf2,"Xeon C5500/C3500 Integrated Memory Controller Channel 2 Rank"},

  {0x8086,0x2cf3,"Xeon C5500/C3500 Integrated Memory Controller Channel 2 Thermal Control"},

  {0x8086,0x2d01,"Core Processor QuickPath Architecture System Address Decoder"},

  {0x8086,0x2d10,"Core Processor QPI Link 0"},

  {0x8086,0x2d11,"1st Generation Core i3/5/7 Processor QPI Physical 0"},

  {0x8086,0x2d12,"1st Generation Core i3/5/7 Processor Reserved"},

  {0x8086,0x2d13,"1st Generation Core i3/5/7 Processor Reserved"},

  {0x8086,0x2d81,"Xeon 5600 Series QuickPath Architecture System Address Decoder"},

  {0x8086,0x2d90,"Xeon 5600 Series QPI Link 0"},

  {0x8086,0x2d91,"Xeon 5600 Series QPI Physical 0"},

  {0x8086,0x2d92,"Xeon 5600 Series Mirror Port Link 0"},

  {0x8086,0x2d93,"Xeon 5600 Series Mirror Port Link 1"},

  {0x8086,0x2d94,"Xeon 5600 Series QPI Link 1"},

  {0x8086,0x2d95,"Xeon 5600 Series QPI Physical 1"},

  {0x8086,0x2d98,"Xeon 5600 Series Integrated Memory Controller Registers"},

  {0x8086,0x2d99,"Xeon 5600 Series Integrated Memory Controller Target Address Decoder"},

  {0x8086,0x2d9a,"Xeon 5600 Series Integrated Memory Controller RAS Registers"},

  {0x8086,0x2d9c,"Xeon 5600 Series Integrated Memory Controller Test Registers"},

  {0x8086,0x2da0,"Xeon 5600 Series Integrated Memory Controller Channel 0 Control"},

  {0x8086,0x2da1,"Xeon 5600 Series Integrated Memory Controller Channel 0 Address"},

  {0x8086,0x2da2,"Xeon 5600 Series Integrated Memory Controller Channel 0 Rank"},

  {0x8086,0x2da3,"Xeon 5600 Series Integrated Memory Controller Channel 0 Thermal Control"},

  {0x8086,0x2da8,"Xeon 5600 Series Integrated Memory Controller Channel 1 Control"},

  {0x8086,0x2da9,"Xeon 5600 Series Integrated Memory Controller Channel 1 Address"},

  {0x8086,0x2daa,"Xeon 5600 Series Integrated Memory Controller Channel 1 Rank"},

  {0x8086,0x2dab,"Xeon 5600 Series Integrated Memory Controller Channel 1 Thermal Control"},

  {0x8086,0x2db0,"Xeon 5600 Series Integrated Memory Controller Channel 2 Control"},

  {0x8086,0x2db1,"Xeon 5600 Series Integrated Memory Controller Channel 2 Address"},

  {0x8086,0x2db2,"Xeon 5600 Series Integrated Memory Controller Channel 2 Rank"},

  {0x8086,0x2db3,"Xeon 5600 Series Integrated Memory Controller Channel 2 Thermal Control"},

  {0x8086,0x2e00,"4 Series Chipset DRAM Controller"},

  {0x8086,0x2e01,"4 Series Chipset PCI Express Root Port"},

  {0x8086,0x2e02,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e03,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e04,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e05,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e06,"4 Series Chipset PT IDER Controller"},

  {0x8086,0x2e07,"4 Series Chipset Serial KT Controller"},

  {0x8086,0x2e10,"4 Series Chipset DRAM Controller"},

  {0x8086,0x2e11,"4 Series Chipset PCI Express Root Port"},

  {0x8086,0x2e12,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e13,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e14,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e15,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e16,"4 Series Chipset PT IDER Controller"},

  {0x8086,0x2e17,"4 Series Chipset Serial KT Controller"},

  {0x8086,0x2e20,"4 Series Chipset DRAM Controller"},

  {0x8086,0x2e21,"4 Series Chipset PCI Express Root Port"},

  {0x8086,0x2e22,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e23,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e24,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e25,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e26,"4 Series Chipset PT IDER Controller"},

  {0x8086,0x2e27,"4 Series Chipset Serial KT Controller"},

  {0x8086,0x2e29,"4 Series Chipset PCI Express Root Port"},

  {0x8086,0x2e30,"4 Series Chipset DRAM Controller"},

  {0x8086,0x2e31,"4 Series Chipset PCI Express Root Port"},

  {0x8086,0x2e32,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e33,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e34,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e35,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e36,"4 Series Chipset PT IDER Controller"},

  {0x8086,0x2e37,"4 Series Chipset Serial KT Controller"},

  {0x8086,0x2e40,"4 Series Chipset DRAM Controller"},

  {0x8086,0x2e41,"4 Series Chipset PCI Express Root Port"},

  {0x8086,0x2e42,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e43,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e44,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e45,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e46,"4 Series Chipset PT IDER Controller"},

  {0x8086,0x2e47,"4 Series Chipset Serial KT Controller"},

  {0x8086,0x2e50,"CE Media Processor CE3100"},

  {0x8086,0x2e52,"CE Media Processor Clock and Reset Controller"},

  {0x8086,0x2e58,"CE Media Processor Interrupt Controller"},

  {0x8086,0x2e5a,"CE Media Processor CE3100 A/V Bridge"},

  {0x8086,0x2e5b,"Graphics Media Accelerator 500 Graphics"},

  {0x8086,0x2e5c,"CE Media Processor Video Decoder"},

  {0x8086,0x2e5d,"CE Media Processor Transport Stream Interface"},

  {0x8086,0x2e5e,"CE Media Processor Transport Stream Processor 0"},

  {0x8086,0x2e5f,"CE Media Processor Audio DSP"},

  {0x8086,0x2e60,"CE Media Processor Audio Interfaces"},

  {0x8086,0x2e61,"CE Media Processor Video Display Controller"},

  {0x8086,0x2e62,"CE Media Processor Video Processing Unit"},

  {0x8086,0x2e63,"CE Media Processor HDMI Tx Interface"},

  {0x8086,0x2e65,"CE Media Processor Expansion Bus Interface"},

  {0x8086,0x2e66,"CE Media Processor UART"},

  {0x8086,0x2e67,"CE Media Processor General Purpose I/Os"},

  {0x8086,0x2e68,"CE Media Processor I2C Interface"},

  {0x8086,0x2e69,"CE Media Processor Smart Card Interface"},

  {0x8086,0x2e6a,"CE Media Processor SPI Master Interface"},

  {0x8086,0x2e6e,"CE Media Processor Gigabit Ethernet Controller"},

  {0x8086,0x2e6f,"CE Media Processor Media Timing Unit"},

  {0x8086,0x2e70,"CE Media Processor USB"},

  {0x8086,0x2e71,"CE Media Processor SATA"},

  {0x8086,0x2e73,"CE Media Processor CE3100 PCI Express"},

  {0x8086,0x2e90,"4 Series Chipset DRAM Controller"},

  {0x8086,0x2e91,"4 Series Chipset PCI Express Root Port"},

  {0x8086,0x2e92,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e93,"4 Series Chipset Integrated Graphics Controller"},

  {0x8086,0x2e94,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e95,"4 Series Chipset HECI Controller"},

  {0x8086,0x2e96,"4 Series Chipset PT IDER Controller"},

  {0x8086,0x2f00,"Xeon E7 v3/Xeon E5 v3/Core i7 DMI2"},

  {0x8086,0x2f01,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 0"},

  {0x8086,0x2f02,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 1"},

  {0x8086,0x2f03,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 1"},

  {0x8086,0x2f04,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 2"},

  {0x8086,0x2f05,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 2"},

  {0x8086,0x2f06,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 2"},

  {0x8086,0x2f07,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 2"},

  {0x8086,0x2f08,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 3"},

  {0x8086,0x2f09,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 3"},

  {0x8086,0x2f0a,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 3"},

  {0x8086,0x2f0b,"Xeon E7 v3/Xeon E5 v3/Core i7 PCI Express Root Port 3"},

  {0x8086,0x2f0d,"Haswell Xeon Non-Transparent Bridge (Back-to-back)"},

  {0x8086,0x2f0e,"Haswell Xeon Non-Transparent Bridge (Primary Side)"},

  {0x8086,0x2f0f,"Haswell Xeon Non-Transparent Bridge (Secondary Side)"},

  {0x8086,0x2f10,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f11,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f12,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f13,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f14,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f15,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f16,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f17,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f18,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f19,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f1a,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f1b,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f1c,"Xeon E7 v3/Xeon E5 v3/Core i7 IIO Debug"},

  {0x8086,0x2f1d,"Xeon E7 v3/Xeon E5 v3/Core i7 PCIe Ring Interface"},

  {0x8086,0x2f1e,"Xeon E7 v3/Xeon E5 v3/Core i7 Scratchpad & Semaphore Registers"},

  {0x8086,0x2f1f,"Xeon E7 v3/Xeon E5 v3/Core i7 Scratchpad & Semaphore Registers"},

  {0x8086,0x2f20,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 0"},

  {0x8086,0x2f21,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 1"},

  {0x8086,0x2f22,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 2"},

  {0x8086,0x2f23,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 3"},

  {0x8086,0x2f24,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 4"},

  {0x8086,0x2f25,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 5"},

  {0x8086,0x2f26,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 6"},

  {0x8086,0x2f27,"Xeon E7 v3/Xeon E5 v3/Core i7 DMA Channel 7"},

  {0x8086,0x2f28,"Xeon E7 v3/Xeon E5 v3/Core i7 Address Map, VTd_Misc, System Management"},

  {0x8086,0x2f29,"Xeon E7 v3/Xeon E5 v3/Core i7 Hot Plug"},

  {0x8086,0x2f2a,"Xeon E7 v3/Xeon E5 v3/Core i7 RAS, Control Status and Global Errors"},

  {0x8086,0x2f2c,"Xeon E7 v3/Xeon E5 v3/Core i7 I/O APIC"},

  {0x8086,0x2f2e,"Xeon E7 v3/Xeon E5 v3/Core i7 RAID 5/6"},

  {0x8086,0x2f2f,"Xeon E7 v3/Xeon E5 v3/Core i7 RAID 5/6"},

  {0x8086,0x2f30,"Xeon E7 v3/Xeon E5 v3/Core i7 Home Agent 0"},

  {0x8086,0x2f32,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 0"},

  {0x8086,0x2f33,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 1"},

  {0x8086,0x2f34,"Xeon E7 v3/Xeon E5 v3/Core i7 PCIe Ring Interface"},

  {0x8086,0x2f36,"Xeon E7 v3/Xeon E5 v3/Core i7 R3 QPI Link 0 & 1 Monitoring"},

  {0x8086,0x2f37,"Xeon E7 v3/Xeon E5 v3/Core i7 R3 QPI Link 0 & 1 Monitoring"},

  {0x8086,0x2f38,"Xeon E7 v3/Xeon E5 v3/Core i7 Home Agent 1"},

  {0x8086,0x2f39,"Xeon E7 v3/Xeon E5 v3/Core i7 I/O Performance Monitoring"},

  {0x8086,0x2f3a,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 2"},

  {0x8086,0x2f3e,"Xeon E7 v3/Xeon E5 v3/Core i7 R3 QPI Link 2 Monitoring"},

  {0x8086,0x2f3f,"Xeon E7 v3/Xeon E5 v3/Core i7 R3 QPI Link 2 Monitoring"},

  {0x8086,0x2f40,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 2"},

  {0x8086,0x2f41,"Xeon E7 v3/Xeon E5 v3/Core i7 R3 QPI Link 2 Monitoring"},

  {0x8086,0x2f43,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 2"},

  {0x8086,0x2f45,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 2 Debug"},

  {0x8086,0x2f46,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 2 Debug"},

  {0x8086,0x2f47,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 2 Debug"},

  {0x8086,0x2f60,"Xeon E7 v3/Xeon E5 v3/Core i7 Home Agent 1"},

  {0x8086,0x2f68,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Target Address, Thermal & RAS Registers"},

  {0x8086,0x2f6a,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder"},

  {0x8086,0x2f6b,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder"},

  {0x8086,0x2f6c,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder"},

  {0x8086,0x2f6d,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel Target Address Decoder"},

  {0x8086,0x2f6e,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO Channel 2/3 Broadcast"},

  {0x8086,0x2f6f,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO Global Broadcast"},

  {0x8086,0x2f70,"Xeon E7 v3/Xeon E5 v3/Core i7 Home Agent 0 Debug"},

  {0x8086,0x2f71,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Target Address, Thermal & RAS Registers"},

  {0x8086,0x2f76,"Xeon E7 v3/Xeon E5 v3/Core i7 E3 QPI Link Debug"},

  {0x8086,0x2f78,"Xeon E7 v3/Xeon E5 v3/Core i7 Home Agent 1 Debug"},

  {0x8086,0x2f79,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Target Address, Thermal & RAS Registers"},

  {0x8086,0x2f7d,"Xeon E7 v3/Xeon E5 v3/Core i7 Scratchpad & Semaphore Registers"},

  {0x8086,0x2f7e,"Xeon E7 v3/Xeon E5 v3/Core i7 E3 QPI Link Debug"},

  {0x8086,0x2f80,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 0"},

  {0x8086,0x2f81,"Xeon E7 v3/Xeon E5 v3/Core i7 R3 QPI Link 0 & 1 Monitoring"},

  {0x8086,0x2f83,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 0"},

  {0x8086,0x2f85,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 0 Debug"},

  {0x8086,0x2f86,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 0 Debug"},

  {0x8086,0x2f87,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 0 Debug"},

  {0x8086,0x2f88,"Xeon E7 v3/Xeon E5 v3/Core i7 VCU"},

  {0x8086,0x2f8a,"Xeon E7 v3/Xeon E5 v3/Core i7 VCU"},

  {0x8086,0x2f90,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 1"},

  {0x8086,0x2f93,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 1"},

  {0x8086,0x2f95,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 1 Debug"},

  {0x8086,0x2f96,"Xeon E7 v3/Xeon E5 v3/Core i7 QPI Link 1 Debug"},

  {0x8086,0x2f98,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2f99,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2f9a,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2f9c,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2fa0,"Xeon E7 v3/Xeon E5 v3/Core i7 Home Agent 0"},

  {0x8086,0x2fa8,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Target Address, Thermal & RAS Registers"},

  {0x8086,0x2faa,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder"},

  {0x8086,0x2fab,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder"},

  {0x8086,0x2fac,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder"},

  {0x8086,0x2fad,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel Target Address Decoder"},

  {0x8086,0x2fae,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO Channel 0/1 Broadcast"},

  {0x8086,0x2faf,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO Global Broadcast"},

  {0x8086,0x2fb0,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 0 Thermal Control"},

  {0x8086,0x2fb1,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 1 Thermal Control"},

  {0x8086,0x2fb2,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 0 ERROR Registers"},

  {0x8086,0x2fb3,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 1 ERROR Registers"},

  {0x8086,0x2fb4,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 2 Thermal Control"},

  {0x8086,0x2fb5,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 3 Thermal Control"},

  {0x8086,0x2fb6,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 2 ERROR Registers"},

  {0x8086,0x2fb7,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 0 Channel 3 ERROR Registers"},

  {0x8086,0x2fb8,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 2 & 3"},

  {0x8086,0x2fb9,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 2 & 3"},

  {0x8086,0x2fba,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 2 & 3"},

  {0x8086,0x2fbb,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 2 & 3"},

  {0x8086,0x2fbc,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 0 & 1"},

  {0x8086,0x2fbd,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 0 & 1"},

  {0x8086,0x2fbe,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 0 & 1"},

  {0x8086,0x2fbf,"Xeon E7 v3/Xeon E5 v3/Core i7 DDRIO (VMSE) 0 & 1"},

  {0x8086,0x2fc0,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2fc1,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2fc2,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2fc3,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2fc4,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2fc5,"Xeon E7 v3/Xeon E5 v3/Core i7 Power Control Unit"},

  {0x8086,0x2fd0,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 0 Thermal Control"},

  {0x8086,0x2fd1,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 1 Thermal Control"},

  {0x8086,0x2fd2,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 0 ERROR Registers"},

  {0x8086,0x2fd3,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 1 ERROR Registers"},

  {0x8086,0x2fd4,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 2 Thermal Control"},

  {0x8086,0x2fd5,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 3 Thermal Control"},

  {0x8086,0x2fd6,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 2 ERROR Registers"},

  {0x8086,0x2fd7,"Xeon E7 v3/Xeon E5 v3/Core i7 Integrated Memory Controller 1 Channel 3 ERROR Registers"},

  {0x8086,0x2fe0,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe1,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe2,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe3,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe4,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe5,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe6,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe7,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe8,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fe9,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fea,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2feb,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fec,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fed,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fee,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2fef,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff0,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff1,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff2,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff3,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff4,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff5,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff6,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff7,"Xeon E7 v3/Xeon E5 v3/Core i7 Unicast Registers"},

  {0x8086,0x2ff8,"Xeon E7 v3/Xeon E5 v3/Core i7 Buffered Ring Agent"},

  {0x8086,0x2ff9,"Xeon E7 v3/Xeon E5 v3/Core i7 Buffered Ring Agent"},

  {0x8086,0x2ffa,"Xeon E7 v3/Xeon E5 v3/Core i7 Buffered Ring Agent"},

  {0x8086,0x2ffb,"Xeon E7 v3/Xeon E5 v3/Core i7 Buffered Ring Agent"},

  {0x8086,0x2ffc,"Xeon E7 v3/Xeon E5 v3/Core i7 System Address Decoder & Broadcast Registers"},

  {0x8086,0x2ffd,"Xeon E7 v3/Xeon E5 v3/Core i7 System Address Decoder & Broadcast Registers"},

  {0x8086,0x2ffe,"Xeon E7 v3/Xeon E5 v3/Core i7 System Address Decoder & Broadcast Registers"},

  {0x8086,0x3165,"Wireless 3165"},

  {0x8086,0x3166,"Dual Band Wireless-AC 3165 Plus Bluetooth"},

  {0x8086,0x3200,"GD31244 PCI-X SATA HBA"},

  {0x8086,0x3310,"IOP348 I/O Processor"},

  {0x8086,0x3313,"IOP348 I/O Processor (SL8e) in IOC Mode SAS/SATA"},

  {0x8086,0x331b,"IOP348 I/O Processor (SL8x) in IOC Mode SAS/SATA"},

  {0x8086,0x3331,"IOC340 I/O Controller (VV8e) SAS/SATA"},

  {0x8086,0x3339,"IOC340 I/O Controller (VV8x) SAS/SATA"},

  {0x8086,0x3340,"82855PM Processor to I/O Controller"},

  {0x8086,0x3341,"82855PM Processor to AGP Controller"},

  {0x8086,0x3363,"IOC340 I/O Controller in IOC Mode SAS/SATA"},

  {0x8086,0x3382,"81342 [Chevelon] I/O Processor (ATUe)"},

  {0x8086,0x33c3,"IOP348 I/O Processor (SL8De) in IOC Mode SAS/SATA"},

  {0x8086,0x33cb,"IOP348 I/O Processor (SL8Dx) in IOC Mode SAS/SATA"},

  {0x8086,0x3400,"5520/5500/X58 I/O Hub to ESI Port"},

  {0x8086,0x3401,"5520/5500/X58 I/O Hub to ESI Port"},

  {0x8086,0x3402,"5520/5500/X58 I/O Hub to ESI Port"},

  {0x8086,0x3403,"5500 I/O Hub to ESI Port"},

  {0x8086,0x3404,"5520/5500/X58 I/O Hub to ESI Port"},

  {0x8086,0x3405,"5520/5500/X58 I/O Hub to ESI Port"},

  {0x8086,0x3406,"5520 I/O Hub to ESI Port"},

  {0x8086,0x3407,"5520/5500/X58 I/O Hub to ESI Port"},

  {0x8086,0x3408,"5520/5500/X58 I/O Hub PCI Express Root Port 1"},

  {0x8086,0x3409,"5520/5500/X58 I/O Hub PCI Express Root Port 2"},

  {0x8086,0x340a,"5520/5500/X58 I/O Hub PCI Express Root Port 3"},

  {0x8086,0x340b,"5520/X58 I/O Hub PCI Express Root Port 4"},

  {0x8086,0x340c,"5520/X58 I/O Hub PCI Express Root Port 5"},

  {0x8086,0x340d,"5520/X58 I/O Hub PCI Express Root Port 6"},

  {0x8086,0x340e,"5520/5500/X58 I/O Hub PCI Express Root Port 7"},

  {0x8086,0x340f,"5520/5500/X58 I/O Hub PCI Express Root Port 8"},

  {0x8086,0x3410,"7500/5520/5500/X58 I/O Hub PCI Express Root Port 9"},

  {0x8086,0x3411,"7500/5520/5500/X58 I/O Hub PCI Express Root Port 10"},

  {0x8086,0x3418,"7500/5520/5500/X58 Physical Layer Port 0"},

  {0x8086,0x3419,"7500/5520/5500 Physical Layer Port 1"},

  {0x8086,0x3420,"7500/5520/5500/X58 I/O Hub PCI Express Root Port 0"},

  {0x8086,0x3421,"7500/5520/5500/X58 I/O Hub PCI Express Root Port 0"},

  {0x8086,0x3422,"7500/5520/5500/X58 I/O Hub GPIO and Scratch Pad Registers"},

  {0x8086,0x3423,"7500/5520/5500/X58 I/O Hub Control Status and RAS Registers"},

  {0x8086,0x3425,"7500/5520/5500/X58 Physical and Link Layer Registers Port 0"},

  {0x8086,0x3426,"7500/5520/5500/X58 Routing and Protocol Layer Registers Port 0"},

  {0x8086,0x3427,"7500/5520/5500 Physical and Link Layer Registers Port 1"},

  {0x8086,0x3428,"7500/5520/5500 Routing & Protocol Layer Register Port 1"},

  {0x8086,0x3429,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x342a,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x342b,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x342c,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x342d,"7500/5520/5500/X58 I/O Hub I/OxAPIC Interrupt Controller"},

  {0x8086,0x342e,"7500/5520/5500/X58 I/O Hub System Management Registers"},

  {0x8086,0x342f,"7500/5520/5500/X58 Trusted Execution Technology Registers"},

  {0x8086,0x3430,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x3431,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x3432,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x3433,"5520/5500/X58 Chipset QuickData Technology Device"},

  {0x8086,0x3438,"7500/5520/5500/X58 I/O Hub Throttle Registers"},

  {0x8086,0x3500,"6311ESB/6321ESB PCI Express Upstream Port"},

  {0x8086,0x3501,"6310ESB PCI Express Upstream Port"},

  {0x8086,0x3504,"6311ESB/6321ESB I/OxAPIC Interrupt Controller"},

  {0x8086,0x3505,"6310ESB I/OxAPIC Interrupt Controller"},

  {0x8086,0x350c,"6311ESB/6321ESB PCI Express to PCI-X Bridge"},

  {0x8086,0x350d,"6310ESB PCI Express to PCI-X Bridge"},

  {0x8086,0x3510,"6311ESB/6321ESB PCI Express Downstream Port E1"},

  {0x8086,0x3511,"6310ESB PCI Express Downstream Port E1"},

  {0x8086,0x3514,"6311ESB/6321ESB PCI Express Downstream Port E2"},

  {0x8086,0x3515,"6310ESB PCI Express Downstream Port E2"},

  {0x8086,0x3518,"6311ESB/6321ESB PCI Express Downstream Port E3"},

  {0x8086,0x3519,"6310ESB PCI Express Downstream Port E3"},

  {0x8086,0x3575,"82830M/MG/MP Host Bridge"},

  {0x8086,0x3576,"82830M/MP AGP Bridge"},

  {0x8086,0x3577,"82830M/MG Integrated Graphics Controller"},

  {0x8086,0x3578,"82830M/MG/MP Host Bridge"},

  {0x8086,0x3580,"82852/82855 GM/GME/PM/GMV Processor to I/O Controller"},

  {0x8086,0x3581,"82852/82855 GM/GME/PM/GMV Processor to AGP Controller"},

  {0x8086,0x3582,"82852/855GM Integrated Graphics Device"},

  {0x8086,0x3584,"82852/82855 GM/GME/PM/GMV Processor to I/O Controller"},

  {0x8086,0x3585,"82852/82855 GM/GME/PM/GMV Processor to I/O Controller"},

  {0x8086,0x358c,"82854 GMCH"},

  {0x8086,0x358e,"82854 GMCH Integrated Graphics Device"},

  {0x8086,0x3590,"E7520 Memory Controller Hub"},

  {0x8086,0x3591,"E7525/E7520 Error Reporting Registers"},

  {0x8086,0x3592,"E7320 Memory Controller Hub"},

  {0x8086,0x3593,"E7320 Error Reporting Registers"},

  {0x8086,0x3594,"E7520 DMA Controller"},

  {0x8086,0x3595,"E7525/E7520/E7320 PCI Express Port A"},

  {0x8086,0x3596,"E7525/E7520/E7320 PCI Express Port A1"},

  {0x8086,0x3597,"E7525/E7520 PCI Express Port B"},

  {0x8086,0x3598,"E7520 PCI Express Port B1"},

  {0x8086,0x3599,"E7520 PCI Express Port C"},

  {0x8086,0x359a,"E7520 PCI Express Port C1"},

  {0x8086,0x359b,"E7525/E7520/E7320 Extended Configuration Registers"},

  {0x8086,0x359e,"E7525 Memory Controller Hub"},

  {0x8086,0x35b0,"3100 Chipset Memory I/O Controller Hub"},

  {0x8086,0x35b1,"3100 DRAM Controller Error Reporting Registers"},

  {0x8086,0x35b5,"3100 Chipset Enhanced DMA Controller"},

  {0x8086,0x35b6,"3100 Chipset PCI Express Port A"},

  {0x8086,0x35b7,"3100 Chipset PCI Express Port A1"},

  {0x8086,0x35c8,"3100 Extended Configuration Test Overflow Registers"},

  {0x8086,0x3600,"7300 Chipset Memory Controller Hub"},

  {0x8086,0x3604,"7300 Chipset PCI Express Port 1"},

  {0x8086,0x3605,"7300 Chipset PCI Express Port 2"},

  {0x8086,0x3606,"7300 Chipset PCI Express Port 3"},

  {0x8086,0x3607,"7300 Chipset PCI Express Port 4"},

  {0x8086,0x3608,"7300 Chipset PCI Express Port 5"},

  {0x8086,0x3609,"7300 Chipset PCI Express Port 6"},

  {0x8086,0x360a,"7300 Chipset PCI Express Port 7"},

  {0x8086,0x360b,"7300 Chipset QuickData Technology Device"},

  {0x8086,0x360c,"7300 Chipset FSB Registers"},

  {0x8086,0x360d,"7300 Chipset Snoop Filter Registers"},

  {0x8086,0x360e,"7300 Chipset Debug and Miscellaneous Registers"},

  {0x8086,0x360f,"7300 Chipset FBD Branch 0 Registers"},

  {0x8086,0x3610,"7300 Chipset FBD Branch 1 Registers"},

  {0x8086,0x3700,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3701,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3702,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3703,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3704,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3705,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3706,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3707,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3708,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3709,"Xeon C5500/C3500 DMI"},

  {0x8086,0x370a,"Xeon C5500/C3500 DMI"},

  {0x8086,0x370b,"Xeon C5500/C3500 DMI"},

  {0x8086,0x370c,"Xeon C5500/C3500 DMI"},

  {0x8086,0x370d,"Xeon C5500/C3500 DMI"},

  {0x8086,0x370e,"Xeon C5500/C3500 DMI"},

  {0x8086,0x370f,"Xeon C5500/C3500 DMI"},

  {0x8086,0x3710,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3711,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3712,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3713,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3714,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3715,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3716,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3717,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3718,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x3719,"Xeon C5500/C3500 CB3 DMA"},

  {0x8086,0x371a,"Xeon C5500/C3500 QPI Link"},

  {0x8086,0x371b,"Xeon C5500/C3500 QPI Routing and Protocol"},

  {0x8086,0x371d,"Xeon C5500/C3500 QPI Routing and Protocol"},

  {0x8086,0x3720,"Xeon C5500/C3500 PCI Express Root Port 0"},

  {0x8086,0x3721,"Xeon C5500/C3500 PCI Express Root Port 1"},

  {0x8086,0x3722,"Xeon C5500/C3500 PCI Express Root Port 2"},

  {0x8086,0x3723,"Xeon C5500/C3500 PCI Express Root Port 3"},

  {0x8086,0x3724,"Xeon C5500/C3500 PCI Express Root Port 4"},

  {0x8086,0x3725,"Xeon C5500/C3500 NTB Primary"},

  {0x8086,0x3726,"Xeon C5500/C3500 NTB Primary"},

  {0x8086,0x3727,"Xeon C5500/C3500 NTB Secondary"},

  {0x8086,0x3728,"Xeon C5500/C3500 Core"},

  {0x8086,0x3729,"Xeon C5500/C3500 Core"},

  {0x8086,0x372a,"Xeon C5500/C3500 Core"},

  {0x8086,0x372b,"Xeon C5500/C3500 Core"},

  {0x8086,0x372c,"Xeon C5500/C3500 Reserved"},

  {0x8086,0x373f,"Xeon C5500/C3500 IOxAPIC"},

  {0x8086,0x37cd,"X722 Virtual Function"},

  {0x8086,0x37ce,"Ethernet Connection X722 for 10GbE backplane"},

  {0x8086,0x37cf,"Ethernet Connection X722 for 10GbE QSFP+"},

  {0x8086,0x37d0,"Ethernet Connection X722 for 10GbE SFP+"},

  {0x8086,0x37d1,"Ethernet Connection X722 for 1GbE"},

  {0x8086,0x37d2,"Ethernet Connection X722 for 10GBASE-T"},

  {0x8086,0x37d3,"Ethernet Connection X722 for 10GbE SFP+"},

  {0x8086,0x37d4,"Ethernet Connection X722 for 10GbE QSFP+"},

  {0x8086,0x37d9,"X722 Hyper-V Virtual Function"},

  {0x8086,0x3a00,"82801JD/DO (ICH10 Family) 4-port SATA IDE Controller"},

  {0x8086,0x3a02,"82801JD/DO (ICH10 Family) SATA AHCI Controller"},

  {0x8086,0x3a05,"82801JD/DO (ICH10 Family) SATA RAID Controller"},

  {0x8086,0x3a06,"82801JD/DO (ICH10 Family) 2-port SATA IDE Controller"},

  {0x8086,0x3a14,"82801JDO (ICH10DO) LPC Interface Controller"},

  {0x8086,0x3a16,"82801JIR (ICH10R) LPC Interface Controller"},

  {0x8086,0x3a18,"82801JIB (ICH10) LPC Interface Controller"},

  {0x8086,0x3a1a,"82801JD (ICH10D) LPC Interface Controller"},

  {0x8086,0x3a20,"82801JI (ICH10 Family) 4 port SATA IDE Controller #1"},

  {0x8086,0x3a22,"82801JI (ICH10 Family) SATA AHCI Controller"},

  {0x8086,0x3a25,"82801JIR (ICH10R) SATA RAID Controller"},

  {0x8086,0x3a26,"82801JI (ICH10 Family) 2 port SATA IDE Controller #2"},

  {0x8086,0x3a30,"82801JI (ICH10 Family) SMBus Controller"},

  {0x8086,0x3a32,"82801JI (ICH10 Family) Thermal Subsystem"},

  {0x8086,0x3a34,"82801JI (ICH10 Family) USB UHCI Controller #1"},

  {0x8086,0x3a35,"82801JI (ICH10 Family) USB UHCI Controller #2"},

  {0x8086,0x3a36,"82801JI (ICH10 Family) USB UHCI Controller #3"},

  {0x8086,0x3a37,"82801JI (ICH10 Family) USB UHCI Controller #4"},

  {0x8086,0x3a38,"82801JI (ICH10 Family) USB UHCI Controller #5"},

  {0x8086,0x3a39,"82801JI (ICH10 Family) USB UHCI Controller #6"},

  {0x8086,0x3a3a,"82801JI (ICH10 Family) USB2 EHCI Controller #1"},

  {0x8086,0x3a3c,"82801JI (ICH10 Family) USB2 EHCI Controller #2"},

  {0x8086,0x3a3e,"82801JI (ICH10 Family) HD Audio Controller"},

  {0x8086,0x3a40,"82801JI (ICH10 Family) PCI Express Root Port 1"},

  {0x8086,0x3a42,"82801JI (ICH10 Family) PCI Express Port 2"},

  {0x8086,0x3a44,"82801JI (ICH10 Family) PCI Express Root Port 3"},

  {0x8086,0x3a46,"82801JI (ICH10 Family) PCI Express Root Port 4"},

  {0x8086,0x3a48,"82801JI (ICH10 Family) PCI Express Root Port 5"},

  {0x8086,0x3a4a,"82801JI (ICH10 Family) PCI Express Root Port 6"},

  {0x8086,0x3a4c,"82801JI (ICH10 Family) Gigabit Ethernet Controller"},

  {0x8086,0x3a51,"82801JDO (ICH10DO) VECI Controller"},

  {0x8086,0x3a55,"82801JD/DO (ICH10 Family) Virtual SATA Controller"},

  {0x8086,0x3a60,"82801JD/DO (ICH10 Family) SMBus Controller"},

  {0x8086,0x3a62,"82801JD/DO (ICH10 Family) Thermal Subsystem"},

  {0x8086,0x3a64,"82801JD/DO (ICH10 Family) USB UHCI Controller #1"},

  {0x8086,0x3a65,"82801JD/DO (ICH10 Family) USB UHCI Controller #2"},

  {0x8086,0x3a66,"82801JD/DO (ICH10 Family) USB UHCI Controller #3"},

  {0x8086,0x3a67,"82801JD/DO (ICH10 Family) USB UHCI Controller #4"},

  {0x8086,0x3a68,"82801JD/DO (ICH10 Family) USB UHCI Controller #5"},

  {0x8086,0x3a69,"82801JD/DO (ICH10 Family) USB UHCI Controller #6"},

  {0x8086,0x3a6a,"82801JD/DO (ICH10 Family) USB2 EHCI Controller #1"},

  {0x8086,0x3a6c,"82801JD/DO (ICH10 Family) USB2 EHCI Controller #2"},

  {0x8086,0x3a6e,"82801JD/DO (ICH10 Family) HD Audio Controller"},

  {0x8086,0x3a70,"82801JD/DO (ICH10 Family) PCI Express Port 1"},

  {0x8086,0x3a72,"82801JD/DO (ICH10 Family) PCI Express Port 2"},

  {0x8086,0x3a74,"82801JD/DO (ICH10 Family) PCI Express Port 3"},

  {0x8086,0x3a76,"82801JD/DO (ICH10 Family) PCI Express Port 4"},

  {0x8086,0x3a78,"82801JD/DO (ICH10 Family) PCI Express Port 5"},

  {0x8086,0x3a7a,"82801JD/DO (ICH10 Family) PCI Express Port 6"},

  {0x8086,0x3a7c,"82801JD/DO (ICH10 Family) Gigabit Ethernet Controller"},

  {0x8086,0x3b00,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b01,"Mobile 5 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b02,"P55 Chipset LPC Interface Controller"},

  {0x8086,0x3b03,"PM55 Chipset LPC Interface Controller"},

  {0x8086,0x3b04,"5 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b05,"Mobile 5 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b06,"H55 Chipset LPC Interface Controller"},

  {0x8086,0x3b07,"QM57 Chipset LPC Interface Controller"},

  {0x8086,0x3b08,"H57 Chipset LPC Interface Controller"},

  {0x8086,0x3b09,"HM55 Chipset LPC Interface Controller"},

  {0x8086,0x3b0a,"Q57 Chipset LPC Interface Controller"},

  {0x8086,0x3b0b,"HM57 Chipset LPC Interface Controller"},

  {0x8086,0x3b0c,"5 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b0d,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b0e,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b0f,"QS57 Chipset LPC Interface Controller"},

  {0x8086,0x3b10,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b11,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b12,"3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b13,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b14,"3420 Chipset LPC Interface Controller"},

  {0x8086,0x3b15,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b16,"3450 Chipset LPC Interface Controller"},

  {0x8086,0x3b17,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b18,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b19,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b1a,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b1b,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b1c,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b1d,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b1e,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b1f,"5 Series/3400 Series Chipset LPC Interface Controller"},

  {0x8086,0x3b20,"5 Series/3400 Series Chipset 4 port SATA IDE Controller"},

  {0x8086,0x3b21,"5 Series/3400 Series Chipset 2 port SATA IDE Controller"},

  {0x8086,0x3b22,"5 Series/3400 Series Chipset 6 port SATA AHCI Controller"},

  {0x8086,0x3b23,"5 Series/3400 Series Chipset 4 port SATA AHCI Controller"},

  {0x8086,0x3b25,"5 Series/3400 Series Chipset SATA RAID Controller"},

  {0x8086,0x3b26,"5 Series/3400 Series Chipset 2 port SATA IDE Controller"},

  {0x8086,0x3b28,"5 Series/3400 Series Chipset 4 port SATA IDE Controller"},

  {0x8086,0x3b29,"5 Series/3400 Series Chipset 4 port SATA AHCI Controller"},

  {0x8086,0x3b2c,"5 Series/3400 Series Chipset SATA RAID Controller"},

  {0x8086,0x3b2d,"5 Series/3400 Series Chipset 2 port SATA IDE Controller"},

  {0x8086,0x3b2e,"5 Series/3400 Series Chipset 4 port SATA IDE Controller"},

  {0x8086,0x3b2f,"5 Series/3400 Series Chipset 6 port SATA AHCI Controller"},

  {0x8086,0x3b30,"5 Series/3400 Series Chipset SMBus Controller"},

  {0x8086,0x3b32,"5 Series/3400 Series Chipset Thermal Subsystem"},

  {0x8086,0x3b34,"5 Series/3400 Series Chipset USB2 Enhanced Host Controller"},

  {0x8086,0x3b36,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b37,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b38,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b39,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b3a,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b3b,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b3c,"5 Series/3400 Series Chipset USB2 Enhanced Host Controller"},

  {0x8086,0x3b3e,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b3f,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b40,"5 Series/3400 Series Chipset USB Universal Host Controller"},

  {0x8086,0x3b41,"5 Series/3400 Series Chipset LAN Controller"},

  {0x8086,0x3b42,"5 Series/3400 Series Chipset PCI Express Root Port 1"},

  {0x8086,0x3b44,"5 Series/3400 Series Chipset PCI Express Root Port 2"},

  {0x8086,0x3b46,"5 Series/3400 Series Chipset PCI Express Root Port 3"},

  {0x8086,0x3b48,"5 Series/3400 Series Chipset PCI Express Root Port 4"},

  {0x8086,0x3b4a,"5 Series/3400 Series Chipset PCI Express Root Port 5"},

  {0x8086,0x3b4c,"5 Series/3400 Series Chipset PCI Express Root Port 6"},

  {0x8086,0x3b4e,"5 Series/3400 Series Chipset PCI Express Root Port 7"},

  {0x8086,0x3b50,"5 Series/3400 Series Chipset PCI Express Root Port 8"},

  {0x8086,0x3b53,"5 Series/3400 Series Chipset VECI Controller"},

  {0x8086,0x3b56,"5 Series/3400 Series Chipset High Definition Audio"},

  {0x8086,0x3b57,"5 Series/3400 Series Chipset High Definition Audio"},

  {0x8086,0x3b64,"5 Series/3400 Series Chipset HECI Controller"},

  {0x8086,0x3b65,"5 Series/3400 Series Chipset HECI Controller"},

  {0x8086,0x3b66,"5 Series/3400 Series Chipset PT IDER Controller"},

  {0x8086,0x3b67,"5 Series/3400 Series Chipset KT Controller"},

  {0x8086,0x3c00,"Xeon E5/Core i7 DMI2"},

  {0x8086,0x3c01,"Xeon E5/Core i7 DMI2 in PCI Express Mode"},

  {0x8086,0x3c02,"Xeon E5/Core i7 IIO PCI Express Root Port 1a"},

  {0x8086,0x3c03,"Xeon E5/Core i7 IIO PCI Express Root Port 1b"},

  {0x8086,0x3c04,"Xeon E5/Core i7 IIO PCI Express Root Port 2a"},

  {0x8086,0x3c05,"Xeon E5/Core i7 IIO PCI Express Root Port 2b"},

  {0x8086,0x3c06,"Xeon E5/Core i7 IIO PCI Express Root Port 2c"},

  {0x8086,0x3c07,"Xeon E5/Core i7 IIO PCI Express Root Port 2d"},

  {0x8086,0x3c08,"Xeon E5/Core i7 IIO PCI Express Root Port 3a in PCI Express Mode"},

  {0x8086,0x3c09,"Xeon E5/Core i7 IIO PCI Express Root Port 3b"},

  {0x8086,0x3c0a,"Xeon E5/Core i7 IIO PCI Express Root Port 3c"},

  {0x8086,0x3c0b,"Xeon E5/Core i7 IIO PCI Express Root Port 3d"},

  {0x8086,0x3c0d,"Xeon E5/Core i7 Non-Transparent Bridge"},

  {0x8086,0x3c0e,"Xeon E5/Core i7 Non-Transparent Bridge"},

  {0x8086,0x3c0f,"Xeon E5/Core i7 Non-Transparent Bridge"},

  {0x8086,0x3c20,"Xeon E5/Core i7 DMA Channel 0"},

  {0x8086,0x3c21,"Xeon E5/Core i7 DMA Channel 1"},

  {0x8086,0x3c22,"Xeon E5/Core i7 DMA Channel 2"},

  {0x8086,0x3c23,"Xeon E5/Core i7 DMA Channel 3"},

  {0x8086,0x3c24,"Xeon E5/Core i7 DMA Channel 4"},

  {0x8086,0x3c25,"Xeon E5/Core i7 DMA Channel 5"},

  {0x8086,0x3c26,"Xeon E5/Core i7 DMA Channel 6"},

  {0x8086,0x3c27,"Xeon E5/Core i7 DMA Channel 7"},

  {0x8086,0x3c28,"Xeon E5/Core i7 Address Map, VTd_Misc, System Management"},

  {0x8086,0x3c2a,"Xeon E5/Core i7 Control Status and Global Errors"},

  {0x8086,0x3c2c,"Xeon E5/Core i7 I/O APIC"},

  {0x8086,0x3c2e,"Xeon E5/Core i7 DMA"},

  {0x8086,0x3c2f,"Xeon E5/Core i7 DMA"},

  {0x8086,0x3c40,"Xeon E5/Core i7 IIO Switch and IRP Performance Monitor"},

  {0x8086,0x3c43,"Xeon E5/Core i7 Ring to PCI Express Performance Monitor"},

  {0x8086,0x3c44,"Xeon E5/Core i7 Ring to QuickPath Interconnect Link 0 Performance Monitor"},

  {0x8086,0x3c45,"Xeon E5/Core i7 Ring to QuickPath Interconnect Link 1 Performance Monitor"},

  {0x8086,0x3c46,"Xeon E5/Core i7 Processor Home Agent Performance Monitoring"},

  {0x8086,0x3c71,"Xeon E5/Core i7 Integrated Memory Controller RAS Registers"},

  {0x8086,0x3c80,"Xeon E5/Core i7 QPI Link 0"},

  {0x8086,0x3c83,"Xeon E5/Core i7 QPI Link Reut 0"},

  {0x8086,0x3c84,"Xeon E5/Core i7 QPI Link Reut 0"},

  {0x8086,0x3c90,"Xeon E5/Core i7 QPI Link 1"},

  {0x8086,0x3c93,"Xeon E5/Core i7 QPI Link Reut 1"},

  {0x8086,0x3c94,"Xeon E5/Core i7 QPI Link Reut 1"},

  {0x8086,0x3ca0,"Xeon E5/Core i7 Processor Home Agent"},

  {0x8086,0x3ca8,"Xeon E5/Core i7 Integrated Memory Controller Registers"},

  {0x8086,0x3caa,"Xeon E5/Core i7 Integrated Memory Controller Target Address Decoder 0"},

  {0x8086,0x3cab,"Xeon E5/Core i7 Integrated Memory Controller Target Address Decoder 1"},

  {0x8086,0x3cac,"Xeon E5/Core i7 Integrated Memory Controller Target Address Decoder 2"},

  {0x8086,0x3cad,"Xeon E5/Core i7 Integrated Memory Controller Target Address Decoder 3"},

  {0x8086,0x3cae,"Xeon E5/Core i7 Integrated Memory Controller Target Address Decoder 4"},

  {0x8086,0x3cb0,"Xeon E5/Core i7 Integrated Memory Controller Channel 0-3 Thermal Control 0"},

  {0x8086,0x3cb1,"Xeon E5/Core i7 Integrated Memory Controller Channel 0-3 Thermal Control 1"},

  {0x8086,0x3cb2,"Xeon E5/Core i7 Integrated Memory Controller ERROR Registers 0"},

  {0x8086,0x3cb3,"Xeon E5/Core i7 Integrated Memory Controller ERROR Registers 1"},

  {0x8086,0x3cb4,"Xeon E5/Core i7 Integrated Memory Controller Channel 0-3 Thermal Control 2"},

  {0x8086,0x3cb5,"Xeon E5/Core i7 Integrated Memory Controller Channel 0-3 Thermal Control 3"},

  {0x8086,0x3cb6,"Xeon E5/Core i7 Integrated Memory Controller ERROR Registers 2"},

  {0x8086,0x3cb7,"Xeon E5/Core i7 Integrated Memory Controller ERROR Registers 3"},

  {0x8086,0x3cb8,"Xeon E5/Core i7 DDRIO"},

  {0x8086,0x3cc0,"Xeon E5/Core i7 Power Control Unit 0"},

  {0x8086,0x3cc1,"Xeon E5/Core i7 Power Control Unit 1"},

  {0x8086,0x3cc2,"Xeon E5/Core i7 Power Control Unit 2"},

  {0x8086,0x3cd0,"Xeon E5/Core i7 Power Control Unit 3"},

  {0x8086,0x3ce0,"Xeon E5/Core i7 Interrupt Control Registers"},

  {0x8086,0x3ce3,"Xeon E5/Core i7 Semaphore and Scratchpad Configuration Registers"},

  {0x8086,0x3ce4,"Xeon E5/Core i7 R2PCIe"},

  {0x8086,0x3ce6,"Xeon E5/Core i7 QuickPath Interconnect Agent Ring Registers"},

  {0x8086,0x3ce8,"Xeon E5/Core i7 Unicast Register 0"},

  {0x8086,0x3ce9,"Xeon E5/Core i7 Unicast Register 5"},

  {0x8086,0x3cea,"Xeon E5/Core i7 Unicast Register 1"},

  {0x8086,0x3ceb,"Xeon E5/Core i7 Unicast Register 6"},

  {0x8086,0x3cec,"Xeon E5/Core i7 Unicast Register 3"},

  {0x8086,0x3ced,"Xeon E5/Core i7 Unicast Register 7"},

  {0x8086,0x3cee,"Xeon E5/Core i7 Unicast Register 4"},

  {0x8086,0x3cef,"Xeon E5/Core i7 Unicast Register 8"},

  {0x8086,0x3cf4,"Xeon E5/Core i7 Integrated Memory Controller System Address Decoder 0"},

  {0x8086,0x3cf5,"Xeon E5/Core i7 Integrated Memory Controller System Address Decoder 1"},

  {0x8086,0x3cf6,"Xeon E5/Core i7 System Address Decoder"},

  {0x8086,0x4000,"5400 Chipset Memory Controller Hub"},

  {0x8086,0x4001,"5400 Chipset Memory Controller Hub"},

  {0x8086,0x4003,"5400 Chipset Memory Controller Hub"},

  {0x8086,0x4021,"5400 Chipset PCI Express Port 1"},

  {0x8086,0x4022,"5400 Chipset PCI Express Port 2"},

  {0x8086,0x4023,"5400 Chipset PCI Express Port 3"},

  {0x8086,0x4024,"5400 Chipset PCI Express Port 4"},

  {0x8086,0x4025,"5400 Chipset PCI Express Port 5"},

  {0x8086,0x4026,"5400 Chipset PCI Express Port 6"},

  {0x8086,0x4027,"5400 Chipset PCI Express Port 7"},

  {0x8086,0x4028,"5400 Chipset PCI Express Port 8"},

  {0x8086,0x4029,"5400 Chipset PCI Express Port 9"},

  {0x8086,0x402d,"5400 Chipset IBIST Registers"},

  {0x8086,0x402e,"5400 Chipset IBIST Registers"},

  {0x8086,0x402f,"5400 Chipset QuickData Technology Device"},

  {0x8086,0x4030,"5400 Chipset FSB Registers"},

  {0x8086,0x4031,"5400 Chipset CE/SF Registers"},

  {0x8086,0x4032,"5400 Chipset IOxAPIC"},

  {0x8086,0x4035,"5400 Chipset FBD Registers"},

  {0x8086,0x4036,"5400 Chipset FBD Registers"},

  {0x8086,0x4100,"Moorestown Graphics and Video"},

  {0x8086,0x4108,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x4109,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x410a,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x410b,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x410c,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x410d,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x410e,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x410f,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x4114,"Atom Processor E6xx PCI Host Bridge #1"},

  {0x8086,0x4115,"Atom Processor E6xx PCI Host Bridge #2"},

  {0x8086,0x4116,"Atom Processor E6xx PCI Host Bridge #3"},

  {0x8086,0x4117,"Atom Processor E6xx PCI Host Bridge #4"},

  {0x8086,0x4220,"PRO/Wireless 2200BG [Calexico2] Network Connection"},

  {0x8086,0x4222,"PRO/Wireless 3945ABG [Golan] Network Connection"},

  {0x8086,0x4223,"PRO/Wireless 2915ABG [Calexico2] Network Connection"},

  {0x8086,0x4224,"PRO/Wireless 2915ABG [Calexico2] Network Connection"},

  {0x8086,0x4227,"PRO/Wireless 3945ABG [Golan] Network Connection"},

  {0x8086,0x4229,"PRO/Wireless 4965 AG or AGN [Kedron] Network Connection"},

  {0x8086,0x422b,"Centrino Ultimate-N 6300"},

  {0x8086,0x422c,"Centrino Advanced-N 6200"},

  {0x8086,0x4230,"PRO/Wireless 4965 AG or AGN [Kedron] Network Connection"},

  {0x8086,0x4232,"WiFi Link 5100"},

  {0x8086,0x4235,"Ultimate N WiFi Link 5300"},

  {0x8086,0x4236,"Ultimate N WiFi Link 5300"},

  {0x8086,0x4237,"PRO/Wireless 5100 AGN [Shiloh] Network Connection"},

  {0x8086,0x4238,"Centrino Ultimate-N 6300"},

  {0x8086,0x4239,"Centrino Advanced-N 6200"},

  {0x8086,0x423a,"PRO/Wireless 5350 AGN [Echo Peak] Network Connection"},

  {0x8086,0x423b,"PRO/Wireless 5350 AGN [Echo Peak] Network Connection"},

  {0x8086,0x423c,"WiMAX/WiFi Link 5150"},

  {0x8086,0x423d,"WiMAX/WiFi Link 5150"},

  {0x8086,0x444e,"Turbo Memory Controller"},

  {0x8086,0x5001,"LE80578"},

  {0x8086,0x5002,"LE80578 Graphics Processor Unit"},

  {0x8086,0x5009,"LE80578 Video Display Controller"},

  {0x8086,0x500d,"LE80578 Expansion Bus"},

  {0x8086,0x500e,"LE80578 UART Controller"},

  {0x8086,0x500f,"LE80578 General Purpose IO"},

  {0x8086,0x5010,"LE80578 I2C Controller"},

  {0x8086,0x5012,"LE80578 Serial Peripheral Interface Bus"},

  {0x8086,0x5020,"EP80579 Memory Controller Hub"},

  {0x8086,0x5021,"EP80579 DRAM Error Reporting Registers"},

  {0x8086,0x5023,"EP80579 EDMA Controller"},

  {0x8086,0x5024,"EP80579 PCI Express Port PEA0"},

  {0x8086,0x5025,"EP80579 PCI Express Port PEA1"},

  {0x8086,0x5028,"EP80579 S-ATA IDE"},

  {0x8086,0x5029,"EP80579 S-ATA AHCI"},

  {0x8086,0x502a,"EP80579 S-ATA Reserved"},

  {0x8086,0x502b,"EP80579 S-ATA Reserved"},

  {0x8086,0x502c,"EP80579 Integrated Processor ASU"},

  {0x8086,0x502d,"EP80579 Integrated Processor with QuickAssist ASU"},

  {0x8086,0x502e,"EP80579 Reserved"},

  {0x8086,0x502f,"EP80579 Reserved"},

  {0x8086,0x5030,"EP80579 Reserved"},

  {0x8086,0x5031,"EP80579 LPC Bus"},

  {0x8086,0x5032,"EP80579 SMBus Controller"},

  {0x8086,0x5033,"EP80579 USB 1.1 Controller"},

  {0x8086,0x5035,"EP80579 USB 2.0 Controller"},

  {0x8086,0x5037,"EP80579 PCI-PCI Bridge (transparent mode)"},

  {0x8086,0x5039,"EP80579 Controller Area Network (CAN) interface #1"},

  {0x8086,0x503a,"EP80579 Controller Area Network (CAN) interface #2"},

  {0x8086,0x503b,"EP80579 Synchronous Serial Port (SPP)"},

  {0x8086,0x503c,"EP80579 IEEE 1588 Hardware Assist"},

  {0x8086,0x503d,"EP80579 Local Expansion Bus"},

  {0x8086,0x503e,"EP80579 Global Control Unit (GCU)"},

  {0x8086,0x503f,"EP80579 Reserved"},

  {0x8086,0x5040,"EP80579 Integrated Processor Gigabit Ethernet MAC"},

  {0x8086,0x5041,"EP80579 Integrated Processor with QuickAssist Gigabit Ethernet MAC"},

  {0x8086,0x5042,"EP80579 Reserved"},

  {0x8086,0x5043,"EP80579 Reserved"},

  {0x8086,0x5044,"EP80579 Integrated Processor Gigabit Ethernet MAC"},

  {0x8086,0x5045,"EP80579 Integrated Processor with QuickAssist Gigabit Ethernet MAC"},

  {0x8086,0x5046,"EP80579 Reserved"},

  {0x8086,0x5047,"EP80579 Reserved"},

  {0x8086,0x5048,"EP80579 Integrated Processor Gigabit Ethernet MAC"},

  {0x8086,0x5049,"EP80579 Integrated Processor with QuickAssist Gigabit Ethernet MAC"},

  {0x8086,0x504a,"EP80579 Reserved"},

  {0x8086,0x504b,"EP80579 Reserved"},

  {0x8086,0x504c,"EP80579 Integrated Processor with QuickAssist TDM"},

  {0x8086,0x5200,"EtherExpress PRO/100 Intelligent Server PCI Bridge"},

  {0x8086,0x5201,"EtherExpress PRO/100 Intelligent Server Fast Ethernet Controller"},

  {0x8086,0x530d,"80310 (IOP) IO Processor"},

  {0x8086,0x5845,"QEMU NVM Express Controller"},

  {0x8086,0x5902,"HD Graphics 610"},

  {0x8086,0x590f,"Xeon E3-1200 v6/7th Gen Core Processor Host Bridge/DRAM Registers"},

  {0x8086,0x5910,"Xeon E3-1200 v6/7th Gen Core Processor Host Bridge/DRAM Registers"},

  {0x8086,0x5912,"HD Graphics 630"},

  {0x8086,0x5a84,"Celeron N3350/Pentium N4200/Atom E3900 Series Integrated Graphics Controller"},

  {0x8086,0x5a88,"Celeron N3350/Pentium N4200/Atom E3900 Series Imaging Unit"},

  {0x8086,0x5a98,"Celeron N3350/Pentium N4200/Atom E3900 Series Audio Cluster"},

  {0x8086,0x5a9a,"Celeron N3350/Pentium N4200/Atom E3900 Series Trusted Execution Engine"},

  {0x8086,0x5aa2,"Celeron N3350/Pentium N4200/Atom E3900 Series Integrated Sensor Hub"},

  {0x8086,0x5aa8,"Celeron N3350/Pentium N4200/Atom E3900 Series USB xHCI"},

  {0x8086,0x5aac,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #1"},

  {0x8086,0x5aae,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #2"},

  {0x8086,0x5ab0,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #3"},

  {0x8086,0x5ab2,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #4"},

  {0x8086,0x5ab4,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #5"},

  {0x8086,0x5ab6,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #6"},

  {0x8086,0x5ab8,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #7"},

  {0x8086,0x5aba,"Celeron N3350/Pentium N4200/Atom E3900 Series I2C Controller #8"},

  {0x8086,0x5abc,"Celeron N3350/Pentium N4200/Atom E3900 Series HSUART Controller #1"},

  {0x8086,0x5abe,"Celeron N3350/Pentium N4200/Atom E3900 Series HSUART Controller #2"},

  {0x8086,0x5ac0,"Celeron N3350/Pentium N4200/Atom E3900 Series HSUART Controller #3"},

  {0x8086,0x5ac2,"Celeron N3350/Pentium N4200/Atom E3900 Series SPI Controller #1"},

  {0x8086,0x5ac4,"Celeron N3350/Pentium N4200/Atom E3900 Series SPI Controller #2"},

  {0x8086,0x5ac6,"Celeron N3350/Pentium N4200/Atom E3900 Series SPI Controller #3"},

  {0x8086,0x5ac8,"Celeron N3350/Pentium N4200/Atom E3900 Series PWM Pin Controller"},

  {0x8086,0x5aca,"Celeron N3350/Pentium N4200/Atom E3900 Series SDXC/MMC Host Controller"},

  {0x8086,0x5acc,"Celeron N3350/Pentium N4200/Atom E3900 Series eMMC Controller"},

  {0x8086,0x5ad0,"Celeron N3350/Pentium N4200/Atom E3900 Series SDIO Controller"},

  {0x8086,0x5ad4,"Celeron N3350/Pentium N4200/Atom E3900 Series SMBus Controller"},

  {0x8086,0x5ad6,"Celeron N3350/Pentium N4200/Atom E3900 Series PCI Express Port B #1"},

  {0x8086,0x5ad7,"Celeron N3350/Pentium N4200/Atom E3900 Series PCI Express Port B #2"},

  {0x8086,0x5ad8,"Celeron N3350/Pentium N4200/Atom E3900 Series PCI Express Port A #1"},

  {0x8086,0x5ad9,"Celeron N3350/Pentium N4200/Atom E3900 Series PCI Express Port A #2"},

  {0x8086,0x5ada,"Celeron N3350/Pentium N4200/Atom E3900 Series PCI Express Port A #3"},

  {0x8086,0x5adb,"Celeron N3350/Pentium N4200/Atom E3900 Series PCI Express Port A #4"},

  {0x8086,0x5ae3,"Celeron N3350/Pentium N4200/Atom E3900 Series SATA AHCI Controller"},

  {0x8086,0x5ae8,"Celeron N3350/Pentium N4200/Atom E3900 Series Low Pin Count Interface"},

  {0x8086,0x5aee,"Celeron N3350/Pentium N4200/Atom E3900 Series HSUART Controller #4"},

  {0x8086,0x5af0,"Celeron N3350/Pentium N4200/Atom E3900 Series Host Bridge"},

  {0x8086,0x65c0,"5100 Chipset Memory Controller Hub"},

  {0x8086,0x65e2,"5100 Chipset PCI Express x4 Port 2"},

  {0x8086,0x65e3,"5100 Chipset PCI Express x4 Port 3"},

  {0x8086,0x65e4,"5100 Chipset PCI Express x4 Port 4"},

  {0x8086,0x65e5,"5100 Chipset PCI Express x4 Port 5"},

  {0x8086,0x65e6,"5100 Chipset PCI Express x4 Port 6"},

  {0x8086,0x65e7,"5100 Chipset PCI Express x4 Port 7"},

  {0x8086,0x65f0,"5100 Chipset FSB Registers"},

  {0x8086,0x65f1,"5100 Chipset Reserved Registers"},

  {0x8086,0x65f3,"5100 Chipset Reserved Registers"},

  {0x8086,0x65f5,"5100 Chipset DDR Channel 0 Registers"},

  {0x8086,0x65f6,"5100 Chipset DDR Channel 1 Registers"},

  {0x8086,0x65f7,"5100 Chipset PCI Express x8 Port 2-3"},

  {0x8086,0x65f8,"5100 Chipset PCI Express x8 Port 4-5"},

  {0x8086,0x65f9,"5100 Chipset PCI Express x8 Port 6-7"},

  {0x8086,0x65fa,"5100 Chipset PCI Express x16 Port 4-7"},

  {0x8086,0x65ff,"5100 Chipset DMA Engine"},

  {0x8086,0x6f00,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DMI2"},

  {0x8086,0x6f01,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 0"},

  {0x8086,0x6f02,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 1"},

  {0x8086,0x6f03,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 1"},

  {0x8086,0x6f04,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 2"},

  {0x8086,0x6f05,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 2"},

  {0x8086,0x6f06,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 2"},

  {0x8086,0x6f07,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 2"},

  {0x8086,0x6f08,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 3"},

  {0x8086,0x6f09,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 3"},

  {0x8086,0x6f0a,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 3"},

  {0x8086,0x6f0b,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D PCI Express Root Port 3"},

  {0x8086,0x6f10,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f11,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f12,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f13,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f14,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f15,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f16,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f17,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f18,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f19,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f1a,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f1b,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f1c,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Debug"},

  {0x8086,0x6f1d,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R2PCIe Agent"},

  {0x8086,0x6f1e,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Ubox"},

  {0x8086,0x6f1f,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Ubox"},

  {0x8086,0x6f20,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 0"},

  {0x8086,0x6f21,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 1"},

  {0x8086,0x6f22,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 2"},

  {0x8086,0x6f23,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 3"},

  {0x8086,0x6f24,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 4"},

  {0x8086,0x6f25,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 5"},

  {0x8086,0x6f26,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 6"},

  {0x8086,0x6f27,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Crystal Beach DMA Channel 7"},

  {0x8086,0x6f28,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Map/VTd_Misc/System Management"},

  {0x8086,0x6f29,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO Hot Plug"},

  {0x8086,0x6f2a,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IIO RAS/Control Status/Global Errors"},

  {0x8086,0x6f2c,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D I/O APIC"},

  {0x8086,0x6f30,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Home Agent 0"},

  {0x8086,0x6f32,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 0"},

  {0x8086,0x6f33,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 1"},

  {0x8086,0x6f34,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R2PCIe Agent"},

  {0x8086,0x6f36,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link 0/1"},

  {0x8086,0x6f37,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link 0/1"},

  {0x8086,0x6f38,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Home Agent 1"},

  {0x8086,0x6f39,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D IO Performance Monitoring"},

  {0x8086,0x6f3a,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 2"},

  {0x8086,0x6f3e,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link 2"},

  {0x8086,0x6f3f,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link 2"},

  {0x8086,0x6f40,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 2"},

  {0x8086,0x6f41,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link 2"},

  {0x8086,0x6f43,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 2"},

  {0x8086,0x6f45,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 2 Debug"},

  {0x8086,0x6f46,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 2 Debug"},

  {0x8086,0x6f47,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 2 Debug"},

  {0x8086,0x6f50,"Xeon Processor D Family QuickData Technology Register DMA Channel 0"},

  {0x8086,0x6f51,"Xeon Processor D Family QuickData Technology Register DMA Channel 1"},

  {0x8086,0x6f52,"Xeon Processor D Family QuickData Technology Register DMA Channel 2"},

  {0x8086,0x6f53,"Xeon Processor D Family QuickData Technology Register DMA Channel 3"},

  {0x8086,0x6f60,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Home Agent 1"},

  {0x8086,0x6f68,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Target Address/Thermal/RAS"},

  {0x8086,0x6f6a,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Channel Target Address Decoder"},

  {0x8086,0x6f6b,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Channel Target Address Decoder"},

  {0x8086,0x6f6c,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Channel Target Address Decoder"},

  {0x8086,0x6f6d,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Channel Target Address Decoder"},

  {0x8086,0x6f6e,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 2/3 Broadcast"},

  {0x8086,0x6f6f,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Global Broadcast"},

  {0x8086,0x6f70,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Home Agent 0 Debug"},

  {0x8086,0x6f71,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Target Address/Thermal/RAS"},

  {0x8086,0x6f76,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link Debug"},

  {0x8086,0x6f78,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Home Agent 1 Debug"},

  {0x8086,0x6f79,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Target Address/Thermal/RAS"},

  {0x8086,0x6f7d,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Ubox"},

  {0x8086,0x6f7e,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link Debug"},

  {0x8086,0x6f80,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 0"},

  {0x8086,0x6f81,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D R3 QPI Link 0/1"},

  {0x8086,0x6f83,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 0"},

  {0x8086,0x6f85,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 0 Debug"},

  {0x8086,0x6f86,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 0 Debug"},

  {0x8086,0x6f87,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 0 Debug"},

  {0x8086,0x6f88,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6f8a,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6f90,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 1"},

  {0x8086,0x6f93,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 1"},

  {0x8086,0x6f95,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 1 Debug"},

  {0x8086,0x6f96,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D QPI Link 1 Debug"},

  {0x8086,0x6f98,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6f99,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6f9a,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6f9c,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fa0,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Home Agent 0"},

  {0x8086,0x6fa8,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Target Address/Thermal/RAS"},

  {0x8086,0x6faa,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel Target Address Decoder"},

  {0x8086,0x6fab,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel Target Address Decoder"},

  {0x8086,0x6fac,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel Target Address Decoder"},

  {0x8086,0x6fad,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel Target Address Decoder"},

  {0x8086,0x6fae,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 0/1 Broadcast"},

  {0x8086,0x6faf,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Global Broadcast"},

  {0x8086,0x6fb0,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 0 Thermal Control"},

  {0x8086,0x6fb1,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 1 Thermal Control"},

  {0x8086,0x6fb2,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 0 Error"},

  {0x8086,0x6fb3,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 1 Error"},

  {0x8086,0x6fb4,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 2 Thermal Control"},

  {0x8086,0x6fb5,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 3 Thermal Control"},

  {0x8086,0x6fb6,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 2 Error"},

  {0x8086,0x6fb7,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 0 - Channel 3 Error"},

  {0x8086,0x6fb8,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 2/3 Interface"},

  {0x8086,0x6fb9,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 2/3 Interface"},

  {0x8086,0x6fba,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 2/3 Interface"},

  {0x8086,0x6fbb,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 2/3 Interface"},

  {0x8086,0x6fbc,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 0/1 Interface"},

  {0x8086,0x6fbd,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 0/1 Interface"},

  {0x8086,0x6fbe,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 0/1 Interface"},

  {0x8086,0x6fbf,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D DDRIO Channel 0/1 Interface"},

  {0x8086,0x6fc0,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc1,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc2,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc3,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc4,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc5,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc6,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc7,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc8,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fc9,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fca,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fcb,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fcc,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fcd,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fce,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fcf,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Power Control Unit"},

  {0x8086,0x6fd0,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 0 Thermal Control"},

  {0x8086,0x6fd1,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 1 Thermal Control"},

  {0x8086,0x6fd2,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 0 Error"},

  {0x8086,0x6fd3,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 1 Error"},

  {0x8086,0x6fd4,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 2 Thermal Control"},

  {0x8086,0x6fd5,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 3 Thermal Control"},

  {0x8086,0x6fd6,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 2 Error"},

  {0x8086,0x6fd7,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Memory Controller 1 - Channel 3 Error"},

  {0x8086,0x6fe0,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe1,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe2,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe3,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe4,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe5,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe6,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe7,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe8,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fe9,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fea,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6feb,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fec,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fed,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fee,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6fef,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ff0,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ff1,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ff8,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ff9,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ffa,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ffb,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ffc,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ffd,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x6ffe,"Xeon E7 v4/Xeon E5 v4/Xeon E3 v4/Xeon D Caching Agent"},

  {0x8086,0x7000,"82371SB PIIX3 ISA [Natoma/Triton II]"},

  {0x8086,0x7010,"82371SB PIIX3 IDE [Natoma/Triton II]"},

  {0x8086,0x7020,"82371SB PIIX3 USB [Natoma/Triton II]"},

  {0x8086,0x7030,"430VX - 82437VX TVX [Triton VX]"},

  {0x8086,0x7050,"Intercast Video Capture Card"},

  {0x8086,0x7051,"PB 642365-003 (Business Video Conferencing Card)"},

  {0x8086,0x7100,"430TX - 82439TX MTXC"},

  {0x8086,0x7110,"82371AB/EB/MB PIIX4 ISA"},

  {0x8086,0x7111,"82371AB/EB/MB PIIX4 IDE"},

  {0x8086,0x7112,"82371AB/EB/MB PIIX4 USB"},

  {0x8086,0x7113,"82371AB/EB/MB PIIX4 ACPI"},

  {0x8086,0x7120,"82810 GMCH (Graphics Memory Controller Hub)"},

  {0x8086,0x7121,"82810 (CGC) Chipset Graphics Controller"},

  {0x8086,0x7122,"82810 DC-100 (GMCH) Graphics Memory Controller Hub"},

  {0x8086,0x7123,"82810 DC-100 (CGC) Chipset Graphics Controller"},

  {0x8086,0x7124,"82810E DC-133 (GMCH) Graphics Memory Controller Hub"},

  {0x8086,0x7125,"82810E DC-133 (CGC) Chipset Graphics Controller"},

  {0x8086,0x7126,"82810 DC-133 System and Graphics Controller"},

  {0x8086,0x7128,"82810-M DC-100 System and Graphics Controller"},

  {0x8086,0x712a,"82810-M DC-133 System and Graphics Controller"},

  {0x8086,0x7180,"440LX/EX - 82443LX/EX Host bridge"},

  {0x8086,0x7181,"440LX/EX - 82443LX/EX AGP bridge"},

  {0x8086,0x7190,"440BX/ZX/DX - 82443BX/ZX/DX Host bridge"},

  {0x8086,0x7191,"440BX/ZX/DX - 82443BX/ZX/DX AGP bridge"},

  {0x8086,0x7192,"440BX/ZX/DX - 82443BX/ZX/DX Host bridge (AGP disabled)"},

  {0x8086,0x7194,"82440MX Host Bridge"},

  {0x8086,0x7195,"82440MX AC'97 Audio Controller"},

  {0x8086,0x7196,"82440MX AC'97 Modem Controller"},

  {0x8086,0x7198,"82440MX ISA Bridge"},

  {0x8086,0x7199,"82440MX EIDE Controller"},

  {0x8086,0x719a,"82440MX USB Universal Host Controller"},

  {0x8086,0x719b,"82440MX Power Management Controller"},

  {0x8086,0x71a0,"440GX - 82443GX Host bridge"},

  {0x8086,0x71a1,"440GX - 82443GX AGP bridge"},

  {0x8086,0x71a2,"440GX - 82443GX Host bridge (AGP disabled)"},

  {0x8086,0x7600,"82372FB PIIX5 ISA"},

  {0x8086,0x7601,"82372FB PIIX5 IDE"},

  {0x8086,0x7602,"82372FB PIIX5 USB"},

  {0x8086,0x7603,"82372FB PIIX5 SMBus"},

  {0x8086,0x7800,"82740 (i740) AGP Graphics Accelerator"},

  {0x8086,0x8002,"Trusted Execution Technology Registers"},

  {0x8086,0x8003,"Trusted Execution Technology Registers"},

  {0x8086,0x8100,"System Controller Hub (SCH Poulsbo)"},

  {0x8086,0x8108,"System Controller Hub (SCH Poulsbo) Graphics Controller"},

  {0x8086,0x8110,"System Controller Hub (SCH Poulsbo) PCI Express Port 1"},

  {0x8086,0x8112,"System Controller Hub (SCH Poulsbo) PCI Express Port 2"},

  {0x8086,0x8114,"System Controller Hub (SCH Poulsbo) USB UHCI #1"},

  {0x8086,0x8115,"System Controller Hub (SCH Poulsbo) USB UHCI #2"},

  {0x8086,0x8116,"System Controller Hub (SCH Poulsbo) USB UHCI #3"},

  {0x8086,0x8117,"System Controller Hub (SCH Poulsbo) USB EHCI #1"},

  {0x8086,0x8118,"System Controller Hub (SCH Poulsbo) USB Client Controller"},

  {0x8086,0x8119,"System Controller Hub (SCH Poulsbo) LPC Bridge"},

  {0x8086,0x811a,"System Controller Hub (SCH Poulsbo) IDE Controller"},

  {0x8086,0x811b,"System Controller Hub (SCH Poulsbo) HD Audio Controller"},

  {0x8086,0x811c,"System Controller Hub (SCH Poulsbo) SDIO Controller #1"},

  {0x8086,0x811d,"System Controller Hub (SCH Poulsbo) SDIO Controller #2"},

  {0x8086,0x811e,"System Controller Hub (SCH Poulsbo) SDIO Controller #3"},

  {0x8086,0x8180,"Atom Processor E6xx PCI Express Port 3"},

  {0x8086,0x8181,"Atom Processor E6xx PCI Express Port 4"},

  {0x8086,0x8182,"Atom Processor E6xx Integrated Graphics Controller"},

  {0x8086,0x8183,"Atom Processor E6xx Configuration Unit"},

  {0x8086,0x8184,"Atom Processor E6xx PCI Express Port 1"},

  {0x8086,0x8185,"Atom Processor E6xx PCI Express Port 2"},

  {0x8086,0x8186,"Atom Processor E6xx LPC Bridge"},

  {0x8086,0x84c4,"450KX/GX [Orion] - 82454KX/GX PCI bridge"},

  {0x8086,0x84c5,"450KX/GX [Orion] - 82453KX/GX Memory controller"},

  {0x8086,0x84ca,"450NX - 82451NX Memory & I/O Controller"},

  {0x8086,0x84cb,"450NX - 82454NX/84460GX PCI Expander Bridge"},

  {0x8086,0x84e0,"460GX - 84460GX System Address Controller (SAC)"},

  {0x8086,0x84e1,"460GX - 84460GX System Data Controller (SDC)"},

  {0x8086,0x84e2,"460GX - 84460GX AGP Bridge (GXB function 2)"},

  {0x8086,0x84e3,"460GX - 84460GX Memory Address Controller (MAC)"},

  {0x8086,0x84e4,"460GX - 84460GX Memory Data Controller (MDC)"},

  {0x8086,0x84e6,"460GX - 82466GX Wide and fast PCI eXpander Bridge (WXB)"},

  {0x8086,0x84ea,"460GX - 84460GX AGP Bridge (GXB function 1)"},

  {0x8086,0x8500,"IXP4XX Network Processor (IXP420/421/422/425/IXC1100)"},

  {0x8086,0x8800,"Platform Controller Hub EG20T PCI Express Port"},

  {0x8086,0x8801,"Platform Controller Hub EG20T Packet Hub"},

  {0x8086,0x8802,"Platform Controller Hub EG20T Gigabit Ethernet Controller"},

  {0x8086,0x8803,"Platform Controller Hub EG20T General Purpose IO Controller"},

  {0x8086,0x8804,"Platform Controller Hub EG20T USB OHCI Controller #4"},

  {0x8086,0x8805,"Platform Controller Hub EG20T USB OHCI Controller #5"},

  {0x8086,0x8806,"Platform Controller Hub EG20T USB OHCI Controller #6"},

  {0x8086,0x8807,"Platform Controller Hub EG20T USB2 EHCI Controller #2"},

  {0x8086,0x8808,"Platform Controller Hub EG20T USB Client Controller"},

  {0x8086,0x8809,"Platform Controller Hub EG20T SDIO Controller #1"},

  {0x8086,0x880a,"Platform Controller Hub EG20T SDIO Controller #2"},

  {0x8086,0x880b,"Platform Controller Hub EG20T SATA AHCI Controller"},

  {0x8086,0x880c,"Platform Controller Hub EG20T USB OHCI Controller #1"},

  {0x8086,0x880d,"Platform Controller Hub EG20T USB OHCI Controller #2"},

  {0x8086,0x880e,"Platform Controller Hub EG20T USB OHCI Controller #3"},

  {0x8086,0x880f,"Platform Controller Hub EG20T USB2 EHCI Controller #1"},

  {0x8086,0x8810,"Platform Controller Hub EG20T DMA Controller #1"},

  {0x8086,0x8811,"Platform Controller Hub EG20T UART Controller 0"},

  {0x8086,0x8812,"Platform Controller Hub EG20T UART Controller 1"},

  {0x8086,0x8813,"Platform Controller Hub EG20T UART Controller 2"},

  {0x8086,0x8814,"Platform Controller Hub EG20T UART Controller 3"},

  {0x8086,0x8815,"Platform Controller Hub EG20T DMA Controller #2"},

  {0x8086,0x8816,"Platform Controller Hub EG20T Serial Peripheral Interface Bus"},

  {0x8086,0x8817,"Platform Controller Hub EG20T I2C Controller"},

  {0x8086,0x8818,"Platform Controller Hub EG20T Controller Area Network (CAN) Controller"},

  {0x8086,0x8819,"Platform Controller Hub EG20T IEEE 1588 Hardware Assist"},

  {0x8086,0x8c00,"8 Series/C220 Series Chipset Family 4-port SATA Controller 1 [IDE mode]"},

  {0x8086,0x8c01,"8 Series Chipset Family 4-port SATA Controller 1 [IDE mode] - Mobile"},

  {0x8086,0x8c02,"8 Series/C220 Series Chipset Family 6-port SATA Controller 1 [AHCI mode]"},

  {0x8086,0x8c03,"8 Series/C220 Series Chipset Family 6-port SATA Controller 1 [AHCI mode]"},

  {0x8086,0x8c04,"8 Series/C220 Series Chipset Family SATA Controller 1 [RAID mode]"},

  {0x8086,0x8c05,"8 Series/C220 Series Chipset Family SATA Controller 1 [RAID mode]"},

  {0x8086,0x8c06,"8 Series/C220 Series Chipset Family SATA Controller 1 [RAID mode]"},

  {0x8086,0x8c07,"8 Series/C220 Series Chipset Family SATA Controller 1 [RAID mode]"},

  {0x8086,0x8c08,"8 Series/C220 Series Chipset Family 2-port SATA Controller 2 [IDE mode]"},

  {0x8086,0x8c09,"8 Series/C220 Series Chipset Family 2-port SATA Controller 2 [IDE mode]"},

  {0x8086,0x8c0e,"8 Series/C220 Series Chipset Family SATA Controller 1 [RAID mode]"},

  {0x8086,0x8c0f,"8 Series/C220 Series Chipset Family SATA Controller 1 [RAID mode]"},

  {0x8086,0x8c10,"8 Series/C220 Series Chipset Family PCI Express Root Port #1"},

  {0x8086,0x8c11,"8 Series/C220 Series Chipset Family PCI Express Root Port #1"},

  {0x8086,0x8c12,"8 Series/C220 Series Chipset Family PCI Express Root Port #2"},

  {0x8086,0x8c13,"8 Series/C220 Series Chipset Family PCI Express Root Port #2"},

  {0x8086,0x8c14,"8 Series/C220 Series Chipset Family PCI Express Root Port #3"},

  {0x8086,0x8c15,"8 Series/C220 Series Chipset Family PCI Express Root Port #3"},

  {0x8086,0x8c16,"8 Series/C220 Series Chipset Family PCI Express Root Port #4"},

  {0x8086,0x8c17,"8 Series/C220 Series Chipset Family PCI Express Root Port #4"},

  {0x8086,0x8c18,"8 Series/C220 Series Chipset Family PCI Express Root Port #5"},

  {0x8086,0x8c19,"8 Series/C220 Series Chipset Family PCI Express Root Port #5"},

  {0x8086,0x8c1a,"8 Series/C220 Series Chipset Family PCI Express Root Port #6"},

  {0x8086,0x8c1b,"8 Series/C220 Series Chipset Family PCI Express Root Port #6"},

  {0x8086,0x8c1c,"8 Series/C220 Series Chipset Family PCI Express Root Port #7"},

  {0x8086,0x8c1d,"8 Series/C220 Series Chipset Family PCI Express Root Port #7"},

  {0x8086,0x8c1e,"8 Series/C220 Series Chipset Family PCI Express Root Port #8"},

  {0x8086,0x8c1f,"8 Series/C220 Series Chipset Family PCI Express Root Port #8"},

  {0x8086,0x8c20,"8 Series/C220 Series Chipset High Definition Audio Controller"},

  {0x8086,0x8c21,"8 Series/C220 Series Chipset High Definition Audio Controller"},

  {0x8086,0x8c22,"8 Series/C220 Series Chipset Family SMBus Controller"},

  {0x8086,0x8c23,"8 Series Chipset Family CHAP Counters"},

  {0x8086,0x8c24,"8 Series Chipset Family Thermal Management Controller"},

  {0x8086,0x8c26,"8 Series/C220 Series Chipset Family USB EHCI #1"},

  {0x8086,0x8c2d,"8 Series/C220 Series Chipset Family USB EHCI #2"},

  {0x8086,0x8c31,"8 Series/C220 Series Chipset Family USB xHCI"},

  {0x8086,0x8c33,"8 Series/C220 Series Chipset Family LAN Controller"},

  {0x8086,0x8c34,"8 Series/C220 Series Chipset Family NAND Controller"},

  {0x8086,0x8c3a,"8 Series/C220 Series Chipset Family MEI Controller #1"},

  {0x8086,0x8c3b,"8 Series/C220 Series Chipset Family MEI Controller #2"},

  {0x8086,0x8c3c,"8 Series/C220 Series Chipset Family IDE-r Controller"},

  {0x8086,0x8c3d,"8 Series/C220 Series Chipset Family KT Controller"},

  {0x8086,0x8c40,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c41,"8 Series Chipset Family Mobile Super SKU LPC Controller"},

  {0x8086,0x8c42,"8 Series/C220 Series Chipset Family Desktop Super SKU LPC Controller"},

  {0x8086,0x8c43,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c44,"Z87 Express LPC Controller"},

  {0x8086,0x8c45,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c46,"Z85 Express LPC Controller"},

  {0x8086,0x8c47,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c48,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c49,"HM86 Express LPC Controller"},

  {0x8086,0x8c4a,"H87 Express LPC Controller"},

  {0x8086,0x8c4b,"HM87 Express LPC Controller"},

  {0x8086,0x8c4c,"Q85 Express LPC Controller"},

  {0x8086,0x8c4d,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c4e,"Q87 Express LPC Controller"},

  {0x8086,0x8c4f,"QM87 Express LPC Controller"},

  {0x8086,0x8c50,"B85 Express LPC Controller"},

  {0x8086,0x8c51,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c52,"C222 Series Chipset Family Server Essential SKU LPC Controller"},

  {0x8086,0x8c53,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c54,"C224 Series Chipset Family Server Standard SKU LPC Controller"},

  {0x8086,0x8c55,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c56,"C226 Series Chipset Family Server Advanced SKU LPC Controller"},

  {0x8086,0x8c57,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c58,"8 Series/C220 Series Chipset Family WS SKU LPC Controller"},

  {0x8086,0x8c59,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c5a,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c5b,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c5c,"C220 Series Chipset Family H81 Express LPC Controller"},

  {0x8086,0x8c5d,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c5e,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c5f,"8 Series/C220 Series Chipset Family LPC Controller"},

  {0x8086,0x8c80,"9 Series Chipset Family SATA Controller [IDE Mode]"},

  {0x8086,0x8c81,"9 Series Chipset Family SATA Controller [IDE Mode]"},

  {0x8086,0x8c82,"9 Series Chipset Family SATA Controller [AHCI Mode]"},

  {0x8086,0x8c83,"9 Series Chipset Family SATA Controller [AHCI Mode]"},

  {0x8086,0x8c84,"9 Series Chipset Family SATA Controller [RAID Mode]"},

  {0x8086,0x8c85,"9 Series Chipset Family SATA Controller [RAID Mode]"},

  {0x8086,0x8c86,"9 Series Chipset Family SATA Controller [RAID Mode]"},

  {0x8086,0x8c87,"9 Series Chipset Family SATA Controller [RAID Mode]"},

  {0x8086,0x8c88,"9 Series Chipset Family SATA Controller [IDE Mode]"},

  {0x8086,0x8c89,"9 Series Chipset Family SATA Controller [IDE Mode]"},

  {0x8086,0x8c8e,"9 Series Chipset Family SATA Controller [RAID Mode]"},

  {0x8086,0x8c8f,"9 Series Chipset Family SATA Controller [RAID Mode]"},

  {0x8086,0x8c90,"9 Series Chipset Family PCI Express Root Port 1"},

  {0x8086,0x8c92,"9 Series Chipset Family PCI Express Root Port 2"},

  {0x8086,0x8c94,"9 Series Chipset Family PCI Express Root Port 3"},

  {0x8086,0x8c96,"9 Series Chipset Family PCI Express Root Port 4"},

  {0x8086,0x8c98,"9 Series Chipset Family PCI Express Root Port 5"},

  {0x8086,0x8c9a,"9 Series Chipset Family PCI Express Root Port 6"},

  {0x8086,0x8c9c,"9 Series Chipset Family PCI Express Root Port 7"},

  {0x8086,0x8c9e,"9 Series Chipset Family PCI Express Root Port 8"},

  {0x8086,0x8ca0,"9 Series Chipset Family HD Audio Controller"},

  {0x8086,0x8ca2,"9 Series Chipset Family SMBus Controller"},

  {0x8086,0x8ca4,"9 Series Chipset Family Thermal Controller"},

  {0x8086,0x8ca6,"9 Series Chipset Family USB EHCI Controller #1"},

  {0x8086,0x8cad,"9 Series Chipset Family USB EHCI Controller #2"},

  {0x8086,0x8cb1,"9 Series Chipset Family USB xHCI Controller"},

  {0x8086,0x8cb3,"9 Series Chipset Family LAN Controller"},

  {0x8086,0x8cba,"9 Series Chipset Family ME Interface #1"},

  {0x8086,0x8cbb,"9 Series Chipset Family ME Interface #2"},

  {0x8086,0x8cbc,"9 Series Chipset Family IDE-R Controller"},

  {0x8086,0x8cbd,"9 Series Chipset Family KT Controller"},

  {0x8086,0x8cc1,"9 Series Chipset Family LPC Controller"},

  {0x8086,0x8cc2,"9 Series Chipset Family LPC Controller"},

  {0x8086,0x8cc3,"9 Series Chipset Family HM97 LPC Controller"},

  {0x8086,0x8cc4,"9 Series Chipset Family Z97 LPC Controller"},

  {0x8086,0x8cc6,"9 Series Chipset Family H97 Controller"},

  {0x8086,0x8d00,"C610/X99 series chipset 4-port SATA Controller [IDE mode]"},

  {0x8086,0x8d02,"C610/X99 series chipset 6-Port SATA Controller [AHCI mode]"},

  {0x8086,0x8d04,"C610/X99 series chipset SATA Controller [RAID mode]"},

  {0x8086,0x8d06,"C610/X99 series chipset SATA Controller [RAID mode]"},

  {0x8086,0x8d08,"C610/X99 series chipset 2-port SATA Controller [IDE mode]"},

  {0x8086,0x8d0e,"C610/X99 series chipset SATA Controller [RAID mode]"},

  {0x8086,0x8d10,"C610/X99 series chipset PCI Express Root Port #1"},

  {0x8086,0x8d11,"C610/X99 series chipset PCI Express Root Port #1"},

  {0x8086,0x8d12,"C610/X99 series chipset PCI Express Root Port #2"},

  {0x8086,0x8d13,"C610/X99 series chipset PCI Express Root Port #2"},

  {0x8086,0x8d14,"C610/X99 series chipset PCI Express Root Port #3"},

  {0x8086,0x8d15,"C610/X99 series chipset PCI Express Root Port #3"},

  {0x8086,0x8d16,"C610/X99 series chipset PCI Express Root Port #4"},

  {0x8086,0x8d17,"C610/X99 series chipset PCI Express Root Port #4"},

  {0x8086,0x8d18,"C610/X99 series chipset PCI Express Root Port #5"},

  {0x8086,0x8d19,"C610/X99 series chipset PCI Express Root Port #5"},

  {0x8086,0x8d1a,"C610/X99 series chipset PCI Express Root Port #6"},

  {0x8086,0x8d1b,"C610/X99 series chipset PCI Express Root Port #6"},

  {0x8086,0x8d1c,"C610/X99 series chipset PCI Express Root Port #7"},

  {0x8086,0x8d1d,"C610/X99 series chipset PCI Express Root Port #7"},

  {0x8086,0x8d1e,"C610/X99 series chipset PCI Express Root Port #8"},

  {0x8086,0x8d1f,"C610/X99 series chipset PCI Express Root Port #8"},

  {0x8086,0x8d20,"C610/X99 series chipset HD Audio Controller"},

  {0x8086,0x8d21,"C610/X99 series chipset HD Audio Controller"},

  {0x8086,0x8d22,"C610/X99 series chipset SMBus Controller"},

  {0x8086,0x8d24,"C610/X99 series chipset Thermal Subsystem"},

  {0x8086,0x8d26,"C610/X99 series chipset USB Enhanced Host Controller #1"},

  {0x8086,0x8d2d,"C610/X99 series chipset USB Enhanced Host Controller #2"},

  {0x8086,0x8d31,"C610/X99 series chipset USB xHCI Host Controller"},

  {0x8086,0x8d33,"C610/X99 series chipset LAN Controller"},

  {0x8086,0x8d34,"C610/X99 series chipset NAND Controller"},

  {0x8086,0x8d3a,"C610/X99 series chipset MEI Controller #1"},

  {0x8086,0x8d3b,"C610/X99 series chipset MEI Controller #2"},

  {0x8086,0x8d3c,"C610/X99 series chipset IDE-r Controller"},

  {0x8086,0x8d3d,"C610/X99 series chipset KT Controller"},

  {0x8086,0x8d40,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d41,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d42,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d43,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d44,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d45,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d46,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d47,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d48,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d49,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d4a,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d4b,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d4c,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d4d,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d4e,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d4f,"C610/X99 series chipset LPC Controller"},

  {0x8086,0x8d60,"C610/X99 series chipset sSATA Controller [IDE mode]"},

  {0x8086,0x8d62,"C610/X99 series chipset sSATA Controller [AHCI mode]"},

  {0x8086,0x8d64,"C610/X99 series chipset sSATA Controller [RAID mode]"},

  {0x8086,0x8d66,"C610/X99 series chipset sSATA Controller [RAID mode]"},

  {0x8086,0x8d68,"C610/X99 series chipset sSATA Controller [IDE mode]"},

  {0x8086,0x8d6e,"C610/X99 series chipset sSATA Controller [RAID mode]"},

  {0x8086,0x8d7c,"C610/X99 series chipset SPSR"},

  {0x8086,0x8d7d,"C610/X99 series chipset MS SMBus 0"},

  {0x8086,0x8d7e,"C610/X99 series chipset MS SMBus 1"},

  {0x8086,0x8d7f,"C610/X99 series chipset MS SMBus 2"},

  {0x8086,0x9000,"IXP2000 Family Network Processor"},

  {0x8086,0x9001,"IXP2400 Network Processor"},

  {0x8086,0x9002,"IXP2300 Network Processor"},

  {0x8086,0x9004,"IXP2800 Network Processor"},

  {0x8086,0x9621,"Integrated RAID"},

  {0x8086,0x9622,"Integrated RAID"},

  {0x8086,0x9641,"Integrated RAID"},

  {0x8086,0x96a1,"Integrated RAID"},

  {0x8086,0x9c00,"8 Series SATA Controller 1 [IDE mode]"},

  {0x8086,0x9c01,"8 Series SATA Controller 1 [IDE mode]"},

  {0x8086,0x9c02,"8 Series SATA Controller 1 [AHCI mode]"},

  {0x8086,0x9c03,"8 Series SATA Controller 1 [AHCI mode]"},

  {0x8086,0x9c04,"8 Series SATA Controller 1 [RAID mode]"},

  {0x8086,0x9c05,"8 Series SATA Controller 1 [RAID mode]"},

  {0x8086,0x9c06,"8 Series SATA Controller 1 [RAID mode]"},

  {0x8086,0x9c07,"8 Series SATA Controller 1 [RAID mode]"},

  {0x8086,0x9c08,"8 Series SATA Controller 2 [IDE mode]"},

  {0x8086,0x9c09,"8 Series SATA Controller 2 [IDE mode]"},

  {0x8086,0x9c0a,"8 Series SATA Controller [Reserved]"},

  {0x8086,0x9c0b,"8 Series SATA Controller [Reserved]"},

  {0x8086,0x9c0c,"8 Series SATA Controller [Reserved]"},

  {0x8086,0x9c0d,"8 Series SATA Controller [Reserved]"},

  {0x8086,0x9c0e,"8 Series SATA Controller 1 [RAID mode]"},

  {0x8086,0x9c0f,"8 Series SATA Controller 1 [RAID mode]"},

  {0x8086,0x9c10,"8 Series PCI Express Root Port 1"},

  {0x8086,0x9c11,"8 Series PCI Express Root Port 1"},

  {0x8086,0x9c12,"8 Series PCI Express Root Port 2"},

  {0x8086,0x9c13,"8 Series PCI Express Root Port 2"},

  {0x8086,0x9c14,"8 Series PCI Express Root Port 3"},

  {0x8086,0x9c15,"8 Series PCI Express Root Port 3"},

  {0x8086,0x9c16,"8 Series PCI Express Root Port 4"},

  {0x8086,0x9c17,"8 Series PCI Express Root Port 4"},

  {0x8086,0x9c18,"8 Series PCI Express Root Port 5"},

  {0x8086,0x9c19,"8 Series PCI Express Root Port 5"},

  {0x8086,0x9c1a,"8 Series PCI Express Root Port 6"},

  {0x8086,0x9c1b,"8 Series PCI Express Root Port 6"},

  {0x8086,0x9c1c,"8 Series PCI Express Root Port 7"},

  {0x8086,0x9c1d,"8 Series PCI Express Root Port 7"},

  {0x8086,0x9c1e,"8 Series PCI Express Root Port 8"},

  {0x8086,0x9c1f,"8 Series PCI Express Root Port 8"},

  {0x8086,0x9c20,"8 Series HD Audio Controller"},

  {0x8086,0x9c21,"8 Series HD Audio Controller"},

  {0x8086,0x9c22,"8 Series SMBus Controller"},

  {0x8086,0x9c23,"8 Series CHAP Counters"},

  {0x8086,0x9c24,"8 Series Thermal"},

  {0x8086,0x9c26,"8 Series USB EHCI #1"},

  {0x8086,0x9c2d,"8 Series USB EHCI #2"},

  {0x8086,0x9c31,"8 Series USB xHCI HC"},

  {0x8086,0x9c35,"8 Series SDIO Controller"},

  {0x8086,0x9c36,"8 Series Audio DSP Controller"},

  {0x8086,0x9c3a,"8 Series HECI #0"},

  {0x8086,0x9c3b,"8 Series HECI #1"},

  {0x8086,0x9c3c,"8 Series HECI IDER"},

  {0x8086,0x9c3d,"8 Series HECI KT"},

  {0x8086,0x9c40,"8 Series LPC Controller"},

  {0x8086,0x9c41,"8 Series LPC Controller"},

  {0x8086,0x9c42,"8 Series LPC Controller"},

  {0x8086,0x9c43,"8 Series LPC Controller"},

  {0x8086,0x9c44,"8 Series LPC Controller"},

  {0x8086,0x9c45,"8 Series LPC Controller"},

  {0x8086,0x9c46,"8 Series LPC Controller"},

  {0x8086,0x9c47,"8 Series LPC Controller"},

  {0x8086,0x9c60,"8 Series Low Power Sub-System DMA"},

  {0x8086,0x9c61,"8 Series I2C Controller #0"},

  {0x8086,0x9c62,"8 Series I2C Controller #1"},

  {0x8086,0x9c63,"8 Series UART Controller #0"},

  {0x8086,0x9c64,"8 Series UART Controller #1"},

  {0x8086,0x9c65,"8 Series SPI Controller #0"},

  {0x8086,0x9c66,"8 Series SPI Controller #1"},

  {0x8086,0x9c83,"Wildcat Point-LP SATA Controller [AHCI Mode]"},

  {0x8086,0x9c85,"Wildcat Point-LP SATA Controller [RAID Mode]"},

  {0x8086,0x9c87,"Wildcat Point-LP SATA Controller [RAID Mode]"},

  {0x8086,0x9c8f,"Wildcat Point-LP SATA Controller [RAID Mode]"},

  {0x8086,0x9c90,"Wildcat Point-LP PCI Express Root Port #1"},

  {0x8086,0x9c92,"Wildcat Point-LP PCI Express Root Port #2"},

  {0x8086,0x9c94,"Wildcat Point-LP PCI Express Root Port #3"},

  {0x8086,0x9c96,"Wildcat Point-LP PCI Express Root Port #4"},

  {0x8086,0x9c98,"Wildcat Point-LP PCI Express Root Port #5"},

  {0x8086,0x9c9a,"Wildcat Point-LP PCI Express Root Port #6"},

  {0x8086,0x9ca0,"Wildcat Point-LP High Definition Audio Controller"},

  {0x8086,0x9ca2,"Wildcat Point-LP SMBus Controller"},

  {0x8086,0x9ca4,"Wildcat Point-LP Thermal Management Controller"},

  {0x8086,0x9ca6,"Wildcat Point-LP USB EHCI Controller"},

  {0x8086,0x9cb1,"Wildcat Point-LP USB xHCI Controller"},

  {0x8086,0x9cb5,"Wildcat Point-LP Secure Digital IO Controller"},

  {0x8086,0x9cb6,"Wildcat Point-LP Smart Sound Technology Controller"},

  {0x8086,0x9cba,"Wildcat Point-LP MEI Controller #1"},

  {0x8086,0x9cbb,"Wildcat Point-LP MEI Controller #2"},

  {0x8086,0x9cbc,"Wildcat Point-LP IDE-r Controller"},

  {0x8086,0x9cbd,"Wildcat Point-LP KT Controller"},

  {0x8086,0x9cc1,"Wildcat Point-LP LPC Controller"},

  {0x8086,0x9cc2,"Wildcat Point-LP LPC Controller"},

  {0x8086,0x9cc3,"Wildcat Point-LP LPC Controller"},

  {0x8086,0x9cc5,"Wildcat Point-LP LPC Controller"},

  {0x8086,0x9cc6,"Wildcat Point-LP LPC Controller"},

  {0x8086,0x9cc7,"Wildcat Point-LP LPC Controller"},

  {0x8086,0x9cc9,"Wildcat Point-LP LPC Controller"},

  {0x8086,0x9ce0,"Wildcat Point-LP Serial IO DMA Controller"},

  {0x8086,0x9ce1,"Wildcat Point-LP Serial IO I2C Controller #0"},

  {0x8086,0x9ce2,"Wildcat Point-LP Serial IO I2C Controller #1"},

  {0x8086,0x9ce3,"Wildcat Point-LP Serial IO UART Controller #0"},

  {0x8086,0x9ce4,"Wildcat Point-LP Serial IO UART Controller #1"},

  {0x8086,0x9ce5,"Wildcat Point-LP Serial IO GSPI Controller #0"},

  {0x8086,0x9ce6,"Wildcat Point-LP Serial IO GSPI Controller #1"},

  {0x8086,0x9d03,"Sunrise Point-LP SATA Controller [AHCI mode]"},

  {0x8086,0x9d14,"Sunrise Point-LP PCI Express Root Port #5"},

  {0x8086,0x9d15,"Sunrise Point-LP PCI Express Root Port #6"},

  {0x8086,0x9d16,"Sunrise Point-LP PCI Express Root Port #7"},

  {0x8086,0x9d17,"Sunrise Point-LP PCI Express Root Port #8"},

  {0x8086,0x9d18,"Sunrise Point-LP PCI Express Root Port #9"},

  {0x8086,0x9d21,"Sunrise Point-LP PMC"},

  {0x8086,0x9d23,"Sunrise Point-LP SMBus"},

  {0x8086,0x9d27,"Sunrise Point-LP Serial IO UART Controller #0"},

  {0x8086,0x9d28,"Sunrise Point-LP Serial IO UART Controller #1"},

  {0x8086,0x9d29,"Sunrise Point-LP Serial IO SPI Controller #0"},

  {0x8086,0x9d2a,"Sunrise Point-LP Serial IO SPI Controller #1"},

  {0x8086,0x9d2d,"Sunrise Point-LP Secure Digital IO Controller"},

  {0x8086,0x9d2f,"Sunrise Point-LP USB 3.0 xHCI Controller"},

  {0x8086,0x9d31,"Sunrise Point-LP Thermal subsystem"},

  {0x8086,0x9d3a,"Sunrise Point-LP CSME HECI #1"},

  {0x8086,0x9d43,"Sunrise Point-LP LPC Controller"},

  {0x8086,0x9d48,"Sunrise Point-LP LPC Controller"},

  {0x8086,0x9d60,"Sunrise Point-LP Serial IO I2C Controller #0"},

  {0x8086,0x9d61,"Sunrise Point-LP Serial IO I2C Controller #1"},

  {0x8086,0x9d62,"Sunrise Point-LP Serial IO I2C Controller #2"},

  {0x8086,0x9d63,"Sunrise Point-LP Serial IO I2C Controller #3"},

  {0x8086,0x9d64,"Sunrise Point-LP Serial IO I2C Controller #4"},

  {0x8086,0x9d65,"Sunrise Point-LP Serial IO I2C Controller #5"},

  {0x8086,0x9d66,"Sunrise Point-LP Serial IO UART Controller #2"},

  {0x8086,0x9d70,"Sunrise Point-LP HD Audio"},

  {0x8086,0xa000,"Atom Processor D4xx/D5xx/N4xx/N5xx DMI Bridge"},

  {0x8086,0xa001,"Atom Processor D4xx/D5xx/N4xx/N5xx Integrated Graphics Controller"},

  {0x8086,0xa002,"Atom Processor D4xx/D5xx/N4xx/N5xx Integrated Graphics Controller"},

  {0x8086,0xa003,"Atom Processor D4xx/D5xx/N4xx/N5xx CHAPS counter"},

  {0x8086,0xa010,"Atom Processor D4xx/D5xx/N4xx/N5xx DMI Bridge"},

  {0x8086,0xa011,"Atom Processor D4xx/D5xx/N4xx/N5xx Integrated Graphics Controller"},

  {0x8086,0xa012,"Atom Processor D4xx/D5xx/N4xx/N5xx Integrated Graphics Controller"},

  {0x8086,0xa013,"Atom Processor D4xx/D5xx/N4xx/N5xx CHAPS counter"},

  {0x8086,0xa102,"Sunrise Point-H SATA controller [AHCI mode]"},

  {0x8086,0xa103,"Sunrise Point-H SATA Controller [AHCI mode]"},

  {0x8086,0xa105,"Sunrise Point-H SATA Controller [RAID mode]"},

  {0x8086,0xa107,"Sunrise Point-H SATA Controller [RAID mode]"},

  {0x8086,0xa10f,"Sunrise Point-H SATA Controller [RAID mode]"},

  {0x8086,0xa110,"Sunrise Point-H PCI Express Root Port #1"},

  {0x8086,0xa111,"Sunrise Point-H PCI Express Root Port #2"},

  {0x8086,0xa112,"Sunrise Point-H PCI Express Root Port #3"},

  {0x8086,0xa113,"Sunrise Point-H PCI Express Root Port #4"},

  {0x8086,0xa114,"Sunrise Point-H PCI Express Root Port #5"},

  {0x8086,0xa115,"Sunrise Point-H PCI Express Root Port #6"},

  {0x8086,0xa116,"Sunrise Point-H PCI Express Root Port #7"},

  {0x8086,0xa117,"Sunrise Point-H PCI Express Root Port #8"},

  {0x8086,0xa118,"Sunrise Point-H PCI Express Root Port #9"},

  {0x8086,0xa119,"Sunrise Point-H PCI Express Root Port #10"},

  {0x8086,0xa11a,"Sunrise Point-H PCI Express Root Port #11"},

  {0x8086,0xa11b,"Sunrise Point-H PCI Express Root Port #12"},

  {0x8086,0xa11c,"Sunrise Point-H PCI Express Root Port #13"},

  {0x8086,0xa11d,"Sunrise Point-H PCI Express Root Port #14"},

  {0x8086,0xa11e,"Sunrise Point-H PCI Express Root Port #15"},

  {0x8086,0xa11f,"Sunrise Point-H PCI Express Root Port #16"},

  {0x8086,0xa120,"Sunrise Point-H P2SB"},

  {0x8086,0xa121,"Sunrise Point-H PMC"},

  {0x8086,0xa122,"Sunrise Point-H cAVS"},

  {0x8086,0xa123,"Sunrise Point-H SMBus"},

  {0x8086,0xa124,"Sunrise Point-H SPI Controller"},

  {0x8086,0xa125,"Sunrise Point-H Gigabit Ethernet Controller"},

  {0x8086,0xa126,"Sunrise Point-H Northpeak"},

  {0x8086,0xa127,"Sunrise Point-H Serial IO UART #0"},

  {0x8086,0xa128,"Sunrise Point-H Serial IO UART #1"},

  {0x8086,0xa129,"Sunrise Point-H Serial IO SPI #0"},

  {0x8086,0xa12a,"Sunrise Point-H Serial IO SPI #1"},

  {0x8086,0xa12f,"Sunrise Point-H USB 3.0 xHCI Controller"},

  {0x8086,0xa130,"Sunrise Point-H USB Device Controller (OTG)"},

  {0x8086,0xa131,"Sunrise Point-H Thermal subsystem"},

  {0x8086,0xa133,"Sunrise Point-H Northpeak ACPI Function"},

  {0x8086,0xa135,"Sunrise Point-H Integrated Sensor Hub"},

  {0x8086,0xa13a,"Sunrise Point-H CSME HECI #1"},

  {0x8086,0xa13b,"Sunrise Point-H CSME HECI #2"},

  {0x8086,0xa13c,"Sunrise Point-H CSME IDE Redirection"},

  {0x8086,0xa13d,"Sunrise Point-H KT Redirection"},

  {0x8086,0xa13e,"Sunrise Point-H CSME HECI #3"},

  {0x8086,0xa140,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa141,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa142,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa143,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa144,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa145,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa146,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa147,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa148,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa149,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa14a,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa14b,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa14c,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa14d,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa14e,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa14f,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa150,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa151,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa152,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa153,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa154,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa155,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa156,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa157,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa158,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa159,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa15a,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa15b,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa15c,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa15d,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa15e,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa15f,"Sunrise Point-H LPC Controller"},

  {0x8086,0xa160,"Sunrise Point-H Serial IO I2C Controller #0"},

  {0x8086,0xa161,"Sunrise Point-H Serial IO I2C Controller #1"},

  {0x8086,0xa166,"Sunrise Point-H Serial IO UART Controller #2"},

  {0x8086,0xa167,"Sunrise Point-H PCI Root Port #17"},

  {0x8086,0xa168,"Sunrise Point-H PCI Root Port #18"},

  {0x8086,0xa169,"Sunrise Point-H PCI Root Port #19"},

  {0x8086,0xa16a,"Sunrise Point-H PCI Root Port #20"},

  {0x8086,0xa170,"Sunrise Point-H HD Audio"},

  {0x8086,0xa182,"Lewisburg SATA Controller [AHCI mode]"},

  {0x8086,0xa186,"Lewisburg SATA Controller [RAID mode]"},

  {0x8086,0xa190,"Lewisburg PCI Express Root Port #1"},

  {0x8086,0xa191,"Lewisburg PCI Express Root Port #2"},

  {0x8086,0xa192,"Lewisburg PCI Express Root Port #3"},

  {0x8086,0xa193,"Lewisburg PCI Express Root Port #4"},

  {0x8086,0xa194,"Lewisburg PCI Express Root Port #5"},

  {0x8086,0xa195,"Lewisburg PCI Express Root Port #6"},

  {0x8086,0xa196,"Lewisburg PCI Express Root Port #7"},

  {0x8086,0xa197,"Lewisburg PCI Express Root Port #8"},

  {0x8086,0xa198,"Lewisburg PCI Express Root Port #9"},

  {0x8086,0xa199,"Lewisburg PCI Express Root Port #10"},

  {0x8086,0xa19a,"Lewisburg PCI Express Root Port #11"},

  {0x8086,0xa19b,"Lewisburg PCI Express Root Port #12"},

  {0x8086,0xa19c,"Lewisburg PCI Express Root Port #13"},

  {0x8086,0xa19d,"Lewisburg PCI Express Root Port #14"},

  {0x8086,0xa19e,"Lewisburg PCI Express Root Port #15"},

  {0x8086,0xa19f,"Lewisburg PCI Express Root Port #16"},

  {0x8086,0xa1a0,"Lewisburg P2SB"},

  {0x8086,0xa1a1,"Lewisburg PMC"},

  {0x8086,0xa1a2,"Lewisburg cAVS"},

  {0x8086,0xa1a3,"Lewisburg SMBus"},

  {0x8086,0xa1a4,"Lewisburg SPI Controller"},

  {0x8086,0xa1af,"Lewisburg USB 3.0 xHCI Controller"},

  {0x8086,0xa1ba,"Lewisburg CSME: HECI #1"},

  {0x8086,0xa1bb,"Lewisburg CSME: HECI #2"},

  {0x8086,0xa1bc,"Lewisburg CSME: IDE-r"},

  {0x8086,0xa1bd,"Lewisburg CSME: KT Controller"},

  {0x8086,0xa1be,"Lewisburg CSME: HECI #3"},

  {0x8086,0xa1c1,"Lewisburg LPC Controller"},

  {0x8086,0xa1c2,"Lewisburg LPC Controller"},

  {0x8086,0xa1c3,"Lewisburg LPC Controller"},

  {0x8086,0xa1c4,"Lewisburg LPC Controller"},

  {0x8086,0xa1c5,"Lewisburg LPC Controller"},

  {0x8086,0xa1c6,"Lewisburg LPC Controller"},

  {0x8086,0xa1c7,"Lewisburg LPC Controller"},

  {0x8086,0xa1d2,"Lewisburg SSATA Controller [AHCI mode]"},

  {0x8086,0xa1d6,"Lewisburg SSATA Controller [RAID mode]"},

  {0x8086,0xa1e7,"Lewisburg PCI Express Root Port #17"},

  {0x8086,0xa1e8,"Lewisburg PCI Express Root Port #18"},

  {0x8086,0xa1e9,"Lewisburg PCI Express Root Port #19"},

  {0x8086,0xa1ea,"Lewisburg PCI Express Root Port #20"},

  {0x8086,0xa1f0,"Lewisburg MROM 0"},

  {0x8086,0xa1f1,"Lewisburg MROM 1"},

  {0x8086,0xa1f8,"Lewisburg IE: HECI #1"},

  {0x8086,0xa1f9,"Lewisburg IE: HECI #2"},

  {0x8086,0xa1fa,"Lewisburg IE: IDE-r"},

  {0x8086,0xa1fb,"Lewisburg IE: KT Controller"},

  {0x8086,0xa1fc,"Lewisburg IE: HECI #3"},

  {0x8086,0xa202,"Lewisburg SATA Controller [AHCI mode]"},

  {0x8086,0xa206,"Lewisburg SATA Controller [RAID mode]"},

  {0x8086,0xa223,"Lewisburg SMBus"},

  {0x8086,0xa224,"Lewisburg SPI Controller"},

  {0x8086,0xa242,"Lewisburg LPC or eSPI Controller"},

  {0x8086,0xa243,"Lewisburg LPC or eSPI Controller"},

  {0x8086,0xa252,"Lewisburg SSATA Controller [AHCI mode]"},

  {0x8086,0xa256,"Lewisburg SSATA Controller [RAID mode]"},

  {0x8086,0xa282,"200 Series PCH SATA controller [AHCI mode]"},

  {0x8086,0xa286,"200 Series PCH SATA controller [RAID mode]"},

  {0x8086,0xa290,"200 Series PCH PCI Express Root Port #1"},

  {0x8086,0xa291,"200 Series PCH PCI Express Root Port #2"},

  {0x8086,0xa292,"200 Series PCH PCI Express Root Port #3"},

  {0x8086,0xa293,"200 Series PCH PCI Express Root Port #4"},

  {0x8086,0xa294,"200 Series PCH PCI Express Root Port #5"},

  {0x8086,0xa295,"200 Series PCH PCI Express Root Port #6"},

  {0x8086,0xa296,"200 Series PCH PCI Express Root Port #7"},

  {0x8086,0xa297,"200 Series PCH PCI Express Root Port #8"},

  {0x8086,0xa298,"200 Series PCH PCI Express Root Port #9"},

  {0x8086,0xa299,"200 Series PCH PCI Express Root Port #10"},

  {0x8086,0xa29a,"200 Series PCH PCI Express Root Port #11"},

  {0x8086,0xa29b,"200 Series PCH PCI Express Root Port #12"},

  {0x8086,0xa29c,"200 Series PCH PCI Express Root Port #13"},

  {0x8086,0xa29d,"200 Series PCH PCI Express Root Port #14"},

  {0x8086,0xa29e,"200 Series PCH PCI Express Root Port #15"},

  {0x8086,0xa29f,"200 Series PCH PCI Express Root Port #16"},

  {0x8086,0xa2a1,"200 Series PCH PMC"},

  {0x8086,0xa2a3,"200 Series PCH SMBus Controller"},

  {0x8086,0xa2a7,"200 Series PCH Serial IO UART Controller #0"},

  {0x8086,0xa2a8,"200 Series PCH Serial IO UART Controller #1"},

  {0x8086,0xa2a9,"200 Series PCH Serial IO SPI Controller #0"},

  {0x8086,0xa2aa,"200 Series PCH Serial IO SPI Controller #1"},

  {0x8086,0xa2af,"200 Series PCH USB 3.0 xHCI Controller"},

  {0x8086,0xa2b1,"200 Series PCH Thermal Subsystem"},

  {0x8086,0xa2ba,"200 Series PCH CSME HECI #1"},

  {0x8086,0xa2bb,"200 Series PCH CSME HECI #2"},

  {0x8086,0xa2c4,"200 Series PCH LPC Controller (H270)"},

  {0x8086,0xa2c5,"200 Series PCH LPC Controller (Z270)"},

  {0x8086,0xa2c6,"200 Series PCH LPC Controller (Q270)"},

  {0x8086,0xa2c7,"200 Series PCH LPC Controller (Q250)"},

  {0x8086,0xa2c8,"200 Series PCH LPC Controller (B250)"},

  {0x8086,0xa2e0,"200 Series PCH Serial IO I2C Controller #0"},

  {0x8086,0xa2e1,"200 Series PCH Serial IO I2C Controller #1"},

  {0x8086,0xa2e2,"200 Series PCH Serial IO I2C Controller #2"},

  {0x8086,0xa2e3,"200 Series PCH Serial IO I2C Controller #3"},

  {0x8086,0xa2e6,"200 Series PCH Serial IO UART Controller #2"},

  {0x8086,0xa2e7,"200 Series PCH PCI Express Root Port #17"},

  {0x8086,0xa2e8,"200 Series PCH PCI Express Root Port #18"},

  {0x8086,0xa2e9,"200 Series PCH PCI Express Root Port #19"},

  {0x8086,0xa2ea,"200 Series PCH PCI Express Root Port #20"},

  {0x8086,0xa2eb,"200 Series PCH PCI Express Root Port #21"},

  {0x8086,0xa2ec,"200 Series PCH PCI Express Root Port #22"},

  {0x8086,0xa2ed,"200 Series PCH PCI Express Root Port #23"},

  {0x8086,0xa2ee,"200 Series PCH PCI Express Root Port #24"},

  {0x8086,0xa2f0,"200 Series PCH HD Audio"},

  {0x8086,0xa620,"6400/6402 Advanced Memory Buffer (AMB)"},

  {0x8086,0xabc0,"Omni-Path Fabric Switch Silicon 100 Series"},

  {0x8086,0xb152,"21152 PCI-to-PCI Bridge"},

  {0x8086,0xb154,"21154 PCI-to-PCI Bridge"},

  {0x8086,0xb555,"21555 Non transparent PCI-to-PCI Bridge"},

  {0x8086,0xd130,"Core Processor DMI"},

  {0x8086,0xd131,"Core Processor DMI"},

  {0x8086,0xd132,"Core Processor DMI"},

  {0x8086,0xd133,"Core Processor DMI"},

  {0x8086,0xd134,"Core Processor DMI"},

  {0x8086,0xd135,"Core Processor DMI"},

  {0x8086,0xd136,"Core Processor DMI"},

  {0x8086,0xd137,"Core Processor DMI"},

  {0x8086,0xd138,"Core Processor PCI Express Root Port 1"},

  {0x8086,0xd139,"Core Processor PCI Express Root Port 2"},

  {0x8086,0xd13a,"Core Processor PCI Express Root Port 3"},

  {0x8086,0xd13b,"Core Processor PCI Express Root Port 4"},

  {0x8086,0xd150,"Core Processor QPI Link"},

  {0x8086,0xd151,"Core Processor QPI Routing and Protocol Registers"},

  {0x8086,0xd155,"Core Processor System Management Registers"},

  {0x8086,0xd156,"Core Processor Semaphore and Scratchpad Registers"},

  {0x8086,0xd157,"Core Processor System Control and Status Registers"},

  {0x8086,0xd158,"Core Processor Miscellaneous Registers"},

  {0x80ee,0xbeef,"VirtualBox Graphics Adapter"},

  {0x80ee,0xcafe,"VirtualBox Guest Service"},

  {0x8686,0x1010,"vSMP Foundation controller [vSMP CTL]"},

  {0x8686,0x1011,"vSMP Foundation MEX/FLX controller [vSMP CTL]"},

  {0x8800,0x2008,"Video assistant component"},

  {0x8c4a,0x1980,"W89C940 misprogrammed [ne2k]"},

  {0x8e2e,0x3000,"ET32P2"},

  {0x9004,0x0078,"AHA-2940U_CN"},

  {0x9004,0x1078,"AIC-7810"},

  {0x9004,0x1160,"AIC-1160 [Family Fibre Channel Adapter]"},

  {0x9004,0x2178,"AIC-7821"},

  {0x9004,0x3860,"AHA-2930CU"},

  {0x9004,0x3b78,"AHA-4844W/4844UW"},

  {0x9004,0x5075,"AIC-755x"},

  {0x9004,0x5078,"AIC-7850T/7856T [AVA-2902/4/6 / AHA-2910]"},

  {0x9004,0x5175,"AIC-755x"},

  {0x9004,0x5178,"AIC-7851"},

  {0x9004,0x5275,"AIC-755x"},

  {0x9004,0x5278,"AIC-7852"},

  {0x9004,0x5375,"AIC-755x"},

  {0x9004,0x5378,"AIC-7850"},

  {0x9004,0x5475,"AIC-755x"},

  {0x9004,0x5478,"AIC-7850"},

  {0x9004,0x5575,"AVA-2930"},

  {0x9004,0x5578,"AIC-7855"},

  {0x9004,0x5647,"ANA-7711 TCP Offload Engine"},

  {0x9004,0x5675,"AIC-755x"},

  {0x9004,0x5678,"AIC-7856"},

  {0x9004,0x5775,"AIC-755x"},

  {0x9004,0x5778,"AIC-7850"},

  {0x9004,0x5800,"AIC-5800"},

  {0x9004,0x5900,"ANA-5910/5930/5940 ATM155 & 25 LAN Adapter"},

  {0x9004,0x5905,"ANA-5910A/5930A/5940A ATM Adapter"},

  {0x9004,0x6038,"AIC-3860"},

  {0x9004,0x6075,"AIC-1480 / APA-1480"},

  {0x9004,0x6078,"AIC-7860"},

  {0x9004,0x6178,"AIC-7861"},

  {0x9004,0x6278,"AIC-7860"},

  {0x9004,0x6378,"AIC-7860"},

  {0x9004,0x6478,"AIC-786x"},

  {0x9004,0x6578,"AIC-786x"},

  {0x9004,0x6678,"AIC-786x"},

  {0x9004,0x6778,"AIC-786x"},

  {0x9004,0x6915,"ANA620xx/ANA69011A"},

  {0x9004,0x7078,"AHA-294x / AIC-7870"},

  {0x9004,0x7178,"AIC-7870P/7871 [AHA-2940/W/S76]"},

  {0x9004,0x7278,"AHA-3940/3940W / AIC-7872"},

  {0x9004,0x7378,"AHA-3985 / AIC-7873"},

  {0x9004,0x7478,"AHA-2944/2944W / AIC-7874"},

  {0x9004,0x7578,"AHA-3944/3944W / AIC-7875"},

  {0x9004,0x7678,"AHA-4944W/UW / AIC-7876"},

  {0x9004,0x7710,"ANA-7711F Network Accelerator Card (NAC) - Optical"},

  {0x9004,0x7711,"ANA-7711C Network Accelerator Card (NAC) - Copper"},

  {0x9004,0x7778,"AIC-787x"},

  {0x9004,0x7810,"AIC-7810"},

  {0x9004,0x7815,"AIC-7815 RAID+Memory Controller IC"},

  {0x9004,0x7850,"AIC-7850"},

  {0x9004,0x7855,"AHA-2930"},

  {0x9004,0x7860,"AIC-7860"},

  {0x9004,0x7870,"AIC-7870"},

  {0x9004,0x7871,"AHA-2940"},

  {0x9004,0x7872,"AHA-3940"},

  {0x9004,0x7873,"AHA-3980"},

  {0x9004,0x7874,"AHA-2944"},

  {0x9004,0x7880,"AIC-7880P"},

  {0x9004,0x7890,"AIC-7890"},

  {0x9004,0x7891,"AIC-789x"},

  {0x9004,0x7892,"AIC-789x"},

  {0x9004,0x7893,"AIC-789x"},

  {0x9004,0x7894,"AIC-789x"},

  {0x9004,0x7895,"AHA-2940U/UW / AHA-39xx / AIC-7895"},

  {0x9004,0x7896,"AIC-789x"},

  {0x9004,0x7897,"AIC-789x"},

  {0x9004,0x8078,"AIC-7880U"},

  {0x9004,0x8178,"AIC-7870P/7881U [AHA-2940U/UW/D/S76]"},

  {0x9004,0x8278,"AHA-3940U/UW/UWD / AIC-7882U"},

  {0x9004,0x8378,"AHA-3940U/UW / AIC-7883U"},

  {0x9004,0x8478,"AHA-2944UW / AIC-7884U"},

  {0x9004,0x8578,"AHA-3944U/UWD / AIC-7885"},

  {0x9004,0x8678,"AHA-4944UW / AIC-7886"},

  {0x9004,0x8778,"AHA-2940UW Pro / AIC-788x"},

  {0x9004,0x8878,"AHA-2930UW / AIC-7888"},

  {0x9004,0x8b78,"ABA-1030"},

  {0x9004,0xec78,"AHA-4944W/UW"},

  {0x9005,0x0010,"AHA-2940U2/U2W"},

  {0x9005,0x0011,"AHA-2930U2"},

  {0x9005,0x0013,"78902"},

  {0x9005,0x001f,"AHA-2940U2/U2W / 7890/7891"},

  {0x9005,0x0020,"AIC-7890"},

  {0x9005,0x002f,"AIC-7890"},

  {0x9005,0x0030,"AIC-7890"},

  {0x9005,0x003f,"AIC-7890"},

  {0x9005,0x0050,"AHA-3940U2x/395U2x"},

  {0x9005,0x0051,"AHA-3950U2D"},

  {0x9005,0x0053,"AIC-7896 SCSI Controller"},

  {0x9005,0x005f,"AIC-7896U2/7897U2"},

  {0x9005,0x0080,"AIC-7892A U160/m"},

  {0x9005,0x0081,"AIC-7892B U160/m"},

  {0x9005,0x0083,"AIC-7892D U160/m"},

  {0x9005,0x008f,"AIC-7892P U160/m"},

  {0x9005,0x0092,"AVC-2010 [VideoH!]"},

  {0x9005,0x0093,"AVC-2410 [VideoH!]"},

  {0x9005,0x00c0,"AHA-3960D / AIC-7899A U160/m"},

  {0x9005,0x00c1,"AIC-7899B U160/m"},

  {0x9005,0x00c3,"AIC-7899D U160/m"},

  {0x9005,0x00c5,"RAID subsystem HBA"},

  {0x9005,0x00cf,"AIC-7899P U160/m"},

  {0x9005,0x0241,"Serial ATA II RAID 1420SA"},

  {0x9005,0x0242,"Serial ATA II RAID 1220SA"},

  {0x9005,0x0243,"Serial ATA II RAID 1430SA"},

  {0x9005,0x0244,"eSATA II RAID 1225SA"},

  {0x9005,0x0250,"ServeRAID Controller"},

  {0x9005,0x0279,"ServeRAID 6M"},

  {0x9005,0x0283,"AAC-RAID"},

  {0x9005,0x0284,"AAC-RAID"},

  {0x9005,0x0285,"AAC-RAID"},

  {0x9005,0x0286,"AAC-RAID (Rocket)"},

  {0x9005,0x028b,"Series 6 - 6G SAS/PCIe 2"},

  {0x9005,0x028c,"Series 7 6G SAS/PCIe 3"},

  {0x9005,0x028d,"Series 8 12G SAS/PCIe 3"},

  {0x9005,0x028f,"Smart Storage PQI 12G SAS/PCIe 3"},

  {0x9005,0x0410,"AIC-9410W SAS (Razor HBA RAID)"},

  {0x9005,0x0412,"AIC-9410W SAS (Razor HBA non-RAID)"},

  {0x9005,0x0415,"ASC-58300 SAS (Razor-External HBA RAID)"},

  {0x9005,0x0416,"ASC-58300 SAS (Razor-External HBA non-RAID)"},

  {0x9005,0x041e,"AIC-9410W SAS (Razor ASIC non-RAID)"},

  {0x9005,0x041f,"AIC-9410W SAS (Razor ASIC RAID)"},

  {0x9005,0x042f,"VSC7250/7251 SAS (Aurora ASIC non-RAID)"},

  {0x9005,0x0430,"AIC-9405W SAS (Razor-Lite HBA RAID)"},

  {0x9005,0x0432,"AIC-9405W SAS (Razor-Lite HBA non-RAID)"},

  {0x9005,0x043e,"AIC-9405W SAS (Razor-Lite ASIC non-RAID)"},

  {0x9005,0x043f,"AIC-9405W SAS (Razor-Lite ASIC RAID)"},

  {0x9005,0x0450,"ASC-1405 Unified Serial HBA"},

  {0x9005,0x0500,"Obsidian chipset SCSI controller"},

  {0x9005,0x0503,"Scamp chipset SCSI controller"},

  {0x9005,0x0910,"AUA-3100B"},

  {0x9005,0x091e,"AUA-3100B"},

  {0x9005,0x8000,"ASC-29320A U320"},

  {0x9005,0x800f,"AIC-7901 U320"},

  {0x9005,0x8010,"ASC-39320 U320"},

  {0x9005,0x8011,"ASC-39320D"},

  {0x9005,0x8012,"ASC-29320 U320"},

  {0x9005,0x8013,"ASC-29320B U320"},

  {0x9005,0x8014,"ASC-29320LP U320"},

  {0x9005,0x8015,"ASC-39320B U320"},

  {0x9005,0x8016,"ASC-39320A U320"},

  {0x9005,0x8017,"ASC-29320ALP U320"},

  {0x9005,0x801c,"ASC-39320D U320"},

  {0x9005,0x801d,"AIC-7902B U320"},

  {0x9005,0x801e,"AIC-7901A U320"},

  {0x9005,0x801f,"AIC-7902 U320"},

  {0x9005,0x8080,"ASC-29320A U320 w/HostRAID"},

  {0x9005,0x8081,"PMC-Sierra PM8001 SAS HBA [Series 6H]"},

  {0x9005,0x8088,"PMC-Sierra PM8018 SAS HBA [Series 7H]"},

  {0x9005,0x8089,"PMC-Sierra PM8019 SAS encryption HBA [Series 7He]"},

  {0x9005,0x808f,"AIC-7901 U320 w/HostRAID"},

  {0x9005,0x8090,"ASC-39320 U320 w/HostRAID"},

  {0x9005,0x8091,"ASC-39320D U320 w/HostRAID"},

  {0x9005,0x8092,"ASC-29320 U320 w/HostRAID"},

  {0x9005,0x8093,"ASC-29320B U320 w/HostRAID"},

  {0x9005,0x8094,"ASC-29320LP U320 w/HostRAID"},

  {0x9005,0x8095,"ASC-39320(B) U320 w/HostRAID"},

  {0x9005,0x8096,"ASC-39320A U320 w/HostRAID"},

  {0x9005,0x8097,"ASC-29320ALP U320 w/HostRAID"},

  {0x9005,0x809c,"ASC-39320D(B) U320 w/HostRAID"},

  {0x9005,0x809d,"AIC-7902(B) U320 w/HostRAID"},

  {0x9005,0x809e,"AIC-7901A U320 w/HostRAID"},

  {0x9005,0x809f,"AIC-7902 U320 w/HostRAID"},

  {0x907f,0x2015,"IDE-2015PL"},

  {0x9412,0x6565,"6565"},

  {0x9413,0x6010,"SOLO6010 MPEG-4 Video encoder/decoder"},

  {0x9413,0x6110,"SOLO6110 H.264 Video encoder/decoder"},

  {0x9618,0x0001,"JusonTech Gigabit Ethernet Controller"},

  {0x9699,0x6565,"6565"},

  {0x9710,0x9250,"PCI-to-PCI bridge [MCS9250]"},

  {0x9710,0x9805,"PCI 1 port parallel adapter"},

  {0x9710,0x9815,"PCI 9815 Multi-I/O Controller"},

  {0x9710,0x9820,"PCI 9820 Multi-I/O Controller"},

  {0x9710,0x9835,"PCI 9835 Multi-I/O Controller"},

  {0x9710,0x9845,"PCI 9845 Multi-I/O Controller"},

  {0x9710,0x9855,"PCI 9855 Multi-I/O Controller"},

  {0x9710,0x9865,"PCI 9865 Multi-I/O Controller"},

  {0x9710,0x9901,"PCIe 9901 Multi-I/O Controller"},

  {0x9710,0x9904,"4-Port PCIe Serial Adapter"},

  {0x9710,0x9912,"PCIe 9912 Multi-I/O Controller"},

  {0x9710,0x9922,"MCS9922 PCIe Multi-I/O Controller"},

  {0x9710,0x9990,"MCS9990 PCIe to 4‐Port USB 2.0 Host Controller"},

  {0x9902,0x0001,"SG2010 PCI over Starfabric Bridge"},

  {0x9902,0x0002,"SG2010 PCI to Starfabric Gateway"},

  {0x9902,0x0003,"SG1010 Starfabric Switch and PCI Bridge"},

  {0xa727,0x0013,"3CRPAG175 Wireless PC Card"},

  {0xa727,0x6803,"3CRDAG675B Wireless 11a/b/g Adapter"},

  {0xaaaa,0x0001,"H1 PCIe over fiber optic host controller"},

  {0xaaaa,0x0002,"R1BP1 PCIe over fiber optic expansion chassis"},

  {0xaecb,0x6250,"VITC/LTC Timecode Reader card [PCI-VLTC/RDR]"},

  {0xaffe,0x01e1,"PCI1E1 1-port ISDN E1 interface"},

  {0xaffe,0x02e1,"PCI2E1 2-port ISDN E1 interface"},

  {0xaffe,0x450e,"PCI4S0EC 4-port ISDN S0 interface"},

  {0xaffe,0xdead,"Sirrix.PCI4S0 4-port ISDN S0 interface"},

  {0xbdbd,0xa106,"Multibridge Extreme"},

  {0xbdbd,0xa117,"Intensity Pro"},

  {0xbdbd,0xa11a,"DeckLink HD Extreme 2"},

  {0xbdbd,0xa11b,"DeckLink SDI/Duo/Quad"},

  {0xbdbd,0xa11c,"DeckLink HD Extreme 3"},

  {0xbdbd,0xa11d,"DeckLink Studio"},

  {0xbdbd,0xa11e,"DeckLink Optical Fibre"},

  {0xbdbd,0xa120,"Decklink Studio 2"},

  {0xbdbd,0xa121,"DeckLink HD Extreme 3D/3D+"},

  {0xbdbd,0xa124,"Intensity Extreme"},

  {0xbdbd,0xa126,"Intensity Shuttle"},

  {0xbdbd,0xa127,"UltraStudio Express"},

  {0xbdbd,0xa129,"UltraStudio Mini Monitor"},

  {0xbdbd,0xa12a,"UltraStudio Mini Recorder"},

  {0xbdbd,0xa12d,"UltraStudio 4K"},

  {0xbdbd,0xa12e,"DeckLink 4K Extreme"},

  {0xbdbd,0xa12f,"DeckLink Mini Monitor"},

  {0xbdbd,0xa130,"DeckLink Mini Recorder"},

  {0xbdbd,0xa132,"UltraStudio 4K"},

  {0xbdbd,0xa136,"DeckLink 4K Extreme 12G"},

  {0xbdbd,0xa137,"DeckLink Studio 4K"},

  {0xbdbd,0xa138,"Decklink SDI 4K"},

  {0xbdbd,0xa139,"Intensity Pro 4K"},

  {0xbdbd,0xa13b,"DeckLink Micro Recorder"},

  {0xbdbd,0xa13d,"DeckLink 4K Pro"},

  {0xbdbd,0xa13e,"UltraStudio 4K Extreme"},

  {0xbdbd,0xa13f,"DeckLink Quad 2"},

  {0xbdbd,0xa140,"DeckLink Duo 2"},

  {0xcace,0x0001,"TurboCap Port A"},

  {0xcace,0x0002,"TurboCap Port B"},

  {0xcace,0x0023,"AirPcap N"},

  {0xcafe,0x0003,"Luna K3 Hardware Security Module"},

  {0xcafe,0x0006,"Luna PCI-e 3000 Hardware Security Module"},

  {0xcddd,0x0101,"DeepSea 1 High Speed Stereo Vision Frame Grabber"},

  {0xcddd,0x0200,"DeepSea 2 High Speed Stereo Vision Frame Grabber"},

  {0xd161,0x0120,"Wildcard TE120P single-span T1/E1/J1 card"},

  {0xd161,0x0205,"Wildcard TE205P/TE207P dual-span T1/E1/J1 card 5.0V"},

  {0xd161,0x0210,"Wildcard TE210P/TE212P dual-span T1/E1/J1 card 3.3V"},

  {0xd161,0x0220,"Wildcard TE220 dual-span T1/E1/J1 card 3.3V (PCI-Express)"},

  {0xd161,0x0405,"Wildcard TE405P/TE407P quad-span T1/E1/J1 card 5.0V"},

  {0xd161,0x0410,"Wildcard TE410P/TE412P quad-span T1/E1/J1 card 3.3V"},

  {0xd161,0x0420,"Wildcard TE420P quad-span T1/E1/J1 card 3.3V (PCI-Express)"},

  {0xd161,0x0800,"Wildcard TDM800P 8-port analog card"},

  {0xd161,0x1205,"Wildcard TE205P/TE207P dual-span T1/E1/J1 card 5.0V (u1)"},

  {0xd161,0x1220,"Wildcard TE220 dual-span T1/E1/J1 card 3.3V (PCI-Express) (5th gen)"},

  {0xd161,0x1405,"Wildcard TE405P/TE407P quad-span T1/E1/J1 card 5.0V (u1)"},

  {0xd161,0x1410,"Wildcard TE410P quad-span T1/E1/J1 card 3.3V (5th Gen)"},

  {0xd161,0x1420,"Wildcard TE420 quad-span T1/E1/J1 card 3.3V (PCI-Express) (5th gen)"},

  {0xd161,0x1820,"Wildcard TE820 octal-span T1/E1/J1 card 3.3V (PCI-Express)"},

  {0xd161,0x2400,"Wildcard TDM2400P 24-port analog card"},

  {0xd161,0x3400,"Wildcard TC400P transcoder base card"},

  {0xd161,0x8000,"Wildcard TE121 single-span T1/E1/J1 card (PCI-Express)"},

  {0xd161,0x8001,"Wildcard TE122 single-span T1/E1/J1 card"},

  {0xd161,0x8002,"Wildcard AEX800 8-port analog card (PCI-Express)"},

  {0xd161,0x8003,"Wildcard AEX2400 24-port analog card (PCI-Express)"},

  {0xd161,0x8004,"Wildcard TCE400P transcoder base card"},

  {0xd161,0x8005,"Wildcard TDM410 4-port analog card"},

  {0xd161,0x8006,"Wildcard AEX410 4-port analog card (PCI-Express)"},

  {0xd161,0x8007,"Hx8 Series 8-port Base Card"},

  {0xd161,0x8008,"Hx8 Series 8-port Base Card (PCI-Express)"},

  {0xd161,0x800a,"Wildcard TE133 single-span T1/E1/J1 card (PCI Express)"},

  {0xd161,0x800b,"Wildcard TE134 single-span T1/E1/J1 card"},

  {0xd161,0x800c,"Wildcard A8A 8-port analog card"},

  {0xd161,0x800d,"Wildcard A8B 8-port analog card (PCI-Express)"},

  {0xd161,0x800e,"Wildcard TE235/TE435 quad-span T1/E1/J1 card (PCI-Express)"},

  {0xd161,0x800f,"Wildcard A4A 4-port analog card"},

  {0xd161,0x8010,"Wildcard A4B 4-port analog card (PCI-Express)"},

  {0xd161,0x8013,"Wildcard TE236/TE436 quad-span T1/E1/J1 card"},

  {0xd161,0xb410,"Wildcard B410 quad-BRI card"},

  {0xd4d4,0x0601,"PCI Mezzanine Card"},

  {0xdada,0x0133,"VisionRGB-X2"},

  {0xdada,0x0139,"VisionRGB-E1"},

  {0xdada,0x0144,"VisionSD8"},

  {0xdada,0x0150,"VisionRGB-E2"},

  {0xdada,0x0151,"VisionSD4+1"},

  {0xdada,0x0159,"VisionAV"},

  {0xdada,0x0161,"DGC161"},

  {0xdada,0x0165,"DGC165"},

  {0xdada,0x0167,"DGC167"},

  {0xdada,0x0168,"DGC168"},

  {0xdada,0x1139,"VisionRGB-E1S"},

  {0xdada,0x1150,"VisionRGB-E2S"},

  {0xdada,0x1151,"VisionSD4+1S"},

  {0xdada,0x1153,"VisionDVI-DL"},

  {0xdada,0x1154,"VisionSDI2"},

  {0xdcba,0x0046,"PCIe Altera Cyclone IV"},

  {0xdcba,0x0047,"VPX-RCB"},

  {0xdcba,0x0048,"PMC-Biserial-III-BAE9"},

  {0xdcba,0x004e,"PC104p-Biserial-III-NVY5"},

  {0xdcba,0x004f,"PC104p-Biserial-III-NVY6"},

  {0xdcba,0x0052,"PCIeBiSerialDb37 BA22 LVDS IO"},

  {0xdd01,0x0003,"Octopus DVB Adapter"},

  {0xdd01,0x0006,"Cine V7"},

  {0xdd01,0x0007,"Max"},

  {0xdd01,0x0011,"Octopus CI DVB Adapter"},

  {0xdd01,0x0201,"Resi DVB-C Modulator"},

  {0xdeaf,0x9050,"PC Weasel Virtual VGA"},

  {0xdeaf,0x9051,"PC Weasel Serial Port"},

  {0xdeaf,0x9052,"PC Weasel Watchdog Timer"},

  {0xdeda,0x4001,"Camera CB"},

  {0xdeda,0x4021,"Camera MT"},

  {0xe000,0xe000,"W89C940"},

  {0xe159,0x0001,"Tiger3XX Modem/ISDN interface"},

  {0xe159,0x0002,"Tiger100APC ISDN chipset"},

  {0xe4bf,0x0ccd,"CCD-CALYPSO"},

  {0xe4bf,0x0cd1,"CD1-OPERA"},

  {0xe4bf,0x0cd2,"CD2-BEBOP"},

  {0xe4bf,0x0cd3,"CD3-JIVE"},

  {0xe4bf,0x50c1,"PC1-GROOVE"},

  {0xe4bf,0x50c2,"PC2-LIMBO"},

  {0xe4bf,0x53c1,"SC1-ALLEGRO"},

  {0xe4bf,0xcc47,"CCG-RUMBA"},

  {0xe4bf,0xcc4d,"CCM-BOOGIE"},

  {0xea01,0x000a,"PCI-773 Temperature Card"},

  {0xea01,0x0032,"PCI-730 & PC104P-30 Card"},

  {0xea01,0x003e,"PCI-762 Opto-Isolator Card"},

  {0xea01,0x0041,"PCI-763 Reed Relay Card"},

  {0xea01,0x0043,"PCI-769 Opto-Isolator Reed Relay Combo Card"},

  {0xea01,0x0046,"PCI-766 Analog Output Card"},

  {0xea01,0x0052,"PCI-703 Analog I/O Card"},

  {0xea01,0x0800,"PCI-800 Digital I/O Card"},

  {0xea60,0x9896,"Digi32"},

  {0xea60,0x9897,"Digi32 Pro"},

  {0xea60,0x9898,"Digi32/8"},

  {0xeace,0x3100,"DAG 3.10 OC-3/OC-12"},

  {0xeace,0x3200,"DAG 3.2x OC-3/OC-12"},

  {0xeace,0x320e,"DAG 3.2E Fast Ethernet"},

  {0xeace,0x340e,"DAG 3.4E Fast Ethernet"},

  {0xeace,0x341e,"DAG 3.41E Fast Ethernet"},

  {0xeace,0x3500,"DAG 3.5 OC-3/OC-12"},

  {0xeace,0x351c,"DAG 3.5ECM Fast Ethernet"},

  {0xeace,0x360d,"DAG 3.6D DS3"},

  {0xeace,0x360e,"DAG 3.6E Fast Ethernet"},

  {0xeace,0x368e,"DAG 3.6E Gig Ethernet"},

  {0xeace,0x3707,"DAG 3.7T T1/E1/J1"},

  {0xeace,0x370d,"DAG 3.7D DS3/E3"},

  {0xeace,0x378e,"DAG 3.7G Gig Ethernet"},

  {0xeace,0x3800,"DAG 3.8S OC-3/OC-12"},

  {0xeace,0x4100,"DAG 4.10 OC-48"},

  {0xeace,0x4110,"DAG 4.11 OC-48"},

  {0xeace,0x4220,"DAG 4.2 OC-48"},

  {0xeace,0x422e,"DAG 4.2GE Gig Ethernet"},

  {0xeace,0x4230,"DAG 4.2S OC-48"},

  {0xeace,0x423e,"DAG 4.2GE Gig Ethernet"},

  {0xeace,0x4300,"DAG 4.3S OC-48"},

  {0xeace,0x430e,"DAG 4.3GE Gig Ethernet"},

  {0xeace,0x452e,"DAG 4.5G2 Gig Ethernet"},

  {0xeace,0x454e,"DAG 4.5G4 Gig Ethernet"},

  {0xeace,0x45b8,"DAG 4.5Z8 Gig Ethernet"},

  {0xeace,0x45be,"DAG 4.5Z2 Gig Ethernet"},

  {0xeace,0x520e,"DAG 5.2X 10G Ethernet"},

  {0xeace,0x521a,"DAG 5.2SXA 10G Ethernet/OC-192"},

  {0xeace,0x5400,"DAG 5.4S-12 OC-3/OC-12"},

  {0xeace,0x5401,"DAG 5.4SG-48 Gig Ethernet/OC-3/OC-12/OC-48"},

  {0xeace,0x540a,"DAG 5.4GA Gig Ethernet"},

  {0xeace,0x541a,"DAG 5.4SA-12 OC-3/OC-12"},

  {0xeace,0x542a,"DAG 5.4SGA-48 Gig Ethernet/OC-3/OC-12/OC-48"},

  {0xeace,0x6000,"DAG 6.0SE 10G Ethernet/OC-192"},

  {0xeace,0x6100,"DAG 6.1SE 10G Ethernet/OC-192"},

  {0xeace,0x6200,"DAG 6.2SE 10G Ethernet/OC-192"},

  {0xeace,0x7100,"DAG 7.1S OC-3/OC-12"},

  {0xeace,0x7400,"DAG 7.4S OC-3/OC-12"},

  {0xeace,0x7401,"DAG 7.4S48 OC-48"},

  {0xeace,0x752e,"DAG 7.5G2 Gig Ethernet"},

  {0xeace,0x754e,"DAG 7.5G4 Gig Ethernet"},

  {0xeace,0x8100,"DAG 8.1X 10G Ethernet"},

  {0xeace,0x8101,"DAG 8.1SX 10G Ethernet/OC-192"},

  {0xeace,0x8102,"DAG 8.1X 10G Ethernet"},

  {0xeace,0x820e,"DAG 8.2X 10G Ethernet"},

  {0xeace,0x820f,"DAG 8.2X 10G Ethernet (2nd bus)"},

  {0xeace,0x8400,"DAG 8.4I Infiniband x4 SDR"},

  {0xeace,0x8500,"DAG 8.5I Infiniband x4 DDR"},

  {0xeace,0x9200,"DAG 9.2SX2 10G Ethernet"},

  {0xeace,0x920e,"DAG 9.2X2 10G Ethernet"},

  {0xeace,0xa120,"DAG 10X2-P 10G Ethernet"},

  {0xeace,0xa12e,"DAG 10X2-S 10G Ethernet"},

  {0xeace,0xa140,"DAG 10X4-P 10G Ethernet"},

  {0xec80,0xec00,"F5D6000"},

  {0xedd8,0xa091,"1000PV [Stingray]"},

  {0xedd8,0xa099,"2000PV [Stingray]"},

  {0xedd8,0xa0a1,"2000MT"},

  {0xedd8,0xa0a9,"2000MI"},

  {0xf1d0,0xc0fe,"Xena HS/HD-R"},

  {0xf1d0,0xc0ff,"Kona/Xena 2"},

  {0xf1d0,0xcafe,"Kona SD"},

  {0xf1d0,0xcfee,"Xena LS/SD-22-DA/SD-DA"},

  {0xf1d0,0xdaff,"KONA LHi"},

  {0xf1d0,0xdb01,"Corvid22"},

  {0xf1d0,0xdb09,"Corvid 24"},

  {0xf1d0,0xdcaf,"Kona HD"},

  {0xf1d0,0xdfee,"Xena HD-DA"},

  {0xf1d0,0xeb0e,"Corvid 44"},

  {0xf1d0,0xefac,"Xena SD-MM/SD-22-MM"},

  {0xf1d0,0xfacd,"Xena HD-MM"},

  {0xfa57,0x0001,"PMC [Pattern Matching Chip]"},

  {0xfeda,0xa0fa,"BCM4210 iLine10 HomePNA 2.0"},

  {0xfeda,0xa10e,"BCM4230 iLine10 HomePNA 2.0"},

  {0xfede,0x0003,"TABIC PCI v3"},

  {0xfffd,0x0101,"PCI Event Channel Controller"},

  {0xfffe,0x0710,"Virtual SVGA"},

  {0xffff,0xffff,"Illegal Device ID"}

};

