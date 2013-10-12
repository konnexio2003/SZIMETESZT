/*
 * Do not modify this file; it is automatically generated from the template
 * linkcmd.xdt in the ti.platforms.stellaris package and will be overwritten.
 */

/*
 * put '"'s around paths because, without this, the linker
 * considers '-' as minus operator, not a file name character.
 */


-l"/root/workspace_Szimetour/szime2.0tesztmereshez/Debug/configPkg/package/cfg/szime2.0_pem4f.oem4f"
-l"/opt/ti/xdctools_3_25_03_72/packages/ti/catalog/arm/cortexm4/tiva/ce/lib/Boot.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/products/uia_1_03_00_02/packages/ti/uia/services/lib/release/ti.uia.services.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/products/uia_1_03_00_02/packages/ti/uia/sysbios/lib/release/ti.uia.sysbios.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/packages/ti/drivers/lib/instrumented/gpio_tivaware.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/packages/ti/drivers/lib/instrumented/sdspi_tivaware.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/packages/ti/drivers/lib/instrumented/uart_tivaware.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/packages/ti/drivers/lib/instrumented/spi_tivaware.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/products/bios_6_35_01_29/packages/ti/sysbios/fatfs/lib/release/ti.sysbios.fatfs.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/products/bios_6_35_01_29/packages/ti/sysbios/lib/sysbios/instrumented/sysbios.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/products/uia_1_03_00_02/packages/ti/uia/runtime/lib/release/ti.uia.runtime.aem4f"
-l"/opt/ti/tirtos_1_10_00_23/products/uia_1_03_00_02/packages/ti/uia/events/lib/release/ti.uia.events.aem4f"
-l"/opt/ti/xdctools_3_25_03_72/packages/ti/targets/arm/rtsarm/lib/ti.targets.arm.rtsarm.aem4f"
-l"/opt/ti/xdctools_3_25_03_72/packages/ti/targets/arm/rtsarm/lib/boot.aem4f"
-l"/opt/ti/xdctools_3_25_03_72/packages/ti/targets/arm/rtsarm/lib/auto_init.aem4f"

--retain="*(xdc.meta)"

/* C6x Elf symbols */
--symbol_map __TI_STACK_SIZE=__STACK_SIZE
--symbol_map __TI_STACK_BASE=__stack
--symbol_map _stack=__stack


--args 0x0
-heap  0x0
-stack 0x1000

/*
 * Linker command file contributions from all loaded packages:
 */

/* Content from xdc.services.global (null): */

/* Content from xdc (null): */

/* Content from xdc.corevers (null): */

/* Content from xdc.shelf (null): */

/* Content from xdc.services.spec (null): */

/* Content from xdc.services.intern.xsr (null): */

/* Content from xdc.services.intern.gen (null): */

/* Content from xdc.services.intern.cmd (null): */

/* Content from xdc.bld (null): */

/* Content from ti.targets (null): */

/* Content from ti.targets.arm.elf (null): */

/* Content from xdc.rov (null): */

/* Content from xdc.runtime (null): */

/* Content from xdc.services.getset (null): */

/* Content from ti.targets.arm.rtsarm (null): */

/* Content from ti.sysbios.interfaces (null): */

/* Content from ti.sysbios.family (null): */

/* Content from ti.sysbios.family.arm (ti/sysbios/family/arm/linkcmd.xdt): */
--retain "*(.vecs)"

/* Content from ti.sysbios.hal (null): */

/* Content from xdc.runtime.knl (null): */

/* Content from xdc.rta (null): */

/* Content from ti.uia.events (null): */

/* Content from ti.uia.runtime (null): */

/* Content from ti.tirtos (null): */

/* Content from ti.sysbios.rts (null): */

/* Content from ti.sysbios (null): */

/* Content from ti.sysbios.knl (null): */

/* Content from ti.sysbios.family.arm.m3 (ti/sysbios/family/arm/m3/linkcmd.xdt): */
-u _c_int00
--retain "*(.resetVecs)"

/* Content from ti.sysbios.family.arm.lm4 (null): */

/* Content from ti.sysbios.fatfs (null): */

/* Content from ti.drivers (null): */

/* Content from ti.sysbios.syncs (null): */

/* Content from ti.sysbios.gates (null): */

/* Content from ti.sysbios.heaps (null): */

/* Content from ti.sysbios.xdcruntime (null): */

/* Content from ti.sysbios.utils (null): */

/* Content from ti.uia.sysbios (null): */

/* Content from ti.uia.services (null): */

/* Content from ti.catalog.arm.peripherals.timers (null): */

/* Content from ti.catalog.arm.cortexm4 (null): */

/* Content from ti.catalog (null): */

/* Content from ti.catalog.peripherals.hdvicp2 (null): */

/* Content from xdc.platform (null): */

/* Content from xdc.cfg (null): */

/* Content from ti.catalog.arm.cortexm3 (null): */

/* Content from ti.catalog.arm.cortexm4.tiva.ce (null): */

/* Content from ti.platforms.stellaris (null): */

/* Content from configPkg (null): */



/*
 * symbolic aliases for static instance objects
 */
xdc_runtime_Startup__EXECFXN__C = 1;
xdc_runtime_Startup__RESETFXN__C = 1;
TSK_idle = ti_sysbios_knl_Task_Object__table__V + 400;


SECTIONS
{
    .bootVecs:  type = DSECT
    .vecs: load > 0x20000000
    .resetVecs: load > 0x0



    xdc.meta: type = COPY
}

