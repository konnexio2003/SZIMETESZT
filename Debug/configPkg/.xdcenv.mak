#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = /opt/ti/tirtos_1_10_00_23/packages;/opt/ti/tirtos_1_10_00_23/products/bios_6_35_01_29/packages;/opt/ti/tirtos_1_10_00_23/products/ipc_1_25_03_15/packages;/opt/ti/tirtos_1_10_00_23/products/ndk_2_22_03_20/packages;/opt/ti/tirtos_1_10_00_23/products/uia_1_03_00_02/packages;/opt/ti/ccsv5/ccs_base
override XDCROOT = /opt/ti/xdctools_3_25_03_72
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = /opt/ti/tirtos_1_10_00_23/packages;/opt/ti/tirtos_1_10_00_23/products/bios_6_35_01_29/packages;/opt/ti/tirtos_1_10_00_23/products/ipc_1_25_03_15/packages;/opt/ti/tirtos_1_10_00_23/products/ndk_2_22_03_20/packages;/opt/ti/tirtos_1_10_00_23/products/uia_1_03_00_02/packages;/opt/ti/ccsv5/ccs_base;/opt/ti/xdctools_3_25_03_72/packages;..
HOSTOS = Linux
endif
