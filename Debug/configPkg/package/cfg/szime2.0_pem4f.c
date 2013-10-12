/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-z52
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIABenchmark.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/events/UIARoundtrip.h>
#include <ti/uia/events/UIAStatistic.h>
#include <ti/uia/events/UIASync.h>
#include <ti/uia/runtime/LogSync.h>
#include <ti/uia/runtime/LoggerStopMode.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>
#include <xdc/runtime/Types.h>


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__* __fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    xdc_Int intNum;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_runtime_Types_CordAddr __name;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_utils_Load_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_utils_Load_Module__;

/* Module__root__V */
extern ti_sysbios_utils_Load_Module__ ti_sysbios_utils_Load_Module__root__V;


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIARoundtrip INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAStatistic INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIASync INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LogSync INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_runtime_LogSync_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_runtime_LogSync_Module__;

/* Module__root__V */
extern ti_uia_runtime_LogSync_Module__ ti_uia_runtime_LogSync_Module__root__V;

/* Object__ */
typedef struct ti_uia_runtime_LogSync_Object__ {
    const ti_uia_runtime_LogSync_Fxns__* __fxns;
} ti_uia_runtime_LogSync_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_runtime_LogSync_Object__ obj;
} ti_uia_runtime_LogSync_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_runtime_LogSync___VERS
    #define ti_uia_runtime_LogSync___ParamsPtr xdc_UChar*
#else
    #define ti_uia_runtime_LogSync___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_runtime_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_runtime_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_runtime_LoggerStopMode_Module__ ti_uia_runtime_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_runtime_LoggerStopMode_Object__ {
    const ti_uia_runtime_LoggerStopMode_Fxns__* __fxns;
    ti_uia_runtime_QueueDescriptor_Header hdr;
    xdc_runtime_IHeap_Handle bufHeap;
    xdc_SizeT maxEventSizeInBits32;
    xdc_Bits16 serial;
    ti_uia_runtime_IUIATransfer_TransferType transferType;
    xdc_Bool enabled;
    xdc_Bool flush;
    xdc_Int droppedEvents;
    xdc_Ptr queueStartAdrs;
    xdc_SizeT queueSizeInMAUs;
    xdc_Ptr endOfBufferAdrsPlus1;
    __TA_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray bufferArray;
    xdc_Int numCores;
} ti_uia_runtime_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_runtime_LoggerStopMode_Object__ obj;
} ti_uia_runtime_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_runtime_LoggerStopMode___VERS
    #define ti_uia_runtime_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_runtime_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.uia.events.UIABenchmark INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.uia.events.UIAErr INHERITS ========
 */



/*
 * ======== ti.uia.events.UIAEvt INHERITS ========
 */



/*
 * ======== ti.uia.events.UIARoundtrip INHERITS ========
 */



/*
 * ======== ti.uia.events.UIAStatistic INHERITS ========
 */



/*
 * ======== ti.uia.events.UIASync INHERITS ========
 */



/*
 * ======== ti.uia.runtime.LogSync INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAMetaProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C = {(void*)&ti_uia_events_IUIAMetaProvider_Interface__BASE__C};


/*
 * ======== ti.uia.runtime.LoggerStopMode INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.TimestampNull INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {(void*)&xdc_runtime_ITimestampClient_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8041, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8042, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8031, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIABenchmark VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIABenchmark_Fxns__ ti_uia_events_UIABenchmark_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIABenchmark_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8035, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8036, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIARoundtrip VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIARoundtrip_Fxns__ ti_uia_events_UIARoundtrip_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIARoundtrip_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8038, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAStatistic VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIAStatistic_Fxns__ ti_uia_events_UIAStatistic_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIAStatistic_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8039, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIASync VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_events_UIASync_Fxns__ ti_uia_events_UIASync_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* base__ */
    &ti_uia_events_UIASync_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x803a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.runtime.LogSync VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_runtime_LogSync_Fxns__ ti_uia_runtime_LogSync_Module__FXNS__C = {
    (void*)&ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C, /* base__ */
    &ti_uia_runtime_LogSync_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        ti_uia_runtime_LogSync_Object__delete__S,
        ti_uia_runtime_LogSync_Handle__label__S,
        0x803c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.runtime.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_runtime_LoggerStopMode_Fxns__ ti_uia_runtime_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* base__ */
    &ti_uia_runtime_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_runtime_LoggerStopMode_enable__E,
    ti_uia_runtime_LoggerStopMode_disable__E,
    ti_uia_runtime_LoggerStopMode_write0__E,
    ti_uia_runtime_LoggerStopMode_write1__E,
    ti_uia_runtime_LoggerStopMode_write2__E,
    ti_uia_runtime_LoggerStopMode_write4__E,
    ti_uia_runtime_LoggerStopMode_write8__E,
    ti_uia_runtime_LoggerStopMode_setFilterLevel__E,
    ti_uia_runtime_LoggerStopMode_getFilterLevel__E,
    ti_uia_runtime_LoggerStopMode_getTransferType__E,
    ti_uia_runtime_LoggerStopMode_getContents__E,
    ti_uia_runtime_LoggerStopMode_isEmpty__E,
    ti_uia_runtime_LoggerStopMode_getMaxLength__E,
    ti_uia_runtime_LoggerStopMode_getInstanceId__E,
    ti_uia_runtime_LoggerStopMode_getPriority__E,
    ti_uia_runtime_LoggerStopMode_setPriority__E,
    ti_uia_runtime_LoggerStopMode_reset__E,
    ti_uia_runtime_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_runtime_LoggerStopMode_Object__create__S,
        ti_uia_runtime_LoggerStopMode_Object__delete__S,
        ti_uia_runtime_LoggerStopMode_Handle__label__S,
        0x803d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampProvider_Interface__BASE__C, /* base__ */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Bits16 enables;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__iser iser;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__priorities priorities;
    xdc_Char* taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[216];

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_family_arm_m3_Hwi_priorities__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__A[216];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* --> GPIOTicker */
extern xdc_Void GPIOTicker(xdc_UArg);

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024] __attribute__ ((aligned(8)));
#endif
#endif

/* --> PortTest */
extern xdc_Void PortTest(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[2];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> UartTest */
extern xdc_Void UartTest(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[2];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_2_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_2_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024] __attribute__ ((aligned(8)));
#endif
#endif

/* --> masterTaskFxn */
extern xdc_Void masterTaskFxn(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_2_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_2_hookEnv__A[2];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[1024];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_3_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[1024] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_3_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[1024] __attribute__ ((aligned(8)));
#endif
#endif

/* --> slaveTaskFxn */
extern xdc_Void slaveTaskFxn(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_3_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_3_hookEnv__A[2];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_4_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_4_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_4_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> SDTask */
extern xdc_Void SDTask(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_4_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_4_hookEnv__A[2];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_5_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_5_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_5_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_5_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_5_hookEnv__A[2];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[6];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[2];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIABenchmark DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIARoundtrip DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAStatistic DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIASync DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LogSync DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_LogSync_Module_State__ {
    xdc_UInt32 numTimesHalted;
    xdc_UInt32 serialNumber;
    xdc_Bool isEnabled;
} ti_uia_runtime_LogSync_Module_State__;

/* Module__state__V */
ti_uia_runtime_LogSync_Module_State__ ti_uia_runtime_LogSync_Module__state__V;


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode DECLARATIONS ========
 */

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[640];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1152];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1152];

/* Object__table__V */
ti_uia_runtime_LoggerStopMode_Object__ ti_uia_runtime_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_runtime_LoggerStopMode_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
    xdc_runtime_Types_ModuleId moduleIdToRouteToStatusLogger;
} ti_uia_runtime_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_runtime_LoggerStopMode_Module_State__ ti_uia_runtime_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt16 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> ti_uia_runtime_LogSync_Module_startup__E */
extern xdc_Int ti_uia_runtime_LogSync_Module_startup__E(xdc_Int);

/* --> ti_uia_runtime_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_runtime_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8878];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[69];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /root/workspace_Szimetour/szime2.0tesztmereshez/Debug/configPkg/package/cfg/szime2.0_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.stellaris");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32802, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32804, &ti_sysbios_knl_Semaphore_Module__root__V.mask},
    {32806, &ti_sysbios_knl_Task_Module__root__V.mask},
    {32836, &ti_sysbios_utils_Load_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_uia_runtime_LogSync_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_uia_runtime_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[12];
    xdc_runtime_Startup_startModsFxn__C(state, 12);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((ULong)
        (-1056963264));
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_fatfs_startup();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_fatfs_startup();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 15 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 16 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 17 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 18 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 19 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 20 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 21 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 22 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 23 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 24 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 25 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 26 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 27 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 28 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 29 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 30 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 31 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 32 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 33 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 34 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 35 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 36 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 37 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 38 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 39 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 40 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 41 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 42 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 43 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 44 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 45 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 46 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 47 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 48 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 49 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 50 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 51 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 52 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 53 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 54 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 55 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 56 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 57 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 58 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 59 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 60 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 61 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 62 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 63 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 64 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 65 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 66 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 67 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 68 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 69 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 70 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 71 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 72 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 73 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 74 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 75 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 76 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 77 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 78 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 79 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 80 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 81 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 82 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 83 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 84 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 85 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 86 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 87 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 88 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 89 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 90 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 91 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 92 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 93 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 94 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 95 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 96 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 97 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 98 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 99 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 100 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 101 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 102 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 103 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 104 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 105 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 106 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 107 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 108 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 109 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 110 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 111 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 112 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 113 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 114 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 115 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 116 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 117 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 118 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 119 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 120 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 121 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 122 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 123 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 124 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 125 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 126 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 127 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 128 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 129 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 130 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 131 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 132 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 133 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 134 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 135 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 136 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 137 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 138 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 139 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 140 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 141 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 142 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 143 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 144 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 145 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 146 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 147 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 148 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 149 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 150 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 151 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 152 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 153 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 154 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 155 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 156 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 157 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 158 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 159 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 160 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 161 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 162 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 163 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 164 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 165 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 166 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 167 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 168 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 169 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 170 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 171 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 172 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 173 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 174 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 175 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 176 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 177 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 178 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 179 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 180 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 181 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 182 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 183 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 184 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 185 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 186 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 187 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 188 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 189 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 190 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 191 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 192 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 193 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 194 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 195 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 196 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 197 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 198 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 199 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 200 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 201 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 202 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 203 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 204 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 205 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 206 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 207 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 208 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 209 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 210 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 211 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 212 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 213 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 214 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 215 */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];


/*
 * ======== ti.sysbios.fatfs.FatFS TEMPLATE ========
 */


#include <stdio.h>
#include <file.h>
#include <string.h>

#include <xdc/runtime/Error.h>

#include <ti/sysbios/fatfs/ff.h>
#include <ti/sysbios/fatfs/ffcio.h>
#include <ti/sysbios/fatfs/diskio.h>

extern DRESULT ramdisk_start(BYTE, unsigned char *, int, int);

Void ti_sysbios_fatfs_startup()
{
    add_device("fat", _MSA, ffcio_open, ffcio_close, ffcio_read,
        ffcio_write, ffcio_lseek, ffcio_unlink, ffcio_rename);
}

Int32 ti_sysbios_fatfs_getFatTime(Void)
{
    return (0x23556622);
}

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__ICC430__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#if !defined(__ICC430__)
#include <stdlib.h>
#endif

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = 0;

/* A_mustUseEnhancedClockMode__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* useSK__C */
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x13880,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4418) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4454) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4493) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = 0;

/* useClockTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x23,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x25,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[216] = {
    0,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
    0,  /* [15] */
    0,  /* [16] */
    0,  /* [17] */
    0,  /* [18] */
    0,  /* [19] */
    0,  /* [20] */
    0,  /* [21] */
    0,  /* [22] */
    0,  /* [23] */
    0,  /* [24] */
    0,  /* [25] */
    0,  /* [26] */
    0,  /* [27] */
    0,  /* [28] */
    0,  /* [29] */
    0,  /* [30] */
    0,  /* [31] */
    0,  /* [32] */
    0,  /* [33] */
    0,  /* [34] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* [35] */
    0,  /* [36] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* [37] */
    0,  /* [38] */
    0,  /* [39] */
    0,  /* [40] */
    0,  /* [41] */
    0,  /* [42] */
    0,  /* [43] */
    0,  /* [44] */
    0,  /* [45] */
    0,  /* [46] */
    0,  /* [47] */
    0,  /* [48] */
    0,  /* [49] */
    0,  /* [50] */
    0,  /* [51] */
    0,  /* [52] */
    0,  /* [53] */
    0,  /* [54] */
    0,  /* [55] */
    0,  /* [56] */
    0,  /* [57] */
    0,  /* [58] */
    0,  /* [59] */
    0,  /* [60] */
    0,  /* [61] */
    0,  /* [62] */
    0,  /* [63] */
    0,  /* [64] */
    0,  /* [65] */
    0,  /* [66] */
    0,  /* [67] */
    0,  /* [68] */
    0,  /* [69] */
    0,  /* [70] */
    0,  /* [71] */
    0,  /* [72] */
    0,  /* [73] */
    0,  /* [74] */
    0,  /* [75] */
    0,  /* [76] */
    0,  /* [77] */
    0,  /* [78] */
    0,  /* [79] */
    0,  /* [80] */
    0,  /* [81] */
    0,  /* [82] */
    0,  /* [83] */
    0,  /* [84] */
    0,  /* [85] */
    0,  /* [86] */
    0,  /* [87] */
    0,  /* [88] */
    0,  /* [89] */
    0,  /* [90] */
    0,  /* [91] */
    0,  /* [92] */
    0,  /* [93] */
    0,  /* [94] */
    0,  /* [95] */
    0,  /* [96] */
    0,  /* [97] */
    0,  /* [98] */
    0,  /* [99] */
    0,  /* [100] */
    0,  /* [101] */
    0,  /* [102] */
    0,  /* [103] */
    0,  /* [104] */
    0,  /* [105] */
    0,  /* [106] */
    0,  /* [107] */
    0,  /* [108] */
    0,  /* [109] */
    0,  /* [110] */
    0,  /* [111] */
    0,  /* [112] */
    0,  /* [113] */
    0,  /* [114] */
    0,  /* [115] */
    0,  /* [116] */
    0,  /* [117] */
    0,  /* [118] */
    0,  /* [119] */
    0,  /* [120] */
    0,  /* [121] */
    0,  /* [122] */
    0,  /* [123] */
    0,  /* [124] */
    0,  /* [125] */
    0,  /* [126] */
    0,  /* [127] */
    0,  /* [128] */
    0,  /* [129] */
    0,  /* [130] */
    0,  /* [131] */
    0,  /* [132] */
    0,  /* [133] */
    0,  /* [134] */
    0,  /* [135] */
    0,  /* [136] */
    0,  /* [137] */
    0,  /* [138] */
    0,  /* [139] */
    0,  /* [140] */
    0,  /* [141] */
    0,  /* [142] */
    0,  /* [143] */
    0,  /* [144] */
    0,  /* [145] */
    0,  /* [146] */
    0,  /* [147] */
    0,  /* [148] */
    0,  /* [149] */
    0,  /* [150] */
    0,  /* [151] */
    0,  /* [152] */
    0,  /* [153] */
    0,  /* [154] */
    0,  /* [155] */
    0,  /* [156] */
    0,  /* [157] */
    0,  /* [158] */
    0,  /* [159] */
    0,  /* [160] */
    0,  /* [161] */
    0,  /* [162] */
    0,  /* [163] */
    0,  /* [164] */
    0,  /* [165] */
    0,  /* [166] */
    0,  /* [167] */
    0,  /* [168] */
    0,  /* [169] */
    0,  /* [170] */
    0,  /* [171] */
    0,  /* [172] */
    0,  /* [173] */
    0,  /* [174] */
    0,  /* [175] */
    0,  /* [176] */
    0,  /* [177] */
    0,  /* [178] */
    0,  /* [179] */
    0,  /* [180] */
    0,  /* [181] */
    0,  /* [182] */
    0,  /* [183] */
    0,  /* [184] */
    0,  /* [185] */
    0,  /* [186] */
    0,  /* [187] */
    0,  /* [188] */
    0,  /* [189] */
    0,  /* [190] */
    0,  /* [191] */
    0,  /* [192] */
    0,  /* [193] */
    0,  /* [194] */
    0,  /* [195] */
    0,  /* [196] */
    0,  /* [197] */
    0,  /* [198] */
    0,  /* [199] */
    0,  /* [200] */
    0,  /* [201] */
    0,  /* [202] */
    0,  /* [203] */
    0,  /* [204] */
    0,  /* [205] */
    0,  /* [206] */
    0,  /* [207] */
    0,  /* [208] */
    0,  /* [209] */
    0,  /* [210] */
    0,  /* [211] */
    0,  /* [212] */
    0,  /* [213] */
    0,  /* [214] */
    0,  /* [215] */
};

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    (xdc_Bits16)0x0,  /* enables */
    {
        (xdc_Bits32)0x280000,  /* [0] */
        (xdc_Bits32)0x0,  /* [1] */
        (xdc_Bits32)0x0,  /* [2] */
        (xdc_Bits32)0x0,  /* [3] */
        (xdc_Bits32)0x0,  /* [4] */
        (xdc_Bits32)0x0,  /* [5] */
        (xdc_Bits32)0x0,  /* [6] */
        (xdc_Bits32)0x0,  /* [7] */
    },  /* iser */
    ((void*)0),  /* priorities */
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x1000,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    0,  /* vnvicFlushRequired */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_priorities__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__A[216] = {
    (xdc_UInt8)0x0,  /* [0] */
    (xdc_UInt8)0x0,  /* [1] */
    (xdc_UInt8)0x0,  /* [2] */
    (xdc_UInt8)0x0,  /* [3] */
    (xdc_UInt8)0x0,  /* [4] */
    (xdc_UInt8)0x0,  /* [5] */
    (xdc_UInt8)0x0,  /* [6] */
    (xdc_UInt8)0x0,  /* [7] */
    (xdc_UInt8)0x0,  /* [8] */
    (xdc_UInt8)0x0,  /* [9] */
    (xdc_UInt8)0x0,  /* [10] */
    (xdc_UInt8)0x0,  /* [11] */
    (xdc_UInt8)0x0,  /* [12] */
    (xdc_UInt8)0x0,  /* [13] */
    (xdc_UInt8)0x0,  /* [14] */
    (xdc_UInt8)0xff,  /* [15] */
    (xdc_UInt8)0xff,  /* [16] */
    (xdc_UInt8)0xff,  /* [17] */
    (xdc_UInt8)0xff,  /* [18] */
    (xdc_UInt8)0xff,  /* [19] */
    (xdc_UInt8)0xff,  /* [20] */
    (xdc_UInt8)0xff,  /* [21] */
    (xdc_UInt8)0xff,  /* [22] */
    (xdc_UInt8)0xff,  /* [23] */
    (xdc_UInt8)0xff,  /* [24] */
    (xdc_UInt8)0xff,  /* [25] */
    (xdc_UInt8)0xff,  /* [26] */
    (xdc_UInt8)0xff,  /* [27] */
    (xdc_UInt8)0xff,  /* [28] */
    (xdc_UInt8)0xff,  /* [29] */
    (xdc_UInt8)0xff,  /* [30] */
    (xdc_UInt8)0xff,  /* [31] */
    (xdc_UInt8)0xff,  /* [32] */
    (xdc_UInt8)0xff,  /* [33] */
    (xdc_UInt8)0xff,  /* [34] */
    (xdc_UInt8)0xff,  /* [35] */
    (xdc_UInt8)0xff,  /* [36] */
    (xdc_UInt8)0xff,  /* [37] */
    (xdc_UInt8)0xff,  /* [38] */
    (xdc_UInt8)0xff,  /* [39] */
    (xdc_UInt8)0xff,  /* [40] */
    (xdc_UInt8)0xff,  /* [41] */
    (xdc_UInt8)0xff,  /* [42] */
    (xdc_UInt8)0xff,  /* [43] */
    (xdc_UInt8)0xff,  /* [44] */
    (xdc_UInt8)0xff,  /* [45] */
    (xdc_UInt8)0xff,  /* [46] */
    (xdc_UInt8)0xff,  /* [47] */
    (xdc_UInt8)0xff,  /* [48] */
    (xdc_UInt8)0xff,  /* [49] */
    (xdc_UInt8)0xff,  /* [50] */
    (xdc_UInt8)0xff,  /* [51] */
    (xdc_UInt8)0xff,  /* [52] */
    (xdc_UInt8)0xff,  /* [53] */
    (xdc_UInt8)0xff,  /* [54] */
    (xdc_UInt8)0xff,  /* [55] */
    (xdc_UInt8)0xff,  /* [56] */
    (xdc_UInt8)0xff,  /* [57] */
    (xdc_UInt8)0xff,  /* [58] */
    (xdc_UInt8)0xff,  /* [59] */
    (xdc_UInt8)0xff,  /* [60] */
    (xdc_UInt8)0xff,  /* [61] */
    (xdc_UInt8)0xff,  /* [62] */
    (xdc_UInt8)0xff,  /* [63] */
    (xdc_UInt8)0xff,  /* [64] */
    (xdc_UInt8)0xff,  /* [65] */
    (xdc_UInt8)0xff,  /* [66] */
    (xdc_UInt8)0xff,  /* [67] */
    (xdc_UInt8)0xff,  /* [68] */
    (xdc_UInt8)0xff,  /* [69] */
    (xdc_UInt8)0xff,  /* [70] */
    (xdc_UInt8)0xff,  /* [71] */
    (xdc_UInt8)0xff,  /* [72] */
    (xdc_UInt8)0xff,  /* [73] */
    (xdc_UInt8)0xff,  /* [74] */
    (xdc_UInt8)0xff,  /* [75] */
    (xdc_UInt8)0xff,  /* [76] */
    (xdc_UInt8)0xff,  /* [77] */
    (xdc_UInt8)0xff,  /* [78] */
    (xdc_UInt8)0xff,  /* [79] */
    (xdc_UInt8)0xff,  /* [80] */
    (xdc_UInt8)0xff,  /* [81] */
    (xdc_UInt8)0xff,  /* [82] */
    (xdc_UInt8)0xff,  /* [83] */
    (xdc_UInt8)0xff,  /* [84] */
    (xdc_UInt8)0xff,  /* [85] */
    (xdc_UInt8)0xff,  /* [86] */
    (xdc_UInt8)0xff,  /* [87] */
    (xdc_UInt8)0xff,  /* [88] */
    (xdc_UInt8)0xff,  /* [89] */
    (xdc_UInt8)0xff,  /* [90] */
    (xdc_UInt8)0xff,  /* [91] */
    (xdc_UInt8)0xff,  /* [92] */
    (xdc_UInt8)0xff,  /* [93] */
    (xdc_UInt8)0xff,  /* [94] */
    (xdc_UInt8)0xff,  /* [95] */
    (xdc_UInt8)0xff,  /* [96] */
    (xdc_UInt8)0xff,  /* [97] */
    (xdc_UInt8)0xff,  /* [98] */
    (xdc_UInt8)0xff,  /* [99] */
    (xdc_UInt8)0xff,  /* [100] */
    (xdc_UInt8)0xff,  /* [101] */
    (xdc_UInt8)0xff,  /* [102] */
    (xdc_UInt8)0xff,  /* [103] */
    (xdc_UInt8)0xff,  /* [104] */
    (xdc_UInt8)0xff,  /* [105] */
    (xdc_UInt8)0xff,  /* [106] */
    (xdc_UInt8)0xff,  /* [107] */
    (xdc_UInt8)0xff,  /* [108] */
    (xdc_UInt8)0xff,  /* [109] */
    (xdc_UInt8)0xff,  /* [110] */
    (xdc_UInt8)0xff,  /* [111] */
    (xdc_UInt8)0xff,  /* [112] */
    (xdc_UInt8)0xff,  /* [113] */
    (xdc_UInt8)0xff,  /* [114] */
    (xdc_UInt8)0xff,  /* [115] */
    (xdc_UInt8)0xff,  /* [116] */
    (xdc_UInt8)0xff,  /* [117] */
    (xdc_UInt8)0xff,  /* [118] */
    (xdc_UInt8)0xff,  /* [119] */
    (xdc_UInt8)0xff,  /* [120] */
    (xdc_UInt8)0xff,  /* [121] */
    (xdc_UInt8)0xff,  /* [122] */
    (xdc_UInt8)0xff,  /* [123] */
    (xdc_UInt8)0xff,  /* [124] */
    (xdc_UInt8)0xff,  /* [125] */
    (xdc_UInt8)0xff,  /* [126] */
    (xdc_UInt8)0xff,  /* [127] */
    (xdc_UInt8)0xff,  /* [128] */
    (xdc_UInt8)0xff,  /* [129] */
    (xdc_UInt8)0xff,  /* [130] */
    (xdc_UInt8)0xff,  /* [131] */
    (xdc_UInt8)0xff,  /* [132] */
    (xdc_UInt8)0xff,  /* [133] */
    (xdc_UInt8)0xff,  /* [134] */
    (xdc_UInt8)0xff,  /* [135] */
    (xdc_UInt8)0xff,  /* [136] */
    (xdc_UInt8)0xff,  /* [137] */
    (xdc_UInt8)0xff,  /* [138] */
    (xdc_UInt8)0xff,  /* [139] */
    (xdc_UInt8)0xff,  /* [140] */
    (xdc_UInt8)0xff,  /* [141] */
    (xdc_UInt8)0xff,  /* [142] */
    (xdc_UInt8)0xff,  /* [143] */
    (xdc_UInt8)0xff,  /* [144] */
    (xdc_UInt8)0xff,  /* [145] */
    (xdc_UInt8)0xff,  /* [146] */
    (xdc_UInt8)0xff,  /* [147] */
    (xdc_UInt8)0xff,  /* [148] */
    (xdc_UInt8)0xff,  /* [149] */
    (xdc_UInt8)0xff,  /* [150] */
    (xdc_UInt8)0xff,  /* [151] */
    (xdc_UInt8)0xff,  /* [152] */
    (xdc_UInt8)0xff,  /* [153] */
    (xdc_UInt8)0xff,  /* [154] */
    (xdc_UInt8)0xff,  /* [155] */
    (xdc_UInt8)0xff,  /* [156] */
    (xdc_UInt8)0xff,  /* [157] */
    (xdc_UInt8)0xff,  /* [158] */
    (xdc_UInt8)0xff,  /* [159] */
    (xdc_UInt8)0xff,  /* [160] */
    (xdc_UInt8)0xff,  /* [161] */
    (xdc_UInt8)0xff,  /* [162] */
    (xdc_UInt8)0xff,  /* [163] */
    (xdc_UInt8)0xff,  /* [164] */
    (xdc_UInt8)0xff,  /* [165] */
    (xdc_UInt8)0xff,  /* [166] */
    (xdc_UInt8)0xff,  /* [167] */
    (xdc_UInt8)0xff,  /* [168] */
    (xdc_UInt8)0xff,  /* [169] */
    (xdc_UInt8)0xff,  /* [170] */
    (xdc_UInt8)0xff,  /* [171] */
    (xdc_UInt8)0xff,  /* [172] */
    (xdc_UInt8)0xff,  /* [173] */
    (xdc_UInt8)0xff,  /* [174] */
    (xdc_UInt8)0xff,  /* [175] */
    (xdc_UInt8)0xff,  /* [176] */
    (xdc_UInt8)0xff,  /* [177] */
    (xdc_UInt8)0xff,  /* [178] */
    (xdc_UInt8)0xff,  /* [179] */
    (xdc_UInt8)0xff,  /* [180] */
    (xdc_UInt8)0xff,  /* [181] */
    (xdc_UInt8)0xff,  /* [182] */
    (xdc_UInt8)0xff,  /* [183] */
    (xdc_UInt8)0xff,  /* [184] */
    (xdc_UInt8)0xff,  /* [185] */
    (xdc_UInt8)0xff,  /* [186] */
    (xdc_UInt8)0xff,  /* [187] */
    (xdc_UInt8)0xff,  /* [188] */
    (xdc_UInt8)0xff,  /* [189] */
    (xdc_UInt8)0xff,  /* [190] */
    (xdc_UInt8)0xff,  /* [191] */
    (xdc_UInt8)0xff,  /* [192] */
    (xdc_UInt8)0xff,  /* [193] */
    (xdc_UInt8)0xff,  /* [194] */
    (xdc_UInt8)0xff,  /* [195] */
    (xdc_UInt8)0xff,  /* [196] */
    (xdc_UInt8)0xff,  /* [197] */
    (xdc_UInt8)0xff,  /* [198] */
    (xdc_UInt8)0xff,  /* [199] */
    (xdc_UInt8)0xff,  /* [200] */
    (xdc_UInt8)0xff,  /* [201] */
    (xdc_UInt8)0xff,  /* [202] */
    (xdc_UInt8)0xff,  /* [203] */
    (xdc_UInt8)0xff,  /* [204] */
    (xdc_UInt8)0xff,  /* [205] */
    (xdc_UInt8)0xff,  /* [206] */
    (xdc_UInt8)0xff,  /* [207] */
    (xdc_UInt8)0xff,  /* [208] */
    (xdc_UInt8)0xff,  /* [209] */
    (xdc_UInt8)0xff,  /* [210] */
    (xdc_UInt8)0xff,  /* [211] */
    (xdc_UInt8)0xff,  /* [212] */
    (xdc_UInt8)0xff,  /* [213] */
    (xdc_UInt8)0xff,  /* [214] */
    (xdc_UInt8)0xff,  /* [215] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5798) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5868) << 16 | 512);

/* A_unsupportedMaskingOption__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1866) << 16 | 16);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3980) << 16 | 0);

/* E_exception__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4028) << 16 | 0);

/* E_noIsr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4233) << 16 | 0);

/* E_NMI__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4261) << 16 | 0);

/* E_hardFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4271) << 16 | 0);

/* E_memFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4287) << 16 | 0);

/* E_busFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4317) << 16 | 0);

/* E_usageFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4347) << 16 | 0);

/* E_svCall__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4364) << 16 | 0);

/* E_debugMon__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4385) << 16 | 0);

/* E_reserved__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4400) << 16 | 0);

/* excHookFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* dispatchTable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatchTable ti_sysbios_family_arm_m3_Hwi_dispatchTable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_dispatchTable)0);

/* priorities__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__C = ((CT__ti_sysbios_family_arm_m3_Hwi_priorities)ti_sysbios_family_arm_m3_Hwi_priorities__A);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};

/* excHandlerFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8041;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8042;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3508) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3818) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2371) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2407) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2452) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4599) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2343) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x12c,  /* timeout */
        (xdc_UInt32)0x12c,  /* currTimeout */
        (xdc_UInt32)0x12c,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)GPIOTicker)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt32)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4853) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4875) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4893) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)559) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)640) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)4925) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)4979) << 16 | 768);

/* A_nullEventMasks__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)710) << 16 | 16);

/* A_nullEventId__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)757) << 16 | 16);

/* A_eventInUse__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)796) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)839) << 16 | 16);

/* A_pendTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)902) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)((void*)&ti_sysbios_knl_Semaphore_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5060) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5090) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1050) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)839) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1170) << 16 | 16);

/* A_pendTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1224) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5133) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5180) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5198) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1318) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1375) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[2];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[2];

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024];

/* --> ti_sysbios_knl_Task_Instance_State_2_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_2_hookEnv__A[2];

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[1024];

/* --> ti_sysbios_knl_Task_Instance_State_3_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_3_hookEnv__A[2];

/* --> ti_sysbios_knl_Task_Instance_State_4_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_4_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_4_hookEnv__A[2];

/* --> ti_sysbios_knl_Task_Instance_State_5_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_5_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_5_hookEnv__A[2];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[6] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x400,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)PortTest)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8763) /* __name */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x2,  /* priority */
        (xdc_UInt)0x4,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)UartTest)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8769) /* __name */
    },
    {/* instance#2 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x3,  /* priority */
        (xdc_UInt)0x8,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x400,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)masterTaskFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8775) /* __name */
    },
    {/* instance#3 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x4,  /* priority */
        (xdc_UInt)0x10,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x400,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_3_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)slaveTaskFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_3_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8786) /* __name */
    },
    {/* instance#4 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[4].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[4].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x4,  /* priority */
        (xdc_UInt)0x10,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_4_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)SDTask)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_4_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8796) /* __name */
    },
    {/* instance#5 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[5].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[5].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_5_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_5_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8803) /* __name */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[5],  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x6,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[2] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
    {
        ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))((xdc_Fxn)ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 6;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5238) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5306) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5351) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5392) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5424) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5472) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5528) << 16 | 512);

/* LM_setAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5559) << 16 | 768);

/* LM_schedule__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5642) << 16 | 1024);

/* LM_noWork__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5728) << 16 | 1024);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3855) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3898) << 16 | 0);

/* E_deleteNotAllowed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3949) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1424) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1493) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1547) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1601) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1664) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1714) << 16 | 16);

/* A_badAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1749) << 16 | 16);

/* A_sleepTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1782) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {2, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* Module__root__V */
ti_sysbios_utils_Load_Module__ ti_sysbios_utils_Load_Module__root__V = {
    2048,  /* mask */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)((void*)&ti_sysbios_utils_Load_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8044;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)8159) << 16 | 2048);

/* LS_hwiLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)8176) << 16 | 2048);

/* LS_swiLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)8194) << 16 | 2048);

/* LS_taskLoad__C */
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)8212) << 16 | 2048);

/* postUpdate__C */
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIABenchmark INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsEnabled ti_uia_events_UIABenchmark_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsIncluded ti_uia_events_UIABenchmark_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__diagsMask ti_uia_events_UIABenchmark_Module__diagsMask__C = ((CT__ti_uia_events_UIABenchmark_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gateObj ti_uia_events_UIABenchmark_Module__gateObj__C = ((CT__ti_uia_events_UIABenchmark_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__gatePrms ti_uia_events_UIABenchmark_Module__gatePrms__C = ((CT__ti_uia_events_UIABenchmark_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__id ti_uia_events_UIABenchmark_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerDefined ti_uia_events_UIABenchmark_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerObj ti_uia_events_UIABenchmark_Module__loggerObj__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn0 ti_uia_events_UIABenchmark_Module__loggerFxn0__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn1 ti_uia_events_UIABenchmark_Module__loggerFxn1__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn2 ti_uia_events_UIABenchmark_Module__loggerFxn2__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn4 ti_uia_events_UIABenchmark_Module__loggerFxn4__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__loggerFxn8 ti_uia_events_UIABenchmark_Module__loggerFxn8__C = ((CT__ti_uia_events_UIABenchmark_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn ti_uia_events_UIABenchmark_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIABenchmark_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__count ti_uia_events_UIABenchmark_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__heap ti_uia_events_UIABenchmark_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__sizeof ti_uia_events_UIABenchmark_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_Object__table ti_uia_events_UIABenchmark_Object__table__C = 0;

/* start__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_start ti_uia_events_UIABenchmark_start__C = (((xdc_runtime_Log_Event)5886) << 16 | 32768);

/* stop__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stop ti_uia_events_UIABenchmark_stop__C = (((xdc_runtime_Log_Event)5898) << 16 | 32768);

/* startInstance__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstance ti_uia_events_UIABenchmark_startInstance__C = (((xdc_runtime_Log_Event)5909) << 16 | 32768);

/* stopInstance__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstance ti_uia_events_UIABenchmark_stopInstance__C = (((xdc_runtime_Log_Event)5929) << 16 | 32768);

/* startInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithAdrs ti_uia_events_UIABenchmark_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)5948) << 16 | 32768);

/* stopInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithAdrs ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)5975) << 16 | 32768);

/* startInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_startInstanceWithStr ti_uia_events_UIABenchmark_startInstanceWithStr__C = (((xdc_runtime_Log_Event)6001) << 16 | 32768);

/* stopInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIABenchmark_stopInstanceWithStr ti_uia_events_UIABenchmark_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)6027) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)6052) << 16 | 192);

/* errorWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)6074) << 16 | 192);

/* hwError__C */
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)6101) << 16 | 192);

/* hwErrorWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)6126) << 16 | 192);

/* fatal__C */
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)6156) << 16 | 128);

/* fatalWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6184) << 16 | 128);

/* critical__C */
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6217) << 16 | 160);

/* criticalWithStr__C */
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6248) << 16 | 160);

/* exception__C */
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6284) << 16 | 192);

/* uncaughtException__C */
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6309) << 16 | 192);

/* nullPointerException__C */
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6343) << 16 | 192);

/* unexpectedInterrupt__C */
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6381) << 16 | 192);

/* memoryAccessFault__C */
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6417) << 16 | 192);

/* securityException__C */
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6463) << 16 | 192);

/* divisionByZero__C */
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6497) << 16 | 192);

/* overflowException__C */
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6529) << 16 | 192);

/* indexOutOfRange__C */
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6563) << 16 | 192);

/* notImplemented__C */
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)6609) << 16 | 192);

/* stackOverflow__C */
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6674) << 16 | 160);

/* illegalInstruction__C */
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6713) << 16 | 192);

/* entryPointNotFound__C */
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6757) << 16 | 192);

/* moduleNotFound__C */
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6794) << 16 | 192);

/* floatingPointError__C */
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6843) << 16 | 192);

/* invalidParameter__C */
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6879) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)6942) << 16 | 224);

/* warningWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)6966) << 16 | 224);

/* info__C */
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)6995) << 16 | 16384);

/* infoWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)7017) << 16 | 16384);

/* detail__C */
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)7044) << 16 | 16480);

/* detailWithStr__C */
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)7067) << 16 | 16480);

/* intWithKey__C */
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)7096) << 16 | 32768);


/*
 * ======== ti.uia.events.UIARoundtrip INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsEnabled ti_uia_events_UIARoundtrip_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsIncluded ti_uia_events_UIARoundtrip_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsMask ti_uia_events_UIARoundtrip_Module__diagsMask__C = ((CT__ti_uia_events_UIARoundtrip_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gateObj ti_uia_events_UIARoundtrip_Module__gateObj__C = ((CT__ti_uia_events_UIARoundtrip_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gatePrms ti_uia_events_UIARoundtrip_Module__gatePrms__C = ((CT__ti_uia_events_UIARoundtrip_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__id ti_uia_events_UIARoundtrip_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerDefined ti_uia_events_UIARoundtrip_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerObj ti_uia_events_UIARoundtrip_Module__loggerObj__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0 ti_uia_events_UIARoundtrip_Module__loggerFxn0__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1 ti_uia_events_UIARoundtrip_Module__loggerFxn1__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2 ti_uia_events_UIARoundtrip_Module__loggerFxn2__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4 ti_uia_events_UIARoundtrip_Module__loggerFxn4__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8 ti_uia_events_UIARoundtrip_Module__loggerFxn8__C = ((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Module__startupDoneFxn ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIARoundtrip_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__count ti_uia_events_UIARoundtrip_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__heap ti_uia_events_UIARoundtrip_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__sizeof ti_uia_events_UIARoundtrip_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_Object__table ti_uia_events_UIARoundtrip_Object__table__C = 0;

/* start__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_start ti_uia_events_UIARoundtrip_start__C = (((xdc_runtime_Log_Event)7130) << 16 | 32768);

/* stop__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stop ti_uia_events_UIARoundtrip_stop__C = (((xdc_runtime_Log_Event)7151) << 16 | 32768);

/* startInstance__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstance ti_uia_events_UIARoundtrip_startInstance__C = (((xdc_runtime_Log_Event)7171) << 16 | 32768);

/* stopInstance__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstance ti_uia_events_UIARoundtrip_stopInstance__C = (((xdc_runtime_Log_Event)7200) << 16 | 32768);

/* startInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithAdrs ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C = (((xdc_runtime_Log_Event)7228) << 16 | 32768);

/* stopInstanceWithAdrs__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithAdrs ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C = (((xdc_runtime_Log_Event)7265) << 16 | 32768);

/* startInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithStr ti_uia_events_UIARoundtrip_startInstanceWithStr__C = (((xdc_runtime_Log_Event)7301) << 16 | 32768);

/* stopInstanceWithStr__C */
__FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithStr ti_uia_events_UIARoundtrip_stopInstanceWithStr__C = (((xdc_runtime_Log_Event)7337) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAStatistic INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsEnabled ti_uia_events_UIAStatistic_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsIncluded ti_uia_events_UIAStatistic_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__diagsMask ti_uia_events_UIAStatistic_Module__diagsMask__C = ((CT__ti_uia_events_UIAStatistic_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__gateObj ti_uia_events_UIAStatistic_Module__gateObj__C = ((CT__ti_uia_events_UIAStatistic_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__gatePrms ti_uia_events_UIAStatistic_Module__gatePrms__C = ((CT__ti_uia_events_UIAStatistic_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__id ti_uia_events_UIAStatistic_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerDefined ti_uia_events_UIAStatistic_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerObj ti_uia_events_UIAStatistic_Module__loggerObj__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn0 ti_uia_events_UIAStatistic_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn1 ti_uia_events_UIAStatistic_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn2 ti_uia_events_UIAStatistic_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn4 ti_uia_events_UIAStatistic_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__loggerFxn8 ti_uia_events_UIAStatistic_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAStatistic_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Module__startupDoneFxn ti_uia_events_UIAStatistic_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAStatistic_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__count ti_uia_events_UIAStatistic_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__heap ti_uia_events_UIAStatistic_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__sizeof ti_uia_events_UIAStatistic_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_Object__table ti_uia_events_UIAStatistic_Object__table__C = 0;

/* cpuLoad__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_cpuLoad ti_uia_events_UIAStatistic_cpuLoad__C = (((xdc_runtime_Log_Event)7372) << 16 | 32768);

/* cpuLoadByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_cpuLoadByInstance ti_uia_events_UIAStatistic_cpuLoadByInstance__C = (((xdc_runtime_Log_Event)7395) << 16 | 32768);

/* bytesProcessed__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_bytesProcessed ti_uia_events_UIAStatistic_bytesProcessed__C = (((xdc_runtime_Log_Event)7445) << 16 | 32768);

/* bytesProcessedByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_bytesProcessedByInstance ti_uia_events_UIAStatistic_bytesProcessedByInstance__C = (((xdc_runtime_Log_Event)7482) << 16 | 32768);

/* wordsProcessed__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_wordsProcessed ti_uia_events_UIAStatistic_wordsProcessed__C = (((xdc_runtime_Log_Event)7537) << 16 | 32768);

/* wordsProcessedByInstance__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_wordsProcessedByInstance ti_uia_events_UIAStatistic_wordsProcessedByInstance__C = (((xdc_runtime_Log_Event)7574) << 16 | 32768);

/* freeBytes__C */
__FAR__ const CT__ti_uia_events_UIAStatistic_freeBytes ti_uia_events_UIAStatistic_freeBytes__C = (((xdc_runtime_Log_Event)7629) << 16 | 32768);


/*
 * ======== ti.uia.events.UIASync INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsEnabled ti_uia_events_UIASync_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsIncluded ti_uia_events_UIASync_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__diagsMask ti_uia_events_UIASync_Module__diagsMask__C = ((CT__ti_uia_events_UIASync_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__gateObj ti_uia_events_UIASync_Module__gateObj__C = ((CT__ti_uia_events_UIASync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__gatePrms ti_uia_events_UIASync_Module__gatePrms__C = ((CT__ti_uia_events_UIASync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__id ti_uia_events_UIASync_Module__id__C = (xdc_Bits16)0x803a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerDefined ti_uia_events_UIASync_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerObj ti_uia_events_UIASync_Module__loggerObj__C = ((CT__ti_uia_events_UIASync_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn0 ti_uia_events_UIASync_Module__loggerFxn0__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn1 ti_uia_events_UIASync_Module__loggerFxn1__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn2 ti_uia_events_UIASync_Module__loggerFxn2__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn4 ti_uia_events_UIASync_Module__loggerFxn4__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__loggerFxn8 ti_uia_events_UIASync_Module__loggerFxn8__C = ((CT__ti_uia_events_UIASync_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_UIASync_Module__startupDoneFxn ti_uia_events_UIASync_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIASync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__count ti_uia_events_UIASync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__heap ti_uia_events_UIASync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__sizeof ti_uia_events_UIASync_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_UIASync_Object__table ti_uia_events_UIASync_Object__table__C = 0;

/* syncPoint__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPoint ti_uia_events_UIASync_syncPoint__C = (((xdc_runtime_Log_Event)7670) << 16 | 32768);

/* syncPointAfterHalt__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPointAfterHalt ti_uia_events_UIASync_syncPointAfterHalt__C = (((xdc_runtime_Log_Event)7827) << 16 | 32768);

/* globalTimerFreq__C */
__FAR__ const CT__ti_uia_events_UIASync_globalTimerFreq ti_uia_events_UIASync_globalTimerFreq__C = (((xdc_runtime_Log_Event)7995) << 16 | 32768);

/* syncPointUserProvidedData__C */
__FAR__ const CT__ti_uia_events_UIASync_syncPointUserProvidedData ti_uia_events_UIASync_syncPointUserProvidedData__C = (((xdc_runtime_Log_Event)8114) << 16 | 32768);


/*
 * ======== ti.uia.runtime.LogSync INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LogSync_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_uia_runtime_LogSync_Params ti_uia_runtime_LogSync_Object__PARAMS__C = {
    sizeof (ti_uia_runtime_LogSync_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_runtime_LogSync_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_uia_runtime_LogSync_Module__ ti_uia_runtime_LogSync_Module__root__V = {
    {&ti_uia_runtime_LogSync_Module__root__V.link,  /* link.next */
    &ti_uia_runtime_LogSync_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_uia_runtime_LogSync_Module_State__ ti_uia_runtime_LogSync_Module__state__V = {
    (xdc_UInt32)0x0,  /* numTimesHalted */
    (xdc_UInt32)0x1,  /* serialNumber */
    1,  /* isEnabled */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsEnabled ti_uia_runtime_LogSync_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsIncluded ti_uia_runtime_LogSync_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__diagsMask ti_uia_runtime_LogSync_Module__diagsMask__C = ((CT__ti_uia_runtime_LogSync_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__gateObj ti_uia_runtime_LogSync_Module__gateObj__C = ((CT__ti_uia_runtime_LogSync_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__gatePrms ti_uia_runtime_LogSync_Module__gatePrms__C = ((CT__ti_uia_runtime_LogSync_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__id ti_uia_runtime_LogSync_Module__id__C = (xdc_Bits16)0x803c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerDefined ti_uia_runtime_LogSync_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerObj ti_uia_runtime_LogSync_Module__loggerObj__C = ((CT__ti_uia_runtime_LogSync_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn0 ti_uia_runtime_LogSync_Module__loggerFxn0__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn1 ti_uia_runtime_LogSync_Module__loggerFxn1__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn2 ti_uia_runtime_LogSync_Module__loggerFxn2__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn4 ti_uia_runtime_LogSync_Module__loggerFxn4__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__loggerFxn8 ti_uia_runtime_LogSync_Module__loggerFxn8__C = ((CT__ti_uia_runtime_LogSync_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Module__startupDoneFxn ti_uia_runtime_LogSync_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_LogSync_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__count ti_uia_runtime_LogSync_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__heap ti_uia_runtime_LogSync_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__sizeof ti_uia_runtime_LogSync_Object__sizeof__C = sizeof(ti_uia_runtime_LogSync_Object__);

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_LogSync_Object__table ti_uia_runtime_LogSync_Object__table__C = 0;

/* injectIntoTraceFxn__C */
__FAR__ const CT__ti_uia_runtime_LogSync_injectIntoTraceFxn ti_uia_runtime_LogSync_injectIntoTraceFxn__C = ((CT__ti_uia_runtime_LogSync_injectIntoTraceFxn)0);

/* cpuTimestampCyclesPerTick__C */
__FAR__ const CT__ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C = (xdc_UInt32)0x1;

/* globalTimestampCpuCyclesPerTick__C */
__FAR__ const CT__ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C = (xdc_UInt32)0x0;

/* maxGlobalClockFreq__C */
__FAR__ const CT__ti_uia_runtime_LogSync_maxGlobalClockFreq ti_uia_runtime_LogSync_maxGlobalClockFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x0,  /* lo */
};


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy INITIALIZERS ========
 */


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy INITIALIZERS ========
 */


/*
 * ======== ti.uia.runtime.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_uia_runtime_LoggerStopMode_Params ti_uia_runtime_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_runtime_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_runtime_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_SizeT)0x200,  /* transferBufSize */
    (xdc_SizeT)0x80,  /* maxEventSize */
    1,  /* exitFlush */
    0,  /* bufHeap */
    (xdc_Int)0x1,  /* numCores */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[640];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1152];

/* --> ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A */
__T1_ti_uia_runtime_LoggerStopMode_Instance_State__bufferArray ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1152];

/* Module__root__V */
ti_uia_runtime_LoggerStopMode_Module__ ti_uia_runtime_LoggerStopMode_Module__root__V = {
    {&ti_uia_runtime_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_runtime_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_runtime_LoggerStopMode_Object__ ti_uia_runtime_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x200,  /* queueSizeInMAUs */
            (xdc_UInt)0x1,  /* instanceId */
            (xdc_UInt)0x803d,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[0].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x200,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A[512])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_0_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
    {/* instance#1 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x400,  /* queueSizeInMAUs */
            (xdc_UInt)0x2,  /* instanceId */
            (xdc_UInt)0x803d,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[1].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x400,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A[1024])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_1_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
    {/* instance#2 */
        &ti_uia_runtime_LoggerStopMode_Module__FXNS__C,
        {
            (xdc_Int)0x2c,  /* structSize */
            ((ti_uia_runtime_QueueDescriptor_Header*)0),  /* next */
            ti_uia_runtime_QueueDescriptor_QueueType_TOHOST_EVENT_OVERFLOW_BUFFER,  /* queueType */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* readPtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* writePtr */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* queueStartAdrs */
            (xdc_SizeT)0x400,  /* queueSizeInMAUs */
            (xdc_UInt)0x3,  /* instanceId */
            (xdc_UInt)0x803d,  /* ownerModuleId */
            (xdc_UInt)0x1,  /* priority */
            ((xdc_Bits32*)((void*)&ti_uia_runtime_LoggerStopMode_Object__table__V[2].droppedEvents)),  /* numDroppedCtrAdrs */
        },  /* hdr */
        0,  /* bufHeap */
        (xdc_SizeT)0x20,  /* maxEventSizeInBits32 */
        (xdc_Bits16)0x1,  /* serial */
        ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
        1,  /* enabled */
        1,  /* flush */
        (xdc_Int)0x0,  /* droppedEvents */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[0])),  /* queueStartAdrs */
        (xdc_SizeT)0x400,  /* queueSizeInMAUs */
        ((xdc_Ptr)((void*)&ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A[1024])),  /* endOfBufferAdrsPlus1 */
        ((void*)ti_uia_runtime_LoggerStopMode_Instance_State_2_bufferArray__A),  /* bufferArray */
        (xdc_Int)0x1,  /* numCores */
    },
};

/* Module__state__V */
ti_uia_runtime_LoggerStopMode_Module_State__ ti_uia_runtime_LoggerStopMode_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
    (xdc_Bits16)0xffff,  /* moduleIdToRouteToStatusLogger */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsEnabled ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsIncluded ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__diagsMask ti_uia_runtime_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__gateObj ti_uia_runtime_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__gatePrms ti_uia_runtime_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__id ti_uia_runtime_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerDefined ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerObj ti_uia_runtime_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn0 ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn1 ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn2 ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn4 ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn8 ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__count ti_uia_runtime_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__heap ti_uia_runtime_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__sizeof ti_uia_runtime_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_runtime_LoggerStopMode_Object__);

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_Object__table ti_uia_runtime_LoggerStopMode_Object__table__C = ti_uia_runtime_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_filterByLevel ti_uia_runtime_LoggerStopMode_filterByLevel__C = 0;

/* E_badLevel__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_E_badLevel ti_uia_runtime_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3646) << 16 | 0);

/* isTimestampEnabled__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_isTimestampEnabled ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C = 1;

/* enableFlush__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_enableFlush ti_uia_runtime_LoggerStopMode_enableFlush__C = 0;

/* statusLogger__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_statusLogger ti_uia_runtime_LoggerStopMode_statusLogger__C = 0;

/* overflowLogger__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_overflowLogger ti_uia_runtime_LoggerStopMode_overflowLogger__C = 0;

/* level1Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level1Mask ti_uia_runtime_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level2Mask ti_uia_runtime_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level3Mask ti_uia_runtime_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
__FAR__ const CT__ti_uia_runtime_LoggerStopMode_level4Mask ti_uia_runtime_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)0),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt16)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x803e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x803f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3578) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3600) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3604) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3638) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4677) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4701) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4722) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4741) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4758) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4772) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4788) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4795) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4806) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4816) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4835) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_runtime_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_runtime_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[12] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_runtime_LogSync_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_runtime_LoggerStopMode_Module_startup__E)),  /* [11] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[12] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    1,  /* [11] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {2, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8878] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x63,  /* [561] */
    (xdc_Char)0x6c,  /* [562] */
    (xdc_Char)0x6f,  /* [563] */
    (xdc_Char)0x63,  /* [564] */
    (xdc_Char)0x6b,  /* [565] */
    (xdc_Char)0x44,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x73,  /* [568] */
    (xdc_Char)0x61,  /* [569] */
    (xdc_Char)0x62,  /* [570] */
    (xdc_Char)0x6c,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x3a,  /* [574] */
    (xdc_Char)0x20,  /* [575] */
    (xdc_Char)0x43,  /* [576] */
    (xdc_Char)0x61,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x6e,  /* [579] */
    (xdc_Char)0x6f,  /* [580] */
    (xdc_Char)0x74,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x63,  /* [583] */
    (xdc_Char)0x72,  /* [584] */
    (xdc_Char)0x65,  /* [585] */
    (xdc_Char)0x61,  /* [586] */
    (xdc_Char)0x74,  /* [587] */
    (xdc_Char)0x65,  /* [588] */
    (xdc_Char)0x20,  /* [589] */
    (xdc_Char)0x61,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x63,  /* [592] */
    (xdc_Char)0x6c,  /* [593] */
    (xdc_Char)0x6f,  /* [594] */
    (xdc_Char)0x63,  /* [595] */
    (xdc_Char)0x6b,  /* [596] */
    (xdc_Char)0x20,  /* [597] */
    (xdc_Char)0x69,  /* [598] */
    (xdc_Char)0x6e,  /* [599] */
    (xdc_Char)0x73,  /* [600] */
    (xdc_Char)0x74,  /* [601] */
    (xdc_Char)0x61,  /* [602] */
    (xdc_Char)0x6e,  /* [603] */
    (xdc_Char)0x63,  /* [604] */
    (xdc_Char)0x65,  /* [605] */
    (xdc_Char)0x20,  /* [606] */
    (xdc_Char)0x77,  /* [607] */
    (xdc_Char)0x68,  /* [608] */
    (xdc_Char)0x65,  /* [609] */
    (xdc_Char)0x6e,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x42,  /* [612] */
    (xdc_Char)0x49,  /* [613] */
    (xdc_Char)0x4f,  /* [614] */
    (xdc_Char)0x53,  /* [615] */
    (xdc_Char)0x2e,  /* [616] */
    (xdc_Char)0x63,  /* [617] */
    (xdc_Char)0x6c,  /* [618] */
    (xdc_Char)0x6f,  /* [619] */
    (xdc_Char)0x63,  /* [620] */
    (xdc_Char)0x6b,  /* [621] */
    (xdc_Char)0x45,  /* [622] */
    (xdc_Char)0x6e,  /* [623] */
    (xdc_Char)0x61,  /* [624] */
    (xdc_Char)0x62,  /* [625] */
    (xdc_Char)0x6c,  /* [626] */
    (xdc_Char)0x65,  /* [627] */
    (xdc_Char)0x64,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x69,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x66,  /* [633] */
    (xdc_Char)0x61,  /* [634] */
    (xdc_Char)0x6c,  /* [635] */
    (xdc_Char)0x73,  /* [636] */
    (xdc_Char)0x65,  /* [637] */
    (xdc_Char)0x2e,  /* [638] */
    (xdc_Char)0x0,  /* [639] */
    (xdc_Char)0x41,  /* [640] */
    (xdc_Char)0x5f,  /* [641] */
    (xdc_Char)0x62,  /* [642] */
    (xdc_Char)0x61,  /* [643] */
    (xdc_Char)0x64,  /* [644] */
    (xdc_Char)0x54,  /* [645] */
    (xdc_Char)0x68,  /* [646] */
    (xdc_Char)0x72,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x61,  /* [649] */
    (xdc_Char)0x64,  /* [650] */
    (xdc_Char)0x54,  /* [651] */
    (xdc_Char)0x79,  /* [652] */
    (xdc_Char)0x70,  /* [653] */
    (xdc_Char)0x65,  /* [654] */
    (xdc_Char)0x3a,  /* [655] */
    (xdc_Char)0x20,  /* [656] */
    (xdc_Char)0x43,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x6e,  /* [660] */
    (xdc_Char)0x6f,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x20,  /* [663] */
    (xdc_Char)0x63,  /* [664] */
    (xdc_Char)0x72,  /* [665] */
    (xdc_Char)0x65,  /* [666] */
    (xdc_Char)0x61,  /* [667] */
    (xdc_Char)0x74,  /* [668] */
    (xdc_Char)0x65,  /* [669] */
    (xdc_Char)0x2f,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x6c,  /* [673] */
    (xdc_Char)0x65,  /* [674] */
    (xdc_Char)0x74,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x61,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x43,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x6f,  /* [682] */
    (xdc_Char)0x63,  /* [683] */
    (xdc_Char)0x6b,  /* [684] */
    (xdc_Char)0x20,  /* [685] */
    (xdc_Char)0x66,  /* [686] */
    (xdc_Char)0x72,  /* [687] */
    (xdc_Char)0x6f,  /* [688] */
    (xdc_Char)0x6d,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x48,  /* [691] */
    (xdc_Char)0x77,  /* [692] */
    (xdc_Char)0x69,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x6f,  /* [695] */
    (xdc_Char)0x72,  /* [696] */
    (xdc_Char)0x20,  /* [697] */
    (xdc_Char)0x53,  /* [698] */
    (xdc_Char)0x77,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x74,  /* [702] */
    (xdc_Char)0x68,  /* [703] */
    (xdc_Char)0x72,  /* [704] */
    (xdc_Char)0x65,  /* [705] */
    (xdc_Char)0x61,  /* [706] */
    (xdc_Char)0x64,  /* [707] */
    (xdc_Char)0x2e,  /* [708] */
    (xdc_Char)0x0,  /* [709] */
    (xdc_Char)0x41,  /* [710] */
    (xdc_Char)0x5f,  /* [711] */
    (xdc_Char)0x6e,  /* [712] */
    (xdc_Char)0x75,  /* [713] */
    (xdc_Char)0x6c,  /* [714] */
    (xdc_Char)0x6c,  /* [715] */
    (xdc_Char)0x45,  /* [716] */
    (xdc_Char)0x76,  /* [717] */
    (xdc_Char)0x65,  /* [718] */
    (xdc_Char)0x6e,  /* [719] */
    (xdc_Char)0x74,  /* [720] */
    (xdc_Char)0x4d,  /* [721] */
    (xdc_Char)0x61,  /* [722] */
    (xdc_Char)0x73,  /* [723] */
    (xdc_Char)0x6b,  /* [724] */
    (xdc_Char)0x73,  /* [725] */
    (xdc_Char)0x3a,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x6f,  /* [728] */
    (xdc_Char)0x72,  /* [729] */
    (xdc_Char)0x4d,  /* [730] */
    (xdc_Char)0x61,  /* [731] */
    (xdc_Char)0x73,  /* [732] */
    (xdc_Char)0x6b,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x61,  /* [735] */
    (xdc_Char)0x6e,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x20,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6e,  /* [740] */
    (xdc_Char)0x64,  /* [741] */
    (xdc_Char)0x4d,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x73,  /* [744] */
    (xdc_Char)0x6b,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x61,  /* [747] */
    (xdc_Char)0x72,  /* [748] */
    (xdc_Char)0x65,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x6e,  /* [751] */
    (xdc_Char)0x75,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x2e,  /* [755] */
    (xdc_Char)0x0,  /* [756] */
    (xdc_Char)0x41,  /* [757] */
    (xdc_Char)0x5f,  /* [758] */
    (xdc_Char)0x6e,  /* [759] */
    (xdc_Char)0x75,  /* [760] */
    (xdc_Char)0x6c,  /* [761] */
    (xdc_Char)0x6c,  /* [762] */
    (xdc_Char)0x45,  /* [763] */
    (xdc_Char)0x76,  /* [764] */
    (xdc_Char)0x65,  /* [765] */
    (xdc_Char)0x6e,  /* [766] */
    (xdc_Char)0x74,  /* [767] */
    (xdc_Char)0x49,  /* [768] */
    (xdc_Char)0x64,  /* [769] */
    (xdc_Char)0x3a,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x70,  /* [772] */
    (xdc_Char)0x6f,  /* [773] */
    (xdc_Char)0x73,  /* [774] */
    (xdc_Char)0x74,  /* [775] */
    (xdc_Char)0x65,  /* [776] */
    (xdc_Char)0x64,  /* [777] */
    (xdc_Char)0x20,  /* [778] */
    (xdc_Char)0x65,  /* [779] */
    (xdc_Char)0x76,  /* [780] */
    (xdc_Char)0x65,  /* [781] */
    (xdc_Char)0x6e,  /* [782] */
    (xdc_Char)0x74,  /* [783] */
    (xdc_Char)0x49,  /* [784] */
    (xdc_Char)0x64,  /* [785] */
    (xdc_Char)0x20,  /* [786] */
    (xdc_Char)0x69,  /* [787] */
    (xdc_Char)0x73,  /* [788] */
    (xdc_Char)0x20,  /* [789] */
    (xdc_Char)0x6e,  /* [790] */
    (xdc_Char)0x75,  /* [791] */
    (xdc_Char)0x6c,  /* [792] */
    (xdc_Char)0x6c,  /* [793] */
    (xdc_Char)0x2e,  /* [794] */
    (xdc_Char)0x0,  /* [795] */
    (xdc_Char)0x41,  /* [796] */
    (xdc_Char)0x5f,  /* [797] */
    (xdc_Char)0x65,  /* [798] */
    (xdc_Char)0x76,  /* [799] */
    (xdc_Char)0x65,  /* [800] */
    (xdc_Char)0x6e,  /* [801] */
    (xdc_Char)0x74,  /* [802] */
    (xdc_Char)0x49,  /* [803] */
    (xdc_Char)0x6e,  /* [804] */
    (xdc_Char)0x55,  /* [805] */
    (xdc_Char)0x73,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x3a,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x45,  /* [810] */
    (xdc_Char)0x76,  /* [811] */
    (xdc_Char)0x65,  /* [812] */
    (xdc_Char)0x6e,  /* [813] */
    (xdc_Char)0x74,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x6f,  /* [816] */
    (xdc_Char)0x62,  /* [817] */
    (xdc_Char)0x6a,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x63,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x61,  /* [823] */
    (xdc_Char)0x6c,  /* [824] */
    (xdc_Char)0x72,  /* [825] */
    (xdc_Char)0x65,  /* [826] */
    (xdc_Char)0x61,  /* [827] */
    (xdc_Char)0x64,  /* [828] */
    (xdc_Char)0x79,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x69,  /* [831] */
    (xdc_Char)0x6e,  /* [832] */
    (xdc_Char)0x20,  /* [833] */
    (xdc_Char)0x75,  /* [834] */
    (xdc_Char)0x73,  /* [835] */
    (xdc_Char)0x65,  /* [836] */
    (xdc_Char)0x2e,  /* [837] */
    (xdc_Char)0x0,  /* [838] */
    (xdc_Char)0x41,  /* [839] */
    (xdc_Char)0x5f,  /* [840] */
    (xdc_Char)0x62,  /* [841] */
    (xdc_Char)0x61,  /* [842] */
    (xdc_Char)0x64,  /* [843] */
    (xdc_Char)0x43,  /* [844] */
    (xdc_Char)0x6f,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x74,  /* [847] */
    (xdc_Char)0x65,  /* [848] */
    (xdc_Char)0x78,  /* [849] */
    (xdc_Char)0x74,  /* [850] */
    (xdc_Char)0x3a,  /* [851] */
    (xdc_Char)0x20,  /* [852] */
    (xdc_Char)0x62,  /* [853] */
    (xdc_Char)0x61,  /* [854] */
    (xdc_Char)0x64,  /* [855] */
    (xdc_Char)0x20,  /* [856] */
    (xdc_Char)0x63,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x6c,  /* [859] */
    (xdc_Char)0x6c,  /* [860] */
    (xdc_Char)0x69,  /* [861] */
    (xdc_Char)0x6e,  /* [862] */
    (xdc_Char)0x67,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x63,  /* [865] */
    (xdc_Char)0x6f,  /* [866] */
    (xdc_Char)0x6e,  /* [867] */
    (xdc_Char)0x74,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x78,  /* [870] */
    (xdc_Char)0x74,  /* [871] */
    (xdc_Char)0x2e,  /* [872] */
    (xdc_Char)0x20,  /* [873] */
    (xdc_Char)0x4d,  /* [874] */
    (xdc_Char)0x75,  /* [875] */
    (xdc_Char)0x73,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x62,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x20,  /* [881] */
    (xdc_Char)0x63,  /* [882] */
    (xdc_Char)0x61,  /* [883] */
    (xdc_Char)0x6c,  /* [884] */
    (xdc_Char)0x6c,  /* [885] */
    (xdc_Char)0x65,  /* [886] */
    (xdc_Char)0x64,  /* [887] */
    (xdc_Char)0x20,  /* [888] */
    (xdc_Char)0x66,  /* [889] */
    (xdc_Char)0x72,  /* [890] */
    (xdc_Char)0x6f,  /* [891] */
    (xdc_Char)0x6d,  /* [892] */
    (xdc_Char)0x20,  /* [893] */
    (xdc_Char)0x61,  /* [894] */
    (xdc_Char)0x20,  /* [895] */
    (xdc_Char)0x54,  /* [896] */
    (xdc_Char)0x61,  /* [897] */
    (xdc_Char)0x73,  /* [898] */
    (xdc_Char)0x6b,  /* [899] */
    (xdc_Char)0x2e,  /* [900] */
    (xdc_Char)0x0,  /* [901] */
    (xdc_Char)0x41,  /* [902] */
    (xdc_Char)0x5f,  /* [903] */
    (xdc_Char)0x70,  /* [904] */
    (xdc_Char)0x65,  /* [905] */
    (xdc_Char)0x6e,  /* [906] */
    (xdc_Char)0x64,  /* [907] */
    (xdc_Char)0x54,  /* [908] */
    (xdc_Char)0x61,  /* [909] */
    (xdc_Char)0x73,  /* [910] */
    (xdc_Char)0x6b,  /* [911] */
    (xdc_Char)0x44,  /* [912] */
    (xdc_Char)0x69,  /* [913] */
    (xdc_Char)0x73,  /* [914] */
    (xdc_Char)0x61,  /* [915] */
    (xdc_Char)0x62,  /* [916] */
    (xdc_Char)0x6c,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x64,  /* [919] */
    (xdc_Char)0x3a,  /* [920] */
    (xdc_Char)0x20,  /* [921] */
    (xdc_Char)0x43,  /* [922] */
    (xdc_Char)0x61,  /* [923] */
    (xdc_Char)0x6e,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x74,  /* [927] */
    (xdc_Char)0x20,  /* [928] */
    (xdc_Char)0x63,  /* [929] */
    (xdc_Char)0x61,  /* [930] */
    (xdc_Char)0x6c,  /* [931] */
    (xdc_Char)0x6c,  /* [932] */
    (xdc_Char)0x20,  /* [933] */
    (xdc_Char)0x45,  /* [934] */
    (xdc_Char)0x76,  /* [935] */
    (xdc_Char)0x65,  /* [936] */
    (xdc_Char)0x6e,  /* [937] */
    (xdc_Char)0x74,  /* [938] */
    (xdc_Char)0x5f,  /* [939] */
    (xdc_Char)0x70,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x6e,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x28,  /* [944] */
    (xdc_Char)0x29,  /* [945] */
    (xdc_Char)0x20,  /* [946] */
    (xdc_Char)0x77,  /* [947] */
    (xdc_Char)0x68,  /* [948] */
    (xdc_Char)0x69,  /* [949] */
    (xdc_Char)0x6c,  /* [950] */
    (xdc_Char)0x65,  /* [951] */
    (xdc_Char)0x20,  /* [952] */
    (xdc_Char)0x74,  /* [953] */
    (xdc_Char)0x68,  /* [954] */
    (xdc_Char)0x65,  /* [955] */
    (xdc_Char)0x20,  /* [956] */
    (xdc_Char)0x54,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x6b,  /* [960] */
    (xdc_Char)0x20,  /* [961] */
    (xdc_Char)0x6f,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x20,  /* [964] */
    (xdc_Char)0x53,  /* [965] */
    (xdc_Char)0x77,  /* [966] */
    (xdc_Char)0x69,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x73,  /* [969] */
    (xdc_Char)0x63,  /* [970] */
    (xdc_Char)0x68,  /* [971] */
    (xdc_Char)0x65,  /* [972] */
    (xdc_Char)0x64,  /* [973] */
    (xdc_Char)0x75,  /* [974] */
    (xdc_Char)0x6c,  /* [975] */
    (xdc_Char)0x65,  /* [976] */
    (xdc_Char)0x72,  /* [977] */
    (xdc_Char)0x20,  /* [978] */
    (xdc_Char)0x69,  /* [979] */
    (xdc_Char)0x73,  /* [980] */
    (xdc_Char)0x20,  /* [981] */
    (xdc_Char)0x64,  /* [982] */
    (xdc_Char)0x69,  /* [983] */
    (xdc_Char)0x73,  /* [984] */
    (xdc_Char)0x61,  /* [985] */
    (xdc_Char)0x62,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x65,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x2e,  /* [990] */
    (xdc_Char)0x0,  /* [991] */
    (xdc_Char)0x4d,  /* [992] */
    (xdc_Char)0x61,  /* [993] */
    (xdc_Char)0x69,  /* [994] */
    (xdc_Char)0x6c,  /* [995] */
    (xdc_Char)0x62,  /* [996] */
    (xdc_Char)0x6f,  /* [997] */
    (xdc_Char)0x78,  /* [998] */
    (xdc_Char)0x5f,  /* [999] */
    (xdc_Char)0x63,  /* [1000] */
    (xdc_Char)0x72,  /* [1001] */
    (xdc_Char)0x65,  /* [1002] */
    (xdc_Char)0x61,  /* [1003] */
    (xdc_Char)0x74,  /* [1004] */
    (xdc_Char)0x65,  /* [1005] */
    (xdc_Char)0x27,  /* [1006] */
    (xdc_Char)0x73,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x62,  /* [1009] */
    (xdc_Char)0x75,  /* [1010] */
    (xdc_Char)0x66,  /* [1011] */
    (xdc_Char)0x53,  /* [1012] */
    (xdc_Char)0x69,  /* [1013] */
    (xdc_Char)0x7a,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x70,  /* [1017] */
    (xdc_Char)0x61,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x61,  /* [1020] */
    (xdc_Char)0x6d,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x74,  /* [1023] */
    (xdc_Char)0x65,  /* [1024] */
    (xdc_Char)0x72,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x69,  /* [1027] */
    (xdc_Char)0x73,  /* [1028] */
    (xdc_Char)0x20,  /* [1029] */
    (xdc_Char)0x69,  /* [1030] */
    (xdc_Char)0x6e,  /* [1031] */
    (xdc_Char)0x76,  /* [1032] */
    (xdc_Char)0x61,  /* [1033] */
    (xdc_Char)0x6c,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x64,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x28,  /* [1038] */
    (xdc_Char)0x74,  /* [1039] */
    (xdc_Char)0x6f,  /* [1040] */
    (xdc_Char)0x6f,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x73,  /* [1043] */
    (xdc_Char)0x6d,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x6c,  /* [1046] */
    (xdc_Char)0x6c,  /* [1047] */
    (xdc_Char)0x29,  /* [1048] */
    (xdc_Char)0x0,  /* [1049] */
    (xdc_Char)0x41,  /* [1050] */
    (xdc_Char)0x5f,  /* [1051] */
    (xdc_Char)0x6e,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x45,  /* [1054] */
    (xdc_Char)0x76,  /* [1055] */
    (xdc_Char)0x65,  /* [1056] */
    (xdc_Char)0x6e,  /* [1057] */
    (xdc_Char)0x74,  /* [1058] */
    (xdc_Char)0x73,  /* [1059] */
    (xdc_Char)0x3a,  /* [1060] */
    (xdc_Char)0x20,  /* [1061] */
    (xdc_Char)0x54,  /* [1062] */
    (xdc_Char)0x68,  /* [1063] */
    (xdc_Char)0x65,  /* [1064] */
    (xdc_Char)0x20,  /* [1065] */
    (xdc_Char)0x45,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x74,  /* [1070] */
    (xdc_Char)0x2e,  /* [1071] */
    (xdc_Char)0x73,  /* [1072] */
    (xdc_Char)0x75,  /* [1073] */
    (xdc_Char)0x70,  /* [1074] */
    (xdc_Char)0x70,  /* [1075] */
    (xdc_Char)0x6f,  /* [1076] */
    (xdc_Char)0x72,  /* [1077] */
    (xdc_Char)0x74,  /* [1078] */
    (xdc_Char)0x73,  /* [1079] */
    (xdc_Char)0x45,  /* [1080] */
    (xdc_Char)0x76,  /* [1081] */
    (xdc_Char)0x65,  /* [1082] */
    (xdc_Char)0x6e,  /* [1083] */
    (xdc_Char)0x74,  /* [1084] */
    (xdc_Char)0x73,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x66,  /* [1087] */
    (xdc_Char)0x6c,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x67,  /* [1090] */
    (xdc_Char)0x20,  /* [1091] */
    (xdc_Char)0x69,  /* [1092] */
    (xdc_Char)0x73,  /* [1093] */
    (xdc_Char)0x20,  /* [1094] */
    (xdc_Char)0x64,  /* [1095] */
    (xdc_Char)0x69,  /* [1096] */
    (xdc_Char)0x73,  /* [1097] */
    (xdc_Char)0x61,  /* [1098] */
    (xdc_Char)0x62,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x69,  /* [1107] */
    (xdc_Char)0x6e,  /* [1108] */
    (xdc_Char)0x76,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x69,  /* [1111] */
    (xdc_Char)0x6d,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x6f,  /* [1114] */
    (xdc_Char)0x75,  /* [1115] */
    (xdc_Char)0x74,  /* [1116] */
    (xdc_Char)0x3a,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x43,  /* [1119] */
    (xdc_Char)0x61,  /* [1120] */
    (xdc_Char)0x6e,  /* [1121] */
    (xdc_Char)0x27,  /* [1122] */
    (xdc_Char)0x74,  /* [1123] */
    (xdc_Char)0x20,  /* [1124] */
    (xdc_Char)0x75,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x65,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x42,  /* [1129] */
    (xdc_Char)0x49,  /* [1130] */
    (xdc_Char)0x4f,  /* [1131] */
    (xdc_Char)0x53,  /* [1132] */
    (xdc_Char)0x5f,  /* [1133] */
    (xdc_Char)0x45,  /* [1134] */
    (xdc_Char)0x56,  /* [1135] */
    (xdc_Char)0x45,  /* [1136] */
    (xdc_Char)0x4e,  /* [1137] */
    (xdc_Char)0x54,  /* [1138] */
    (xdc_Char)0x5f,  /* [1139] */
    (xdc_Char)0x41,  /* [1140] */
    (xdc_Char)0x43,  /* [1141] */
    (xdc_Char)0x51,  /* [1142] */
    (xdc_Char)0x55,  /* [1143] */
    (xdc_Char)0x49,  /* [1144] */
    (xdc_Char)0x52,  /* [1145] */
    (xdc_Char)0x45,  /* [1146] */
    (xdc_Char)0x44,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x77,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x74,  /* [1151] */
    (xdc_Char)0x68,  /* [1152] */
    (xdc_Char)0x20,  /* [1153] */
    (xdc_Char)0x74,  /* [1154] */
    (xdc_Char)0x68,  /* [1155] */
    (xdc_Char)0x69,  /* [1156] */
    (xdc_Char)0x73,  /* [1157] */
    (xdc_Char)0x20,  /* [1158] */
    (xdc_Char)0x53,  /* [1159] */
    (xdc_Char)0x65,  /* [1160] */
    (xdc_Char)0x6d,  /* [1161] */
    (xdc_Char)0x61,  /* [1162] */
    (xdc_Char)0x70,  /* [1163] */
    (xdc_Char)0x68,  /* [1164] */
    (xdc_Char)0x6f,  /* [1165] */
    (xdc_Char)0x72,  /* [1166] */
    (xdc_Char)0x65,  /* [1167] */
    (xdc_Char)0x2e,  /* [1168] */
    (xdc_Char)0x0,  /* [1169] */
    (xdc_Char)0x41,  /* [1170] */
    (xdc_Char)0x5f,  /* [1171] */
    (xdc_Char)0x6f,  /* [1172] */
    (xdc_Char)0x76,  /* [1173] */
    (xdc_Char)0x65,  /* [1174] */
    (xdc_Char)0x72,  /* [1175] */
    (xdc_Char)0x66,  /* [1176] */
    (xdc_Char)0x6c,  /* [1177] */
    (xdc_Char)0x6f,  /* [1178] */
    (xdc_Char)0x77,  /* [1179] */
    (xdc_Char)0x3a,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x43,  /* [1182] */
    (xdc_Char)0x6f,  /* [1183] */
    (xdc_Char)0x75,  /* [1184] */
    (xdc_Char)0x6e,  /* [1185] */
    (xdc_Char)0x74,  /* [1186] */
    (xdc_Char)0x20,  /* [1187] */
    (xdc_Char)0x68,  /* [1188] */
    (xdc_Char)0x61,  /* [1189] */
    (xdc_Char)0x73,  /* [1190] */
    (xdc_Char)0x20,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x78,  /* [1193] */
    (xdc_Char)0x63,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x65,  /* [1198] */
    (xdc_Char)0x64,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x36,  /* [1201] */
    (xdc_Char)0x35,  /* [1202] */
    (xdc_Char)0x35,  /* [1203] */
    (xdc_Char)0x33,  /* [1204] */
    (xdc_Char)0x35,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x6e,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x20,  /* [1210] */
    (xdc_Char)0x72,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x6c,  /* [1213] */
    (xdc_Char)0x6c,  /* [1214] */
    (xdc_Char)0x65,  /* [1215] */
    (xdc_Char)0x64,  /* [1216] */
    (xdc_Char)0x20,  /* [1217] */
    (xdc_Char)0x6f,  /* [1218] */
    (xdc_Char)0x76,  /* [1219] */
    (xdc_Char)0x65,  /* [1220] */
    (xdc_Char)0x72,  /* [1221] */
    (xdc_Char)0x2e,  /* [1222] */
    (xdc_Char)0x0,  /* [1223] */
    (xdc_Char)0x41,  /* [1224] */
    (xdc_Char)0x5f,  /* [1225] */
    (xdc_Char)0x70,  /* [1226] */
    (xdc_Char)0x65,  /* [1227] */
    (xdc_Char)0x6e,  /* [1228] */
    (xdc_Char)0x64,  /* [1229] */
    (xdc_Char)0x54,  /* [1230] */
    (xdc_Char)0x61,  /* [1231] */
    (xdc_Char)0x73,  /* [1232] */
    (xdc_Char)0x6b,  /* [1233] */
    (xdc_Char)0x44,  /* [1234] */
    (xdc_Char)0x69,  /* [1235] */
    (xdc_Char)0x73,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x62,  /* [1238] */
    (xdc_Char)0x6c,  /* [1239] */
    (xdc_Char)0x65,  /* [1240] */
    (xdc_Char)0x64,  /* [1241] */
    (xdc_Char)0x3a,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x43,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x6e,  /* [1246] */
    (xdc_Char)0x6e,  /* [1247] */
    (xdc_Char)0x6f,  /* [1248] */
    (xdc_Char)0x74,  /* [1249] */
    (xdc_Char)0x20,  /* [1250] */
    (xdc_Char)0x63,  /* [1251] */
    (xdc_Char)0x61,  /* [1252] */
    (xdc_Char)0x6c,  /* [1253] */
    (xdc_Char)0x6c,  /* [1254] */
    (xdc_Char)0x20,  /* [1255] */
    (xdc_Char)0x53,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x6d,  /* [1258] */
    (xdc_Char)0x61,  /* [1259] */
    (xdc_Char)0x70,  /* [1260] */
    (xdc_Char)0x68,  /* [1261] */
    (xdc_Char)0x6f,  /* [1262] */
    (xdc_Char)0x72,  /* [1263] */
    (xdc_Char)0x65,  /* [1264] */
    (xdc_Char)0x5f,  /* [1265] */
    (xdc_Char)0x70,  /* [1266] */
    (xdc_Char)0x65,  /* [1267] */
    (xdc_Char)0x6e,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x28,  /* [1270] */
    (xdc_Char)0x29,  /* [1271] */
    (xdc_Char)0x20,  /* [1272] */
    (xdc_Char)0x77,  /* [1273] */
    (xdc_Char)0x68,  /* [1274] */
    (xdc_Char)0x69,  /* [1275] */
    (xdc_Char)0x6c,  /* [1276] */
    (xdc_Char)0x65,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x74,  /* [1279] */
    (xdc_Char)0x68,  /* [1280] */
    (xdc_Char)0x65,  /* [1281] */
    (xdc_Char)0x20,  /* [1282] */
    (xdc_Char)0x54,  /* [1283] */
    (xdc_Char)0x61,  /* [1284] */
    (xdc_Char)0x73,  /* [1285] */
    (xdc_Char)0x6b,  /* [1286] */
    (xdc_Char)0x20,  /* [1287] */
    (xdc_Char)0x6f,  /* [1288] */
    (xdc_Char)0x72,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x53,  /* [1291] */
    (xdc_Char)0x77,  /* [1292] */
    (xdc_Char)0x69,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x73,  /* [1295] */
    (xdc_Char)0x63,  /* [1296] */
    (xdc_Char)0x68,  /* [1297] */
    (xdc_Char)0x65,  /* [1298] */
    (xdc_Char)0x64,  /* [1299] */
    (xdc_Char)0x75,  /* [1300] */
    (xdc_Char)0x6c,  /* [1301] */
    (xdc_Char)0x65,  /* [1302] */
    (xdc_Char)0x72,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x69,  /* [1305] */
    (xdc_Char)0x73,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x64,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x61,  /* [1311] */
    (xdc_Char)0x62,  /* [1312] */
    (xdc_Char)0x6c,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x64,  /* [1315] */
    (xdc_Char)0x2e,  /* [1316] */
    (xdc_Char)0x0,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x5f,  /* [1319] */
    (xdc_Char)0x73,  /* [1320] */
    (xdc_Char)0x77,  /* [1321] */
    (xdc_Char)0x69,  /* [1322] */
    (xdc_Char)0x44,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x73,  /* [1325] */
    (xdc_Char)0x61,  /* [1326] */
    (xdc_Char)0x62,  /* [1327] */
    (xdc_Char)0x6c,  /* [1328] */
    (xdc_Char)0x65,  /* [1329] */
    (xdc_Char)0x64,  /* [1330] */
    (xdc_Char)0x3a,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x43,  /* [1333] */
    (xdc_Char)0x61,  /* [1334] */
    (xdc_Char)0x6e,  /* [1335] */
    (xdc_Char)0x6e,  /* [1336] */
    (xdc_Char)0x6f,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x63,  /* [1340] */
    (xdc_Char)0x72,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x61,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x65,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x61,  /* [1347] */
    (xdc_Char)0x20,  /* [1348] */
    (xdc_Char)0x53,  /* [1349] */
    (xdc_Char)0x77,  /* [1350] */
    (xdc_Char)0x69,  /* [1351] */
    (xdc_Char)0x20,  /* [1352] */
    (xdc_Char)0x77,  /* [1353] */
    (xdc_Char)0x68,  /* [1354] */
    (xdc_Char)0x65,  /* [1355] */
    (xdc_Char)0x6e,  /* [1356] */
    (xdc_Char)0x20,  /* [1357] */
    (xdc_Char)0x53,  /* [1358] */
    (xdc_Char)0x77,  /* [1359] */
    (xdc_Char)0x69,  /* [1360] */
    (xdc_Char)0x20,  /* [1361] */
    (xdc_Char)0x69,  /* [1362] */
    (xdc_Char)0x73,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x64,  /* [1365] */
    (xdc_Char)0x69,  /* [1366] */
    (xdc_Char)0x73,  /* [1367] */
    (xdc_Char)0x61,  /* [1368] */
    (xdc_Char)0x62,  /* [1369] */
    (xdc_Char)0x6c,  /* [1370] */
    (xdc_Char)0x65,  /* [1371] */
    (xdc_Char)0x64,  /* [1372] */
    (xdc_Char)0x2e,  /* [1373] */
    (xdc_Char)0x0,  /* [1374] */
    (xdc_Char)0x41,  /* [1375] */
    (xdc_Char)0x5f,  /* [1376] */
    (xdc_Char)0x62,  /* [1377] */
    (xdc_Char)0x61,  /* [1378] */
    (xdc_Char)0x64,  /* [1379] */
    (xdc_Char)0x50,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x69,  /* [1382] */
    (xdc_Char)0x6f,  /* [1383] */
    (xdc_Char)0x72,  /* [1384] */
    (xdc_Char)0x69,  /* [1385] */
    (xdc_Char)0x74,  /* [1386] */
    (xdc_Char)0x79,  /* [1387] */
    (xdc_Char)0x3a,  /* [1388] */
    (xdc_Char)0x20,  /* [1389] */
    (xdc_Char)0x41,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x20,  /* [1392] */
    (xdc_Char)0x69,  /* [1393] */
    (xdc_Char)0x6e,  /* [1394] */
    (xdc_Char)0x76,  /* [1395] */
    (xdc_Char)0x61,  /* [1396] */
    (xdc_Char)0x6c,  /* [1397] */
    (xdc_Char)0x69,  /* [1398] */
    (xdc_Char)0x64,  /* [1399] */
    (xdc_Char)0x20,  /* [1400] */
    (xdc_Char)0x53,  /* [1401] */
    (xdc_Char)0x77,  /* [1402] */
    (xdc_Char)0x69,  /* [1403] */
    (xdc_Char)0x20,  /* [1404] */
    (xdc_Char)0x70,  /* [1405] */
    (xdc_Char)0x72,  /* [1406] */
    (xdc_Char)0x69,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x72,  /* [1409] */
    (xdc_Char)0x69,  /* [1410] */
    (xdc_Char)0x74,  /* [1411] */
    (xdc_Char)0x79,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x77,  /* [1414] */
    (xdc_Char)0x61,  /* [1415] */
    (xdc_Char)0x73,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x75,  /* [1418] */
    (xdc_Char)0x73,  /* [1419] */
    (xdc_Char)0x65,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x2e,  /* [1422] */
    (xdc_Char)0x0,  /* [1423] */
    (xdc_Char)0x41,  /* [1424] */
    (xdc_Char)0x5f,  /* [1425] */
    (xdc_Char)0x62,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x54,  /* [1429] */
    (xdc_Char)0x68,  /* [1430] */
    (xdc_Char)0x72,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x61,  /* [1433] */
    (xdc_Char)0x64,  /* [1434] */
    (xdc_Char)0x54,  /* [1435] */
    (xdc_Char)0x79,  /* [1436] */
    (xdc_Char)0x70,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x3a,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x43,  /* [1441] */
    (xdc_Char)0x61,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x6e,  /* [1444] */
    (xdc_Char)0x6f,  /* [1445] */
    (xdc_Char)0x74,  /* [1446] */
    (xdc_Char)0x20,  /* [1447] */
    (xdc_Char)0x63,  /* [1448] */
    (xdc_Char)0x72,  /* [1449] */
    (xdc_Char)0x65,  /* [1450] */
    (xdc_Char)0x61,  /* [1451] */
    (xdc_Char)0x74,  /* [1452] */
    (xdc_Char)0x65,  /* [1453] */
    (xdc_Char)0x2f,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x65,  /* [1456] */
    (xdc_Char)0x6c,  /* [1457] */
    (xdc_Char)0x65,  /* [1458] */
    (xdc_Char)0x74,  /* [1459] */
    (xdc_Char)0x65,  /* [1460] */
    (xdc_Char)0x20,  /* [1461] */
    (xdc_Char)0x61,  /* [1462] */
    (xdc_Char)0x20,  /* [1463] */
    (xdc_Char)0x74,  /* [1464] */
    (xdc_Char)0x61,  /* [1465] */
    (xdc_Char)0x73,  /* [1466] */
    (xdc_Char)0x6b,  /* [1467] */
    (xdc_Char)0x20,  /* [1468] */
    (xdc_Char)0x66,  /* [1469] */
    (xdc_Char)0x72,  /* [1470] */
    (xdc_Char)0x6f,  /* [1471] */
    (xdc_Char)0x6d,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x48,  /* [1474] */
    (xdc_Char)0x77,  /* [1475] */
    (xdc_Char)0x69,  /* [1476] */
    (xdc_Char)0x20,  /* [1477] */
    (xdc_Char)0x6f,  /* [1478] */
    (xdc_Char)0x72,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x53,  /* [1481] */
    (xdc_Char)0x77,  /* [1482] */
    (xdc_Char)0x69,  /* [1483] */
    (xdc_Char)0x20,  /* [1484] */
    (xdc_Char)0x74,  /* [1485] */
    (xdc_Char)0x68,  /* [1486] */
    (xdc_Char)0x72,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x64,  /* [1490] */
    (xdc_Char)0x2e,  /* [1491] */
    (xdc_Char)0x0,  /* [1492] */
    (xdc_Char)0x41,  /* [1493] */
    (xdc_Char)0x5f,  /* [1494] */
    (xdc_Char)0x62,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x64,  /* [1497] */
    (xdc_Char)0x54,  /* [1498] */
    (xdc_Char)0x61,  /* [1499] */
    (xdc_Char)0x73,  /* [1500] */
    (xdc_Char)0x6b,  /* [1501] */
    (xdc_Char)0x53,  /* [1502] */
    (xdc_Char)0x74,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x74,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x3a,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x43,  /* [1509] */
    (xdc_Char)0x61,  /* [1510] */
    (xdc_Char)0x6e,  /* [1511] */
    (xdc_Char)0x27,  /* [1512] */
    (xdc_Char)0x74,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x64,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x6c,  /* [1517] */
    (xdc_Char)0x65,  /* [1518] */
    (xdc_Char)0x74,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x20,  /* [1521] */
    (xdc_Char)0x61,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x74,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x73,  /* [1526] */
    (xdc_Char)0x6b,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x69,  /* [1529] */
    (xdc_Char)0x6e,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x52,  /* [1532] */
    (xdc_Char)0x55,  /* [1533] */
    (xdc_Char)0x4e,  /* [1534] */
    (xdc_Char)0x4e,  /* [1535] */
    (xdc_Char)0x49,  /* [1536] */
    (xdc_Char)0x4e,  /* [1537] */
    (xdc_Char)0x47,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x73,  /* [1540] */
    (xdc_Char)0x74,  /* [1541] */
    (xdc_Char)0x61,  /* [1542] */
    (xdc_Char)0x74,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x2e,  /* [1545] */
    (xdc_Char)0x0,  /* [1546] */
    (xdc_Char)0x41,  /* [1547] */
    (xdc_Char)0x5f,  /* [1548] */
    (xdc_Char)0x6e,  /* [1549] */
    (xdc_Char)0x6f,  /* [1550] */
    (xdc_Char)0x50,  /* [1551] */
    (xdc_Char)0x65,  /* [1552] */
    (xdc_Char)0x6e,  /* [1553] */
    (xdc_Char)0x64,  /* [1554] */
    (xdc_Char)0x45,  /* [1555] */
    (xdc_Char)0x6c,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x6d,  /* [1558] */
    (xdc_Char)0x3a,  /* [1559] */
    (xdc_Char)0x20,  /* [1560] */
    (xdc_Char)0x4e,  /* [1561] */
    (xdc_Char)0x6f,  /* [1562] */
    (xdc_Char)0x74,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x65,  /* [1565] */
    (xdc_Char)0x6e,  /* [1566] */
    (xdc_Char)0x6f,  /* [1567] */
    (xdc_Char)0x75,  /* [1568] */
    (xdc_Char)0x67,  /* [1569] */
    (xdc_Char)0x68,  /* [1570] */
    (xdc_Char)0x20,  /* [1571] */
    (xdc_Char)0x69,  /* [1572] */
    (xdc_Char)0x6e,  /* [1573] */
    (xdc_Char)0x66,  /* [1574] */
    (xdc_Char)0x6f,  /* [1575] */
    (xdc_Char)0x20,  /* [1576] */
    (xdc_Char)0x74,  /* [1577] */
    (xdc_Char)0x6f,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x64,  /* [1580] */
    (xdc_Char)0x65,  /* [1581] */
    (xdc_Char)0x6c,  /* [1582] */
    (xdc_Char)0x65,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x65,  /* [1585] */
    (xdc_Char)0x20,  /* [1586] */
    (xdc_Char)0x42,  /* [1587] */
    (xdc_Char)0x4c,  /* [1588] */
    (xdc_Char)0x4f,  /* [1589] */
    (xdc_Char)0x43,  /* [1590] */
    (xdc_Char)0x4b,  /* [1591] */
    (xdc_Char)0x45,  /* [1592] */
    (xdc_Char)0x44,  /* [1593] */
    (xdc_Char)0x20,  /* [1594] */
    (xdc_Char)0x74,  /* [1595] */
    (xdc_Char)0x61,  /* [1596] */
    (xdc_Char)0x73,  /* [1597] */
    (xdc_Char)0x6b,  /* [1598] */
    (xdc_Char)0x2e,  /* [1599] */
    (xdc_Char)0x0,  /* [1600] */
    (xdc_Char)0x41,  /* [1601] */
    (xdc_Char)0x5f,  /* [1602] */
    (xdc_Char)0x74,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x73,  /* [1605] */
    (xdc_Char)0x6b,  /* [1606] */
    (xdc_Char)0x44,  /* [1607] */
    (xdc_Char)0x69,  /* [1608] */
    (xdc_Char)0x73,  /* [1609] */
    (xdc_Char)0x61,  /* [1610] */
    (xdc_Char)0x62,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x64,  /* [1614] */
    (xdc_Char)0x3a,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x43,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x6e,  /* [1619] */
    (xdc_Char)0x6e,  /* [1620] */
    (xdc_Char)0x6f,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x20,  /* [1623] */
    (xdc_Char)0x63,  /* [1624] */
    (xdc_Char)0x72,  /* [1625] */
    (xdc_Char)0x65,  /* [1626] */
    (xdc_Char)0x61,  /* [1627] */
    (xdc_Char)0x74,  /* [1628] */
    (xdc_Char)0x65,  /* [1629] */
    (xdc_Char)0x20,  /* [1630] */
    (xdc_Char)0x61,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x61,  /* [1634] */
    (xdc_Char)0x73,  /* [1635] */
    (xdc_Char)0x6b,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x77,  /* [1638] */
    (xdc_Char)0x68,  /* [1639] */
    (xdc_Char)0x65,  /* [1640] */
    (xdc_Char)0x6e,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x74,  /* [1643] */
    (xdc_Char)0x61,  /* [1644] */
    (xdc_Char)0x73,  /* [1645] */
    (xdc_Char)0x6b,  /* [1646] */
    (xdc_Char)0x69,  /* [1647] */
    (xdc_Char)0x6e,  /* [1648] */
    (xdc_Char)0x67,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x69,  /* [1651] */
    (xdc_Char)0x73,  /* [1652] */
    (xdc_Char)0x20,  /* [1653] */
    (xdc_Char)0x64,  /* [1654] */
    (xdc_Char)0x69,  /* [1655] */
    (xdc_Char)0x73,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x62,  /* [1658] */
    (xdc_Char)0x6c,  /* [1659] */
    (xdc_Char)0x65,  /* [1660] */
    (xdc_Char)0x64,  /* [1661] */
    (xdc_Char)0x2e,  /* [1662] */
    (xdc_Char)0x0,  /* [1663] */
    (xdc_Char)0x41,  /* [1664] */
    (xdc_Char)0x5f,  /* [1665] */
    (xdc_Char)0x62,  /* [1666] */
    (xdc_Char)0x61,  /* [1667] */
    (xdc_Char)0x64,  /* [1668] */
    (xdc_Char)0x50,  /* [1669] */
    (xdc_Char)0x72,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x6f,  /* [1672] */
    (xdc_Char)0x72,  /* [1673] */
    (xdc_Char)0x69,  /* [1674] */
    (xdc_Char)0x74,  /* [1675] */
    (xdc_Char)0x79,  /* [1676] */
    (xdc_Char)0x3a,  /* [1677] */
    (xdc_Char)0x20,  /* [1678] */
    (xdc_Char)0x41,  /* [1679] */
    (xdc_Char)0x6e,  /* [1680] */
    (xdc_Char)0x20,  /* [1681] */
    (xdc_Char)0x69,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x76,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x6c,  /* [1686] */
    (xdc_Char)0x69,  /* [1687] */
    (xdc_Char)0x64,  /* [1688] */
    (xdc_Char)0x20,  /* [1689] */
    (xdc_Char)0x74,  /* [1690] */
    (xdc_Char)0x61,  /* [1691] */
    (xdc_Char)0x73,  /* [1692] */
    (xdc_Char)0x6b,  /* [1693] */
    (xdc_Char)0x20,  /* [1694] */
    (xdc_Char)0x70,  /* [1695] */
    (xdc_Char)0x72,  /* [1696] */
    (xdc_Char)0x69,  /* [1697] */
    (xdc_Char)0x6f,  /* [1698] */
    (xdc_Char)0x72,  /* [1699] */
    (xdc_Char)0x69,  /* [1700] */
    (xdc_Char)0x74,  /* [1701] */
    (xdc_Char)0x79,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x77,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x73,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x75,  /* [1708] */
    (xdc_Char)0x73,  /* [1709] */
    (xdc_Char)0x65,  /* [1710] */
    (xdc_Char)0x64,  /* [1711] */
    (xdc_Char)0x2e,  /* [1712] */
    (xdc_Char)0x0,  /* [1713] */
    (xdc_Char)0x41,  /* [1714] */
    (xdc_Char)0x5f,  /* [1715] */
    (xdc_Char)0x62,  /* [1716] */
    (xdc_Char)0x61,  /* [1717] */
    (xdc_Char)0x64,  /* [1718] */
    (xdc_Char)0x54,  /* [1719] */
    (xdc_Char)0x69,  /* [1720] */
    (xdc_Char)0x6d,  /* [1721] */
    (xdc_Char)0x65,  /* [1722] */
    (xdc_Char)0x6f,  /* [1723] */
    (xdc_Char)0x75,  /* [1724] */
    (xdc_Char)0x74,  /* [1725] */
    (xdc_Char)0x3a,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x43,  /* [1728] */
    (xdc_Char)0x61,  /* [1729] */
    (xdc_Char)0x6e,  /* [1730] */
    (xdc_Char)0x27,  /* [1731] */
    (xdc_Char)0x74,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x65,  /* [1737] */
    (xdc_Char)0x70,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x46,  /* [1740] */
    (xdc_Char)0x4f,  /* [1741] */
    (xdc_Char)0x52,  /* [1742] */
    (xdc_Char)0x45,  /* [1743] */
    (xdc_Char)0x56,  /* [1744] */
    (xdc_Char)0x45,  /* [1745] */
    (xdc_Char)0x52,  /* [1746] */
    (xdc_Char)0x2e,  /* [1747] */
    (xdc_Char)0x0,  /* [1748] */
    (xdc_Char)0x41,  /* [1749] */
    (xdc_Char)0x5f,  /* [1750] */
    (xdc_Char)0x62,  /* [1751] */
    (xdc_Char)0x61,  /* [1752] */
    (xdc_Char)0x64,  /* [1753] */
    (xdc_Char)0x41,  /* [1754] */
    (xdc_Char)0x66,  /* [1755] */
    (xdc_Char)0x66,  /* [1756] */
    (xdc_Char)0x69,  /* [1757] */
    (xdc_Char)0x6e,  /* [1758] */
    (xdc_Char)0x69,  /* [1759] */
    (xdc_Char)0x74,  /* [1760] */
    (xdc_Char)0x79,  /* [1761] */
    (xdc_Char)0x3a,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x49,  /* [1764] */
    (xdc_Char)0x6e,  /* [1765] */
    (xdc_Char)0x76,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x6c,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x64,  /* [1770] */
    (xdc_Char)0x20,  /* [1771] */
    (xdc_Char)0x61,  /* [1772] */
    (xdc_Char)0x66,  /* [1773] */
    (xdc_Char)0x66,  /* [1774] */
    (xdc_Char)0x69,  /* [1775] */
    (xdc_Char)0x6e,  /* [1776] */
    (xdc_Char)0x69,  /* [1777] */
    (xdc_Char)0x74,  /* [1778] */
    (xdc_Char)0x79,  /* [1779] */
    (xdc_Char)0x2e,  /* [1780] */
    (xdc_Char)0x0,  /* [1781] */
    (xdc_Char)0x41,  /* [1782] */
    (xdc_Char)0x5f,  /* [1783] */
    (xdc_Char)0x73,  /* [1784] */
    (xdc_Char)0x6c,  /* [1785] */
    (xdc_Char)0x65,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x70,  /* [1788] */
    (xdc_Char)0x54,  /* [1789] */
    (xdc_Char)0x61,  /* [1790] */
    (xdc_Char)0x73,  /* [1791] */
    (xdc_Char)0x6b,  /* [1792] */
    (xdc_Char)0x44,  /* [1793] */
    (xdc_Char)0x69,  /* [1794] */
    (xdc_Char)0x73,  /* [1795] */
    (xdc_Char)0x61,  /* [1796] */
    (xdc_Char)0x62,  /* [1797] */
    (xdc_Char)0x6c,  /* [1798] */
    (xdc_Char)0x65,  /* [1799] */
    (xdc_Char)0x64,  /* [1800] */
    (xdc_Char)0x3a,  /* [1801] */
    (xdc_Char)0x20,  /* [1802] */
    (xdc_Char)0x43,  /* [1803] */
    (xdc_Char)0x61,  /* [1804] */
    (xdc_Char)0x6e,  /* [1805] */
    (xdc_Char)0x6e,  /* [1806] */
    (xdc_Char)0x6f,  /* [1807] */
    (xdc_Char)0x74,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x63,  /* [1810] */
    (xdc_Char)0x61,  /* [1811] */
    (xdc_Char)0x6c,  /* [1812] */
    (xdc_Char)0x6c,  /* [1813] */
    (xdc_Char)0x20,  /* [1814] */
    (xdc_Char)0x54,  /* [1815] */
    (xdc_Char)0x61,  /* [1816] */
    (xdc_Char)0x73,  /* [1817] */
    (xdc_Char)0x6b,  /* [1818] */
    (xdc_Char)0x5f,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x65,  /* [1822] */
    (xdc_Char)0x65,  /* [1823] */
    (xdc_Char)0x70,  /* [1824] */
    (xdc_Char)0x28,  /* [1825] */
    (xdc_Char)0x29,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x77,  /* [1828] */
    (xdc_Char)0x68,  /* [1829] */
    (xdc_Char)0x69,  /* [1830] */
    (xdc_Char)0x6c,  /* [1831] */
    (xdc_Char)0x65,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x68,  /* [1835] */
    (xdc_Char)0x65,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x54,  /* [1838] */
    (xdc_Char)0x61,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6b,  /* [1841] */
    (xdc_Char)0x20,  /* [1842] */
    (xdc_Char)0x73,  /* [1843] */
    (xdc_Char)0x63,  /* [1844] */
    (xdc_Char)0x68,  /* [1845] */
    (xdc_Char)0x65,  /* [1846] */
    (xdc_Char)0x64,  /* [1847] */
    (xdc_Char)0x75,  /* [1848] */
    (xdc_Char)0x6c,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x72,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x69,  /* [1853] */
    (xdc_Char)0x73,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x64,  /* [1856] */
    (xdc_Char)0x69,  /* [1857] */
    (xdc_Char)0x73,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x62,  /* [1860] */
    (xdc_Char)0x6c,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x64,  /* [1863] */
    (xdc_Char)0x2e,  /* [1864] */
    (xdc_Char)0x0,  /* [1865] */
    (xdc_Char)0x41,  /* [1866] */
    (xdc_Char)0x5f,  /* [1867] */
    (xdc_Char)0x75,  /* [1868] */
    (xdc_Char)0x6e,  /* [1869] */
    (xdc_Char)0x73,  /* [1870] */
    (xdc_Char)0x75,  /* [1871] */
    (xdc_Char)0x70,  /* [1872] */
    (xdc_Char)0x70,  /* [1873] */
    (xdc_Char)0x6f,  /* [1874] */
    (xdc_Char)0x72,  /* [1875] */
    (xdc_Char)0x74,  /* [1876] */
    (xdc_Char)0x65,  /* [1877] */
    (xdc_Char)0x64,  /* [1878] */
    (xdc_Char)0x4d,  /* [1879] */
    (xdc_Char)0x61,  /* [1880] */
    (xdc_Char)0x73,  /* [1881] */
    (xdc_Char)0x6b,  /* [1882] */
    (xdc_Char)0x69,  /* [1883] */
    (xdc_Char)0x6e,  /* [1884] */
    (xdc_Char)0x67,  /* [1885] */
    (xdc_Char)0x4f,  /* [1886] */
    (xdc_Char)0x70,  /* [1887] */
    (xdc_Char)0x74,  /* [1888] */
    (xdc_Char)0x69,  /* [1889] */
    (xdc_Char)0x6f,  /* [1890] */
    (xdc_Char)0x6e,  /* [1891] */
    (xdc_Char)0x3a,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x75,  /* [1894] */
    (xdc_Char)0x6e,  /* [1895] */
    (xdc_Char)0x73,  /* [1896] */
    (xdc_Char)0x75,  /* [1897] */
    (xdc_Char)0x70,  /* [1898] */
    (xdc_Char)0x70,  /* [1899] */
    (xdc_Char)0x6f,  /* [1900] */
    (xdc_Char)0x72,  /* [1901] */
    (xdc_Char)0x74,  /* [1902] */
    (xdc_Char)0x65,  /* [1903] */
    (xdc_Char)0x64,  /* [1904] */
    (xdc_Char)0x20,  /* [1905] */
    (xdc_Char)0x6d,  /* [1906] */
    (xdc_Char)0x61,  /* [1907] */
    (xdc_Char)0x73,  /* [1908] */
    (xdc_Char)0x6b,  /* [1909] */
    (xdc_Char)0x53,  /* [1910] */
    (xdc_Char)0x65,  /* [1911] */
    (xdc_Char)0x74,  /* [1912] */
    (xdc_Char)0x74,  /* [1913] */
    (xdc_Char)0x69,  /* [1914] */
    (xdc_Char)0x6e,  /* [1915] */
    (xdc_Char)0x67,  /* [1916] */
    (xdc_Char)0x2e,  /* [1917] */
    (xdc_Char)0x0,  /* [1918] */
    (xdc_Char)0x62,  /* [1919] */
    (xdc_Char)0x75,  /* [1920] */
    (xdc_Char)0x66,  /* [1921] */
    (xdc_Char)0x20,  /* [1922] */
    (xdc_Char)0x70,  /* [1923] */
    (xdc_Char)0x61,  /* [1924] */
    (xdc_Char)0x72,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x6d,  /* [1927] */
    (xdc_Char)0x65,  /* [1928] */
    (xdc_Char)0x74,  /* [1929] */
    (xdc_Char)0x65,  /* [1930] */
    (xdc_Char)0x72,  /* [1931] */
    (xdc_Char)0x20,  /* [1932] */
    (xdc_Char)0x63,  /* [1933] */
    (xdc_Char)0x61,  /* [1934] */
    (xdc_Char)0x6e,  /* [1935] */
    (xdc_Char)0x6e,  /* [1936] */
    (xdc_Char)0x6f,  /* [1937] */
    (xdc_Char)0x74,  /* [1938] */
    (xdc_Char)0x20,  /* [1939] */
    (xdc_Char)0x62,  /* [1940] */
    (xdc_Char)0x65,  /* [1941] */
    (xdc_Char)0x20,  /* [1942] */
    (xdc_Char)0x6e,  /* [1943] */
    (xdc_Char)0x75,  /* [1944] */
    (xdc_Char)0x6c,  /* [1945] */
    (xdc_Char)0x6c,  /* [1946] */
    (xdc_Char)0x0,  /* [1947] */
    (xdc_Char)0x62,  /* [1948] */
    (xdc_Char)0x75,  /* [1949] */
    (xdc_Char)0x66,  /* [1950] */
    (xdc_Char)0x20,  /* [1951] */
    (xdc_Char)0x6e,  /* [1952] */
    (xdc_Char)0x6f,  /* [1953] */
    (xdc_Char)0x74,  /* [1954] */
    (xdc_Char)0x20,  /* [1955] */
    (xdc_Char)0x70,  /* [1956] */
    (xdc_Char)0x72,  /* [1957] */
    (xdc_Char)0x6f,  /* [1958] */
    (xdc_Char)0x70,  /* [1959] */
    (xdc_Char)0x65,  /* [1960] */
    (xdc_Char)0x72,  /* [1961] */
    (xdc_Char)0x6c,  /* [1962] */
    (xdc_Char)0x79,  /* [1963] */
    (xdc_Char)0x20,  /* [1964] */
    (xdc_Char)0x61,  /* [1965] */
    (xdc_Char)0x6c,  /* [1966] */
    (xdc_Char)0x69,  /* [1967] */
    (xdc_Char)0x67,  /* [1968] */
    (xdc_Char)0x6e,  /* [1969] */
    (xdc_Char)0x65,  /* [1970] */
    (xdc_Char)0x64,  /* [1971] */
    (xdc_Char)0x0,  /* [1972] */
    (xdc_Char)0x61,  /* [1973] */
    (xdc_Char)0x6c,  /* [1974] */
    (xdc_Char)0x69,  /* [1975] */
    (xdc_Char)0x67,  /* [1976] */
    (xdc_Char)0x6e,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x70,  /* [1979] */
    (xdc_Char)0x61,  /* [1980] */
    (xdc_Char)0x72,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x6d,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x74,  /* [1985] */
    (xdc_Char)0x65,  /* [1986] */
    (xdc_Char)0x72,  /* [1987] */
    (xdc_Char)0x20,  /* [1988] */
    (xdc_Char)0x6d,  /* [1989] */
    (xdc_Char)0x75,  /* [1990] */
    (xdc_Char)0x73,  /* [1991] */
    (xdc_Char)0x74,  /* [1992] */
    (xdc_Char)0x20,  /* [1993] */
    (xdc_Char)0x62,  /* [1994] */
    (xdc_Char)0x65,  /* [1995] */
    (xdc_Char)0x20,  /* [1996] */
    (xdc_Char)0x30,  /* [1997] */
    (xdc_Char)0x20,  /* [1998] */
    (xdc_Char)0x6f,  /* [1999] */
    (xdc_Char)0x72,  /* [2000] */
    (xdc_Char)0x20,  /* [2001] */
    (xdc_Char)0x61,  /* [2002] */
    (xdc_Char)0x20,  /* [2003] */
    (xdc_Char)0x70,  /* [2004] */
    (xdc_Char)0x6f,  /* [2005] */
    (xdc_Char)0x77,  /* [2006] */
    (xdc_Char)0x65,  /* [2007] */
    (xdc_Char)0x72,  /* [2008] */
    (xdc_Char)0x20,  /* [2009] */
    (xdc_Char)0x6f,  /* [2010] */
    (xdc_Char)0x66,  /* [2011] */
    (xdc_Char)0x20,  /* [2012] */
    (xdc_Char)0x32,  /* [2013] */
    (xdc_Char)0x20,  /* [2014] */
    (xdc_Char)0x3e,  /* [2015] */
    (xdc_Char)0x3d,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x74,  /* [2018] */
    (xdc_Char)0x68,  /* [2019] */
    (xdc_Char)0x65,  /* [2020] */
    (xdc_Char)0x20,  /* [2021] */
    (xdc_Char)0x76,  /* [2022] */
    (xdc_Char)0x61,  /* [2023] */
    (xdc_Char)0x6c,  /* [2024] */
    (xdc_Char)0x75,  /* [2025] */
    (xdc_Char)0x65,  /* [2026] */
    (xdc_Char)0x20,  /* [2027] */
    (xdc_Char)0x6f,  /* [2028] */
    (xdc_Char)0x66,  /* [2029] */
    (xdc_Char)0x20,  /* [2030] */
    (xdc_Char)0x4d,  /* [2031] */
    (xdc_Char)0x65,  /* [2032] */
    (xdc_Char)0x6d,  /* [2033] */
    (xdc_Char)0x6f,  /* [2034] */
    (xdc_Char)0x72,  /* [2035] */
    (xdc_Char)0x79,  /* [2036] */
    (xdc_Char)0x5f,  /* [2037] */
    (xdc_Char)0x67,  /* [2038] */
    (xdc_Char)0x65,  /* [2039] */
    (xdc_Char)0x74,  /* [2040] */
    (xdc_Char)0x4d,  /* [2041] */
    (xdc_Char)0x61,  /* [2042] */
    (xdc_Char)0x78,  /* [2043] */
    (xdc_Char)0x44,  /* [2044] */
    (xdc_Char)0x65,  /* [2045] */
    (xdc_Char)0x66,  /* [2046] */
    (xdc_Char)0x61,  /* [2047] */
    (xdc_Char)0x75,  /* [2048] */
    (xdc_Char)0x6c,  /* [2049] */
    (xdc_Char)0x74,  /* [2050] */
    (xdc_Char)0x54,  /* [2051] */
    (xdc_Char)0x79,  /* [2052] */
    (xdc_Char)0x70,  /* [2053] */
    (xdc_Char)0x65,  /* [2054] */
    (xdc_Char)0x41,  /* [2055] */
    (xdc_Char)0x6c,  /* [2056] */
    (xdc_Char)0x69,  /* [2057] */
    (xdc_Char)0x67,  /* [2058] */
    (xdc_Char)0x6e,  /* [2059] */
    (xdc_Char)0x28,  /* [2060] */
    (xdc_Char)0x29,  /* [2061] */
    (xdc_Char)0x0,  /* [2062] */
    (xdc_Char)0x61,  /* [2063] */
    (xdc_Char)0x6c,  /* [2064] */
    (xdc_Char)0x69,  /* [2065] */
    (xdc_Char)0x67,  /* [2066] */
    (xdc_Char)0x6e,  /* [2067] */
    (xdc_Char)0x20,  /* [2068] */
    (xdc_Char)0x70,  /* [2069] */
    (xdc_Char)0x61,  /* [2070] */
    (xdc_Char)0x72,  /* [2071] */
    (xdc_Char)0x61,  /* [2072] */
    (xdc_Char)0x6d,  /* [2073] */
    (xdc_Char)0x65,  /* [2074] */
    (xdc_Char)0x74,  /* [2075] */
    (xdc_Char)0x65,  /* [2076] */
    (xdc_Char)0x72,  /* [2077] */
    (xdc_Char)0x20,  /* [2078] */
    (xdc_Char)0x31,  /* [2079] */
    (xdc_Char)0x29,  /* [2080] */
    (xdc_Char)0x20,  /* [2081] */
    (xdc_Char)0x6d,  /* [2082] */
    (xdc_Char)0x75,  /* [2083] */
    (xdc_Char)0x73,  /* [2084] */
    (xdc_Char)0x74,  /* [2085] */
    (xdc_Char)0x20,  /* [2086] */
    (xdc_Char)0x62,  /* [2087] */
    (xdc_Char)0x65,  /* [2088] */
    (xdc_Char)0x20,  /* [2089] */
    (xdc_Char)0x30,  /* [2090] */
    (xdc_Char)0x20,  /* [2091] */
    (xdc_Char)0x6f,  /* [2092] */
    (xdc_Char)0x72,  /* [2093] */
    (xdc_Char)0x20,  /* [2094] */
    (xdc_Char)0x61,  /* [2095] */
    (xdc_Char)0x20,  /* [2096] */
    (xdc_Char)0x70,  /* [2097] */
    (xdc_Char)0x6f,  /* [2098] */
    (xdc_Char)0x77,  /* [2099] */
    (xdc_Char)0x65,  /* [2100] */
    (xdc_Char)0x72,  /* [2101] */
    (xdc_Char)0x20,  /* [2102] */
    (xdc_Char)0x6f,  /* [2103] */
    (xdc_Char)0x66,  /* [2104] */
    (xdc_Char)0x20,  /* [2105] */
    (xdc_Char)0x32,  /* [2106] */
    (xdc_Char)0x20,  /* [2107] */
    (xdc_Char)0x61,  /* [2108] */
    (xdc_Char)0x6e,  /* [2109] */
    (xdc_Char)0x64,  /* [2110] */
    (xdc_Char)0x20,  /* [2111] */
    (xdc_Char)0x32,  /* [2112] */
    (xdc_Char)0x29,  /* [2113] */
    (xdc_Char)0x20,  /* [2114] */
    (xdc_Char)0x6e,  /* [2115] */
    (xdc_Char)0x6f,  /* [2116] */
    (xdc_Char)0x74,  /* [2117] */
    (xdc_Char)0x20,  /* [2118] */
    (xdc_Char)0x67,  /* [2119] */
    (xdc_Char)0x72,  /* [2120] */
    (xdc_Char)0x65,  /* [2121] */
    (xdc_Char)0x61,  /* [2122] */
    (xdc_Char)0x74,  /* [2123] */
    (xdc_Char)0x65,  /* [2124] */
    (xdc_Char)0x72,  /* [2125] */
    (xdc_Char)0x20,  /* [2126] */
    (xdc_Char)0x74,  /* [2127] */
    (xdc_Char)0x68,  /* [2128] */
    (xdc_Char)0x61,  /* [2129] */
    (xdc_Char)0x6e,  /* [2130] */
    (xdc_Char)0x20,  /* [2131] */
    (xdc_Char)0x74,  /* [2132] */
    (xdc_Char)0x68,  /* [2133] */
    (xdc_Char)0x65,  /* [2134] */
    (xdc_Char)0x20,  /* [2135] */
    (xdc_Char)0x68,  /* [2136] */
    (xdc_Char)0x65,  /* [2137] */
    (xdc_Char)0x61,  /* [2138] */
    (xdc_Char)0x70,  /* [2139] */
    (xdc_Char)0x73,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x61,  /* [2142] */
    (xdc_Char)0x6c,  /* [2143] */
    (xdc_Char)0x69,  /* [2144] */
    (xdc_Char)0x67,  /* [2145] */
    (xdc_Char)0x6e,  /* [2146] */
    (xdc_Char)0x6d,  /* [2147] */
    (xdc_Char)0x65,  /* [2148] */
    (xdc_Char)0x6e,  /* [2149] */
    (xdc_Char)0x74,  /* [2150] */
    (xdc_Char)0x0,  /* [2151] */
    (xdc_Char)0x62,  /* [2152] */
    (xdc_Char)0x6c,  /* [2153] */
    (xdc_Char)0x6f,  /* [2154] */
    (xdc_Char)0x63,  /* [2155] */
    (xdc_Char)0x6b,  /* [2156] */
    (xdc_Char)0x53,  /* [2157] */
    (xdc_Char)0x69,  /* [2158] */
    (xdc_Char)0x7a,  /* [2159] */
    (xdc_Char)0x65,  /* [2160] */
    (xdc_Char)0x20,  /* [2161] */
    (xdc_Char)0x63,  /* [2162] */
    (xdc_Char)0x61,  /* [2163] */
    (xdc_Char)0x6e,  /* [2164] */
    (xdc_Char)0x6e,  /* [2165] */
    (xdc_Char)0x6f,  /* [2166] */
    (xdc_Char)0x74,  /* [2167] */
    (xdc_Char)0x20,  /* [2168] */
    (xdc_Char)0x62,  /* [2169] */
    (xdc_Char)0x65,  /* [2170] */
    (xdc_Char)0x20,  /* [2171] */
    (xdc_Char)0x7a,  /* [2172] */
    (xdc_Char)0x65,  /* [2173] */
    (xdc_Char)0x72,  /* [2174] */
    (xdc_Char)0x6f,  /* [2175] */
    (xdc_Char)0x0,  /* [2176] */
    (xdc_Char)0x6e,  /* [2177] */
    (xdc_Char)0x75,  /* [2178] */
    (xdc_Char)0x6d,  /* [2179] */
    (xdc_Char)0x42,  /* [2180] */
    (xdc_Char)0x6c,  /* [2181] */
    (xdc_Char)0x6f,  /* [2182] */
    (xdc_Char)0x63,  /* [2183] */
    (xdc_Char)0x6b,  /* [2184] */
    (xdc_Char)0x73,  /* [2185] */
    (xdc_Char)0x20,  /* [2186] */
    (xdc_Char)0x63,  /* [2187] */
    (xdc_Char)0x61,  /* [2188] */
    (xdc_Char)0x6e,  /* [2189] */
    (xdc_Char)0x6e,  /* [2190] */
    (xdc_Char)0x6f,  /* [2191] */
    (xdc_Char)0x74,  /* [2192] */
    (xdc_Char)0x20,  /* [2193] */
    (xdc_Char)0x62,  /* [2194] */
    (xdc_Char)0x65,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x7a,  /* [2197] */
    (xdc_Char)0x65,  /* [2198] */
    (xdc_Char)0x72,  /* [2199] */
    (xdc_Char)0x6f,  /* [2200] */
    (xdc_Char)0x0,  /* [2201] */
    (xdc_Char)0x62,  /* [2202] */
    (xdc_Char)0x75,  /* [2203] */
    (xdc_Char)0x66,  /* [2204] */
    (xdc_Char)0x53,  /* [2205] */
    (xdc_Char)0x69,  /* [2206] */
    (xdc_Char)0x7a,  /* [2207] */
    (xdc_Char)0x65,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x63,  /* [2210] */
    (xdc_Char)0x61,  /* [2211] */
    (xdc_Char)0x6e,  /* [2212] */
    (xdc_Char)0x6e,  /* [2213] */
    (xdc_Char)0x6f,  /* [2214] */
    (xdc_Char)0x74,  /* [2215] */
    (xdc_Char)0x20,  /* [2216] */
    (xdc_Char)0x62,  /* [2217] */
    (xdc_Char)0x65,  /* [2218] */
    (xdc_Char)0x20,  /* [2219] */
    (xdc_Char)0x7a,  /* [2220] */
    (xdc_Char)0x65,  /* [2221] */
    (xdc_Char)0x72,  /* [2222] */
    (xdc_Char)0x6f,  /* [2223] */
    (xdc_Char)0x0,  /* [2224] */
    (xdc_Char)0x48,  /* [2225] */
    (xdc_Char)0x65,  /* [2226] */
    (xdc_Char)0x61,  /* [2227] */
    (xdc_Char)0x70,  /* [2228] */
    (xdc_Char)0x42,  /* [2229] */
    (xdc_Char)0x75,  /* [2230] */
    (xdc_Char)0x66,  /* [2231] */
    (xdc_Char)0x5f,  /* [2232] */
    (xdc_Char)0x63,  /* [2233] */
    (xdc_Char)0x72,  /* [2234] */
    (xdc_Char)0x65,  /* [2235] */
    (xdc_Char)0x61,  /* [2236] */
    (xdc_Char)0x74,  /* [2237] */
    (xdc_Char)0x65,  /* [2238] */
    (xdc_Char)0x27,  /* [2239] */
    (xdc_Char)0x73,  /* [2240] */
    (xdc_Char)0x20,  /* [2241] */
    (xdc_Char)0x62,  /* [2242] */
    (xdc_Char)0x75,  /* [2243] */
    (xdc_Char)0x66,  /* [2244] */
    (xdc_Char)0x53,  /* [2245] */
    (xdc_Char)0x69,  /* [2246] */
    (xdc_Char)0x7a,  /* [2247] */
    (xdc_Char)0x65,  /* [2248] */
    (xdc_Char)0x20,  /* [2249] */
    (xdc_Char)0x70,  /* [2250] */
    (xdc_Char)0x61,  /* [2251] */
    (xdc_Char)0x72,  /* [2252] */
    (xdc_Char)0x61,  /* [2253] */
    (xdc_Char)0x6d,  /* [2254] */
    (xdc_Char)0x65,  /* [2255] */
    (xdc_Char)0x74,  /* [2256] */
    (xdc_Char)0x65,  /* [2257] */
    (xdc_Char)0x72,  /* [2258] */
    (xdc_Char)0x20,  /* [2259] */
    (xdc_Char)0x69,  /* [2260] */
    (xdc_Char)0x73,  /* [2261] */
    (xdc_Char)0x20,  /* [2262] */
    (xdc_Char)0x69,  /* [2263] */
    (xdc_Char)0x6e,  /* [2264] */
    (xdc_Char)0x76,  /* [2265] */
    (xdc_Char)0x61,  /* [2266] */
    (xdc_Char)0x6c,  /* [2267] */
    (xdc_Char)0x69,  /* [2268] */
    (xdc_Char)0x64,  /* [2269] */
    (xdc_Char)0x20,  /* [2270] */
    (xdc_Char)0x28,  /* [2271] */
    (xdc_Char)0x74,  /* [2272] */
    (xdc_Char)0x6f,  /* [2273] */
    (xdc_Char)0x6f,  /* [2274] */
    (xdc_Char)0x20,  /* [2275] */
    (xdc_Char)0x73,  /* [2276] */
    (xdc_Char)0x6d,  /* [2277] */
    (xdc_Char)0x61,  /* [2278] */
    (xdc_Char)0x6c,  /* [2279] */
    (xdc_Char)0x6c,  /* [2280] */
    (xdc_Char)0x29,  /* [2281] */
    (xdc_Char)0x0,  /* [2282] */
    (xdc_Char)0x43,  /* [2283] */
    (xdc_Char)0x61,  /* [2284] */
    (xdc_Char)0x6e,  /* [2285] */
    (xdc_Char)0x6e,  /* [2286] */
    (xdc_Char)0x6f,  /* [2287] */
    (xdc_Char)0x74,  /* [2288] */
    (xdc_Char)0x20,  /* [2289] */
    (xdc_Char)0x63,  /* [2290] */
    (xdc_Char)0x61,  /* [2291] */
    (xdc_Char)0x6c,  /* [2292] */
    (xdc_Char)0x6c,  /* [2293] */
    (xdc_Char)0x20,  /* [2294] */
    (xdc_Char)0x48,  /* [2295] */
    (xdc_Char)0x65,  /* [2296] */
    (xdc_Char)0x61,  /* [2297] */
    (xdc_Char)0x70,  /* [2298] */
    (xdc_Char)0x42,  /* [2299] */
    (xdc_Char)0x75,  /* [2300] */
    (xdc_Char)0x66,  /* [2301] */
    (xdc_Char)0x5f,  /* [2302] */
    (xdc_Char)0x66,  /* [2303] */
    (xdc_Char)0x72,  /* [2304] */
    (xdc_Char)0x65,  /* [2305] */
    (xdc_Char)0x65,  /* [2306] */
    (xdc_Char)0x20,  /* [2307] */
    (xdc_Char)0x77,  /* [2308] */
    (xdc_Char)0x68,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x6e,  /* [2311] */
    (xdc_Char)0x20,  /* [2312] */
    (xdc_Char)0x6e,  /* [2313] */
    (xdc_Char)0x6f,  /* [2314] */
    (xdc_Char)0x20,  /* [2315] */
    (xdc_Char)0x62,  /* [2316] */
    (xdc_Char)0x6c,  /* [2317] */
    (xdc_Char)0x6f,  /* [2318] */
    (xdc_Char)0x63,  /* [2319] */
    (xdc_Char)0x6b,  /* [2320] */
    (xdc_Char)0x73,  /* [2321] */
    (xdc_Char)0x20,  /* [2322] */
    (xdc_Char)0x68,  /* [2323] */
    (xdc_Char)0x61,  /* [2324] */
    (xdc_Char)0x76,  /* [2325] */
    (xdc_Char)0x65,  /* [2326] */
    (xdc_Char)0x20,  /* [2327] */
    (xdc_Char)0x62,  /* [2328] */
    (xdc_Char)0x65,  /* [2329] */
    (xdc_Char)0x65,  /* [2330] */
    (xdc_Char)0x6e,  /* [2331] */
    (xdc_Char)0x20,  /* [2332] */
    (xdc_Char)0x61,  /* [2333] */
    (xdc_Char)0x6c,  /* [2334] */
    (xdc_Char)0x6c,  /* [2335] */
    (xdc_Char)0x6f,  /* [2336] */
    (xdc_Char)0x63,  /* [2337] */
    (xdc_Char)0x61,  /* [2338] */
    (xdc_Char)0x74,  /* [2339] */
    (xdc_Char)0x65,  /* [2340] */
    (xdc_Char)0x64,  /* [2341] */
    (xdc_Char)0x0,  /* [2342] */
    (xdc_Char)0x41,  /* [2343] */
    (xdc_Char)0x5f,  /* [2344] */
    (xdc_Char)0x69,  /* [2345] */
    (xdc_Char)0x6e,  /* [2346] */
    (xdc_Char)0x76,  /* [2347] */
    (xdc_Char)0x61,  /* [2348] */
    (xdc_Char)0x6c,  /* [2349] */
    (xdc_Char)0x69,  /* [2350] */
    (xdc_Char)0x64,  /* [2351] */
    (xdc_Char)0x46,  /* [2352] */
    (xdc_Char)0x72,  /* [2353] */
    (xdc_Char)0x65,  /* [2354] */
    (xdc_Char)0x65,  /* [2355] */
    (xdc_Char)0x3a,  /* [2356] */
    (xdc_Char)0x20,  /* [2357] */
    (xdc_Char)0x49,  /* [2358] */
    (xdc_Char)0x6e,  /* [2359] */
    (xdc_Char)0x76,  /* [2360] */
    (xdc_Char)0x61,  /* [2361] */
    (xdc_Char)0x6c,  /* [2362] */
    (xdc_Char)0x69,  /* [2363] */
    (xdc_Char)0x64,  /* [2364] */
    (xdc_Char)0x20,  /* [2365] */
    (xdc_Char)0x66,  /* [2366] */
    (xdc_Char)0x72,  /* [2367] */
    (xdc_Char)0x65,  /* [2368] */
    (xdc_Char)0x65,  /* [2369] */
    (xdc_Char)0x0,  /* [2370] */
    (xdc_Char)0x41,  /* [2371] */
    (xdc_Char)0x5f,  /* [2372] */
    (xdc_Char)0x7a,  /* [2373] */
    (xdc_Char)0x65,  /* [2374] */
    (xdc_Char)0x72,  /* [2375] */
    (xdc_Char)0x6f,  /* [2376] */
    (xdc_Char)0x42,  /* [2377] */
    (xdc_Char)0x6c,  /* [2378] */
    (xdc_Char)0x6f,  /* [2379] */
    (xdc_Char)0x63,  /* [2380] */
    (xdc_Char)0x6b,  /* [2381] */
    (xdc_Char)0x3a,  /* [2382] */
    (xdc_Char)0x20,  /* [2383] */
    (xdc_Char)0x43,  /* [2384] */
    (xdc_Char)0x61,  /* [2385] */
    (xdc_Char)0x6e,  /* [2386] */
    (xdc_Char)0x6e,  /* [2387] */
    (xdc_Char)0x6f,  /* [2388] */
    (xdc_Char)0x74,  /* [2389] */
    (xdc_Char)0x20,  /* [2390] */
    (xdc_Char)0x61,  /* [2391] */
    (xdc_Char)0x6c,  /* [2392] */
    (xdc_Char)0x6c,  /* [2393] */
    (xdc_Char)0x6f,  /* [2394] */
    (xdc_Char)0x63,  /* [2395] */
    (xdc_Char)0x61,  /* [2396] */
    (xdc_Char)0x74,  /* [2397] */
    (xdc_Char)0x65,  /* [2398] */
    (xdc_Char)0x20,  /* [2399] */
    (xdc_Char)0x73,  /* [2400] */
    (xdc_Char)0x69,  /* [2401] */
    (xdc_Char)0x7a,  /* [2402] */
    (xdc_Char)0x65,  /* [2403] */
    (xdc_Char)0x20,  /* [2404] */
    (xdc_Char)0x30,  /* [2405] */
    (xdc_Char)0x0,  /* [2406] */
    (xdc_Char)0x41,  /* [2407] */
    (xdc_Char)0x5f,  /* [2408] */
    (xdc_Char)0x68,  /* [2409] */
    (xdc_Char)0x65,  /* [2410] */
    (xdc_Char)0x61,  /* [2411] */
    (xdc_Char)0x70,  /* [2412] */
    (xdc_Char)0x53,  /* [2413] */
    (xdc_Char)0x69,  /* [2414] */
    (xdc_Char)0x7a,  /* [2415] */
    (xdc_Char)0x65,  /* [2416] */
    (xdc_Char)0x3a,  /* [2417] */
    (xdc_Char)0x20,  /* [2418] */
    (xdc_Char)0x52,  /* [2419] */
    (xdc_Char)0x65,  /* [2420] */
    (xdc_Char)0x71,  /* [2421] */
    (xdc_Char)0x75,  /* [2422] */
    (xdc_Char)0x65,  /* [2423] */
    (xdc_Char)0x73,  /* [2424] */
    (xdc_Char)0x74,  /* [2425] */
    (xdc_Char)0x65,  /* [2426] */
    (xdc_Char)0x64,  /* [2427] */
    (xdc_Char)0x20,  /* [2428] */
    (xdc_Char)0x68,  /* [2429] */
    (xdc_Char)0x65,  /* [2430] */
    (xdc_Char)0x61,  /* [2431] */
    (xdc_Char)0x70,  /* [2432] */
    (xdc_Char)0x20,  /* [2433] */
    (xdc_Char)0x73,  /* [2434] */
    (xdc_Char)0x69,  /* [2435] */
    (xdc_Char)0x7a,  /* [2436] */
    (xdc_Char)0x65,  /* [2437] */
    (xdc_Char)0x20,  /* [2438] */
    (xdc_Char)0x69,  /* [2439] */
    (xdc_Char)0x73,  /* [2440] */
    (xdc_Char)0x20,  /* [2441] */
    (xdc_Char)0x74,  /* [2442] */
    (xdc_Char)0x6f,  /* [2443] */
    (xdc_Char)0x6f,  /* [2444] */
    (xdc_Char)0x20,  /* [2445] */
    (xdc_Char)0x73,  /* [2446] */
    (xdc_Char)0x6d,  /* [2447] */
    (xdc_Char)0x61,  /* [2448] */
    (xdc_Char)0x6c,  /* [2449] */
    (xdc_Char)0x6c,  /* [2450] */
    (xdc_Char)0x0,  /* [2451] */
    (xdc_Char)0x41,  /* [2452] */
    (xdc_Char)0x5f,  /* [2453] */
    (xdc_Char)0x61,  /* [2454] */
    (xdc_Char)0x6c,  /* [2455] */
    (xdc_Char)0x69,  /* [2456] */
    (xdc_Char)0x67,  /* [2457] */
    (xdc_Char)0x6e,  /* [2458] */
    (xdc_Char)0x3a,  /* [2459] */
    (xdc_Char)0x20,  /* [2460] */
    (xdc_Char)0x52,  /* [2461] */
    (xdc_Char)0x65,  /* [2462] */
    (xdc_Char)0x71,  /* [2463] */
    (xdc_Char)0x75,  /* [2464] */
    (xdc_Char)0x65,  /* [2465] */
    (xdc_Char)0x73,  /* [2466] */
    (xdc_Char)0x74,  /* [2467] */
    (xdc_Char)0x65,  /* [2468] */
    (xdc_Char)0x64,  /* [2469] */
    (xdc_Char)0x20,  /* [2470] */
    (xdc_Char)0x61,  /* [2471] */
    (xdc_Char)0x6c,  /* [2472] */
    (xdc_Char)0x69,  /* [2473] */
    (xdc_Char)0x67,  /* [2474] */
    (xdc_Char)0x6e,  /* [2475] */
    (xdc_Char)0x20,  /* [2476] */
    (xdc_Char)0x69,  /* [2477] */
    (xdc_Char)0x73,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x6e,  /* [2480] */
    (xdc_Char)0x6f,  /* [2481] */
    (xdc_Char)0x74,  /* [2482] */
    (xdc_Char)0x20,  /* [2483] */
    (xdc_Char)0x61,  /* [2484] */
    (xdc_Char)0x20,  /* [2485] */
    (xdc_Char)0x70,  /* [2486] */
    (xdc_Char)0x6f,  /* [2487] */
    (xdc_Char)0x77,  /* [2488] */
    (xdc_Char)0x65,  /* [2489] */
    (xdc_Char)0x72,  /* [2490] */
    (xdc_Char)0x20,  /* [2491] */
    (xdc_Char)0x6f,  /* [2492] */
    (xdc_Char)0x66,  /* [2493] */
    (xdc_Char)0x20,  /* [2494] */
    (xdc_Char)0x32,  /* [2495] */
    (xdc_Char)0x0,  /* [2496] */
    (xdc_Char)0x49,  /* [2497] */
    (xdc_Char)0x6e,  /* [2498] */
    (xdc_Char)0x76,  /* [2499] */
    (xdc_Char)0x61,  /* [2500] */
    (xdc_Char)0x6c,  /* [2501] */
    (xdc_Char)0x69,  /* [2502] */
    (xdc_Char)0x64,  /* [2503] */
    (xdc_Char)0x20,  /* [2504] */
    (xdc_Char)0x62,  /* [2505] */
    (xdc_Char)0x6c,  /* [2506] */
    (xdc_Char)0x6f,  /* [2507] */
    (xdc_Char)0x63,  /* [2508] */
    (xdc_Char)0x6b,  /* [2509] */
    (xdc_Char)0x20,  /* [2510] */
    (xdc_Char)0x61,  /* [2511] */
    (xdc_Char)0x64,  /* [2512] */
    (xdc_Char)0x64,  /* [2513] */
    (xdc_Char)0x72,  /* [2514] */
    (xdc_Char)0x65,  /* [2515] */
    (xdc_Char)0x73,  /* [2516] */
    (xdc_Char)0x73,  /* [2517] */
    (xdc_Char)0x20,  /* [2518] */
    (xdc_Char)0x6f,  /* [2519] */
    (xdc_Char)0x6e,  /* [2520] */
    (xdc_Char)0x20,  /* [2521] */
    (xdc_Char)0x74,  /* [2522] */
    (xdc_Char)0x68,  /* [2523] */
    (xdc_Char)0x65,  /* [2524] */
    (xdc_Char)0x20,  /* [2525] */
    (xdc_Char)0x66,  /* [2526] */
    (xdc_Char)0x72,  /* [2527] */
    (xdc_Char)0x65,  /* [2528] */
    (xdc_Char)0x65,  /* [2529] */
    (xdc_Char)0x2e,  /* [2530] */
    (xdc_Char)0x20,  /* [2531] */
    (xdc_Char)0x46,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x69,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x65,  /* [2536] */
    (xdc_Char)0x64,  /* [2537] */
    (xdc_Char)0x20,  /* [2538] */
    (xdc_Char)0x74,  /* [2539] */
    (xdc_Char)0x6f,  /* [2540] */
    (xdc_Char)0x20,  /* [2541] */
    (xdc_Char)0x66,  /* [2542] */
    (xdc_Char)0x72,  /* [2543] */
    (xdc_Char)0x65,  /* [2544] */
    (xdc_Char)0x65,  /* [2545] */
    (xdc_Char)0x20,  /* [2546] */
    (xdc_Char)0x62,  /* [2547] */
    (xdc_Char)0x6c,  /* [2548] */
    (xdc_Char)0x6f,  /* [2549] */
    (xdc_Char)0x63,  /* [2550] */
    (xdc_Char)0x6b,  /* [2551] */
    (xdc_Char)0x20,  /* [2552] */
    (xdc_Char)0x62,  /* [2553] */
    (xdc_Char)0x61,  /* [2554] */
    (xdc_Char)0x63,  /* [2555] */
    (xdc_Char)0x6b,  /* [2556] */
    (xdc_Char)0x20,  /* [2557] */
    (xdc_Char)0x74,  /* [2558] */
    (xdc_Char)0x6f,  /* [2559] */
    (xdc_Char)0x20,  /* [2560] */
    (xdc_Char)0x68,  /* [2561] */
    (xdc_Char)0x65,  /* [2562] */
    (xdc_Char)0x61,  /* [2563] */
    (xdc_Char)0x70,  /* [2564] */
    (xdc_Char)0x2e,  /* [2565] */
    (xdc_Char)0x0,  /* [2566] */
    (xdc_Char)0x41,  /* [2567] */
    (xdc_Char)0x5f,  /* [2568] */
    (xdc_Char)0x64,  /* [2569] */
    (xdc_Char)0x6f,  /* [2570] */
    (xdc_Char)0x75,  /* [2571] */
    (xdc_Char)0x62,  /* [2572] */
    (xdc_Char)0x6c,  /* [2573] */
    (xdc_Char)0x65,  /* [2574] */
    (xdc_Char)0x46,  /* [2575] */
    (xdc_Char)0x72,  /* [2576] */
    (xdc_Char)0x65,  /* [2577] */
    (xdc_Char)0x65,  /* [2578] */
    (xdc_Char)0x3a,  /* [2579] */
    (xdc_Char)0x20,  /* [2580] */
    (xdc_Char)0x42,  /* [2581] */
    (xdc_Char)0x75,  /* [2582] */
    (xdc_Char)0x66,  /* [2583] */
    (xdc_Char)0x66,  /* [2584] */
    (xdc_Char)0x65,  /* [2585] */
    (xdc_Char)0x72,  /* [2586] */
    (xdc_Char)0x20,  /* [2587] */
    (xdc_Char)0x61,  /* [2588] */
    (xdc_Char)0x6c,  /* [2589] */
    (xdc_Char)0x72,  /* [2590] */
    (xdc_Char)0x65,  /* [2591] */
    (xdc_Char)0x61,  /* [2592] */
    (xdc_Char)0x64,  /* [2593] */
    (xdc_Char)0x79,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x66,  /* [2596] */
    (xdc_Char)0x72,  /* [2597] */
    (xdc_Char)0x65,  /* [2598] */
    (xdc_Char)0x65,  /* [2599] */
    (xdc_Char)0x0,  /* [2600] */
    (xdc_Char)0x41,  /* [2601] */
    (xdc_Char)0x5f,  /* [2602] */
    (xdc_Char)0x62,  /* [2603] */
    (xdc_Char)0x75,  /* [2604] */
    (xdc_Char)0x66,  /* [2605] */
    (xdc_Char)0x4f,  /* [2606] */
    (xdc_Char)0x76,  /* [2607] */
    (xdc_Char)0x65,  /* [2608] */
    (xdc_Char)0x72,  /* [2609] */
    (xdc_Char)0x66,  /* [2610] */
    (xdc_Char)0x6c,  /* [2611] */
    (xdc_Char)0x6f,  /* [2612] */
    (xdc_Char)0x77,  /* [2613] */
    (xdc_Char)0x3a,  /* [2614] */
    (xdc_Char)0x20,  /* [2615] */
    (xdc_Char)0x42,  /* [2616] */
    (xdc_Char)0x75,  /* [2617] */
    (xdc_Char)0x66,  /* [2618] */
    (xdc_Char)0x66,  /* [2619] */
    (xdc_Char)0x65,  /* [2620] */
    (xdc_Char)0x72,  /* [2621] */
    (xdc_Char)0x20,  /* [2622] */
    (xdc_Char)0x6f,  /* [2623] */
    (xdc_Char)0x76,  /* [2624] */
    (xdc_Char)0x65,  /* [2625] */
    (xdc_Char)0x72,  /* [2626] */
    (xdc_Char)0x66,  /* [2627] */
    (xdc_Char)0x6c,  /* [2628] */
    (xdc_Char)0x6f,  /* [2629] */
    (xdc_Char)0x77,  /* [2630] */
    (xdc_Char)0x0,  /* [2631] */
    (xdc_Char)0x41,  /* [2632] */
    (xdc_Char)0x5f,  /* [2633] */
    (xdc_Char)0x6e,  /* [2634] */
    (xdc_Char)0x6f,  /* [2635] */
    (xdc_Char)0x74,  /* [2636] */
    (xdc_Char)0x45,  /* [2637] */
    (xdc_Char)0x6d,  /* [2638] */
    (xdc_Char)0x70,  /* [2639] */
    (xdc_Char)0x74,  /* [2640] */
    (xdc_Char)0x79,  /* [2641] */
    (xdc_Char)0x3a,  /* [2642] */
    (xdc_Char)0x20,  /* [2643] */
    (xdc_Char)0x48,  /* [2644] */
    (xdc_Char)0x65,  /* [2645] */
    (xdc_Char)0x61,  /* [2646] */
    (xdc_Char)0x70,  /* [2647] */
    (xdc_Char)0x20,  /* [2648] */
    (xdc_Char)0x6e,  /* [2649] */
    (xdc_Char)0x6f,  /* [2650] */
    (xdc_Char)0x74,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x65,  /* [2653] */
    (xdc_Char)0x6d,  /* [2654] */
    (xdc_Char)0x70,  /* [2655] */
    (xdc_Char)0x74,  /* [2656] */
    (xdc_Char)0x79,  /* [2657] */
    (xdc_Char)0x0,  /* [2658] */
    (xdc_Char)0x41,  /* [2659] */
    (xdc_Char)0x5f,  /* [2660] */
    (xdc_Char)0x6e,  /* [2661] */
    (xdc_Char)0x75,  /* [2662] */
    (xdc_Char)0x6c,  /* [2663] */
    (xdc_Char)0x6c,  /* [2664] */
    (xdc_Char)0x4f,  /* [2665] */
    (xdc_Char)0x62,  /* [2666] */
    (xdc_Char)0x6a,  /* [2667] */
    (xdc_Char)0x65,  /* [2668] */
    (xdc_Char)0x63,  /* [2669] */
    (xdc_Char)0x74,  /* [2670] */
    (xdc_Char)0x3a,  /* [2671] */
    (xdc_Char)0x20,  /* [2672] */
    (xdc_Char)0x48,  /* [2673] */
    (xdc_Char)0x65,  /* [2674] */
    (xdc_Char)0x61,  /* [2675] */
    (xdc_Char)0x70,  /* [2676] */
    (xdc_Char)0x54,  /* [2677] */
    (xdc_Char)0x72,  /* [2678] */
    (xdc_Char)0x61,  /* [2679] */
    (xdc_Char)0x63,  /* [2680] */
    (xdc_Char)0x6b,  /* [2681] */
    (xdc_Char)0x5f,  /* [2682] */
    (xdc_Char)0x70,  /* [2683] */
    (xdc_Char)0x72,  /* [2684] */
    (xdc_Char)0x69,  /* [2685] */
    (xdc_Char)0x6e,  /* [2686] */
    (xdc_Char)0x74,  /* [2687] */
    (xdc_Char)0x48,  /* [2688] */
    (xdc_Char)0x65,  /* [2689] */
    (xdc_Char)0x61,  /* [2690] */
    (xdc_Char)0x70,  /* [2691] */
    (xdc_Char)0x20,  /* [2692] */
    (xdc_Char)0x63,  /* [2693] */
    (xdc_Char)0x61,  /* [2694] */
    (xdc_Char)0x6c,  /* [2695] */
    (xdc_Char)0x6c,  /* [2696] */
    (xdc_Char)0x65,  /* [2697] */
    (xdc_Char)0x64,  /* [2698] */
    (xdc_Char)0x20,  /* [2699] */
    (xdc_Char)0x77,  /* [2700] */
    (xdc_Char)0x69,  /* [2701] */
    (xdc_Char)0x74,  /* [2702] */
    (xdc_Char)0x68,  /* [2703] */
    (xdc_Char)0x20,  /* [2704] */
    (xdc_Char)0x6e,  /* [2705] */
    (xdc_Char)0x75,  /* [2706] */
    (xdc_Char)0x6c,  /* [2707] */
    (xdc_Char)0x6c,  /* [2708] */
    (xdc_Char)0x20,  /* [2709] */
    (xdc_Char)0x6f,  /* [2710] */
    (xdc_Char)0x62,  /* [2711] */
    (xdc_Char)0x6a,  /* [2712] */
    (xdc_Char)0x0,  /* [2713] */
    (xdc_Char)0x41,  /* [2714] */
    (xdc_Char)0x5f,  /* [2715] */
    (xdc_Char)0x7a,  /* [2716] */
    (xdc_Char)0x65,  /* [2717] */
    (xdc_Char)0x72,  /* [2718] */
    (xdc_Char)0x6f,  /* [2719] */
    (xdc_Char)0x54,  /* [2720] */
    (xdc_Char)0x69,  /* [2721] */
    (xdc_Char)0x6d,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x6f,  /* [2724] */
    (xdc_Char)0x75,  /* [2725] */
    (xdc_Char)0x74,  /* [2726] */
    (xdc_Char)0x3a,  /* [2727] */
    (xdc_Char)0x20,  /* [2728] */
    (xdc_Char)0x54,  /* [2729] */
    (xdc_Char)0x69,  /* [2730] */
    (xdc_Char)0x6d,  /* [2731] */
    (xdc_Char)0x65,  /* [2732] */
    (xdc_Char)0x6f,  /* [2733] */
    (xdc_Char)0x75,  /* [2734] */
    (xdc_Char)0x74,  /* [2735] */
    (xdc_Char)0x20,  /* [2736] */
    (xdc_Char)0x76,  /* [2737] */
    (xdc_Char)0x61,  /* [2738] */
    (xdc_Char)0x6c,  /* [2739] */
    (xdc_Char)0x75,  /* [2740] */
    (xdc_Char)0x65,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x61,  /* [2743] */
    (xdc_Char)0x6e,  /* [2744] */
    (xdc_Char)0x6e,  /* [2745] */
    (xdc_Char)0x6f,  /* [2746] */
    (xdc_Char)0x74,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x62,  /* [2749] */
    (xdc_Char)0x65,  /* [2750] */
    (xdc_Char)0x20,  /* [2751] */
    (xdc_Char)0x7a,  /* [2752] */
    (xdc_Char)0x65,  /* [2753] */
    (xdc_Char)0x72,  /* [2754] */
    (xdc_Char)0x6f,  /* [2755] */
    (xdc_Char)0x0,  /* [2756] */
    (xdc_Char)0x41,  /* [2757] */
    (xdc_Char)0x5f,  /* [2758] */
    (xdc_Char)0x69,  /* [2759] */
    (xdc_Char)0x6e,  /* [2760] */
    (xdc_Char)0x76,  /* [2761] */
    (xdc_Char)0x61,  /* [2762] */
    (xdc_Char)0x6c,  /* [2763] */
    (xdc_Char)0x69,  /* [2764] */
    (xdc_Char)0x64,  /* [2765] */
    (xdc_Char)0x4b,  /* [2766] */
    (xdc_Char)0x65,  /* [2767] */
    (xdc_Char)0x79,  /* [2768] */
    (xdc_Char)0x3a,  /* [2769] */
    (xdc_Char)0x20,  /* [2770] */
    (xdc_Char)0x74,  /* [2771] */
    (xdc_Char)0x68,  /* [2772] */
    (xdc_Char)0x65,  /* [2773] */
    (xdc_Char)0x20,  /* [2774] */
    (xdc_Char)0x6b,  /* [2775] */
    (xdc_Char)0x65,  /* [2776] */
    (xdc_Char)0x79,  /* [2777] */
    (xdc_Char)0x20,  /* [2778] */
    (xdc_Char)0x6d,  /* [2779] */
    (xdc_Char)0x75,  /* [2780] */
    (xdc_Char)0x73,  /* [2781] */
    (xdc_Char)0x74,  /* [2782] */
    (xdc_Char)0x20,  /* [2783] */
    (xdc_Char)0x62,  /* [2784] */
    (xdc_Char)0x65,  /* [2785] */
    (xdc_Char)0x20,  /* [2786] */
    (xdc_Char)0x73,  /* [2787] */
    (xdc_Char)0x65,  /* [2788] */
    (xdc_Char)0x74,  /* [2789] */
    (xdc_Char)0x20,  /* [2790] */
    (xdc_Char)0x74,  /* [2791] */
    (xdc_Char)0x6f,  /* [2792] */
    (xdc_Char)0x20,  /* [2793] */
    (xdc_Char)0x61,  /* [2794] */
    (xdc_Char)0x20,  /* [2795] */
    (xdc_Char)0x6e,  /* [2796] */
    (xdc_Char)0x6f,  /* [2797] */
    (xdc_Char)0x6e,  /* [2798] */
    (xdc_Char)0x2d,  /* [2799] */
    (xdc_Char)0x64,  /* [2800] */
    (xdc_Char)0x65,  /* [2801] */
    (xdc_Char)0x66,  /* [2802] */
    (xdc_Char)0x61,  /* [2803] */
    (xdc_Char)0x75,  /* [2804] */
    (xdc_Char)0x6c,  /* [2805] */
    (xdc_Char)0x74,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x76,  /* [2808] */
    (xdc_Char)0x61,  /* [2809] */
    (xdc_Char)0x6c,  /* [2810] */
    (xdc_Char)0x75,  /* [2811] */
    (xdc_Char)0x65,  /* [2812] */
    (xdc_Char)0x0,  /* [2813] */
    (xdc_Char)0x41,  /* [2814] */
    (xdc_Char)0x5f,  /* [2815] */
    (xdc_Char)0x6e,  /* [2816] */
    (xdc_Char)0x75,  /* [2817] */
    (xdc_Char)0x6c,  /* [2818] */
    (xdc_Char)0x6c,  /* [2819] */
    (xdc_Char)0x48,  /* [2820] */
    (xdc_Char)0x61,  /* [2821] */
    (xdc_Char)0x6e,  /* [2822] */
    (xdc_Char)0x64,  /* [2823] */
    (xdc_Char)0x6c,  /* [2824] */
    (xdc_Char)0x65,  /* [2825] */
    (xdc_Char)0x3a,  /* [2826] */
    (xdc_Char)0x20,  /* [2827] */
    (xdc_Char)0x4e,  /* [2828] */
    (xdc_Char)0x75,  /* [2829] */
    (xdc_Char)0x6c,  /* [2830] */
    (xdc_Char)0x6c,  /* [2831] */
    (xdc_Char)0x20,  /* [2832] */
    (xdc_Char)0x68,  /* [2833] */
    (xdc_Char)0x61,  /* [2834] */
    (xdc_Char)0x6e,  /* [2835] */
    (xdc_Char)0x64,  /* [2836] */
    (xdc_Char)0x6c,  /* [2837] */
    (xdc_Char)0x65,  /* [2838] */
    (xdc_Char)0x20,  /* [2839] */
    (xdc_Char)0x70,  /* [2840] */
    (xdc_Char)0x61,  /* [2841] */
    (xdc_Char)0x73,  /* [2842] */
    (xdc_Char)0x73,  /* [2843] */
    (xdc_Char)0x65,  /* [2844] */
    (xdc_Char)0x64,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x74,  /* [2847] */
    (xdc_Char)0x6f,  /* [2848] */
    (xdc_Char)0x20,  /* [2849] */
    (xdc_Char)0x63,  /* [2850] */
    (xdc_Char)0x72,  /* [2851] */
    (xdc_Char)0x65,  /* [2852] */
    (xdc_Char)0x61,  /* [2853] */
    (xdc_Char)0x74,  /* [2854] */
    (xdc_Char)0x65,  /* [2855] */
    (xdc_Char)0x0,  /* [2856] */
    (xdc_Char)0x41,  /* [2857] */
    (xdc_Char)0x5f,  /* [2858] */
    (xdc_Char)0x69,  /* [2859] */
    (xdc_Char)0x70,  /* [2860] */
    (xdc_Char)0x63,  /* [2861] */
    (xdc_Char)0x46,  /* [2862] */
    (xdc_Char)0x61,  /* [2863] */
    (xdc_Char)0x69,  /* [2864] */
    (xdc_Char)0x6c,  /* [2865] */
    (xdc_Char)0x65,  /* [2866] */
    (xdc_Char)0x64,  /* [2867] */
    (xdc_Char)0x3a,  /* [2868] */
    (xdc_Char)0x20,  /* [2869] */
    (xdc_Char)0x55,  /* [2870] */
    (xdc_Char)0x6e,  /* [2871] */
    (xdc_Char)0x65,  /* [2872] */
    (xdc_Char)0x78,  /* [2873] */
    (xdc_Char)0x70,  /* [2874] */
    (xdc_Char)0x65,  /* [2875] */
    (xdc_Char)0x63,  /* [2876] */
    (xdc_Char)0x74,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x64,  /* [2879] */
    (xdc_Char)0x20,  /* [2880] */
    (xdc_Char)0x4d,  /* [2881] */
    (xdc_Char)0x65,  /* [2882] */
    (xdc_Char)0x73,  /* [2883] */
    (xdc_Char)0x73,  /* [2884] */
    (xdc_Char)0x61,  /* [2885] */
    (xdc_Char)0x67,  /* [2886] */
    (xdc_Char)0x65,  /* [2887] */
    (xdc_Char)0x51,  /* [2888] */
    (xdc_Char)0x20,  /* [2889] */
    (xdc_Char)0x66,  /* [2890] */
    (xdc_Char)0x61,  /* [2891] */
    (xdc_Char)0x69,  /* [2892] */
    (xdc_Char)0x6c,  /* [2893] */
    (xdc_Char)0x65,  /* [2894] */
    (xdc_Char)0x64,  /* [2895] */
    (xdc_Char)0x0,  /* [2896] */
    (xdc_Char)0x41,  /* [2897] */
    (xdc_Char)0x5f,  /* [2898] */
    (xdc_Char)0x69,  /* [2899] */
    (xdc_Char)0x6e,  /* [2900] */
    (xdc_Char)0x76,  /* [2901] */
    (xdc_Char)0x61,  /* [2902] */
    (xdc_Char)0x6c,  /* [2903] */
    (xdc_Char)0x69,  /* [2904] */
    (xdc_Char)0x64,  /* [2905] */
    (xdc_Char)0x48,  /* [2906] */
    (xdc_Char)0x64,  /* [2907] */
    (xdc_Char)0x72,  /* [2908] */
    (xdc_Char)0x54,  /* [2909] */
    (xdc_Char)0x79,  /* [2910] */
    (xdc_Char)0x70,  /* [2911] */
    (xdc_Char)0x65,  /* [2912] */
    (xdc_Char)0x3a,  /* [2913] */
    (xdc_Char)0x20,  /* [2914] */
    (xdc_Char)0x49,  /* [2915] */
    (xdc_Char)0x6e,  /* [2916] */
    (xdc_Char)0x76,  /* [2917] */
    (xdc_Char)0x61,  /* [2918] */
    (xdc_Char)0x6c,  /* [2919] */
    (xdc_Char)0x69,  /* [2920] */
    (xdc_Char)0x64,  /* [2921] */
    (xdc_Char)0x20,  /* [2922] */
    (xdc_Char)0x48,  /* [2923] */
    (xdc_Char)0x64,  /* [2924] */
    (xdc_Char)0x72,  /* [2925] */
    (xdc_Char)0x54,  /* [2926] */
    (xdc_Char)0x79,  /* [2927] */
    (xdc_Char)0x70,  /* [2928] */
    (xdc_Char)0x65,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x73,  /* [2931] */
    (xdc_Char)0x70,  /* [2932] */
    (xdc_Char)0x65,  /* [2933] */
    (xdc_Char)0x63,  /* [2934] */
    (xdc_Char)0x69,  /* [2935] */
    (xdc_Char)0x66,  /* [2936] */
    (xdc_Char)0x69,  /* [2937] */
    (xdc_Char)0x65,  /* [2938] */
    (xdc_Char)0x64,  /* [2939] */
    (xdc_Char)0x0,  /* [2940] */
    (xdc_Char)0x41,  /* [2941] */
    (xdc_Char)0x5f,  /* [2942] */
    (xdc_Char)0x69,  /* [2943] */
    (xdc_Char)0x6e,  /* [2944] */
    (xdc_Char)0x76,  /* [2945] */
    (xdc_Char)0x61,  /* [2946] */
    (xdc_Char)0x6c,  /* [2947] */
    (xdc_Char)0x69,  /* [2948] */
    (xdc_Char)0x64,  /* [2949] */
    (xdc_Char)0x53,  /* [2950] */
    (xdc_Char)0x65,  /* [2951] */
    (xdc_Char)0x72,  /* [2952] */
    (xdc_Char)0x76,  /* [2953] */
    (xdc_Char)0x69,  /* [2954] */
    (xdc_Char)0x63,  /* [2955] */
    (xdc_Char)0x65,  /* [2956] */
    (xdc_Char)0x49,  /* [2957] */
    (xdc_Char)0x64,  /* [2958] */
    (xdc_Char)0x3a,  /* [2959] */
    (xdc_Char)0x20,  /* [2960] */
    (xdc_Char)0x53,  /* [2961] */
    (xdc_Char)0x65,  /* [2962] */
    (xdc_Char)0x72,  /* [2963] */
    (xdc_Char)0x76,  /* [2964] */
    (xdc_Char)0x69,  /* [2965] */
    (xdc_Char)0x63,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x49,  /* [2968] */
    (xdc_Char)0x64,  /* [2969] */
    (xdc_Char)0x20,  /* [2970] */
    (xdc_Char)0x6f,  /* [2971] */
    (xdc_Char)0x75,  /* [2972] */
    (xdc_Char)0x74,  /* [2973] */
    (xdc_Char)0x20,  /* [2974] */
    (xdc_Char)0x6f,  /* [2975] */
    (xdc_Char)0x66,  /* [2976] */
    (xdc_Char)0x20,  /* [2977] */
    (xdc_Char)0x72,  /* [2978] */
    (xdc_Char)0x61,  /* [2979] */
    (xdc_Char)0x6e,  /* [2980] */
    (xdc_Char)0x67,  /* [2981] */
    (xdc_Char)0x65,  /* [2982] */
    (xdc_Char)0x0,  /* [2983] */
    (xdc_Char)0x41,  /* [2984] */
    (xdc_Char)0x5f,  /* [2985] */
    (xdc_Char)0x69,  /* [2986] */
    (xdc_Char)0x6e,  /* [2987] */
    (xdc_Char)0x76,  /* [2988] */
    (xdc_Char)0x61,  /* [2989] */
    (xdc_Char)0x6c,  /* [2990] */
    (xdc_Char)0x69,  /* [2991] */
    (xdc_Char)0x64,  /* [2992] */
    (xdc_Char)0x50,  /* [2993] */
    (xdc_Char)0x72,  /* [2994] */
    (xdc_Char)0x6f,  /* [2995] */
    (xdc_Char)0x63,  /* [2996] */
    (xdc_Char)0x65,  /* [2997] */
    (xdc_Char)0x73,  /* [2998] */
    (xdc_Char)0x73,  /* [2999] */
    (xdc_Char)0x43,  /* [3000] */
    (xdc_Char)0x61,  /* [3001] */
    (xdc_Char)0x6c,  /* [3002] */
    (xdc_Char)0x6c,  /* [3003] */
    (xdc_Char)0x62,  /* [3004] */
    (xdc_Char)0x61,  /* [3005] */
    (xdc_Char)0x63,  /* [3006] */
    (xdc_Char)0x6b,  /* [3007] */
    (xdc_Char)0x46,  /* [3008] */
    (xdc_Char)0x78,  /* [3009] */
    (xdc_Char)0x6e,  /* [3010] */
    (xdc_Char)0x3a,  /* [3011] */
    (xdc_Char)0x20,  /* [3012] */
    (xdc_Char)0x43,  /* [3013] */
    (xdc_Char)0x61,  /* [3014] */
    (xdc_Char)0x6c,  /* [3015] */
    (xdc_Char)0x6c,  /* [3016] */
    (xdc_Char)0x62,  /* [3017] */
    (xdc_Char)0x61,  /* [3018] */
    (xdc_Char)0x63,  /* [3019] */
    (xdc_Char)0x6b,  /* [3020] */
    (xdc_Char)0x20,  /* [3021] */
    (xdc_Char)0x63,  /* [3022] */
    (xdc_Char)0x61,  /* [3023] */
    (xdc_Char)0x6e,  /* [3024] */
    (xdc_Char)0x6e,  /* [3025] */
    (xdc_Char)0x6f,  /* [3026] */
    (xdc_Char)0x74,  /* [3027] */
    (xdc_Char)0x20,  /* [3028] */
    (xdc_Char)0x62,  /* [3029] */
    (xdc_Char)0x65,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x4e,  /* [3032] */
    (xdc_Char)0x55,  /* [3033] */
    (xdc_Char)0x4c,  /* [3034] */
    (xdc_Char)0x4c,  /* [3035] */
    (xdc_Char)0x0,  /* [3036] */
    (xdc_Char)0x41,  /* [3037] */
    (xdc_Char)0x5f,  /* [3038] */
    (xdc_Char)0x49,  /* [3039] */
    (xdc_Char)0x70,  /* [3040] */
    (xdc_Char)0x63,  /* [3041] */
    (xdc_Char)0x4d,  /* [3042] */
    (xdc_Char)0x50,  /* [3043] */
    (xdc_Char)0x46,  /* [3044] */
    (xdc_Char)0x61,  /* [3045] */
    (xdc_Char)0x69,  /* [3046] */
    (xdc_Char)0x6c,  /* [3047] */
    (xdc_Char)0x75,  /* [3048] */
    (xdc_Char)0x72,  /* [3049] */
    (xdc_Char)0x65,  /* [3050] */
    (xdc_Char)0x3a,  /* [3051] */
    (xdc_Char)0x20,  /* [3052] */
    (xdc_Char)0x55,  /* [3053] */
    (xdc_Char)0x6e,  /* [3054] */
    (xdc_Char)0x65,  /* [3055] */
    (xdc_Char)0x78,  /* [3056] */
    (xdc_Char)0x70,  /* [3057] */
    (xdc_Char)0x65,  /* [3058] */
    (xdc_Char)0x63,  /* [3059] */
    (xdc_Char)0x74,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x64,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x66,  /* [3064] */
    (xdc_Char)0x61,  /* [3065] */
    (xdc_Char)0x69,  /* [3066] */
    (xdc_Char)0x6c,  /* [3067] */
    (xdc_Char)0x75,  /* [3068] */
    (xdc_Char)0x72,  /* [3069] */
    (xdc_Char)0x65,  /* [3070] */
    (xdc_Char)0x20,  /* [3071] */
    (xdc_Char)0x77,  /* [3072] */
    (xdc_Char)0x69,  /* [3073] */
    (xdc_Char)0x74,  /* [3074] */
    (xdc_Char)0x68,  /* [3075] */
    (xdc_Char)0x20,  /* [3076] */
    (xdc_Char)0x74,  /* [3077] */
    (xdc_Char)0x68,  /* [3078] */
    (xdc_Char)0x65,  /* [3079] */
    (xdc_Char)0x20,  /* [3080] */
    (xdc_Char)0x49,  /* [3081] */
    (xdc_Char)0x70,  /* [3082] */
    (xdc_Char)0x63,  /* [3083] */
    (xdc_Char)0x4d,  /* [3084] */
    (xdc_Char)0x50,  /* [3085] */
    (xdc_Char)0x0,  /* [3086] */
    (xdc_Char)0x4c,  /* [3087] */
    (xdc_Char)0x6f,  /* [3088] */
    (xdc_Char)0x67,  /* [3089] */
    (xdc_Char)0x67,  /* [3090] */
    (xdc_Char)0x65,  /* [3091] */
    (xdc_Char)0x72,  /* [3092] */
    (xdc_Char)0x53,  /* [3093] */
    (xdc_Char)0x74,  /* [3094] */
    (xdc_Char)0x72,  /* [3095] */
    (xdc_Char)0x65,  /* [3096] */
    (xdc_Char)0x61,  /* [3097] */
    (xdc_Char)0x6d,  /* [3098] */
    (xdc_Char)0x65,  /* [3099] */
    (xdc_Char)0x72,  /* [3100] */
    (xdc_Char)0x32,  /* [3101] */
    (xdc_Char)0x5f,  /* [3102] */
    (xdc_Char)0x63,  /* [3103] */
    (xdc_Char)0x72,  /* [3104] */
    (xdc_Char)0x65,  /* [3105] */
    (xdc_Char)0x61,  /* [3106] */
    (xdc_Char)0x74,  /* [3107] */
    (xdc_Char)0x65,  /* [3108] */
    (xdc_Char)0x27,  /* [3109] */
    (xdc_Char)0x73,  /* [3110] */
    (xdc_Char)0x20,  /* [3111] */
    (xdc_Char)0x62,  /* [3112] */
    (xdc_Char)0x75,  /* [3113] */
    (xdc_Char)0x66,  /* [3114] */
    (xdc_Char)0x66,  /* [3115] */
    (xdc_Char)0x65,  /* [3116] */
    (xdc_Char)0x72,  /* [3117] */
    (xdc_Char)0x20,  /* [3118] */
    (xdc_Char)0x72,  /* [3119] */
    (xdc_Char)0x65,  /* [3120] */
    (xdc_Char)0x74,  /* [3121] */
    (xdc_Char)0x75,  /* [3122] */
    (xdc_Char)0x72,  /* [3123] */
    (xdc_Char)0x6e,  /* [3124] */
    (xdc_Char)0x65,  /* [3125] */
    (xdc_Char)0x64,  /* [3126] */
    (xdc_Char)0x20,  /* [3127] */
    (xdc_Char)0x62,  /* [3128] */
    (xdc_Char)0x79,  /* [3129] */
    (xdc_Char)0x20,  /* [3130] */
    (xdc_Char)0x70,  /* [3131] */
    (xdc_Char)0x72,  /* [3132] */
    (xdc_Char)0x69,  /* [3133] */
    (xdc_Char)0x6d,  /* [3134] */
    (xdc_Char)0x65,  /* [3135] */
    (xdc_Char)0x46,  /* [3136] */
    (xdc_Char)0x78,  /* [3137] */
    (xdc_Char)0x6e,  /* [3138] */
    (xdc_Char)0x20,  /* [3139] */
    (xdc_Char)0x69,  /* [3140] */
    (xdc_Char)0x73,  /* [3141] */
    (xdc_Char)0x20,  /* [3142] */
    (xdc_Char)0x4e,  /* [3143] */
    (xdc_Char)0x55,  /* [3144] */
    (xdc_Char)0x4c,  /* [3145] */
    (xdc_Char)0x4c,  /* [3146] */
    (xdc_Char)0x0,  /* [3147] */
    (xdc_Char)0x41,  /* [3148] */
    (xdc_Char)0x5f,  /* [3149] */
    (xdc_Char)0x62,  /* [3150] */
    (xdc_Char)0x61,  /* [3151] */
    (xdc_Char)0x64,  /* [3152] */
    (xdc_Char)0x43,  /* [3153] */
    (xdc_Char)0x6f,  /* [3154] */
    (xdc_Char)0x6e,  /* [3155] */
    (xdc_Char)0x74,  /* [3156] */
    (xdc_Char)0x65,  /* [3157] */
    (xdc_Char)0x78,  /* [3158] */
    (xdc_Char)0x74,  /* [3159] */
    (xdc_Char)0x3a,  /* [3160] */
    (xdc_Char)0x20,  /* [3161] */
    (xdc_Char)0x62,  /* [3162] */
    (xdc_Char)0x61,  /* [3163] */
    (xdc_Char)0x64,  /* [3164] */
    (xdc_Char)0x20,  /* [3165] */
    (xdc_Char)0x63,  /* [3166] */
    (xdc_Char)0x61,  /* [3167] */
    (xdc_Char)0x6c,  /* [3168] */
    (xdc_Char)0x6c,  /* [3169] */
    (xdc_Char)0x69,  /* [3170] */
    (xdc_Char)0x6e,  /* [3171] */
    (xdc_Char)0x67,  /* [3172] */
    (xdc_Char)0x20,  /* [3173] */
    (xdc_Char)0x63,  /* [3174] */
    (xdc_Char)0x6f,  /* [3175] */
    (xdc_Char)0x6e,  /* [3176] */
    (xdc_Char)0x74,  /* [3177] */
    (xdc_Char)0x65,  /* [3178] */
    (xdc_Char)0x78,  /* [3179] */
    (xdc_Char)0x74,  /* [3180] */
    (xdc_Char)0x2e,  /* [3181] */
    (xdc_Char)0x20,  /* [3182] */
    (xdc_Char)0x4d,  /* [3183] */
    (xdc_Char)0x61,  /* [3184] */
    (xdc_Char)0x79,  /* [3185] */
    (xdc_Char)0x20,  /* [3186] */
    (xdc_Char)0x6e,  /* [3187] */
    (xdc_Char)0x6f,  /* [3188] */
    (xdc_Char)0x74,  /* [3189] */
    (xdc_Char)0x20,  /* [3190] */
    (xdc_Char)0x62,  /* [3191] */
    (xdc_Char)0x65,  /* [3192] */
    (xdc_Char)0x20,  /* [3193] */
    (xdc_Char)0x65,  /* [3194] */
    (xdc_Char)0x6e,  /* [3195] */
    (xdc_Char)0x74,  /* [3196] */
    (xdc_Char)0x65,  /* [3197] */
    (xdc_Char)0x72,  /* [3198] */
    (xdc_Char)0x65,  /* [3199] */
    (xdc_Char)0x64,  /* [3200] */
    (xdc_Char)0x20,  /* [3201] */
    (xdc_Char)0x66,  /* [3202] */
    (xdc_Char)0x72,  /* [3203] */
    (xdc_Char)0x6f,  /* [3204] */
    (xdc_Char)0x6d,  /* [3205] */
    (xdc_Char)0x20,  /* [3206] */
    (xdc_Char)0x61,  /* [3207] */
    (xdc_Char)0x20,  /* [3208] */
    (xdc_Char)0x68,  /* [3209] */
    (xdc_Char)0x61,  /* [3210] */
    (xdc_Char)0x72,  /* [3211] */
    (xdc_Char)0x64,  /* [3212] */
    (xdc_Char)0x77,  /* [3213] */
    (xdc_Char)0x61,  /* [3214] */
    (xdc_Char)0x72,  /* [3215] */
    (xdc_Char)0x65,  /* [3216] */
    (xdc_Char)0x20,  /* [3217] */
    (xdc_Char)0x69,  /* [3218] */
    (xdc_Char)0x6e,  /* [3219] */
    (xdc_Char)0x74,  /* [3220] */
    (xdc_Char)0x65,  /* [3221] */
    (xdc_Char)0x72,  /* [3222] */
    (xdc_Char)0x72,  /* [3223] */
    (xdc_Char)0x75,  /* [3224] */
    (xdc_Char)0x70,  /* [3225] */
    (xdc_Char)0x74,  /* [3226] */
    (xdc_Char)0x20,  /* [3227] */
    (xdc_Char)0x74,  /* [3228] */
    (xdc_Char)0x68,  /* [3229] */
    (xdc_Char)0x72,  /* [3230] */
    (xdc_Char)0x65,  /* [3231] */
    (xdc_Char)0x61,  /* [3232] */
    (xdc_Char)0x64,  /* [3233] */
    (xdc_Char)0x2e,  /* [3234] */
    (xdc_Char)0x0,  /* [3235] */
    (xdc_Char)0x41,  /* [3236] */
    (xdc_Char)0x5f,  /* [3237] */
    (xdc_Char)0x62,  /* [3238] */
    (xdc_Char)0x61,  /* [3239] */
    (xdc_Char)0x64,  /* [3240] */
    (xdc_Char)0x43,  /* [3241] */
    (xdc_Char)0x6f,  /* [3242] */
    (xdc_Char)0x6e,  /* [3243] */
    (xdc_Char)0x74,  /* [3244] */
    (xdc_Char)0x65,  /* [3245] */
    (xdc_Char)0x78,  /* [3246] */
    (xdc_Char)0x74,  /* [3247] */
    (xdc_Char)0x3a,  /* [3248] */
    (xdc_Char)0x20,  /* [3249] */
    (xdc_Char)0x62,  /* [3250] */
    (xdc_Char)0x61,  /* [3251] */
    (xdc_Char)0x64,  /* [3252] */
    (xdc_Char)0x20,  /* [3253] */
    (xdc_Char)0x63,  /* [3254] */
    (xdc_Char)0x61,  /* [3255] */
    (xdc_Char)0x6c,  /* [3256] */
    (xdc_Char)0x6c,  /* [3257] */
    (xdc_Char)0x69,  /* [3258] */
    (xdc_Char)0x6e,  /* [3259] */
    (xdc_Char)0x67,  /* [3260] */
    (xdc_Char)0x20,  /* [3261] */
    (xdc_Char)0x63,  /* [3262] */
    (xdc_Char)0x6f,  /* [3263] */
    (xdc_Char)0x6e,  /* [3264] */
    (xdc_Char)0x74,  /* [3265] */
    (xdc_Char)0x65,  /* [3266] */
    (xdc_Char)0x78,  /* [3267] */
    (xdc_Char)0x74,  /* [3268] */
    (xdc_Char)0x2e,  /* [3269] */
    (xdc_Char)0x20,  /* [3270] */
    (xdc_Char)0x4d,  /* [3271] */
    (xdc_Char)0x61,  /* [3272] */
    (xdc_Char)0x79,  /* [3273] */
    (xdc_Char)0x20,  /* [3274] */
    (xdc_Char)0x6e,  /* [3275] */
    (xdc_Char)0x6f,  /* [3276] */
    (xdc_Char)0x74,  /* [3277] */
    (xdc_Char)0x20,  /* [3278] */
    (xdc_Char)0x62,  /* [3279] */
    (xdc_Char)0x65,  /* [3280] */
    (xdc_Char)0x20,  /* [3281] */
    (xdc_Char)0x65,  /* [3282] */
    (xdc_Char)0x6e,  /* [3283] */
    (xdc_Char)0x74,  /* [3284] */
    (xdc_Char)0x65,  /* [3285] */
    (xdc_Char)0x72,  /* [3286] */
    (xdc_Char)0x65,  /* [3287] */
    (xdc_Char)0x64,  /* [3288] */
    (xdc_Char)0x20,  /* [3289] */
    (xdc_Char)0x66,  /* [3290] */
    (xdc_Char)0x72,  /* [3291] */
    (xdc_Char)0x6f,  /* [3292] */
    (xdc_Char)0x6d,  /* [3293] */
    (xdc_Char)0x20,  /* [3294] */
    (xdc_Char)0x61,  /* [3295] */
    (xdc_Char)0x20,  /* [3296] */
    (xdc_Char)0x73,  /* [3297] */
    (xdc_Char)0x6f,  /* [3298] */
    (xdc_Char)0x66,  /* [3299] */
    (xdc_Char)0x74,  /* [3300] */
    (xdc_Char)0x77,  /* [3301] */
    (xdc_Char)0x61,  /* [3302] */
    (xdc_Char)0x72,  /* [3303] */
    (xdc_Char)0x65,  /* [3304] */
    (xdc_Char)0x20,  /* [3305] */
    (xdc_Char)0x6f,  /* [3306] */
    (xdc_Char)0x72,  /* [3307] */
    (xdc_Char)0x20,  /* [3308] */
    (xdc_Char)0x68,  /* [3309] */
    (xdc_Char)0x61,  /* [3310] */
    (xdc_Char)0x72,  /* [3311] */
    (xdc_Char)0x64,  /* [3312] */
    (xdc_Char)0x77,  /* [3313] */
    (xdc_Char)0x61,  /* [3314] */
    (xdc_Char)0x72,  /* [3315] */
    (xdc_Char)0x65,  /* [3316] */
    (xdc_Char)0x20,  /* [3317] */
    (xdc_Char)0x69,  /* [3318] */
    (xdc_Char)0x6e,  /* [3319] */
    (xdc_Char)0x74,  /* [3320] */
    (xdc_Char)0x65,  /* [3321] */
    (xdc_Char)0x72,  /* [3322] */
    (xdc_Char)0x72,  /* [3323] */
    (xdc_Char)0x75,  /* [3324] */
    (xdc_Char)0x70,  /* [3325] */
    (xdc_Char)0x74,  /* [3326] */
    (xdc_Char)0x20,  /* [3327] */
    (xdc_Char)0x74,  /* [3328] */
    (xdc_Char)0x68,  /* [3329] */
    (xdc_Char)0x72,  /* [3330] */
    (xdc_Char)0x65,  /* [3331] */
    (xdc_Char)0x61,  /* [3332] */
    (xdc_Char)0x64,  /* [3333] */
    (xdc_Char)0x2e,  /* [3334] */
    (xdc_Char)0x0,  /* [3335] */
    (xdc_Char)0x41,  /* [3336] */
    (xdc_Char)0x5f,  /* [3337] */
    (xdc_Char)0x62,  /* [3338] */
    (xdc_Char)0x61,  /* [3339] */
    (xdc_Char)0x64,  /* [3340] */
    (xdc_Char)0x43,  /* [3341] */
    (xdc_Char)0x6f,  /* [3342] */
    (xdc_Char)0x6e,  /* [3343] */
    (xdc_Char)0x74,  /* [3344] */
    (xdc_Char)0x65,  /* [3345] */
    (xdc_Char)0x78,  /* [3346] */
    (xdc_Char)0x74,  /* [3347] */
    (xdc_Char)0x3a,  /* [3348] */
    (xdc_Char)0x20,  /* [3349] */
    (xdc_Char)0x62,  /* [3350] */
    (xdc_Char)0x61,  /* [3351] */
    (xdc_Char)0x64,  /* [3352] */
    (xdc_Char)0x20,  /* [3353] */
    (xdc_Char)0x63,  /* [3354] */
    (xdc_Char)0x61,  /* [3355] */
    (xdc_Char)0x6c,  /* [3356] */
    (xdc_Char)0x6c,  /* [3357] */
    (xdc_Char)0x69,  /* [3358] */
    (xdc_Char)0x6e,  /* [3359] */
    (xdc_Char)0x67,  /* [3360] */
    (xdc_Char)0x20,  /* [3361] */
    (xdc_Char)0x63,  /* [3362] */
    (xdc_Char)0x6f,  /* [3363] */
    (xdc_Char)0x6e,  /* [3364] */
    (xdc_Char)0x74,  /* [3365] */
    (xdc_Char)0x65,  /* [3366] */
    (xdc_Char)0x78,  /* [3367] */
    (xdc_Char)0x74,  /* [3368] */
    (xdc_Char)0x2e,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x53,  /* [3371] */
    (xdc_Char)0x65,  /* [3372] */
    (xdc_Char)0x65,  /* [3373] */
    (xdc_Char)0x20,  /* [3374] */
    (xdc_Char)0x47,  /* [3375] */
    (xdc_Char)0x61,  /* [3376] */
    (xdc_Char)0x74,  /* [3377] */
    (xdc_Char)0x65,  /* [3378] */
    (xdc_Char)0x4d,  /* [3379] */
    (xdc_Char)0x75,  /* [3380] */
    (xdc_Char)0x74,  /* [3381] */
    (xdc_Char)0x65,  /* [3382] */
    (xdc_Char)0x78,  /* [3383] */
    (xdc_Char)0x50,  /* [3384] */
    (xdc_Char)0x72,  /* [3385] */
    (xdc_Char)0x69,  /* [3386] */
    (xdc_Char)0x20,  /* [3387] */
    (xdc_Char)0x41,  /* [3388] */
    (xdc_Char)0x50,  /* [3389] */
    (xdc_Char)0x49,  /* [3390] */
    (xdc_Char)0x20,  /* [3391] */
    (xdc_Char)0x64,  /* [3392] */
    (xdc_Char)0x6f,  /* [3393] */
    (xdc_Char)0x63,  /* [3394] */
    (xdc_Char)0x20,  /* [3395] */
    (xdc_Char)0x66,  /* [3396] */
    (xdc_Char)0x6f,  /* [3397] */
    (xdc_Char)0x72,  /* [3398] */
    (xdc_Char)0x20,  /* [3399] */
    (xdc_Char)0x64,  /* [3400] */
    (xdc_Char)0x65,  /* [3401] */
    (xdc_Char)0x74,  /* [3402] */
    (xdc_Char)0x61,  /* [3403] */
    (xdc_Char)0x69,  /* [3404] */
    (xdc_Char)0x6c,  /* [3405] */
    (xdc_Char)0x73,  /* [3406] */
    (xdc_Char)0x2e,  /* [3407] */
    (xdc_Char)0x0,  /* [3408] */
    (xdc_Char)0x41,  /* [3409] */
    (xdc_Char)0x5f,  /* [3410] */
    (xdc_Char)0x65,  /* [3411] */
    (xdc_Char)0x6e,  /* [3412] */
    (xdc_Char)0x74,  /* [3413] */
    (xdc_Char)0x65,  /* [3414] */
    (xdc_Char)0x72,  /* [3415] */
    (xdc_Char)0x54,  /* [3416] */
    (xdc_Char)0x61,  /* [3417] */
    (xdc_Char)0x73,  /* [3418] */
    (xdc_Char)0x6b,  /* [3419] */
    (xdc_Char)0x44,  /* [3420] */
    (xdc_Char)0x69,  /* [3421] */
    (xdc_Char)0x73,  /* [3422] */
    (xdc_Char)0x61,  /* [3423] */
    (xdc_Char)0x62,  /* [3424] */
    (xdc_Char)0x6c,  /* [3425] */
    (xdc_Char)0x65,  /* [3426] */
    (xdc_Char)0x64,  /* [3427] */
    (xdc_Char)0x3a,  /* [3428] */
    (xdc_Char)0x20,  /* [3429] */
    (xdc_Char)0x43,  /* [3430] */
    (xdc_Char)0x61,  /* [3431] */
    (xdc_Char)0x6e,  /* [3432] */
    (xdc_Char)0x6e,  /* [3433] */
    (xdc_Char)0x6f,  /* [3434] */
    (xdc_Char)0x74,  /* [3435] */
    (xdc_Char)0x20,  /* [3436] */
    (xdc_Char)0x63,  /* [3437] */
    (xdc_Char)0x61,  /* [3438] */
    (xdc_Char)0x6c,  /* [3439] */
    (xdc_Char)0x6c,  /* [3440] */
    (xdc_Char)0x20,  /* [3441] */
    (xdc_Char)0x47,  /* [3442] */
    (xdc_Char)0x61,  /* [3443] */
    (xdc_Char)0x74,  /* [3444] */
    (xdc_Char)0x65,  /* [3445] */
    (xdc_Char)0x4d,  /* [3446] */
    (xdc_Char)0x75,  /* [3447] */
    (xdc_Char)0x74,  /* [3448] */
    (xdc_Char)0x65,  /* [3449] */
    (xdc_Char)0x78,  /* [3450] */
    (xdc_Char)0x50,  /* [3451] */
    (xdc_Char)0x72,  /* [3452] */
    (xdc_Char)0x69,  /* [3453] */
    (xdc_Char)0x5f,  /* [3454] */
    (xdc_Char)0x65,  /* [3455] */
    (xdc_Char)0x6e,  /* [3456] */
    (xdc_Char)0x74,  /* [3457] */
    (xdc_Char)0x65,  /* [3458] */
    (xdc_Char)0x72,  /* [3459] */
    (xdc_Char)0x28,  /* [3460] */
    (xdc_Char)0x29,  /* [3461] */
    (xdc_Char)0x20,  /* [3462] */
    (xdc_Char)0x77,  /* [3463] */
    (xdc_Char)0x68,  /* [3464] */
    (xdc_Char)0x69,  /* [3465] */
    (xdc_Char)0x6c,  /* [3466] */
    (xdc_Char)0x65,  /* [3467] */
    (xdc_Char)0x20,  /* [3468] */
    (xdc_Char)0x74,  /* [3469] */
    (xdc_Char)0x68,  /* [3470] */
    (xdc_Char)0x65,  /* [3471] */
    (xdc_Char)0x20,  /* [3472] */
    (xdc_Char)0x54,  /* [3473] */
    (xdc_Char)0x61,  /* [3474] */
    (xdc_Char)0x73,  /* [3475] */
    (xdc_Char)0x6b,  /* [3476] */
    (xdc_Char)0x20,  /* [3477] */
    (xdc_Char)0x6f,  /* [3478] */
    (xdc_Char)0x72,  /* [3479] */
    (xdc_Char)0x20,  /* [3480] */
    (xdc_Char)0x53,  /* [3481] */
    (xdc_Char)0x77,  /* [3482] */
    (xdc_Char)0x69,  /* [3483] */
    (xdc_Char)0x20,  /* [3484] */
    (xdc_Char)0x73,  /* [3485] */
    (xdc_Char)0x63,  /* [3486] */
    (xdc_Char)0x68,  /* [3487] */
    (xdc_Char)0x65,  /* [3488] */
    (xdc_Char)0x64,  /* [3489] */
    (xdc_Char)0x75,  /* [3490] */
    (xdc_Char)0x6c,  /* [3491] */
    (xdc_Char)0x65,  /* [3492] */
    (xdc_Char)0x72,  /* [3493] */
    (xdc_Char)0x20,  /* [3494] */
    (xdc_Char)0x69,  /* [3495] */
    (xdc_Char)0x73,  /* [3496] */
    (xdc_Char)0x20,  /* [3497] */
    (xdc_Char)0x64,  /* [3498] */
    (xdc_Char)0x69,  /* [3499] */
    (xdc_Char)0x73,  /* [3500] */
    (xdc_Char)0x61,  /* [3501] */
    (xdc_Char)0x62,  /* [3502] */
    (xdc_Char)0x6c,  /* [3503] */
    (xdc_Char)0x65,  /* [3504] */
    (xdc_Char)0x64,  /* [3505] */
    (xdc_Char)0x2e,  /* [3506] */
    (xdc_Char)0x0,  /* [3507] */
    (xdc_Char)0x41,  /* [3508] */
    (xdc_Char)0x5f,  /* [3509] */
    (xdc_Char)0x62,  /* [3510] */
    (xdc_Char)0x61,  /* [3511] */
    (xdc_Char)0x64,  /* [3512] */
    (xdc_Char)0x43,  /* [3513] */
    (xdc_Char)0x6f,  /* [3514] */
    (xdc_Char)0x6e,  /* [3515] */
    (xdc_Char)0x74,  /* [3516] */
    (xdc_Char)0x65,  /* [3517] */
    (xdc_Char)0x78,  /* [3518] */
    (xdc_Char)0x74,  /* [3519] */
    (xdc_Char)0x3a,  /* [3520] */
    (xdc_Char)0x20,  /* [3521] */
    (xdc_Char)0x62,  /* [3522] */
    (xdc_Char)0x61,  /* [3523] */
    (xdc_Char)0x64,  /* [3524] */
    (xdc_Char)0x20,  /* [3525] */
    (xdc_Char)0x63,  /* [3526] */
    (xdc_Char)0x61,  /* [3527] */
    (xdc_Char)0x6c,  /* [3528] */
    (xdc_Char)0x6c,  /* [3529] */
    (xdc_Char)0x69,  /* [3530] */
    (xdc_Char)0x6e,  /* [3531] */
    (xdc_Char)0x67,  /* [3532] */
    (xdc_Char)0x20,  /* [3533] */
    (xdc_Char)0x63,  /* [3534] */
    (xdc_Char)0x6f,  /* [3535] */
    (xdc_Char)0x6e,  /* [3536] */
    (xdc_Char)0x74,  /* [3537] */
    (xdc_Char)0x65,  /* [3538] */
    (xdc_Char)0x78,  /* [3539] */
    (xdc_Char)0x74,  /* [3540] */
    (xdc_Char)0x2e,  /* [3541] */
    (xdc_Char)0x20,  /* [3542] */
    (xdc_Char)0x53,  /* [3543] */
    (xdc_Char)0x65,  /* [3544] */
    (xdc_Char)0x65,  /* [3545] */
    (xdc_Char)0x20,  /* [3546] */
    (xdc_Char)0x47,  /* [3547] */
    (xdc_Char)0x61,  /* [3548] */
    (xdc_Char)0x74,  /* [3549] */
    (xdc_Char)0x65,  /* [3550] */
    (xdc_Char)0x4d,  /* [3551] */
    (xdc_Char)0x75,  /* [3552] */
    (xdc_Char)0x74,  /* [3553] */
    (xdc_Char)0x65,  /* [3554] */
    (xdc_Char)0x78,  /* [3555] */
    (xdc_Char)0x20,  /* [3556] */
    (xdc_Char)0x41,  /* [3557] */
    (xdc_Char)0x50,  /* [3558] */
    (xdc_Char)0x49,  /* [3559] */
    (xdc_Char)0x20,  /* [3560] */
    (xdc_Char)0x64,  /* [3561] */
    (xdc_Char)0x6f,  /* [3562] */
    (xdc_Char)0x63,  /* [3563] */
    (xdc_Char)0x20,  /* [3564] */
    (xdc_Char)0x66,  /* [3565] */
    (xdc_Char)0x6f,  /* [3566] */
    (xdc_Char)0x72,  /* [3567] */
    (xdc_Char)0x20,  /* [3568] */
    (xdc_Char)0x64,  /* [3569] */
    (xdc_Char)0x65,  /* [3570] */
    (xdc_Char)0x74,  /* [3571] */
    (xdc_Char)0x61,  /* [3572] */
    (xdc_Char)0x69,  /* [3573] */
    (xdc_Char)0x6c,  /* [3574] */
    (xdc_Char)0x73,  /* [3575] */
    (xdc_Char)0x2e,  /* [3576] */
    (xdc_Char)0x0,  /* [3577] */
    (xdc_Char)0x61,  /* [3578] */
    (xdc_Char)0x73,  /* [3579] */
    (xdc_Char)0x73,  /* [3580] */
    (xdc_Char)0x65,  /* [3581] */
    (xdc_Char)0x72,  /* [3582] */
    (xdc_Char)0x74,  /* [3583] */
    (xdc_Char)0x69,  /* [3584] */
    (xdc_Char)0x6f,  /* [3585] */
    (xdc_Char)0x6e,  /* [3586] */
    (xdc_Char)0x20,  /* [3587] */
    (xdc_Char)0x66,  /* [3588] */
    (xdc_Char)0x61,  /* [3589] */
    (xdc_Char)0x69,  /* [3590] */
    (xdc_Char)0x6c,  /* [3591] */
    (xdc_Char)0x75,  /* [3592] */
    (xdc_Char)0x72,  /* [3593] */
    (xdc_Char)0x65,  /* [3594] */
    (xdc_Char)0x25,  /* [3595] */
    (xdc_Char)0x73,  /* [3596] */
    (xdc_Char)0x25,  /* [3597] */
    (xdc_Char)0x73,  /* [3598] */
    (xdc_Char)0x0,  /* [3599] */
    (xdc_Char)0x25,  /* [3600] */
    (xdc_Char)0x24,  /* [3601] */
    (xdc_Char)0x53,  /* [3602] */
    (xdc_Char)0x0,  /* [3603] */
    (xdc_Char)0x6f,  /* [3604] */
    (xdc_Char)0x75,  /* [3605] */
    (xdc_Char)0x74,  /* [3606] */
    (xdc_Char)0x20,  /* [3607] */
    (xdc_Char)0x6f,  /* [3608] */
    (xdc_Char)0x66,  /* [3609] */
    (xdc_Char)0x20,  /* [3610] */
    (xdc_Char)0x6d,  /* [3611] */
    (xdc_Char)0x65,  /* [3612] */
    (xdc_Char)0x6d,  /* [3613] */
    (xdc_Char)0x6f,  /* [3614] */
    (xdc_Char)0x72,  /* [3615] */
    (xdc_Char)0x79,  /* [3616] */
    (xdc_Char)0x3a,  /* [3617] */
    (xdc_Char)0x20,  /* [3618] */
    (xdc_Char)0x68,  /* [3619] */
    (xdc_Char)0x65,  /* [3620] */
    (xdc_Char)0x61,  /* [3621] */
    (xdc_Char)0x70,  /* [3622] */
    (xdc_Char)0x3d,  /* [3623] */
    (xdc_Char)0x30,  /* [3624] */
    (xdc_Char)0x78,  /* [3625] */
    (xdc_Char)0x25,  /* [3626] */
    (xdc_Char)0x78,  /* [3627] */
    (xdc_Char)0x2c,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x73,  /* [3630] */
    (xdc_Char)0x69,  /* [3631] */
    (xdc_Char)0x7a,  /* [3632] */
    (xdc_Char)0x65,  /* [3633] */
    (xdc_Char)0x3d,  /* [3634] */
    (xdc_Char)0x25,  /* [3635] */
    (xdc_Char)0x75,  /* [3636] */
    (xdc_Char)0x0,  /* [3637] */
    (xdc_Char)0x25,  /* [3638] */
    (xdc_Char)0x73,  /* [3639] */
    (xdc_Char)0x20,  /* [3640] */
    (xdc_Char)0x30,  /* [3641] */
    (xdc_Char)0x78,  /* [3642] */
    (xdc_Char)0x25,  /* [3643] */
    (xdc_Char)0x78,  /* [3644] */
    (xdc_Char)0x0,  /* [3645] */
    (xdc_Char)0x45,  /* [3646] */
    (xdc_Char)0x5f,  /* [3647] */
    (xdc_Char)0x62,  /* [3648] */
    (xdc_Char)0x61,  /* [3649] */
    (xdc_Char)0x64,  /* [3650] */
    (xdc_Char)0x4c,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x76,  /* [3653] */
    (xdc_Char)0x65,  /* [3654] */
    (xdc_Char)0x6c,  /* [3655] */
    (xdc_Char)0x3a,  /* [3656] */
    (xdc_Char)0x20,  /* [3657] */
    (xdc_Char)0x42,  /* [3658] */
    (xdc_Char)0x61,  /* [3659] */
    (xdc_Char)0x64,  /* [3660] */
    (xdc_Char)0x20,  /* [3661] */
    (xdc_Char)0x66,  /* [3662] */
    (xdc_Char)0x69,  /* [3663] */
    (xdc_Char)0x6c,  /* [3664] */
    (xdc_Char)0x74,  /* [3665] */
    (xdc_Char)0x65,  /* [3666] */
    (xdc_Char)0x72,  /* [3667] */
    (xdc_Char)0x20,  /* [3668] */
    (xdc_Char)0x6c,  /* [3669] */
    (xdc_Char)0x65,  /* [3670] */
    (xdc_Char)0x76,  /* [3671] */
    (xdc_Char)0x65,  /* [3672] */
    (xdc_Char)0x6c,  /* [3673] */
    (xdc_Char)0x20,  /* [3674] */
    (xdc_Char)0x76,  /* [3675] */
    (xdc_Char)0x61,  /* [3676] */
    (xdc_Char)0x6c,  /* [3677] */
    (xdc_Char)0x75,  /* [3678] */
    (xdc_Char)0x65,  /* [3679] */
    (xdc_Char)0x3a,  /* [3680] */
    (xdc_Char)0x20,  /* [3681] */
    (xdc_Char)0x25,  /* [3682] */
    (xdc_Char)0x64,  /* [3683] */
    (xdc_Char)0x0,  /* [3684] */
    (xdc_Char)0x66,  /* [3685] */
    (xdc_Char)0x72,  /* [3686] */
    (xdc_Char)0x65,  /* [3687] */
    (xdc_Char)0x65,  /* [3688] */
    (xdc_Char)0x28,  /* [3689] */
    (xdc_Char)0x29,  /* [3690] */
    (xdc_Char)0x20,  /* [3691] */
    (xdc_Char)0x69,  /* [3692] */
    (xdc_Char)0x6e,  /* [3693] */
    (xdc_Char)0x76,  /* [3694] */
    (xdc_Char)0x61,  /* [3695] */
    (xdc_Char)0x6c,  /* [3696] */
    (xdc_Char)0x69,  /* [3697] */
    (xdc_Char)0x64,  /* [3698] */
    (xdc_Char)0x20,  /* [3699] */
    (xdc_Char)0x69,  /* [3700] */
    (xdc_Char)0x6e,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x67,  /* [3703] */
    (xdc_Char)0x72,  /* [3704] */
    (xdc_Char)0x6f,  /* [3705] */
    (xdc_Char)0x77,  /* [3706] */
    (xdc_Char)0x74,  /* [3707] */
    (xdc_Char)0x68,  /* [3708] */
    (xdc_Char)0x2d,  /* [3709] */
    (xdc_Char)0x6f,  /* [3710] */
    (xdc_Char)0x6e,  /* [3711] */
    (xdc_Char)0x6c,  /* [3712] */
    (xdc_Char)0x79,  /* [3713] */
    (xdc_Char)0x20,  /* [3714] */
    (xdc_Char)0x48,  /* [3715] */
    (xdc_Char)0x65,  /* [3716] */
    (xdc_Char)0x61,  /* [3717] */
    (xdc_Char)0x70,  /* [3718] */
    (xdc_Char)0x4d,  /* [3719] */
    (xdc_Char)0x69,  /* [3720] */
    (xdc_Char)0x6e,  /* [3721] */
    (xdc_Char)0x0,  /* [3722] */
    (xdc_Char)0x54,  /* [3723] */
    (xdc_Char)0x68,  /* [3724] */
    (xdc_Char)0x65,  /* [3725] */
    (xdc_Char)0x20,  /* [3726] */
    (xdc_Char)0x52,  /* [3727] */
    (xdc_Char)0x54,  /* [3728] */
    (xdc_Char)0x53,  /* [3729] */
    (xdc_Char)0x20,  /* [3730] */
    (xdc_Char)0x68,  /* [3731] */
    (xdc_Char)0x65,  /* [3732] */
    (xdc_Char)0x61,  /* [3733] */
    (xdc_Char)0x70,  /* [3734] */
    (xdc_Char)0x20,  /* [3735] */
    (xdc_Char)0x69,  /* [3736] */
    (xdc_Char)0x73,  /* [3737] */
    (xdc_Char)0x20,  /* [3738] */
    (xdc_Char)0x75,  /* [3739] */
    (xdc_Char)0x73,  /* [3740] */
    (xdc_Char)0x65,  /* [3741] */
    (xdc_Char)0x64,  /* [3742] */
    (xdc_Char)0x20,  /* [3743] */
    (xdc_Char)0x75,  /* [3744] */
    (xdc_Char)0x70,  /* [3745] */
    (xdc_Char)0x2e,  /* [3746] */
    (xdc_Char)0x20,  /* [3747] */
    (xdc_Char)0x45,  /* [3748] */
    (xdc_Char)0x78,  /* [3749] */
    (xdc_Char)0x61,  /* [3750] */
    (xdc_Char)0x6d,  /* [3751] */
    (xdc_Char)0x69,  /* [3752] */
    (xdc_Char)0x6e,  /* [3753] */
    (xdc_Char)0x65,  /* [3754] */
    (xdc_Char)0x20,  /* [3755] */
    (xdc_Char)0x50,  /* [3756] */
    (xdc_Char)0x72,  /* [3757] */
    (xdc_Char)0x6f,  /* [3758] */
    (xdc_Char)0x67,  /* [3759] */
    (xdc_Char)0x72,  /* [3760] */
    (xdc_Char)0x61,  /* [3761] */
    (xdc_Char)0x6d,  /* [3762] */
    (xdc_Char)0x2e,  /* [3763] */
    (xdc_Char)0x68,  /* [3764] */
    (xdc_Char)0x65,  /* [3765] */
    (xdc_Char)0x61,  /* [3766] */
    (xdc_Char)0x70,  /* [3767] */
    (xdc_Char)0x2e,  /* [3768] */
    (xdc_Char)0x0,  /* [3769] */
    (xdc_Char)0x45,  /* [3770] */
    (xdc_Char)0x5f,  /* [3771] */
    (xdc_Char)0x62,  /* [3772] */
    (xdc_Char)0x61,  /* [3773] */
    (xdc_Char)0x64,  /* [3774] */
    (xdc_Char)0x43,  /* [3775] */
    (xdc_Char)0x6f,  /* [3776] */
    (xdc_Char)0x6d,  /* [3777] */
    (xdc_Char)0x6d,  /* [3778] */
    (xdc_Char)0x61,  /* [3779] */
    (xdc_Char)0x6e,  /* [3780] */
    (xdc_Char)0x64,  /* [3781] */
    (xdc_Char)0x3a,  /* [3782] */
    (xdc_Char)0x20,  /* [3783] */
    (xdc_Char)0x52,  /* [3784] */
    (xdc_Char)0x65,  /* [3785] */
    (xdc_Char)0x63,  /* [3786] */
    (xdc_Char)0x65,  /* [3787] */
    (xdc_Char)0x69,  /* [3788] */
    (xdc_Char)0x76,  /* [3789] */
    (xdc_Char)0x65,  /* [3790] */
    (xdc_Char)0x64,  /* [3791] */
    (xdc_Char)0x20,  /* [3792] */
    (xdc_Char)0x69,  /* [3793] */
    (xdc_Char)0x6e,  /* [3794] */
    (xdc_Char)0x76,  /* [3795] */
    (xdc_Char)0x61,  /* [3796] */
    (xdc_Char)0x6c,  /* [3797] */
    (xdc_Char)0x69,  /* [3798] */
    (xdc_Char)0x64,  /* [3799] */
    (xdc_Char)0x20,  /* [3800] */
    (xdc_Char)0x63,  /* [3801] */
    (xdc_Char)0x6f,  /* [3802] */
    (xdc_Char)0x6d,  /* [3803] */
    (xdc_Char)0x6d,  /* [3804] */
    (xdc_Char)0x61,  /* [3805] */
    (xdc_Char)0x6e,  /* [3806] */
    (xdc_Char)0x64,  /* [3807] */
    (xdc_Char)0x2c,  /* [3808] */
    (xdc_Char)0x20,  /* [3809] */
    (xdc_Char)0x69,  /* [3810] */
    (xdc_Char)0x64,  /* [3811] */
    (xdc_Char)0x3a,  /* [3812] */
    (xdc_Char)0x20,  /* [3813] */
    (xdc_Char)0x25,  /* [3814] */
    (xdc_Char)0x64,  /* [3815] */
    (xdc_Char)0x2e,  /* [3816] */
    (xdc_Char)0x0,  /* [3817] */
    (xdc_Char)0x45,  /* [3818] */
    (xdc_Char)0x5f,  /* [3819] */
    (xdc_Char)0x73,  /* [3820] */
    (xdc_Char)0x74,  /* [3821] */
    (xdc_Char)0x61,  /* [3822] */
    (xdc_Char)0x63,  /* [3823] */
    (xdc_Char)0x6b,  /* [3824] */
    (xdc_Char)0x4f,  /* [3825] */
    (xdc_Char)0x76,  /* [3826] */
    (xdc_Char)0x65,  /* [3827] */
    (xdc_Char)0x72,  /* [3828] */
    (xdc_Char)0x66,  /* [3829] */
    (xdc_Char)0x6c,  /* [3830] */
    (xdc_Char)0x6f,  /* [3831] */
    (xdc_Char)0x77,  /* [3832] */
    (xdc_Char)0x3a,  /* [3833] */
    (xdc_Char)0x20,  /* [3834] */
    (xdc_Char)0x49,  /* [3835] */
    (xdc_Char)0x53,  /* [3836] */
    (xdc_Char)0x52,  /* [3837] */
    (xdc_Char)0x20,  /* [3838] */
    (xdc_Char)0x73,  /* [3839] */
    (xdc_Char)0x74,  /* [3840] */
    (xdc_Char)0x61,  /* [3841] */
    (xdc_Char)0x63,  /* [3842] */
    (xdc_Char)0x6b,  /* [3843] */
    (xdc_Char)0x20,  /* [3844] */
    (xdc_Char)0x6f,  /* [3845] */
    (xdc_Char)0x76,  /* [3846] */
    (xdc_Char)0x65,  /* [3847] */
    (xdc_Char)0x72,  /* [3848] */
    (xdc_Char)0x66,  /* [3849] */
    (xdc_Char)0x6c,  /* [3850] */
    (xdc_Char)0x6f,  /* [3851] */
    (xdc_Char)0x77,  /* [3852] */
    (xdc_Char)0x2e,  /* [3853] */
    (xdc_Char)0x0,  /* [3854] */
    (xdc_Char)0x45,  /* [3855] */
    (xdc_Char)0x5f,  /* [3856] */
    (xdc_Char)0x73,  /* [3857] */
    (xdc_Char)0x74,  /* [3858] */
    (xdc_Char)0x61,  /* [3859] */
    (xdc_Char)0x63,  /* [3860] */
    (xdc_Char)0x6b,  /* [3861] */
    (xdc_Char)0x4f,  /* [3862] */
    (xdc_Char)0x76,  /* [3863] */
    (xdc_Char)0x65,  /* [3864] */
    (xdc_Char)0x72,  /* [3865] */
    (xdc_Char)0x66,  /* [3866] */
    (xdc_Char)0x6c,  /* [3867] */
    (xdc_Char)0x6f,  /* [3868] */
    (xdc_Char)0x77,  /* [3869] */
    (xdc_Char)0x3a,  /* [3870] */
    (xdc_Char)0x20,  /* [3871] */
    (xdc_Char)0x54,  /* [3872] */
    (xdc_Char)0x61,  /* [3873] */
    (xdc_Char)0x73,  /* [3874] */
    (xdc_Char)0x6b,  /* [3875] */
    (xdc_Char)0x20,  /* [3876] */
    (xdc_Char)0x30,  /* [3877] */
    (xdc_Char)0x78,  /* [3878] */
    (xdc_Char)0x25,  /* [3879] */
    (xdc_Char)0x78,  /* [3880] */
    (xdc_Char)0x20,  /* [3881] */
    (xdc_Char)0x73,  /* [3882] */
    (xdc_Char)0x74,  /* [3883] */
    (xdc_Char)0x61,  /* [3884] */
    (xdc_Char)0x63,  /* [3885] */
    (xdc_Char)0x6b,  /* [3886] */
    (xdc_Char)0x20,  /* [3887] */
    (xdc_Char)0x6f,  /* [3888] */
    (xdc_Char)0x76,  /* [3889] */
    (xdc_Char)0x65,  /* [3890] */
    (xdc_Char)0x72,  /* [3891] */
    (xdc_Char)0x66,  /* [3892] */
    (xdc_Char)0x6c,  /* [3893] */
    (xdc_Char)0x6f,  /* [3894] */
    (xdc_Char)0x77,  /* [3895] */
    (xdc_Char)0x2e,  /* [3896] */
    (xdc_Char)0x0,  /* [3897] */
    (xdc_Char)0x45,  /* [3898] */
    (xdc_Char)0x5f,  /* [3899] */
    (xdc_Char)0x73,  /* [3900] */
    (xdc_Char)0x70,  /* [3901] */
    (xdc_Char)0x4f,  /* [3902] */
    (xdc_Char)0x75,  /* [3903] */
    (xdc_Char)0x74,  /* [3904] */
    (xdc_Char)0x4f,  /* [3905] */
    (xdc_Char)0x66,  /* [3906] */
    (xdc_Char)0x42,  /* [3907] */
    (xdc_Char)0x6f,  /* [3908] */
    (xdc_Char)0x75,  /* [3909] */
    (xdc_Char)0x6e,  /* [3910] */
    (xdc_Char)0x64,  /* [3911] */
    (xdc_Char)0x73,  /* [3912] */
    (xdc_Char)0x3a,  /* [3913] */
    (xdc_Char)0x20,  /* [3914] */
    (xdc_Char)0x54,  /* [3915] */
    (xdc_Char)0x61,  /* [3916] */
    (xdc_Char)0x73,  /* [3917] */
    (xdc_Char)0x6b,  /* [3918] */
    (xdc_Char)0x20,  /* [3919] */
    (xdc_Char)0x30,  /* [3920] */
    (xdc_Char)0x78,  /* [3921] */
    (xdc_Char)0x25,  /* [3922] */
    (xdc_Char)0x78,  /* [3923] */
    (xdc_Char)0x20,  /* [3924] */
    (xdc_Char)0x73,  /* [3925] */
    (xdc_Char)0x74,  /* [3926] */
    (xdc_Char)0x61,  /* [3927] */
    (xdc_Char)0x63,  /* [3928] */
    (xdc_Char)0x6b,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x65,  /* [3931] */
    (xdc_Char)0x72,  /* [3932] */
    (xdc_Char)0x72,  /* [3933] */
    (xdc_Char)0x6f,  /* [3934] */
    (xdc_Char)0x72,  /* [3935] */
    (xdc_Char)0x2c,  /* [3936] */
    (xdc_Char)0x20,  /* [3937] */
    (xdc_Char)0x53,  /* [3938] */
    (xdc_Char)0x50,  /* [3939] */
    (xdc_Char)0x20,  /* [3940] */
    (xdc_Char)0x3d,  /* [3941] */
    (xdc_Char)0x20,  /* [3942] */
    (xdc_Char)0x30,  /* [3943] */
    (xdc_Char)0x78,  /* [3944] */
    (xdc_Char)0x25,  /* [3945] */
    (xdc_Char)0x78,  /* [3946] */
    (xdc_Char)0x2e,  /* [3947] */
    (xdc_Char)0x0,  /* [3948] */
    (xdc_Char)0x45,  /* [3949] */
    (xdc_Char)0x5f,  /* [3950] */
    (xdc_Char)0x64,  /* [3951] */
    (xdc_Char)0x65,  /* [3952] */
    (xdc_Char)0x6c,  /* [3953] */
    (xdc_Char)0x65,  /* [3954] */
    (xdc_Char)0x74,  /* [3955] */
    (xdc_Char)0x65,  /* [3956] */
    (xdc_Char)0x4e,  /* [3957] */
    (xdc_Char)0x6f,  /* [3958] */
    (xdc_Char)0x74,  /* [3959] */
    (xdc_Char)0x41,  /* [3960] */
    (xdc_Char)0x6c,  /* [3961] */
    (xdc_Char)0x6c,  /* [3962] */
    (xdc_Char)0x6f,  /* [3963] */
    (xdc_Char)0x77,  /* [3964] */
    (xdc_Char)0x65,  /* [3965] */
    (xdc_Char)0x64,  /* [3966] */
    (xdc_Char)0x3a,  /* [3967] */
    (xdc_Char)0x20,  /* [3968] */
    (xdc_Char)0x54,  /* [3969] */
    (xdc_Char)0x61,  /* [3970] */
    (xdc_Char)0x73,  /* [3971] */
    (xdc_Char)0x6b,  /* [3972] */
    (xdc_Char)0x20,  /* [3973] */
    (xdc_Char)0x30,  /* [3974] */
    (xdc_Char)0x78,  /* [3975] */
    (xdc_Char)0x25,  /* [3976] */
    (xdc_Char)0x78,  /* [3977] */
    (xdc_Char)0x2e,  /* [3978] */
    (xdc_Char)0x0,  /* [3979] */
    (xdc_Char)0x45,  /* [3980] */
    (xdc_Char)0x5f,  /* [3981] */
    (xdc_Char)0x61,  /* [3982] */
    (xdc_Char)0x6c,  /* [3983] */
    (xdc_Char)0x72,  /* [3984] */
    (xdc_Char)0x65,  /* [3985] */
    (xdc_Char)0x61,  /* [3986] */
    (xdc_Char)0x64,  /* [3987] */
    (xdc_Char)0x79,  /* [3988] */
    (xdc_Char)0x44,  /* [3989] */
    (xdc_Char)0x65,  /* [3990] */
    (xdc_Char)0x66,  /* [3991] */
    (xdc_Char)0x69,  /* [3992] */
    (xdc_Char)0x6e,  /* [3993] */
    (xdc_Char)0x65,  /* [3994] */
    (xdc_Char)0x64,  /* [3995] */
    (xdc_Char)0x3a,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x48,  /* [3998] */
    (xdc_Char)0x77,  /* [3999] */
    (xdc_Char)0x69,  /* [4000] */
    (xdc_Char)0x20,  /* [4001] */
    (xdc_Char)0x61,  /* [4002] */
    (xdc_Char)0x6c,  /* [4003] */
    (xdc_Char)0x72,  /* [4004] */
    (xdc_Char)0x65,  /* [4005] */
    (xdc_Char)0x61,  /* [4006] */
    (xdc_Char)0x64,  /* [4007] */
    (xdc_Char)0x79,  /* [4008] */
    (xdc_Char)0x20,  /* [4009] */
    (xdc_Char)0x64,  /* [4010] */
    (xdc_Char)0x65,  /* [4011] */
    (xdc_Char)0x66,  /* [4012] */
    (xdc_Char)0x69,  /* [4013] */
    (xdc_Char)0x6e,  /* [4014] */
    (xdc_Char)0x65,  /* [4015] */
    (xdc_Char)0x64,  /* [4016] */
    (xdc_Char)0x3a,  /* [4017] */
    (xdc_Char)0x20,  /* [4018] */
    (xdc_Char)0x69,  /* [4019] */
    (xdc_Char)0x6e,  /* [4020] */
    (xdc_Char)0x74,  /* [4021] */
    (xdc_Char)0x72,  /* [4022] */
    (xdc_Char)0x23,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x25,  /* [4025] */
    (xdc_Char)0x64,  /* [4026] */
    (xdc_Char)0x0,  /* [4027] */
    (xdc_Char)0x45,  /* [4028] */
    (xdc_Char)0x5f,  /* [4029] */
    (xdc_Char)0x65,  /* [4030] */
    (xdc_Char)0x78,  /* [4031] */
    (xdc_Char)0x63,  /* [4032] */
    (xdc_Char)0x65,  /* [4033] */
    (xdc_Char)0x70,  /* [4034] */
    (xdc_Char)0x74,  /* [4035] */
    (xdc_Char)0x69,  /* [4036] */
    (xdc_Char)0x6f,  /* [4037] */
    (xdc_Char)0x6e,  /* [4038] */
    (xdc_Char)0x3a,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x69,  /* [4041] */
    (xdc_Char)0x64,  /* [4042] */
    (xdc_Char)0x20,  /* [4043] */
    (xdc_Char)0x3d,  /* [4044] */
    (xdc_Char)0x20,  /* [4045] */
    (xdc_Char)0x25,  /* [4046] */
    (xdc_Char)0x64,  /* [4047] */
    (xdc_Char)0x2c,  /* [4048] */
    (xdc_Char)0x20,  /* [4049] */
    (xdc_Char)0x70,  /* [4050] */
    (xdc_Char)0x63,  /* [4051] */
    (xdc_Char)0x20,  /* [4052] */
    (xdc_Char)0x3d,  /* [4053] */
    (xdc_Char)0x20,  /* [4054] */
    (xdc_Char)0x25,  /* [4055] */
    (xdc_Char)0x30,  /* [4056] */
    (xdc_Char)0x38,  /* [4057] */
    (xdc_Char)0x78,  /* [4058] */
    (xdc_Char)0x2e,  /* [4059] */
    (xdc_Char)0xa,  /* [4060] */
    (xdc_Char)0x54,  /* [4061] */
    (xdc_Char)0x6f,  /* [4062] */
    (xdc_Char)0x20,  /* [4063] */
    (xdc_Char)0x73,  /* [4064] */
    (xdc_Char)0x65,  /* [4065] */
    (xdc_Char)0x65,  /* [4066] */
    (xdc_Char)0x20,  /* [4067] */
    (xdc_Char)0x6d,  /* [4068] */
    (xdc_Char)0x6f,  /* [4069] */
    (xdc_Char)0x72,  /* [4070] */
    (xdc_Char)0x65,  /* [4071] */
    (xdc_Char)0x20,  /* [4072] */
    (xdc_Char)0x65,  /* [4073] */
    (xdc_Char)0x78,  /* [4074] */
    (xdc_Char)0x63,  /* [4075] */
    (xdc_Char)0x65,  /* [4076] */
    (xdc_Char)0x70,  /* [4077] */
    (xdc_Char)0x74,  /* [4078] */
    (xdc_Char)0x69,  /* [4079] */
    (xdc_Char)0x6f,  /* [4080] */
    (xdc_Char)0x6e,  /* [4081] */
    (xdc_Char)0x20,  /* [4082] */
    (xdc_Char)0x64,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x74,  /* [4085] */
    (xdc_Char)0x61,  /* [4086] */
    (xdc_Char)0x69,  /* [4087] */
    (xdc_Char)0x6c,  /* [4088] */
    (xdc_Char)0x2c,  /* [4089] */
    (xdc_Char)0x20,  /* [4090] */
    (xdc_Char)0x73,  /* [4091] */
    (xdc_Char)0x65,  /* [4092] */
    (xdc_Char)0x74,  /* [4093] */
    (xdc_Char)0x20,  /* [4094] */
    (xdc_Char)0x74,  /* [4095] */
    (xdc_Char)0x69,  /* [4096] */
    (xdc_Char)0x2e,  /* [4097] */
    (xdc_Char)0x73,  /* [4098] */
    (xdc_Char)0x79,  /* [4099] */
    (xdc_Char)0x73,  /* [4100] */
    (xdc_Char)0x62,  /* [4101] */
    (xdc_Char)0x69,  /* [4102] */
    (xdc_Char)0x6f,  /* [4103] */
    (xdc_Char)0x73,  /* [4104] */
    (xdc_Char)0x2e,  /* [4105] */
    (xdc_Char)0x66,  /* [4106] */
    (xdc_Char)0x61,  /* [4107] */
    (xdc_Char)0x6d,  /* [4108] */
    (xdc_Char)0x69,  /* [4109] */
    (xdc_Char)0x6c,  /* [4110] */
    (xdc_Char)0x79,  /* [4111] */
    (xdc_Char)0x2e,  /* [4112] */
    (xdc_Char)0x61,  /* [4113] */
    (xdc_Char)0x72,  /* [4114] */
    (xdc_Char)0x6d,  /* [4115] */
    (xdc_Char)0x2e,  /* [4116] */
    (xdc_Char)0x6d,  /* [4117] */
    (xdc_Char)0x33,  /* [4118] */
    (xdc_Char)0x2e,  /* [4119] */
    (xdc_Char)0x48,  /* [4120] */
    (xdc_Char)0x77,  /* [4121] */
    (xdc_Char)0x69,  /* [4122] */
    (xdc_Char)0x2e,  /* [4123] */
    (xdc_Char)0x65,  /* [4124] */
    (xdc_Char)0x6e,  /* [4125] */
    (xdc_Char)0x61,  /* [4126] */
    (xdc_Char)0x62,  /* [4127] */
    (xdc_Char)0x6c,  /* [4128] */
    (xdc_Char)0x65,  /* [4129] */
    (xdc_Char)0x45,  /* [4130] */
    (xdc_Char)0x78,  /* [4131] */
    (xdc_Char)0x63,  /* [4132] */
    (xdc_Char)0x65,  /* [4133] */
    (xdc_Char)0x70,  /* [4134] */
    (xdc_Char)0x74,  /* [4135] */
    (xdc_Char)0x69,  /* [4136] */
    (xdc_Char)0x6f,  /* [4137] */
    (xdc_Char)0x6e,  /* [4138] */
    (xdc_Char)0x20,  /* [4139] */
    (xdc_Char)0x3d,  /* [4140] */
    (xdc_Char)0x20,  /* [4141] */
    (xdc_Char)0x74,  /* [4142] */
    (xdc_Char)0x72,  /* [4143] */
    (xdc_Char)0x75,  /* [4144] */
    (xdc_Char)0x65,  /* [4145] */
    (xdc_Char)0x20,  /* [4146] */
    (xdc_Char)0x6f,  /* [4147] */
    (xdc_Char)0x72,  /* [4148] */
    (xdc_Char)0x2c,  /* [4149] */
    (xdc_Char)0xa,  /* [4150] */
    (xdc_Char)0x65,  /* [4151] */
    (xdc_Char)0x78,  /* [4152] */
    (xdc_Char)0x61,  /* [4153] */
    (xdc_Char)0x6d,  /* [4154] */
    (xdc_Char)0x69,  /* [4155] */
    (xdc_Char)0x6e,  /* [4156] */
    (xdc_Char)0x65,  /* [4157] */
    (xdc_Char)0x20,  /* [4158] */
    (xdc_Char)0x74,  /* [4159] */
    (xdc_Char)0x68,  /* [4160] */
    (xdc_Char)0x65,  /* [4161] */
    (xdc_Char)0x20,  /* [4162] */
    (xdc_Char)0x45,  /* [4163] */
    (xdc_Char)0x78,  /* [4164] */
    (xdc_Char)0x63,  /* [4165] */
    (xdc_Char)0x65,  /* [4166] */
    (xdc_Char)0x70,  /* [4167] */
    (xdc_Char)0x74,  /* [4168] */
    (xdc_Char)0x69,  /* [4169] */
    (xdc_Char)0x6f,  /* [4170] */
    (xdc_Char)0x6e,  /* [4171] */
    (xdc_Char)0x20,  /* [4172] */
    (xdc_Char)0x76,  /* [4173] */
    (xdc_Char)0x69,  /* [4174] */
    (xdc_Char)0x65,  /* [4175] */
    (xdc_Char)0x77,  /* [4176] */
    (xdc_Char)0x20,  /* [4177] */
    (xdc_Char)0x66,  /* [4178] */
    (xdc_Char)0x6f,  /* [4179] */
    (xdc_Char)0x72,  /* [4180] */
    (xdc_Char)0x20,  /* [4181] */
    (xdc_Char)0x74,  /* [4182] */
    (xdc_Char)0x68,  /* [4183] */
    (xdc_Char)0x65,  /* [4184] */
    (xdc_Char)0x20,  /* [4185] */
    (xdc_Char)0x74,  /* [4186] */
    (xdc_Char)0x69,  /* [4187] */
    (xdc_Char)0x2e,  /* [4188] */
    (xdc_Char)0x73,  /* [4189] */
    (xdc_Char)0x79,  /* [4190] */
    (xdc_Char)0x73,  /* [4191] */
    (xdc_Char)0x62,  /* [4192] */
    (xdc_Char)0x69,  /* [4193] */
    (xdc_Char)0x6f,  /* [4194] */
    (xdc_Char)0x73,  /* [4195] */
    (xdc_Char)0x2e,  /* [4196] */
    (xdc_Char)0x66,  /* [4197] */
    (xdc_Char)0x61,  /* [4198] */
    (xdc_Char)0x6d,  /* [4199] */
    (xdc_Char)0x69,  /* [4200] */
    (xdc_Char)0x6c,  /* [4201] */
    (xdc_Char)0x79,  /* [4202] */
    (xdc_Char)0x2e,  /* [4203] */
    (xdc_Char)0x61,  /* [4204] */
    (xdc_Char)0x72,  /* [4205] */
    (xdc_Char)0x6d,  /* [4206] */
    (xdc_Char)0x2e,  /* [4207] */
    (xdc_Char)0x6d,  /* [4208] */
    (xdc_Char)0x33,  /* [4209] */
    (xdc_Char)0x2e,  /* [4210] */
    (xdc_Char)0x48,  /* [4211] */
    (xdc_Char)0x77,  /* [4212] */
    (xdc_Char)0x69,  /* [4213] */
    (xdc_Char)0x20,  /* [4214] */
    (xdc_Char)0x6d,  /* [4215] */
    (xdc_Char)0x6f,  /* [4216] */
    (xdc_Char)0x64,  /* [4217] */
    (xdc_Char)0x75,  /* [4218] */
    (xdc_Char)0x6c,  /* [4219] */
    (xdc_Char)0x65,  /* [4220] */
    (xdc_Char)0x20,  /* [4221] */
    (xdc_Char)0x75,  /* [4222] */
    (xdc_Char)0x73,  /* [4223] */
    (xdc_Char)0x69,  /* [4224] */
    (xdc_Char)0x6e,  /* [4225] */
    (xdc_Char)0x67,  /* [4226] */
    (xdc_Char)0x20,  /* [4227] */
    (xdc_Char)0x52,  /* [4228] */
    (xdc_Char)0x4f,  /* [4229] */
    (xdc_Char)0x56,  /* [4230] */
    (xdc_Char)0x2e,  /* [4231] */
    (xdc_Char)0x0,  /* [4232] */
    (xdc_Char)0x45,  /* [4233] */
    (xdc_Char)0x5f,  /* [4234] */
    (xdc_Char)0x6e,  /* [4235] */
    (xdc_Char)0x6f,  /* [4236] */
    (xdc_Char)0x49,  /* [4237] */
    (xdc_Char)0x73,  /* [4238] */
    (xdc_Char)0x72,  /* [4239] */
    (xdc_Char)0x3a,  /* [4240] */
    (xdc_Char)0x20,  /* [4241] */
    (xdc_Char)0x69,  /* [4242] */
    (xdc_Char)0x64,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x3d,  /* [4245] */
    (xdc_Char)0x20,  /* [4246] */
    (xdc_Char)0x25,  /* [4247] */
    (xdc_Char)0x64,  /* [4248] */
    (xdc_Char)0x2c,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x70,  /* [4251] */
    (xdc_Char)0x63,  /* [4252] */
    (xdc_Char)0x20,  /* [4253] */
    (xdc_Char)0x3d,  /* [4254] */
    (xdc_Char)0x20,  /* [4255] */
    (xdc_Char)0x25,  /* [4256] */
    (xdc_Char)0x30,  /* [4257] */
    (xdc_Char)0x38,  /* [4258] */
    (xdc_Char)0x78,  /* [4259] */
    (xdc_Char)0x0,  /* [4260] */
    (xdc_Char)0x45,  /* [4261] */
    (xdc_Char)0x5f,  /* [4262] */
    (xdc_Char)0x4e,  /* [4263] */
    (xdc_Char)0x4d,  /* [4264] */
    (xdc_Char)0x49,  /* [4265] */
    (xdc_Char)0x3a,  /* [4266] */
    (xdc_Char)0x20,  /* [4267] */
    (xdc_Char)0x25,  /* [4268] */
    (xdc_Char)0x73,  /* [4269] */
    (xdc_Char)0x0,  /* [4270] */
    (xdc_Char)0x45,  /* [4271] */
    (xdc_Char)0x5f,  /* [4272] */
    (xdc_Char)0x68,  /* [4273] */
    (xdc_Char)0x61,  /* [4274] */
    (xdc_Char)0x72,  /* [4275] */
    (xdc_Char)0x64,  /* [4276] */
    (xdc_Char)0x46,  /* [4277] */
    (xdc_Char)0x61,  /* [4278] */
    (xdc_Char)0x75,  /* [4279] */
    (xdc_Char)0x6c,  /* [4280] */
    (xdc_Char)0x74,  /* [4281] */
    (xdc_Char)0x3a,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x25,  /* [4284] */
    (xdc_Char)0x73,  /* [4285] */
    (xdc_Char)0x0,  /* [4286] */
    (xdc_Char)0x45,  /* [4287] */
    (xdc_Char)0x5f,  /* [4288] */
    (xdc_Char)0x6d,  /* [4289] */
    (xdc_Char)0x65,  /* [4290] */
    (xdc_Char)0x6d,  /* [4291] */
    (xdc_Char)0x46,  /* [4292] */
    (xdc_Char)0x61,  /* [4293] */
    (xdc_Char)0x75,  /* [4294] */
    (xdc_Char)0x6c,  /* [4295] */
    (xdc_Char)0x74,  /* [4296] */
    (xdc_Char)0x3a,  /* [4297] */
    (xdc_Char)0x20,  /* [4298] */
    (xdc_Char)0x25,  /* [4299] */
    (xdc_Char)0x73,  /* [4300] */
    (xdc_Char)0x2c,  /* [4301] */
    (xdc_Char)0x20,  /* [4302] */
    (xdc_Char)0x61,  /* [4303] */
    (xdc_Char)0x64,  /* [4304] */
    (xdc_Char)0x64,  /* [4305] */
    (xdc_Char)0x72,  /* [4306] */
    (xdc_Char)0x65,  /* [4307] */
    (xdc_Char)0x73,  /* [4308] */
    (xdc_Char)0x73,  /* [4309] */
    (xdc_Char)0x3a,  /* [4310] */
    (xdc_Char)0x20,  /* [4311] */
    (xdc_Char)0x25,  /* [4312] */
    (xdc_Char)0x30,  /* [4313] */
    (xdc_Char)0x38,  /* [4314] */
    (xdc_Char)0x78,  /* [4315] */
    (xdc_Char)0x0,  /* [4316] */
    (xdc_Char)0x45,  /* [4317] */
    (xdc_Char)0x5f,  /* [4318] */
    (xdc_Char)0x62,  /* [4319] */
    (xdc_Char)0x75,  /* [4320] */
    (xdc_Char)0x73,  /* [4321] */
    (xdc_Char)0x46,  /* [4322] */
    (xdc_Char)0x61,  /* [4323] */
    (xdc_Char)0x75,  /* [4324] */
    (xdc_Char)0x6c,  /* [4325] */
    (xdc_Char)0x74,  /* [4326] */
    (xdc_Char)0x3a,  /* [4327] */
    (xdc_Char)0x20,  /* [4328] */
    (xdc_Char)0x25,  /* [4329] */
    (xdc_Char)0x73,  /* [4330] */
    (xdc_Char)0x2c,  /* [4331] */
    (xdc_Char)0x20,  /* [4332] */
    (xdc_Char)0x61,  /* [4333] */
    (xdc_Char)0x64,  /* [4334] */
    (xdc_Char)0x64,  /* [4335] */
    (xdc_Char)0x72,  /* [4336] */
    (xdc_Char)0x65,  /* [4337] */
    (xdc_Char)0x73,  /* [4338] */
    (xdc_Char)0x73,  /* [4339] */
    (xdc_Char)0x3a,  /* [4340] */
    (xdc_Char)0x20,  /* [4341] */
    (xdc_Char)0x25,  /* [4342] */
    (xdc_Char)0x30,  /* [4343] */
    (xdc_Char)0x38,  /* [4344] */
    (xdc_Char)0x78,  /* [4345] */
    (xdc_Char)0x0,  /* [4346] */
    (xdc_Char)0x45,  /* [4347] */
    (xdc_Char)0x5f,  /* [4348] */
    (xdc_Char)0x75,  /* [4349] */
    (xdc_Char)0x73,  /* [4350] */
    (xdc_Char)0x61,  /* [4351] */
    (xdc_Char)0x67,  /* [4352] */
    (xdc_Char)0x65,  /* [4353] */
    (xdc_Char)0x46,  /* [4354] */
    (xdc_Char)0x61,  /* [4355] */
    (xdc_Char)0x75,  /* [4356] */
    (xdc_Char)0x6c,  /* [4357] */
    (xdc_Char)0x74,  /* [4358] */
    (xdc_Char)0x3a,  /* [4359] */
    (xdc_Char)0x20,  /* [4360] */
    (xdc_Char)0x25,  /* [4361] */
    (xdc_Char)0x73,  /* [4362] */
    (xdc_Char)0x0,  /* [4363] */
    (xdc_Char)0x45,  /* [4364] */
    (xdc_Char)0x5f,  /* [4365] */
    (xdc_Char)0x73,  /* [4366] */
    (xdc_Char)0x76,  /* [4367] */
    (xdc_Char)0x43,  /* [4368] */
    (xdc_Char)0x61,  /* [4369] */
    (xdc_Char)0x6c,  /* [4370] */
    (xdc_Char)0x6c,  /* [4371] */
    (xdc_Char)0x3a,  /* [4372] */
    (xdc_Char)0x20,  /* [4373] */
    (xdc_Char)0x73,  /* [4374] */
    (xdc_Char)0x76,  /* [4375] */
    (xdc_Char)0x4e,  /* [4376] */
    (xdc_Char)0x75,  /* [4377] */
    (xdc_Char)0x6d,  /* [4378] */
    (xdc_Char)0x20,  /* [4379] */
    (xdc_Char)0x3d,  /* [4380] */
    (xdc_Char)0x20,  /* [4381] */
    (xdc_Char)0x25,  /* [4382] */
    (xdc_Char)0x64,  /* [4383] */
    (xdc_Char)0x0,  /* [4384] */
    (xdc_Char)0x45,  /* [4385] */
    (xdc_Char)0x5f,  /* [4386] */
    (xdc_Char)0x64,  /* [4387] */
    (xdc_Char)0x65,  /* [4388] */
    (xdc_Char)0x62,  /* [4389] */
    (xdc_Char)0x75,  /* [4390] */
    (xdc_Char)0x67,  /* [4391] */
    (xdc_Char)0x4d,  /* [4392] */
    (xdc_Char)0x6f,  /* [4393] */
    (xdc_Char)0x6e,  /* [4394] */
    (xdc_Char)0x3a,  /* [4395] */
    (xdc_Char)0x20,  /* [4396] */
    (xdc_Char)0x25,  /* [4397] */
    (xdc_Char)0x73,  /* [4398] */
    (xdc_Char)0x0,  /* [4399] */
    (xdc_Char)0x45,  /* [4400] */
    (xdc_Char)0x5f,  /* [4401] */
    (xdc_Char)0x72,  /* [4402] */
    (xdc_Char)0x65,  /* [4403] */
    (xdc_Char)0x73,  /* [4404] */
    (xdc_Char)0x65,  /* [4405] */
    (xdc_Char)0x72,  /* [4406] */
    (xdc_Char)0x76,  /* [4407] */
    (xdc_Char)0x65,  /* [4408] */
    (xdc_Char)0x64,  /* [4409] */
    (xdc_Char)0x3a,  /* [4410] */
    (xdc_Char)0x20,  /* [4411] */
    (xdc_Char)0x25,  /* [4412] */
    (xdc_Char)0x73,  /* [4413] */
    (xdc_Char)0x20,  /* [4414] */
    (xdc_Char)0x25,  /* [4415] */
    (xdc_Char)0x64,  /* [4416] */
    (xdc_Char)0x0,  /* [4417] */
    (xdc_Char)0x45,  /* [4418] */
    (xdc_Char)0x5f,  /* [4419] */
    (xdc_Char)0x69,  /* [4420] */
    (xdc_Char)0x6e,  /* [4421] */
    (xdc_Char)0x76,  /* [4422] */
    (xdc_Char)0x61,  /* [4423] */
    (xdc_Char)0x6c,  /* [4424] */
    (xdc_Char)0x69,  /* [4425] */
    (xdc_Char)0x64,  /* [4426] */
    (xdc_Char)0x54,  /* [4427] */
    (xdc_Char)0x69,  /* [4428] */
    (xdc_Char)0x6d,  /* [4429] */
    (xdc_Char)0x65,  /* [4430] */
    (xdc_Char)0x72,  /* [4431] */
    (xdc_Char)0x3a,  /* [4432] */
    (xdc_Char)0x20,  /* [4433] */
    (xdc_Char)0x49,  /* [4434] */
    (xdc_Char)0x6e,  /* [4435] */
    (xdc_Char)0x76,  /* [4436] */
    (xdc_Char)0x61,  /* [4437] */
    (xdc_Char)0x6c,  /* [4438] */
    (xdc_Char)0x69,  /* [4439] */
    (xdc_Char)0x64,  /* [4440] */
    (xdc_Char)0x20,  /* [4441] */
    (xdc_Char)0x54,  /* [4442] */
    (xdc_Char)0x69,  /* [4443] */
    (xdc_Char)0x6d,  /* [4444] */
    (xdc_Char)0x65,  /* [4445] */
    (xdc_Char)0x72,  /* [4446] */
    (xdc_Char)0x20,  /* [4447] */
    (xdc_Char)0x49,  /* [4448] */
    (xdc_Char)0x64,  /* [4449] */
    (xdc_Char)0x20,  /* [4450] */
    (xdc_Char)0x25,  /* [4451] */
    (xdc_Char)0x64,  /* [4452] */
    (xdc_Char)0x0,  /* [4453] */
    (xdc_Char)0x45,  /* [4454] */
    (xdc_Char)0x5f,  /* [4455] */
    (xdc_Char)0x6e,  /* [4456] */
    (xdc_Char)0x6f,  /* [4457] */
    (xdc_Char)0x74,  /* [4458] */
    (xdc_Char)0x41,  /* [4459] */
    (xdc_Char)0x76,  /* [4460] */
    (xdc_Char)0x61,  /* [4461] */
    (xdc_Char)0x69,  /* [4462] */
    (xdc_Char)0x6c,  /* [4463] */
    (xdc_Char)0x61,  /* [4464] */
    (xdc_Char)0x62,  /* [4465] */
    (xdc_Char)0x6c,  /* [4466] */
    (xdc_Char)0x65,  /* [4467] */
    (xdc_Char)0x3a,  /* [4468] */
    (xdc_Char)0x20,  /* [4469] */
    (xdc_Char)0x54,  /* [4470] */
    (xdc_Char)0x69,  /* [4471] */
    (xdc_Char)0x6d,  /* [4472] */
    (xdc_Char)0x65,  /* [4473] */
    (xdc_Char)0x72,  /* [4474] */
    (xdc_Char)0x20,  /* [4475] */
    (xdc_Char)0x6e,  /* [4476] */
    (xdc_Char)0x6f,  /* [4477] */
    (xdc_Char)0x74,  /* [4478] */
    (xdc_Char)0x20,  /* [4479] */
    (xdc_Char)0x61,  /* [4480] */
    (xdc_Char)0x76,  /* [4481] */
    (xdc_Char)0x61,  /* [4482] */
    (xdc_Char)0x69,  /* [4483] */
    (xdc_Char)0x6c,  /* [4484] */
    (xdc_Char)0x61,  /* [4485] */
    (xdc_Char)0x62,  /* [4486] */
    (xdc_Char)0x6c,  /* [4487] */
    (xdc_Char)0x65,  /* [4488] */
    (xdc_Char)0x20,  /* [4489] */
    (xdc_Char)0x25,  /* [4490] */
    (xdc_Char)0x64,  /* [4491] */
    (xdc_Char)0x0,  /* [4492] */
    (xdc_Char)0x45,  /* [4493] */
    (xdc_Char)0x5f,  /* [4494] */
    (xdc_Char)0x63,  /* [4495] */
    (xdc_Char)0x61,  /* [4496] */
    (xdc_Char)0x6e,  /* [4497] */
    (xdc_Char)0x6e,  /* [4498] */
    (xdc_Char)0x6f,  /* [4499] */
    (xdc_Char)0x74,  /* [4500] */
    (xdc_Char)0x53,  /* [4501] */
    (xdc_Char)0x75,  /* [4502] */
    (xdc_Char)0x70,  /* [4503] */
    (xdc_Char)0x70,  /* [4504] */
    (xdc_Char)0x6f,  /* [4505] */
    (xdc_Char)0x72,  /* [4506] */
    (xdc_Char)0x74,  /* [4507] */
    (xdc_Char)0x3a,  /* [4508] */
    (xdc_Char)0x20,  /* [4509] */
    (xdc_Char)0x54,  /* [4510] */
    (xdc_Char)0x69,  /* [4511] */
    (xdc_Char)0x6d,  /* [4512] */
    (xdc_Char)0x65,  /* [4513] */
    (xdc_Char)0x72,  /* [4514] */
    (xdc_Char)0x20,  /* [4515] */
    (xdc_Char)0x63,  /* [4516] */
    (xdc_Char)0x61,  /* [4517] */
    (xdc_Char)0x6e,  /* [4518] */
    (xdc_Char)0x6e,  /* [4519] */
    (xdc_Char)0x6f,  /* [4520] */
    (xdc_Char)0x74,  /* [4521] */
    (xdc_Char)0x20,  /* [4522] */
    (xdc_Char)0x73,  /* [4523] */
    (xdc_Char)0x75,  /* [4524] */
    (xdc_Char)0x70,  /* [4525] */
    (xdc_Char)0x70,  /* [4526] */
    (xdc_Char)0x6f,  /* [4527] */
    (xdc_Char)0x72,  /* [4528] */
    (xdc_Char)0x74,  /* [4529] */
    (xdc_Char)0x20,  /* [4530] */
    (xdc_Char)0x72,  /* [4531] */
    (xdc_Char)0x65,  /* [4532] */
    (xdc_Char)0x71,  /* [4533] */
    (xdc_Char)0x75,  /* [4534] */
    (xdc_Char)0x65,  /* [4535] */
    (xdc_Char)0x73,  /* [4536] */
    (xdc_Char)0x74,  /* [4537] */
    (xdc_Char)0x65,  /* [4538] */
    (xdc_Char)0x64,  /* [4539] */
    (xdc_Char)0x20,  /* [4540] */
    (xdc_Char)0x70,  /* [4541] */
    (xdc_Char)0x65,  /* [4542] */
    (xdc_Char)0x72,  /* [4543] */
    (xdc_Char)0x69,  /* [4544] */
    (xdc_Char)0x6f,  /* [4545] */
    (xdc_Char)0x64,  /* [4546] */
    (xdc_Char)0x20,  /* [4547] */
    (xdc_Char)0x25,  /* [4548] */
    (xdc_Char)0x64,  /* [4549] */
    (xdc_Char)0x0,  /* [4550] */
    (xdc_Char)0x72,  /* [4551] */
    (xdc_Char)0x65,  /* [4552] */
    (xdc_Char)0x71,  /* [4553] */
    (xdc_Char)0x75,  /* [4554] */
    (xdc_Char)0x65,  /* [4555] */
    (xdc_Char)0x73,  /* [4556] */
    (xdc_Char)0x74,  /* [4557] */
    (xdc_Char)0x65,  /* [4558] */
    (xdc_Char)0x64,  /* [4559] */
    (xdc_Char)0x20,  /* [4560] */
    (xdc_Char)0x73,  /* [4561] */
    (xdc_Char)0x69,  /* [4562] */
    (xdc_Char)0x7a,  /* [4563] */
    (xdc_Char)0x65,  /* [4564] */
    (xdc_Char)0x20,  /* [4565] */
    (xdc_Char)0x69,  /* [4566] */
    (xdc_Char)0x73,  /* [4567] */
    (xdc_Char)0x20,  /* [4568] */
    (xdc_Char)0x74,  /* [4569] */
    (xdc_Char)0x6f,  /* [4570] */
    (xdc_Char)0x6f,  /* [4571] */
    (xdc_Char)0x20,  /* [4572] */
    (xdc_Char)0x62,  /* [4573] */
    (xdc_Char)0x69,  /* [4574] */
    (xdc_Char)0x67,  /* [4575] */
    (xdc_Char)0x3a,  /* [4576] */
    (xdc_Char)0x20,  /* [4577] */
    (xdc_Char)0x68,  /* [4578] */
    (xdc_Char)0x61,  /* [4579] */
    (xdc_Char)0x6e,  /* [4580] */
    (xdc_Char)0x64,  /* [4581] */
    (xdc_Char)0x6c,  /* [4582] */
    (xdc_Char)0x65,  /* [4583] */
    (xdc_Char)0x3d,  /* [4584] */
    (xdc_Char)0x30,  /* [4585] */
    (xdc_Char)0x78,  /* [4586] */
    (xdc_Char)0x25,  /* [4587] */
    (xdc_Char)0x78,  /* [4588] */
    (xdc_Char)0x2c,  /* [4589] */
    (xdc_Char)0x20,  /* [4590] */
    (xdc_Char)0x73,  /* [4591] */
    (xdc_Char)0x69,  /* [4592] */
    (xdc_Char)0x7a,  /* [4593] */
    (xdc_Char)0x65,  /* [4594] */
    (xdc_Char)0x3d,  /* [4595] */
    (xdc_Char)0x25,  /* [4596] */
    (xdc_Char)0x75,  /* [4597] */
    (xdc_Char)0x0,  /* [4598] */
    (xdc_Char)0x6f,  /* [4599] */
    (xdc_Char)0x75,  /* [4600] */
    (xdc_Char)0x74,  /* [4601] */
    (xdc_Char)0x20,  /* [4602] */
    (xdc_Char)0x6f,  /* [4603] */
    (xdc_Char)0x66,  /* [4604] */
    (xdc_Char)0x20,  /* [4605] */
    (xdc_Char)0x6d,  /* [4606] */
    (xdc_Char)0x65,  /* [4607] */
    (xdc_Char)0x6d,  /* [4608] */
    (xdc_Char)0x6f,  /* [4609] */
    (xdc_Char)0x72,  /* [4610] */
    (xdc_Char)0x79,  /* [4611] */
    (xdc_Char)0x3a,  /* [4612] */
    (xdc_Char)0x20,  /* [4613] */
    (xdc_Char)0x68,  /* [4614] */
    (xdc_Char)0x61,  /* [4615] */
    (xdc_Char)0x6e,  /* [4616] */
    (xdc_Char)0x64,  /* [4617] */
    (xdc_Char)0x6c,  /* [4618] */
    (xdc_Char)0x65,  /* [4619] */
    (xdc_Char)0x3d,  /* [4620] */
    (xdc_Char)0x30,  /* [4621] */
    (xdc_Char)0x78,  /* [4622] */
    (xdc_Char)0x25,  /* [4623] */
    (xdc_Char)0x78,  /* [4624] */
    (xdc_Char)0x2c,  /* [4625] */
    (xdc_Char)0x20,  /* [4626] */
    (xdc_Char)0x73,  /* [4627] */
    (xdc_Char)0x69,  /* [4628] */
    (xdc_Char)0x7a,  /* [4629] */
    (xdc_Char)0x65,  /* [4630] */
    (xdc_Char)0x3d,  /* [4631] */
    (xdc_Char)0x25,  /* [4632] */
    (xdc_Char)0x75,  /* [4633] */
    (xdc_Char)0x0,  /* [4634] */
    (xdc_Char)0x45,  /* [4635] */
    (xdc_Char)0x5f,  /* [4636] */
    (xdc_Char)0x70,  /* [4637] */
    (xdc_Char)0x72,  /* [4638] */
    (xdc_Char)0x69,  /* [4639] */
    (xdc_Char)0x6f,  /* [4640] */
    (xdc_Char)0x72,  /* [4641] */
    (xdc_Char)0x69,  /* [4642] */
    (xdc_Char)0x74,  /* [4643] */
    (xdc_Char)0x79,  /* [4644] */
    (xdc_Char)0x3a,  /* [4645] */
    (xdc_Char)0x20,  /* [4646] */
    (xdc_Char)0x54,  /* [4647] */
    (xdc_Char)0x68,  /* [4648] */
    (xdc_Char)0x72,  /* [4649] */
    (xdc_Char)0x65,  /* [4650] */
    (xdc_Char)0x61,  /* [4651] */
    (xdc_Char)0x64,  /* [4652] */
    (xdc_Char)0x20,  /* [4653] */
    (xdc_Char)0x70,  /* [4654] */
    (xdc_Char)0x72,  /* [4655] */
    (xdc_Char)0x69,  /* [4656] */
    (xdc_Char)0x6f,  /* [4657] */
    (xdc_Char)0x72,  /* [4658] */
    (xdc_Char)0x69,  /* [4659] */
    (xdc_Char)0x74,  /* [4660] */
    (xdc_Char)0x79,  /* [4661] */
    (xdc_Char)0x20,  /* [4662] */
    (xdc_Char)0x69,  /* [4663] */
    (xdc_Char)0x73,  /* [4664] */
    (xdc_Char)0x20,  /* [4665] */
    (xdc_Char)0x69,  /* [4666] */
    (xdc_Char)0x6e,  /* [4667] */
    (xdc_Char)0x76,  /* [4668] */
    (xdc_Char)0x61,  /* [4669] */
    (xdc_Char)0x6c,  /* [4670] */
    (xdc_Char)0x69,  /* [4671] */
    (xdc_Char)0x64,  /* [4672] */
    (xdc_Char)0x20,  /* [4673] */
    (xdc_Char)0x25,  /* [4674] */
    (xdc_Char)0x64,  /* [4675] */
    (xdc_Char)0x0,  /* [4676] */
    (xdc_Char)0x3c,  /* [4677] */
    (xdc_Char)0x2d,  /* [4678] */
    (xdc_Char)0x2d,  /* [4679] */
    (xdc_Char)0x20,  /* [4680] */
    (xdc_Char)0x63,  /* [4681] */
    (xdc_Char)0x6f,  /* [4682] */
    (xdc_Char)0x6e,  /* [4683] */
    (xdc_Char)0x73,  /* [4684] */
    (xdc_Char)0x74,  /* [4685] */
    (xdc_Char)0x72,  /* [4686] */
    (xdc_Char)0x75,  /* [4687] */
    (xdc_Char)0x63,  /* [4688] */
    (xdc_Char)0x74,  /* [4689] */
    (xdc_Char)0x3a,  /* [4690] */
    (xdc_Char)0x20,  /* [4691] */
    (xdc_Char)0x25,  /* [4692] */
    (xdc_Char)0x70,  /* [4693] */
    (xdc_Char)0x28,  /* [4694] */
    (xdc_Char)0x27,  /* [4695] */
    (xdc_Char)0x25,  /* [4696] */
    (xdc_Char)0x73,  /* [4697] */
    (xdc_Char)0x27,  /* [4698] */
    (xdc_Char)0x29,  /* [4699] */
    (xdc_Char)0x0,  /* [4700] */
    (xdc_Char)0x3c,  /* [4701] */
    (xdc_Char)0x2d,  /* [4702] */
    (xdc_Char)0x2d,  /* [4703] */
    (xdc_Char)0x20,  /* [4704] */
    (xdc_Char)0x63,  /* [4705] */
    (xdc_Char)0x72,  /* [4706] */
    (xdc_Char)0x65,  /* [4707] */
    (xdc_Char)0x61,  /* [4708] */
    (xdc_Char)0x74,  /* [4709] */
    (xdc_Char)0x65,  /* [4710] */
    (xdc_Char)0x3a,  /* [4711] */
    (xdc_Char)0x20,  /* [4712] */
    (xdc_Char)0x25,  /* [4713] */
    (xdc_Char)0x70,  /* [4714] */
    (xdc_Char)0x28,  /* [4715] */
    (xdc_Char)0x27,  /* [4716] */
    (xdc_Char)0x25,  /* [4717] */
    (xdc_Char)0x73,  /* [4718] */
    (xdc_Char)0x27,  /* [4719] */
    (xdc_Char)0x29,  /* [4720] */
    (xdc_Char)0x0,  /* [4721] */
    (xdc_Char)0x2d,  /* [4722] */
    (xdc_Char)0x2d,  /* [4723] */
    (xdc_Char)0x3e,  /* [4724] */
    (xdc_Char)0x20,  /* [4725] */
    (xdc_Char)0x64,  /* [4726] */
    (xdc_Char)0x65,  /* [4727] */
    (xdc_Char)0x73,  /* [4728] */
    (xdc_Char)0x74,  /* [4729] */
    (xdc_Char)0x72,  /* [4730] */
    (xdc_Char)0x75,  /* [4731] */
    (xdc_Char)0x63,  /* [4732] */
    (xdc_Char)0x74,  /* [4733] */
    (xdc_Char)0x3a,  /* [4734] */
    (xdc_Char)0x20,  /* [4735] */
    (xdc_Char)0x28,  /* [4736] */
    (xdc_Char)0x25,  /* [4737] */
    (xdc_Char)0x70,  /* [4738] */
    (xdc_Char)0x29,  /* [4739] */
    (xdc_Char)0x0,  /* [4740] */
    (xdc_Char)0x2d,  /* [4741] */
    (xdc_Char)0x2d,  /* [4742] */
    (xdc_Char)0x3e,  /* [4743] */
    (xdc_Char)0x20,  /* [4744] */
    (xdc_Char)0x64,  /* [4745] */
    (xdc_Char)0x65,  /* [4746] */
    (xdc_Char)0x6c,  /* [4747] */
    (xdc_Char)0x65,  /* [4748] */
    (xdc_Char)0x74,  /* [4749] */
    (xdc_Char)0x65,  /* [4750] */
    (xdc_Char)0x3a,  /* [4751] */
    (xdc_Char)0x20,  /* [4752] */
    (xdc_Char)0x28,  /* [4753] */
    (xdc_Char)0x25,  /* [4754] */
    (xdc_Char)0x70,  /* [4755] */
    (xdc_Char)0x29,  /* [4756] */
    (xdc_Char)0x0,  /* [4757] */
    (xdc_Char)0x45,  /* [4758] */
    (xdc_Char)0x52,  /* [4759] */
    (xdc_Char)0x52,  /* [4760] */
    (xdc_Char)0x4f,  /* [4761] */
    (xdc_Char)0x52,  /* [4762] */
    (xdc_Char)0x3a,  /* [4763] */
    (xdc_Char)0x20,  /* [4764] */
    (xdc_Char)0x25,  /* [4765] */
    (xdc_Char)0x24,  /* [4766] */
    (xdc_Char)0x46,  /* [4767] */
    (xdc_Char)0x25,  /* [4768] */
    (xdc_Char)0x24,  /* [4769] */
    (xdc_Char)0x53,  /* [4770] */
    (xdc_Char)0x0,  /* [4771] */
    (xdc_Char)0x57,  /* [4772] */
    (xdc_Char)0x41,  /* [4773] */
    (xdc_Char)0x52,  /* [4774] */
    (xdc_Char)0x4e,  /* [4775] */
    (xdc_Char)0x49,  /* [4776] */
    (xdc_Char)0x4e,  /* [4777] */
    (xdc_Char)0x47,  /* [4778] */
    (xdc_Char)0x3a,  /* [4779] */
    (xdc_Char)0x20,  /* [4780] */
    (xdc_Char)0x25,  /* [4781] */
    (xdc_Char)0x24,  /* [4782] */
    (xdc_Char)0x46,  /* [4783] */
    (xdc_Char)0x25,  /* [4784] */
    (xdc_Char)0x24,  /* [4785] */
    (xdc_Char)0x53,  /* [4786] */
    (xdc_Char)0x0,  /* [4787] */
    (xdc_Char)0x25,  /* [4788] */
    (xdc_Char)0x24,  /* [4789] */
    (xdc_Char)0x46,  /* [4790] */
    (xdc_Char)0x25,  /* [4791] */
    (xdc_Char)0x24,  /* [4792] */
    (xdc_Char)0x53,  /* [4793] */
    (xdc_Char)0x0,  /* [4794] */
    (xdc_Char)0x53,  /* [4795] */
    (xdc_Char)0x74,  /* [4796] */
    (xdc_Char)0x61,  /* [4797] */
    (xdc_Char)0x72,  /* [4798] */
    (xdc_Char)0x74,  /* [4799] */
    (xdc_Char)0x3a,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x25,  /* [4802] */
    (xdc_Char)0x24,  /* [4803] */
    (xdc_Char)0x53,  /* [4804] */
    (xdc_Char)0x0,  /* [4805] */
    (xdc_Char)0x53,  /* [4806] */
    (xdc_Char)0x74,  /* [4807] */
    (xdc_Char)0x6f,  /* [4808] */
    (xdc_Char)0x70,  /* [4809] */
    (xdc_Char)0x3a,  /* [4810] */
    (xdc_Char)0x20,  /* [4811] */
    (xdc_Char)0x25,  /* [4812] */
    (xdc_Char)0x24,  /* [4813] */
    (xdc_Char)0x53,  /* [4814] */
    (xdc_Char)0x0,  /* [4815] */
    (xdc_Char)0x53,  /* [4816] */
    (xdc_Char)0x74,  /* [4817] */
    (xdc_Char)0x61,  /* [4818] */
    (xdc_Char)0x72,  /* [4819] */
    (xdc_Char)0x74,  /* [4820] */
    (xdc_Char)0x49,  /* [4821] */
    (xdc_Char)0x6e,  /* [4822] */
    (xdc_Char)0x73,  /* [4823] */
    (xdc_Char)0x74,  /* [4824] */
    (xdc_Char)0x61,  /* [4825] */
    (xdc_Char)0x6e,  /* [4826] */
    (xdc_Char)0x63,  /* [4827] */
    (xdc_Char)0x65,  /* [4828] */
    (xdc_Char)0x3a,  /* [4829] */
    (xdc_Char)0x20,  /* [4830] */
    (xdc_Char)0x25,  /* [4831] */
    (xdc_Char)0x24,  /* [4832] */
    (xdc_Char)0x53,  /* [4833] */
    (xdc_Char)0x0,  /* [4834] */
    (xdc_Char)0x53,  /* [4835] */
    (xdc_Char)0x74,  /* [4836] */
    (xdc_Char)0x6f,  /* [4837] */
    (xdc_Char)0x70,  /* [4838] */
    (xdc_Char)0x49,  /* [4839] */
    (xdc_Char)0x6e,  /* [4840] */
    (xdc_Char)0x73,  /* [4841] */
    (xdc_Char)0x74,  /* [4842] */
    (xdc_Char)0x61,  /* [4843] */
    (xdc_Char)0x6e,  /* [4844] */
    (xdc_Char)0x63,  /* [4845] */
    (xdc_Char)0x65,  /* [4846] */
    (xdc_Char)0x3a,  /* [4847] */
    (xdc_Char)0x20,  /* [4848] */
    (xdc_Char)0x25,  /* [4849] */
    (xdc_Char)0x24,  /* [4850] */
    (xdc_Char)0x53,  /* [4851] */
    (xdc_Char)0x0,  /* [4852] */
    (xdc_Char)0x4c,  /* [4853] */
    (xdc_Char)0x57,  /* [4854] */
    (xdc_Char)0x5f,  /* [4855] */
    (xdc_Char)0x64,  /* [4856] */
    (xdc_Char)0x65,  /* [4857] */
    (xdc_Char)0x6c,  /* [4858] */
    (xdc_Char)0x61,  /* [4859] */
    (xdc_Char)0x79,  /* [4860] */
    (xdc_Char)0x65,  /* [4861] */
    (xdc_Char)0x64,  /* [4862] */
    (xdc_Char)0x3a,  /* [4863] */
    (xdc_Char)0x20,  /* [4864] */
    (xdc_Char)0x64,  /* [4865] */
    (xdc_Char)0x65,  /* [4866] */
    (xdc_Char)0x6c,  /* [4867] */
    (xdc_Char)0x61,  /* [4868] */
    (xdc_Char)0x79,  /* [4869] */
    (xdc_Char)0x3a,  /* [4870] */
    (xdc_Char)0x20,  /* [4871] */
    (xdc_Char)0x25,  /* [4872] */
    (xdc_Char)0x64,  /* [4873] */
    (xdc_Char)0x0,  /* [4874] */
    (xdc_Char)0x4c,  /* [4875] */
    (xdc_Char)0x4d,  /* [4876] */
    (xdc_Char)0x5f,  /* [4877] */
    (xdc_Char)0x74,  /* [4878] */
    (xdc_Char)0x69,  /* [4879] */
    (xdc_Char)0x63,  /* [4880] */
    (xdc_Char)0x6b,  /* [4881] */
    (xdc_Char)0x3a,  /* [4882] */
    (xdc_Char)0x20,  /* [4883] */
    (xdc_Char)0x74,  /* [4884] */
    (xdc_Char)0x69,  /* [4885] */
    (xdc_Char)0x63,  /* [4886] */
    (xdc_Char)0x6b,  /* [4887] */
    (xdc_Char)0x3a,  /* [4888] */
    (xdc_Char)0x20,  /* [4889] */
    (xdc_Char)0x25,  /* [4890] */
    (xdc_Char)0x64,  /* [4891] */
    (xdc_Char)0x0,  /* [4892] */
    (xdc_Char)0x4c,  /* [4893] */
    (xdc_Char)0x4d,  /* [4894] */
    (xdc_Char)0x5f,  /* [4895] */
    (xdc_Char)0x62,  /* [4896] */
    (xdc_Char)0x65,  /* [4897] */
    (xdc_Char)0x67,  /* [4898] */
    (xdc_Char)0x69,  /* [4899] */
    (xdc_Char)0x6e,  /* [4900] */
    (xdc_Char)0x3a,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x63,  /* [4903] */
    (xdc_Char)0x6c,  /* [4904] */
    (xdc_Char)0x6b,  /* [4905] */
    (xdc_Char)0x3a,  /* [4906] */
    (xdc_Char)0x20,  /* [4907] */
    (xdc_Char)0x30,  /* [4908] */
    (xdc_Char)0x78,  /* [4909] */
    (xdc_Char)0x25,  /* [4910] */
    (xdc_Char)0x78,  /* [4911] */
    (xdc_Char)0x2c,  /* [4912] */
    (xdc_Char)0x20,  /* [4913] */
    (xdc_Char)0x66,  /* [4914] */
    (xdc_Char)0x75,  /* [4915] */
    (xdc_Char)0x6e,  /* [4916] */
    (xdc_Char)0x63,  /* [4917] */
    (xdc_Char)0x3a,  /* [4918] */
    (xdc_Char)0x20,  /* [4919] */
    (xdc_Char)0x30,  /* [4920] */
    (xdc_Char)0x78,  /* [4921] */
    (xdc_Char)0x25,  /* [4922] */
    (xdc_Char)0x78,  /* [4923] */
    (xdc_Char)0x0,  /* [4924] */
    (xdc_Char)0x4c,  /* [4925] */
    (xdc_Char)0x4d,  /* [4926] */
    (xdc_Char)0x5f,  /* [4927] */
    (xdc_Char)0x70,  /* [4928] */
    (xdc_Char)0x6f,  /* [4929] */
    (xdc_Char)0x73,  /* [4930] */
    (xdc_Char)0x74,  /* [4931] */
    (xdc_Char)0x3a,  /* [4932] */
    (xdc_Char)0x20,  /* [4933] */
    (xdc_Char)0x65,  /* [4934] */
    (xdc_Char)0x76,  /* [4935] */
    (xdc_Char)0x65,  /* [4936] */
    (xdc_Char)0x6e,  /* [4937] */
    (xdc_Char)0x74,  /* [4938] */
    (xdc_Char)0x3a,  /* [4939] */
    (xdc_Char)0x20,  /* [4940] */
    (xdc_Char)0x30,  /* [4941] */
    (xdc_Char)0x78,  /* [4942] */
    (xdc_Char)0x25,  /* [4943] */
    (xdc_Char)0x78,  /* [4944] */
    (xdc_Char)0x2c,  /* [4945] */
    (xdc_Char)0x20,  /* [4946] */
    (xdc_Char)0x63,  /* [4947] */
    (xdc_Char)0x75,  /* [4948] */
    (xdc_Char)0x72,  /* [4949] */
    (xdc_Char)0x72,  /* [4950] */
    (xdc_Char)0x45,  /* [4951] */
    (xdc_Char)0x76,  /* [4952] */
    (xdc_Char)0x65,  /* [4953] */
    (xdc_Char)0x6e,  /* [4954] */
    (xdc_Char)0x74,  /* [4955] */
    (xdc_Char)0x73,  /* [4956] */
    (xdc_Char)0x3a,  /* [4957] */
    (xdc_Char)0x20,  /* [4958] */
    (xdc_Char)0x30,  /* [4959] */
    (xdc_Char)0x78,  /* [4960] */
    (xdc_Char)0x25,  /* [4961] */
    (xdc_Char)0x78,  /* [4962] */
    (xdc_Char)0x2c,  /* [4963] */
    (xdc_Char)0x20,  /* [4964] */
    (xdc_Char)0x65,  /* [4965] */
    (xdc_Char)0x76,  /* [4966] */
    (xdc_Char)0x65,  /* [4967] */
    (xdc_Char)0x6e,  /* [4968] */
    (xdc_Char)0x74,  /* [4969] */
    (xdc_Char)0x49,  /* [4970] */
    (xdc_Char)0x64,  /* [4971] */
    (xdc_Char)0x3a,  /* [4972] */
    (xdc_Char)0x20,  /* [4973] */
    (xdc_Char)0x30,  /* [4974] */
    (xdc_Char)0x78,  /* [4975] */
    (xdc_Char)0x25,  /* [4976] */
    (xdc_Char)0x78,  /* [4977] */
    (xdc_Char)0x0,  /* [4978] */
    (xdc_Char)0x4c,  /* [4979] */
    (xdc_Char)0x4d,  /* [4980] */
    (xdc_Char)0x5f,  /* [4981] */
    (xdc_Char)0x70,  /* [4982] */
    (xdc_Char)0x65,  /* [4983] */
    (xdc_Char)0x6e,  /* [4984] */
    (xdc_Char)0x64,  /* [4985] */
    (xdc_Char)0x3a,  /* [4986] */
    (xdc_Char)0x20,  /* [4987] */
    (xdc_Char)0x65,  /* [4988] */
    (xdc_Char)0x76,  /* [4989] */
    (xdc_Char)0x65,  /* [4990] */
    (xdc_Char)0x6e,  /* [4991] */
    (xdc_Char)0x74,  /* [4992] */
    (xdc_Char)0x3a,  /* [4993] */
    (xdc_Char)0x20,  /* [4994] */
    (xdc_Char)0x30,  /* [4995] */
    (xdc_Char)0x78,  /* [4996] */
    (xdc_Char)0x25,  /* [4997] */
    (xdc_Char)0x78,  /* [4998] */
    (xdc_Char)0x2c,  /* [4999] */
    (xdc_Char)0x20,  /* [5000] */
    (xdc_Char)0x63,  /* [5001] */
    (xdc_Char)0x75,  /* [5002] */
    (xdc_Char)0x72,  /* [5003] */
    (xdc_Char)0x72,  /* [5004] */
    (xdc_Char)0x45,  /* [5005] */
    (xdc_Char)0x76,  /* [5006] */
    (xdc_Char)0x65,  /* [5007] */
    (xdc_Char)0x6e,  /* [5008] */
    (xdc_Char)0x74,  /* [5009] */
    (xdc_Char)0x73,  /* [5010] */
    (xdc_Char)0x3a,  /* [5011] */
    (xdc_Char)0x20,  /* [5012] */
    (xdc_Char)0x30,  /* [5013] */
    (xdc_Char)0x78,  /* [5014] */
    (xdc_Char)0x25,  /* [5015] */
    (xdc_Char)0x78,  /* [5016] */
    (xdc_Char)0x2c,  /* [5017] */
    (xdc_Char)0x20,  /* [5018] */
    (xdc_Char)0x61,  /* [5019] */
    (xdc_Char)0x6e,  /* [5020] */
    (xdc_Char)0x64,  /* [5021] */
    (xdc_Char)0x4d,  /* [5022] */
    (xdc_Char)0x61,  /* [5023] */
    (xdc_Char)0x73,  /* [5024] */
    (xdc_Char)0x6b,  /* [5025] */
    (xdc_Char)0x3a,  /* [5026] */
    (xdc_Char)0x20,  /* [5027] */
    (xdc_Char)0x30,  /* [5028] */
    (xdc_Char)0x78,  /* [5029] */
    (xdc_Char)0x25,  /* [5030] */
    (xdc_Char)0x78,  /* [5031] */
    (xdc_Char)0x2c,  /* [5032] */
    (xdc_Char)0x20,  /* [5033] */
    (xdc_Char)0x6f,  /* [5034] */
    (xdc_Char)0x72,  /* [5035] */
    (xdc_Char)0x4d,  /* [5036] */
    (xdc_Char)0x61,  /* [5037] */
    (xdc_Char)0x73,  /* [5038] */
    (xdc_Char)0x6b,  /* [5039] */
    (xdc_Char)0x3a,  /* [5040] */
    (xdc_Char)0x20,  /* [5041] */
    (xdc_Char)0x30,  /* [5042] */
    (xdc_Char)0x78,  /* [5043] */
    (xdc_Char)0x25,  /* [5044] */
    (xdc_Char)0x78,  /* [5045] */
    (xdc_Char)0x2c,  /* [5046] */
    (xdc_Char)0x20,  /* [5047] */
    (xdc_Char)0x74,  /* [5048] */
    (xdc_Char)0x69,  /* [5049] */
    (xdc_Char)0x6d,  /* [5050] */
    (xdc_Char)0x65,  /* [5051] */
    (xdc_Char)0x6f,  /* [5052] */
    (xdc_Char)0x75,  /* [5053] */
    (xdc_Char)0x74,  /* [5054] */
    (xdc_Char)0x3a,  /* [5055] */
    (xdc_Char)0x20,  /* [5056] */
    (xdc_Char)0x25,  /* [5057] */
    (xdc_Char)0x64,  /* [5058] */
    (xdc_Char)0x0,  /* [5059] */
    (xdc_Char)0x4c,  /* [5060] */
    (xdc_Char)0x4d,  /* [5061] */
    (xdc_Char)0x5f,  /* [5062] */
    (xdc_Char)0x70,  /* [5063] */
    (xdc_Char)0x6f,  /* [5064] */
    (xdc_Char)0x73,  /* [5065] */
    (xdc_Char)0x74,  /* [5066] */
    (xdc_Char)0x3a,  /* [5067] */
    (xdc_Char)0x20,  /* [5068] */
    (xdc_Char)0x73,  /* [5069] */
    (xdc_Char)0x65,  /* [5070] */
    (xdc_Char)0x6d,  /* [5071] */
    (xdc_Char)0x3a,  /* [5072] */
    (xdc_Char)0x20,  /* [5073] */
    (xdc_Char)0x30,  /* [5074] */
    (xdc_Char)0x78,  /* [5075] */
    (xdc_Char)0x25,  /* [5076] */
    (xdc_Char)0x78,  /* [5077] */
    (xdc_Char)0x2c,  /* [5078] */
    (xdc_Char)0x20,  /* [5079] */
    (xdc_Char)0x63,  /* [5080] */
    (xdc_Char)0x6f,  /* [5081] */
    (xdc_Char)0x75,  /* [5082] */
    (xdc_Char)0x6e,  /* [5083] */
    (xdc_Char)0x74,  /* [5084] */
    (xdc_Char)0x3a,  /* [5085] */
    (xdc_Char)0x20,  /* [5086] */
    (xdc_Char)0x25,  /* [5087] */
    (xdc_Char)0x64,  /* [5088] */
    (xdc_Char)0x0,  /* [5089] */
    (xdc_Char)0x4c,  /* [5090] */
    (xdc_Char)0x4d,  /* [5091] */
    (xdc_Char)0x5f,  /* [5092] */
    (xdc_Char)0x70,  /* [5093] */
    (xdc_Char)0x65,  /* [5094] */
    (xdc_Char)0x6e,  /* [5095] */
    (xdc_Char)0x64,  /* [5096] */
    (xdc_Char)0x3a,  /* [5097] */
    (xdc_Char)0x20,  /* [5098] */
    (xdc_Char)0x73,  /* [5099] */
    (xdc_Char)0x65,  /* [5100] */
    (xdc_Char)0x6d,  /* [5101] */
    (xdc_Char)0x3a,  /* [5102] */
    (xdc_Char)0x20,  /* [5103] */
    (xdc_Char)0x30,  /* [5104] */
    (xdc_Char)0x78,  /* [5105] */
    (xdc_Char)0x25,  /* [5106] */
    (xdc_Char)0x78,  /* [5107] */
    (xdc_Char)0x2c,  /* [5108] */
    (xdc_Char)0x20,  /* [5109] */
    (xdc_Char)0x63,  /* [5110] */
    (xdc_Char)0x6f,  /* [5111] */
    (xdc_Char)0x75,  /* [5112] */
    (xdc_Char)0x6e,  /* [5113] */
    (xdc_Char)0x74,  /* [5114] */
    (xdc_Char)0x3a,  /* [5115] */
    (xdc_Char)0x20,  /* [5116] */
    (xdc_Char)0x25,  /* [5117] */
    (xdc_Char)0x64,  /* [5118] */
    (xdc_Char)0x2c,  /* [5119] */
    (xdc_Char)0x20,  /* [5120] */
    (xdc_Char)0x74,  /* [5121] */
    (xdc_Char)0x69,  /* [5122] */
    (xdc_Char)0x6d,  /* [5123] */
    (xdc_Char)0x65,  /* [5124] */
    (xdc_Char)0x6f,  /* [5125] */
    (xdc_Char)0x75,  /* [5126] */
    (xdc_Char)0x74,  /* [5127] */
    (xdc_Char)0x3a,  /* [5128] */
    (xdc_Char)0x20,  /* [5129] */
    (xdc_Char)0x25,  /* [5130] */
    (xdc_Char)0x64,  /* [5131] */
    (xdc_Char)0x0,  /* [5132] */
    (xdc_Char)0x4c,  /* [5133] */
    (xdc_Char)0x4d,  /* [5134] */
    (xdc_Char)0x5f,  /* [5135] */
    (xdc_Char)0x62,  /* [5136] */
    (xdc_Char)0x65,  /* [5137] */
    (xdc_Char)0x67,  /* [5138] */
    (xdc_Char)0x69,  /* [5139] */
    (xdc_Char)0x6e,  /* [5140] */
    (xdc_Char)0x3a,  /* [5141] */
    (xdc_Char)0x20,  /* [5142] */
    (xdc_Char)0x73,  /* [5143] */
    (xdc_Char)0x77,  /* [5144] */
    (xdc_Char)0x69,  /* [5145] */
    (xdc_Char)0x3a,  /* [5146] */
    (xdc_Char)0x20,  /* [5147] */
    (xdc_Char)0x30,  /* [5148] */
    (xdc_Char)0x78,  /* [5149] */
    (xdc_Char)0x25,  /* [5150] */
    (xdc_Char)0x78,  /* [5151] */
    (xdc_Char)0x2c,  /* [5152] */
    (xdc_Char)0x20,  /* [5153] */
    (xdc_Char)0x66,  /* [5154] */
    (xdc_Char)0x75,  /* [5155] */
    (xdc_Char)0x6e,  /* [5156] */
    (xdc_Char)0x63,  /* [5157] */
    (xdc_Char)0x3a,  /* [5158] */
    (xdc_Char)0x20,  /* [5159] */
    (xdc_Char)0x30,  /* [5160] */
    (xdc_Char)0x78,  /* [5161] */
    (xdc_Char)0x25,  /* [5162] */
    (xdc_Char)0x78,  /* [5163] */
    (xdc_Char)0x2c,  /* [5164] */
    (xdc_Char)0x20,  /* [5165] */
    (xdc_Char)0x70,  /* [5166] */
    (xdc_Char)0x72,  /* [5167] */
    (xdc_Char)0x65,  /* [5168] */
    (xdc_Char)0x54,  /* [5169] */
    (xdc_Char)0x68,  /* [5170] */
    (xdc_Char)0x72,  /* [5171] */
    (xdc_Char)0x65,  /* [5172] */
    (xdc_Char)0x61,  /* [5173] */
    (xdc_Char)0x64,  /* [5174] */
    (xdc_Char)0x3a,  /* [5175] */
    (xdc_Char)0x20,  /* [5176] */
    (xdc_Char)0x25,  /* [5177] */
    (xdc_Char)0x64,  /* [5178] */
    (xdc_Char)0x0,  /* [5179] */
    (xdc_Char)0x4c,  /* [5180] */
    (xdc_Char)0x44,  /* [5181] */
    (xdc_Char)0x5f,  /* [5182] */
    (xdc_Char)0x65,  /* [5183] */
    (xdc_Char)0x6e,  /* [5184] */
    (xdc_Char)0x64,  /* [5185] */
    (xdc_Char)0x3a,  /* [5186] */
    (xdc_Char)0x20,  /* [5187] */
    (xdc_Char)0x73,  /* [5188] */
    (xdc_Char)0x77,  /* [5189] */
    (xdc_Char)0x69,  /* [5190] */
    (xdc_Char)0x3a,  /* [5191] */
    (xdc_Char)0x20,  /* [5192] */
    (xdc_Char)0x30,  /* [5193] */
    (xdc_Char)0x78,  /* [5194] */
    (xdc_Char)0x25,  /* [5195] */
    (xdc_Char)0x78,  /* [5196] */
    (xdc_Char)0x0,  /* [5197] */
    (xdc_Char)0x4c,  /* [5198] */
    (xdc_Char)0x4d,  /* [5199] */
    (xdc_Char)0x5f,  /* [5200] */
    (xdc_Char)0x70,  /* [5201] */
    (xdc_Char)0x6f,  /* [5202] */
    (xdc_Char)0x73,  /* [5203] */
    (xdc_Char)0x74,  /* [5204] */
    (xdc_Char)0x3a,  /* [5205] */
    (xdc_Char)0x20,  /* [5206] */
    (xdc_Char)0x73,  /* [5207] */
    (xdc_Char)0x77,  /* [5208] */
    (xdc_Char)0x69,  /* [5209] */
    (xdc_Char)0x3a,  /* [5210] */
    (xdc_Char)0x20,  /* [5211] */
    (xdc_Char)0x30,  /* [5212] */
    (xdc_Char)0x78,  /* [5213] */
    (xdc_Char)0x25,  /* [5214] */
    (xdc_Char)0x78,  /* [5215] */
    (xdc_Char)0x2c,  /* [5216] */
    (xdc_Char)0x20,  /* [5217] */
    (xdc_Char)0x66,  /* [5218] */
    (xdc_Char)0x75,  /* [5219] */
    (xdc_Char)0x6e,  /* [5220] */
    (xdc_Char)0x63,  /* [5221] */
    (xdc_Char)0x3a,  /* [5222] */
    (xdc_Char)0x20,  /* [5223] */
    (xdc_Char)0x30,  /* [5224] */
    (xdc_Char)0x78,  /* [5225] */
    (xdc_Char)0x25,  /* [5226] */
    (xdc_Char)0x78,  /* [5227] */
    (xdc_Char)0x2c,  /* [5228] */
    (xdc_Char)0x20,  /* [5229] */
    (xdc_Char)0x70,  /* [5230] */
    (xdc_Char)0x72,  /* [5231] */
    (xdc_Char)0x69,  /* [5232] */
    (xdc_Char)0x3a,  /* [5233] */
    (xdc_Char)0x20,  /* [5234] */
    (xdc_Char)0x25,  /* [5235] */
    (xdc_Char)0x64,  /* [5236] */
    (xdc_Char)0x0,  /* [5237] */
    (xdc_Char)0x4c,  /* [5238] */
    (xdc_Char)0x4d,  /* [5239] */
    (xdc_Char)0x5f,  /* [5240] */
    (xdc_Char)0x73,  /* [5241] */
    (xdc_Char)0x77,  /* [5242] */
    (xdc_Char)0x69,  /* [5243] */
    (xdc_Char)0x74,  /* [5244] */
    (xdc_Char)0x63,  /* [5245] */
    (xdc_Char)0x68,  /* [5246] */
    (xdc_Char)0x3a,  /* [5247] */
    (xdc_Char)0x20,  /* [5248] */
    (xdc_Char)0x6f,  /* [5249] */
    (xdc_Char)0x6c,  /* [5250] */
    (xdc_Char)0x64,  /* [5251] */
    (xdc_Char)0x74,  /* [5252] */
    (xdc_Char)0x73,  /* [5253] */
    (xdc_Char)0x6b,  /* [5254] */
    (xdc_Char)0x3a,  /* [5255] */
    (xdc_Char)0x20,  /* [5256] */
    (xdc_Char)0x30,  /* [5257] */
    (xdc_Char)0x78,  /* [5258] */
    (xdc_Char)0x25,  /* [5259] */
    (xdc_Char)0x78,  /* [5260] */
    (xdc_Char)0x2c,  /* [5261] */
    (xdc_Char)0x20,  /* [5262] */
    (xdc_Char)0x6f,  /* [5263] */
    (xdc_Char)0x6c,  /* [5264] */
    (xdc_Char)0x64,  /* [5265] */
    (xdc_Char)0x66,  /* [5266] */
    (xdc_Char)0x75,  /* [5267] */
    (xdc_Char)0x6e,  /* [5268] */
    (xdc_Char)0x63,  /* [5269] */
    (xdc_Char)0x3a,  /* [5270] */
    (xdc_Char)0x20,  /* [5271] */
    (xdc_Char)0x30,  /* [5272] */
    (xdc_Char)0x78,  /* [5273] */
    (xdc_Char)0x25,  /* [5274] */
    (xdc_Char)0x78,  /* [5275] */
    (xdc_Char)0x2c,  /* [5276] */
    (xdc_Char)0x20,  /* [5277] */
    (xdc_Char)0x6e,  /* [5278] */
    (xdc_Char)0x65,  /* [5279] */
    (xdc_Char)0x77,  /* [5280] */
    (xdc_Char)0x74,  /* [5281] */
    (xdc_Char)0x73,  /* [5282] */
    (xdc_Char)0x6b,  /* [5283] */
    (xdc_Char)0x3a,  /* [5284] */
    (xdc_Char)0x20,  /* [5285] */
    (xdc_Char)0x30,  /* [5286] */
    (xdc_Char)0x78,  /* [5287] */
    (xdc_Char)0x25,  /* [5288] */
    (xdc_Char)0x78,  /* [5289] */
    (xdc_Char)0x2c,  /* [5290] */
    (xdc_Char)0x20,  /* [5291] */
    (xdc_Char)0x6e,  /* [5292] */
    (xdc_Char)0x65,  /* [5293] */
    (xdc_Char)0x77,  /* [5294] */
    (xdc_Char)0x66,  /* [5295] */
    (xdc_Char)0x75,  /* [5296] */
    (xdc_Char)0x6e,  /* [5297] */
    (xdc_Char)0x63,  /* [5298] */
    (xdc_Char)0x3a,  /* [5299] */
    (xdc_Char)0x20,  /* [5300] */
    (xdc_Char)0x30,  /* [5301] */
    (xdc_Char)0x78,  /* [5302] */
    (xdc_Char)0x25,  /* [5303] */
    (xdc_Char)0x78,  /* [5304] */
    (xdc_Char)0x0,  /* [5305] */
    (xdc_Char)0x4c,  /* [5306] */
    (xdc_Char)0x4d,  /* [5307] */
    (xdc_Char)0x5f,  /* [5308] */
    (xdc_Char)0x73,  /* [5309] */
    (xdc_Char)0x6c,  /* [5310] */
    (xdc_Char)0x65,  /* [5311] */
    (xdc_Char)0x65,  /* [5312] */
    (xdc_Char)0x70,  /* [5313] */
    (xdc_Char)0x3a,  /* [5314] */
    (xdc_Char)0x20,  /* [5315] */
    (xdc_Char)0x74,  /* [5316] */
    (xdc_Char)0x73,  /* [5317] */
    (xdc_Char)0x6b,  /* [5318] */
    (xdc_Char)0x3a,  /* [5319] */
    (xdc_Char)0x20,  /* [5320] */
    (xdc_Char)0x30,  /* [5321] */
    (xdc_Char)0x78,  /* [5322] */
    (xdc_Char)0x25,  /* [5323] */
    (xdc_Char)0x78,  /* [5324] */
    (xdc_Char)0x2c,  /* [5325] */
    (xdc_Char)0x20,  /* [5326] */
    (xdc_Char)0x66,  /* [5327] */
    (xdc_Char)0x75,  /* [5328] */
    (xdc_Char)0x6e,  /* [5329] */
    (xdc_Char)0x63,  /* [5330] */
    (xdc_Char)0x3a,  /* [5331] */
    (xdc_Char)0x20,  /* [5332] */
    (xdc_Char)0x30,  /* [5333] */
    (xdc_Char)0x78,  /* [5334] */
    (xdc_Char)0x25,  /* [5335] */
    (xdc_Char)0x78,  /* [5336] */
    (xdc_Char)0x2c,  /* [5337] */
    (xdc_Char)0x20,  /* [5338] */
    (xdc_Char)0x74,  /* [5339] */
    (xdc_Char)0x69,  /* [5340] */
    (xdc_Char)0x6d,  /* [5341] */
    (xdc_Char)0x65,  /* [5342] */
    (xdc_Char)0x6f,  /* [5343] */
    (xdc_Char)0x75,  /* [5344] */
    (xdc_Char)0x74,  /* [5345] */
    (xdc_Char)0x3a,  /* [5346] */
    (xdc_Char)0x20,  /* [5347] */
    (xdc_Char)0x25,  /* [5348] */
    (xdc_Char)0x64,  /* [5349] */
    (xdc_Char)0x0,  /* [5350] */
    (xdc_Char)0x4c,  /* [5351] */
    (xdc_Char)0x44,  /* [5352] */
    (xdc_Char)0x5f,  /* [5353] */
    (xdc_Char)0x72,  /* [5354] */
    (xdc_Char)0x65,  /* [5355] */
    (xdc_Char)0x61,  /* [5356] */
    (xdc_Char)0x64,  /* [5357] */
    (xdc_Char)0x79,  /* [5358] */
    (xdc_Char)0x3a,  /* [5359] */
    (xdc_Char)0x20,  /* [5360] */
    (xdc_Char)0x74,  /* [5361] */
    (xdc_Char)0x73,  /* [5362] */
    (xdc_Char)0x6b,  /* [5363] */
    (xdc_Char)0x3a,  /* [5364] */
    (xdc_Char)0x20,  /* [5365] */
    (xdc_Char)0x30,  /* [5366] */
    (xdc_Char)0x78,  /* [5367] */
    (xdc_Char)0x25,  /* [5368] */
    (xdc_Char)0x78,  /* [5369] */
    (xdc_Char)0x2c,  /* [5370] */
    (xdc_Char)0x20,  /* [5371] */
    (xdc_Char)0x66,  /* [5372] */
    (xdc_Char)0x75,  /* [5373] */
    (xdc_Char)0x6e,  /* [5374] */
    (xdc_Char)0x63,  /* [5375] */
    (xdc_Char)0x3a,  /* [5376] */
    (xdc_Char)0x20,  /* [5377] */
    (xdc_Char)0x30,  /* [5378] */
    (xdc_Char)0x78,  /* [5379] */
    (xdc_Char)0x25,  /* [5380] */
    (xdc_Char)0x78,  /* [5381] */
    (xdc_Char)0x2c,  /* [5382] */
    (xdc_Char)0x20,  /* [5383] */
    (xdc_Char)0x70,  /* [5384] */
    (xdc_Char)0x72,  /* [5385] */
    (xdc_Char)0x69,  /* [5386] */
    (xdc_Char)0x3a,  /* [5387] */
    (xdc_Char)0x20,  /* [5388] */
    (xdc_Char)0x25,  /* [5389] */
    (xdc_Char)0x64,  /* [5390] */
    (xdc_Char)0x0,  /* [5391] */
    (xdc_Char)0x4c,  /* [5392] */
    (xdc_Char)0x44,  /* [5393] */
    (xdc_Char)0x5f,  /* [5394] */
    (xdc_Char)0x62,  /* [5395] */
    (xdc_Char)0x6c,  /* [5396] */
    (xdc_Char)0x6f,  /* [5397] */
    (xdc_Char)0x63,  /* [5398] */
    (xdc_Char)0x6b,  /* [5399] */
    (xdc_Char)0x3a,  /* [5400] */
    (xdc_Char)0x20,  /* [5401] */
    (xdc_Char)0x74,  /* [5402] */
    (xdc_Char)0x73,  /* [5403] */
    (xdc_Char)0x6b,  /* [5404] */
    (xdc_Char)0x3a,  /* [5405] */
    (xdc_Char)0x20,  /* [5406] */
    (xdc_Char)0x30,  /* [5407] */
    (xdc_Char)0x78,  /* [5408] */
    (xdc_Char)0x25,  /* [5409] */
    (xdc_Char)0x78,  /* [5410] */
    (xdc_Char)0x2c,  /* [5411] */
    (xdc_Char)0x20,  /* [5412] */
    (xdc_Char)0x66,  /* [5413] */
    (xdc_Char)0x75,  /* [5414] */
    (xdc_Char)0x6e,  /* [5415] */
    (xdc_Char)0x63,  /* [5416] */
    (xdc_Char)0x3a,  /* [5417] */
    (xdc_Char)0x20,  /* [5418] */
    (xdc_Char)0x30,  /* [5419] */
    (xdc_Char)0x78,  /* [5420] */
    (xdc_Char)0x25,  /* [5421] */
    (xdc_Char)0x78,  /* [5422] */
    (xdc_Char)0x0,  /* [5423] */
    (xdc_Char)0x4c,  /* [5424] */
    (xdc_Char)0x4d,  /* [5425] */
    (xdc_Char)0x5f,  /* [5426] */
    (xdc_Char)0x79,  /* [5427] */
    (xdc_Char)0x69,  /* [5428] */
    (xdc_Char)0x65,  /* [5429] */
    (xdc_Char)0x6c,  /* [5430] */
    (xdc_Char)0x64,  /* [5431] */
    (xdc_Char)0x3a,  /* [5432] */
    (xdc_Char)0x20,  /* [5433] */
    (xdc_Char)0x74,  /* [5434] */
    (xdc_Char)0x73,  /* [5435] */
    (xdc_Char)0x6b,  /* [5436] */
    (xdc_Char)0x3a,  /* [5437] */
    (xdc_Char)0x20,  /* [5438] */
    (xdc_Char)0x30,  /* [5439] */
    (xdc_Char)0x78,  /* [5440] */
    (xdc_Char)0x25,  /* [5441] */
    (xdc_Char)0x78,  /* [5442] */
    (xdc_Char)0x2c,  /* [5443] */
    (xdc_Char)0x20,  /* [5444] */
    (xdc_Char)0x66,  /* [5445] */
    (xdc_Char)0x75,  /* [5446] */
    (xdc_Char)0x6e,  /* [5447] */
    (xdc_Char)0x63,  /* [5448] */
    (xdc_Char)0x3a,  /* [5449] */
    (xdc_Char)0x20,  /* [5450] */
    (xdc_Char)0x30,  /* [5451] */
    (xdc_Char)0x78,  /* [5452] */
    (xdc_Char)0x25,  /* [5453] */
    (xdc_Char)0x78,  /* [5454] */
    (xdc_Char)0x2c,  /* [5455] */
    (xdc_Char)0x20,  /* [5456] */
    (xdc_Char)0x63,  /* [5457] */
    (xdc_Char)0x75,  /* [5458] */
    (xdc_Char)0x72,  /* [5459] */
    (xdc_Char)0x72,  /* [5460] */
    (xdc_Char)0x54,  /* [5461] */
    (xdc_Char)0x68,  /* [5462] */
    (xdc_Char)0x72,  /* [5463] */
    (xdc_Char)0x65,  /* [5464] */
    (xdc_Char)0x61,  /* [5465] */
    (xdc_Char)0x64,  /* [5466] */
    (xdc_Char)0x3a,  /* [5467] */
    (xdc_Char)0x20,  /* [5468] */
    (xdc_Char)0x25,  /* [5469] */
    (xdc_Char)0x64,  /* [5470] */
    (xdc_Char)0x0,  /* [5471] */
    (xdc_Char)0x4c,  /* [5472] */
    (xdc_Char)0x4d,  /* [5473] */
    (xdc_Char)0x5f,  /* [5474] */
    (xdc_Char)0x73,  /* [5475] */
    (xdc_Char)0x65,  /* [5476] */
    (xdc_Char)0x74,  /* [5477] */
    (xdc_Char)0x50,  /* [5478] */
    (xdc_Char)0x72,  /* [5479] */
    (xdc_Char)0x69,  /* [5480] */
    (xdc_Char)0x3a,  /* [5481] */
    (xdc_Char)0x20,  /* [5482] */
    (xdc_Char)0x74,  /* [5483] */
    (xdc_Char)0x73,  /* [5484] */
    (xdc_Char)0x6b,  /* [5485] */
    (xdc_Char)0x3a,  /* [5486] */
    (xdc_Char)0x20,  /* [5487] */
    (xdc_Char)0x30,  /* [5488] */
    (xdc_Char)0x78,  /* [5489] */
    (xdc_Char)0x25,  /* [5490] */
    (xdc_Char)0x78,  /* [5491] */
    (xdc_Char)0x2c,  /* [5492] */
    (xdc_Char)0x20,  /* [5493] */
    (xdc_Char)0x66,  /* [5494] */
    (xdc_Char)0x75,  /* [5495] */
    (xdc_Char)0x6e,  /* [5496] */
    (xdc_Char)0x63,  /* [5497] */
    (xdc_Char)0x3a,  /* [5498] */
    (xdc_Char)0x20,  /* [5499] */
    (xdc_Char)0x30,  /* [5500] */
    (xdc_Char)0x78,  /* [5501] */
    (xdc_Char)0x25,  /* [5502] */
    (xdc_Char)0x78,  /* [5503] */
    (xdc_Char)0x2c,  /* [5504] */
    (xdc_Char)0x20,  /* [5505] */
    (xdc_Char)0x6f,  /* [5506] */
    (xdc_Char)0x6c,  /* [5507] */
    (xdc_Char)0x64,  /* [5508] */
    (xdc_Char)0x50,  /* [5509] */
    (xdc_Char)0x72,  /* [5510] */
    (xdc_Char)0x69,  /* [5511] */
    (xdc_Char)0x3a,  /* [5512] */
    (xdc_Char)0x20,  /* [5513] */
    (xdc_Char)0x25,  /* [5514] */
    (xdc_Char)0x64,  /* [5515] */
    (xdc_Char)0x2c,  /* [5516] */
    (xdc_Char)0x20,  /* [5517] */
    (xdc_Char)0x6e,  /* [5518] */
    (xdc_Char)0x65,  /* [5519] */
    (xdc_Char)0x77,  /* [5520] */
    (xdc_Char)0x50,  /* [5521] */
    (xdc_Char)0x72,  /* [5522] */
    (xdc_Char)0x69,  /* [5523] */
    (xdc_Char)0x20,  /* [5524] */
    (xdc_Char)0x25,  /* [5525] */
    (xdc_Char)0x64,  /* [5526] */
    (xdc_Char)0x0,  /* [5527] */
    (xdc_Char)0x4c,  /* [5528] */
    (xdc_Char)0x44,  /* [5529] */
    (xdc_Char)0x5f,  /* [5530] */
    (xdc_Char)0x65,  /* [5531] */
    (xdc_Char)0x78,  /* [5532] */
    (xdc_Char)0x69,  /* [5533] */
    (xdc_Char)0x74,  /* [5534] */
    (xdc_Char)0x3a,  /* [5535] */
    (xdc_Char)0x20,  /* [5536] */
    (xdc_Char)0x74,  /* [5537] */
    (xdc_Char)0x73,  /* [5538] */
    (xdc_Char)0x6b,  /* [5539] */
    (xdc_Char)0x3a,  /* [5540] */
    (xdc_Char)0x20,  /* [5541] */
    (xdc_Char)0x30,  /* [5542] */
    (xdc_Char)0x78,  /* [5543] */
    (xdc_Char)0x25,  /* [5544] */
    (xdc_Char)0x78,  /* [5545] */
    (xdc_Char)0x2c,  /* [5546] */
    (xdc_Char)0x20,  /* [5547] */
    (xdc_Char)0x66,  /* [5548] */
    (xdc_Char)0x75,  /* [5549] */
    (xdc_Char)0x6e,  /* [5550] */
    (xdc_Char)0x63,  /* [5551] */
    (xdc_Char)0x3a,  /* [5552] */
    (xdc_Char)0x20,  /* [5553] */
    (xdc_Char)0x30,  /* [5554] */
    (xdc_Char)0x78,  /* [5555] */
    (xdc_Char)0x25,  /* [5556] */
    (xdc_Char)0x78,  /* [5557] */
    (xdc_Char)0x0,  /* [5558] */
    (xdc_Char)0x4c,  /* [5559] */
    (xdc_Char)0x4d,  /* [5560] */
    (xdc_Char)0x5f,  /* [5561] */
    (xdc_Char)0x73,  /* [5562] */
    (xdc_Char)0x65,  /* [5563] */
    (xdc_Char)0x74,  /* [5564] */
    (xdc_Char)0x41,  /* [5565] */
    (xdc_Char)0x66,  /* [5566] */
    (xdc_Char)0x66,  /* [5567] */
    (xdc_Char)0x69,  /* [5568] */
    (xdc_Char)0x6e,  /* [5569] */
    (xdc_Char)0x69,  /* [5570] */
    (xdc_Char)0x74,  /* [5571] */
    (xdc_Char)0x79,  /* [5572] */
    (xdc_Char)0x3a,  /* [5573] */
    (xdc_Char)0x20,  /* [5574] */
    (xdc_Char)0x74,  /* [5575] */
    (xdc_Char)0x73,  /* [5576] */
    (xdc_Char)0x6b,  /* [5577] */
    (xdc_Char)0x3a,  /* [5578] */
    (xdc_Char)0x20,  /* [5579] */
    (xdc_Char)0x30,  /* [5580] */
    (xdc_Char)0x78,  /* [5581] */
    (xdc_Char)0x25,  /* [5582] */
    (xdc_Char)0x78,  /* [5583] */
    (xdc_Char)0x2c,  /* [5584] */
    (xdc_Char)0x20,  /* [5585] */
    (xdc_Char)0x66,  /* [5586] */
    (xdc_Char)0x75,  /* [5587] */
    (xdc_Char)0x6e,  /* [5588] */
    (xdc_Char)0x63,  /* [5589] */
    (xdc_Char)0x3a,  /* [5590] */
    (xdc_Char)0x20,  /* [5591] */
    (xdc_Char)0x30,  /* [5592] */
    (xdc_Char)0x78,  /* [5593] */
    (xdc_Char)0x25,  /* [5594] */
    (xdc_Char)0x78,  /* [5595] */
    (xdc_Char)0x2c,  /* [5596] */
    (xdc_Char)0x20,  /* [5597] */
    (xdc_Char)0x6f,  /* [5598] */
    (xdc_Char)0x6c,  /* [5599] */
    (xdc_Char)0x64,  /* [5600] */
    (xdc_Char)0x43,  /* [5601] */
    (xdc_Char)0x6f,  /* [5602] */
    (xdc_Char)0x72,  /* [5603] */
    (xdc_Char)0x65,  /* [5604] */
    (xdc_Char)0x3a,  /* [5605] */
    (xdc_Char)0x20,  /* [5606] */
    (xdc_Char)0x25,  /* [5607] */
    (xdc_Char)0x64,  /* [5608] */
    (xdc_Char)0x2c,  /* [5609] */
    (xdc_Char)0x20,  /* [5610] */
    (xdc_Char)0x6f,  /* [5611] */
    (xdc_Char)0x6c,  /* [5612] */
    (xdc_Char)0x64,  /* [5613] */
    (xdc_Char)0x41,  /* [5614] */
    (xdc_Char)0x66,  /* [5615] */
    (xdc_Char)0x66,  /* [5616] */
    (xdc_Char)0x69,  /* [5617] */
    (xdc_Char)0x6e,  /* [5618] */
    (xdc_Char)0x69,  /* [5619] */
    (xdc_Char)0x74,  /* [5620] */
    (xdc_Char)0x79,  /* [5621] */
    (xdc_Char)0x20,  /* [5622] */
    (xdc_Char)0x25,  /* [5623] */
    (xdc_Char)0x64,  /* [5624] */
    (xdc_Char)0x2c,  /* [5625] */
    (xdc_Char)0x20,  /* [5626] */
    (xdc_Char)0x6e,  /* [5627] */
    (xdc_Char)0x65,  /* [5628] */
    (xdc_Char)0x77,  /* [5629] */
    (xdc_Char)0x41,  /* [5630] */
    (xdc_Char)0x66,  /* [5631] */
    (xdc_Char)0x66,  /* [5632] */
    (xdc_Char)0x69,  /* [5633] */
    (xdc_Char)0x6e,  /* [5634] */
    (xdc_Char)0x69,  /* [5635] */
    (xdc_Char)0x74,  /* [5636] */
    (xdc_Char)0x79,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x25,  /* [5639] */
    (xdc_Char)0x64,  /* [5640] */
    (xdc_Char)0x0,  /* [5641] */
    (xdc_Char)0x4c,  /* [5642] */
    (xdc_Char)0x44,  /* [5643] */
    (xdc_Char)0x5f,  /* [5644] */
    (xdc_Char)0x73,  /* [5645] */
    (xdc_Char)0x63,  /* [5646] */
    (xdc_Char)0x68,  /* [5647] */
    (xdc_Char)0x65,  /* [5648] */
    (xdc_Char)0x64,  /* [5649] */
    (xdc_Char)0x75,  /* [5650] */
    (xdc_Char)0x6c,  /* [5651] */
    (xdc_Char)0x65,  /* [5652] */
    (xdc_Char)0x3a,  /* [5653] */
    (xdc_Char)0x20,  /* [5654] */
    (xdc_Char)0x63,  /* [5655] */
    (xdc_Char)0x6f,  /* [5656] */
    (xdc_Char)0x72,  /* [5657] */
    (xdc_Char)0x65,  /* [5658] */
    (xdc_Char)0x49,  /* [5659] */
    (xdc_Char)0x64,  /* [5660] */
    (xdc_Char)0x3a,  /* [5661] */
    (xdc_Char)0x20,  /* [5662] */
    (xdc_Char)0x25,  /* [5663] */
    (xdc_Char)0x64,  /* [5664] */
    (xdc_Char)0x2c,  /* [5665] */
    (xdc_Char)0x20,  /* [5666] */
    (xdc_Char)0x77,  /* [5667] */
    (xdc_Char)0x6f,  /* [5668] */
    (xdc_Char)0x72,  /* [5669] */
    (xdc_Char)0x6b,  /* [5670] */
    (xdc_Char)0x46,  /* [5671] */
    (xdc_Char)0x6c,  /* [5672] */
    (xdc_Char)0x61,  /* [5673] */
    (xdc_Char)0x67,  /* [5674] */
    (xdc_Char)0x3a,  /* [5675] */
    (xdc_Char)0x20,  /* [5676] */
    (xdc_Char)0x25,  /* [5677] */
    (xdc_Char)0x64,  /* [5678] */
    (xdc_Char)0x2c,  /* [5679] */
    (xdc_Char)0x20,  /* [5680] */
    (xdc_Char)0x63,  /* [5681] */
    (xdc_Char)0x75,  /* [5682] */
    (xdc_Char)0x72,  /* [5683] */
    (xdc_Char)0x53,  /* [5684] */
    (xdc_Char)0x65,  /* [5685] */
    (xdc_Char)0x74,  /* [5686] */
    (xdc_Char)0x4c,  /* [5687] */
    (xdc_Char)0x6f,  /* [5688] */
    (xdc_Char)0x63,  /* [5689] */
    (xdc_Char)0x61,  /* [5690] */
    (xdc_Char)0x6c,  /* [5691] */
    (xdc_Char)0x3a,  /* [5692] */
    (xdc_Char)0x20,  /* [5693] */
    (xdc_Char)0x25,  /* [5694] */
    (xdc_Char)0x64,  /* [5695] */
    (xdc_Char)0x2c,  /* [5696] */
    (xdc_Char)0x20,  /* [5697] */
    (xdc_Char)0x63,  /* [5698] */
    (xdc_Char)0x75,  /* [5699] */
    (xdc_Char)0x72,  /* [5700] */
    (xdc_Char)0x53,  /* [5701] */
    (xdc_Char)0x65,  /* [5702] */
    (xdc_Char)0x74,  /* [5703] */
    (xdc_Char)0x58,  /* [5704] */
    (xdc_Char)0x3a,  /* [5705] */
    (xdc_Char)0x20,  /* [5706] */
    (xdc_Char)0x25,  /* [5707] */
    (xdc_Char)0x64,  /* [5708] */
    (xdc_Char)0x2c,  /* [5709] */
    (xdc_Char)0x20,  /* [5710] */
    (xdc_Char)0x63,  /* [5711] */
    (xdc_Char)0x75,  /* [5712] */
    (xdc_Char)0x72,  /* [5713] */
    (xdc_Char)0x4d,  /* [5714] */
    (xdc_Char)0x61,  /* [5715] */
    (xdc_Char)0x73,  /* [5716] */
    (xdc_Char)0x6b,  /* [5717] */
    (xdc_Char)0x4c,  /* [5718] */
    (xdc_Char)0x6f,  /* [5719] */
    (xdc_Char)0x63,  /* [5720] */
    (xdc_Char)0x61,  /* [5721] */
    (xdc_Char)0x6c,  /* [5722] */
    (xdc_Char)0x3a,  /* [5723] */
    (xdc_Char)0x20,  /* [5724] */
    (xdc_Char)0x25,  /* [5725] */
    (xdc_Char)0x64,  /* [5726] */
    (xdc_Char)0x0,  /* [5727] */
    (xdc_Char)0x4c,  /* [5728] */
    (xdc_Char)0x44,  /* [5729] */
    (xdc_Char)0x5f,  /* [5730] */
    (xdc_Char)0x6e,  /* [5731] */
    (xdc_Char)0x6f,  /* [5732] */
    (xdc_Char)0x57,  /* [5733] */
    (xdc_Char)0x6f,  /* [5734] */
    (xdc_Char)0x72,  /* [5735] */
    (xdc_Char)0x6b,  /* [5736] */
    (xdc_Char)0x3a,  /* [5737] */
    (xdc_Char)0x20,  /* [5738] */
    (xdc_Char)0x63,  /* [5739] */
    (xdc_Char)0x6f,  /* [5740] */
    (xdc_Char)0x72,  /* [5741] */
    (xdc_Char)0x65,  /* [5742] */
    (xdc_Char)0x49,  /* [5743] */
    (xdc_Char)0x64,  /* [5744] */
    (xdc_Char)0x3a,  /* [5745] */
    (xdc_Char)0x20,  /* [5746] */
    (xdc_Char)0x25,  /* [5747] */
    (xdc_Char)0x64,  /* [5748] */
    (xdc_Char)0x2c,  /* [5749] */
    (xdc_Char)0x20,  /* [5750] */
    (xdc_Char)0x63,  /* [5751] */
    (xdc_Char)0x75,  /* [5752] */
    (xdc_Char)0x72,  /* [5753] */
    (xdc_Char)0x53,  /* [5754] */
    (xdc_Char)0x65,  /* [5755] */
    (xdc_Char)0x74,  /* [5756] */
    (xdc_Char)0x4c,  /* [5757] */
    (xdc_Char)0x6f,  /* [5758] */
    (xdc_Char)0x63,  /* [5759] */
    (xdc_Char)0x61,  /* [5760] */
    (xdc_Char)0x6c,  /* [5761] */
    (xdc_Char)0x3a,  /* [5762] */
    (xdc_Char)0x20,  /* [5763] */
    (xdc_Char)0x25,  /* [5764] */
    (xdc_Char)0x64,  /* [5765] */
    (xdc_Char)0x2c,  /* [5766] */
    (xdc_Char)0x20,  /* [5767] */
    (xdc_Char)0x63,  /* [5768] */
    (xdc_Char)0x75,  /* [5769] */
    (xdc_Char)0x72,  /* [5770] */
    (xdc_Char)0x53,  /* [5771] */
    (xdc_Char)0x65,  /* [5772] */
    (xdc_Char)0x74,  /* [5773] */
    (xdc_Char)0x58,  /* [5774] */
    (xdc_Char)0x3a,  /* [5775] */
    (xdc_Char)0x20,  /* [5776] */
    (xdc_Char)0x25,  /* [5777] */
    (xdc_Char)0x64,  /* [5778] */
    (xdc_Char)0x2c,  /* [5779] */
    (xdc_Char)0x20,  /* [5780] */
    (xdc_Char)0x63,  /* [5781] */
    (xdc_Char)0x75,  /* [5782] */
    (xdc_Char)0x72,  /* [5783] */
    (xdc_Char)0x4d,  /* [5784] */
    (xdc_Char)0x61,  /* [5785] */
    (xdc_Char)0x73,  /* [5786] */
    (xdc_Char)0x6b,  /* [5787] */
    (xdc_Char)0x4c,  /* [5788] */
    (xdc_Char)0x6f,  /* [5789] */
    (xdc_Char)0x63,  /* [5790] */
    (xdc_Char)0x61,  /* [5791] */
    (xdc_Char)0x6c,  /* [5792] */
    (xdc_Char)0x3a,  /* [5793] */
    (xdc_Char)0x20,  /* [5794] */
    (xdc_Char)0x25,  /* [5795] */
    (xdc_Char)0x64,  /* [5796] */
    (xdc_Char)0x0,  /* [5797] */
    (xdc_Char)0x4c,  /* [5798] */
    (xdc_Char)0x4d,  /* [5799] */
    (xdc_Char)0x5f,  /* [5800] */
    (xdc_Char)0x62,  /* [5801] */
    (xdc_Char)0x65,  /* [5802] */
    (xdc_Char)0x67,  /* [5803] */
    (xdc_Char)0x69,  /* [5804] */
    (xdc_Char)0x6e,  /* [5805] */
    (xdc_Char)0x3a,  /* [5806] */
    (xdc_Char)0x20,  /* [5807] */
    (xdc_Char)0x68,  /* [5808] */
    (xdc_Char)0x77,  /* [5809] */
    (xdc_Char)0x69,  /* [5810] */
    (xdc_Char)0x3a,  /* [5811] */
    (xdc_Char)0x20,  /* [5812] */
    (xdc_Char)0x30,  /* [5813] */
    (xdc_Char)0x78,  /* [5814] */
    (xdc_Char)0x25,  /* [5815] */
    (xdc_Char)0x78,  /* [5816] */
    (xdc_Char)0x2c,  /* [5817] */
    (xdc_Char)0x20,  /* [5818] */
    (xdc_Char)0x66,  /* [5819] */
    (xdc_Char)0x75,  /* [5820] */
    (xdc_Char)0x6e,  /* [5821] */
    (xdc_Char)0x63,  /* [5822] */
    (xdc_Char)0x3a,  /* [5823] */
    (xdc_Char)0x20,  /* [5824] */
    (xdc_Char)0x30,  /* [5825] */
    (xdc_Char)0x78,  /* [5826] */
    (xdc_Char)0x25,  /* [5827] */
    (xdc_Char)0x78,  /* [5828] */
    (xdc_Char)0x2c,  /* [5829] */
    (xdc_Char)0x20,  /* [5830] */
    (xdc_Char)0x70,  /* [5831] */
    (xdc_Char)0x72,  /* [5832] */
    (xdc_Char)0x65,  /* [5833] */
    (xdc_Char)0x54,  /* [5834] */
    (xdc_Char)0x68,  /* [5835] */
    (xdc_Char)0x72,  /* [5836] */
    (xdc_Char)0x65,  /* [5837] */
    (xdc_Char)0x61,  /* [5838] */
    (xdc_Char)0x64,  /* [5839] */
    (xdc_Char)0x3a,  /* [5840] */
    (xdc_Char)0x20,  /* [5841] */
    (xdc_Char)0x25,  /* [5842] */
    (xdc_Char)0x64,  /* [5843] */
    (xdc_Char)0x2c,  /* [5844] */
    (xdc_Char)0x20,  /* [5845] */
    (xdc_Char)0x69,  /* [5846] */
    (xdc_Char)0x6e,  /* [5847] */
    (xdc_Char)0x74,  /* [5848] */
    (xdc_Char)0x4e,  /* [5849] */
    (xdc_Char)0x75,  /* [5850] */
    (xdc_Char)0x6d,  /* [5851] */
    (xdc_Char)0x3a,  /* [5852] */
    (xdc_Char)0x20,  /* [5853] */
    (xdc_Char)0x25,  /* [5854] */
    (xdc_Char)0x64,  /* [5855] */
    (xdc_Char)0x2c,  /* [5856] */
    (xdc_Char)0x20,  /* [5857] */
    (xdc_Char)0x69,  /* [5858] */
    (xdc_Char)0x72,  /* [5859] */
    (xdc_Char)0x70,  /* [5860] */
    (xdc_Char)0x3a,  /* [5861] */
    (xdc_Char)0x20,  /* [5862] */
    (xdc_Char)0x30,  /* [5863] */
    (xdc_Char)0x78,  /* [5864] */
    (xdc_Char)0x25,  /* [5865] */
    (xdc_Char)0x78,  /* [5866] */
    (xdc_Char)0x0,  /* [5867] */
    (xdc_Char)0x4c,  /* [5868] */
    (xdc_Char)0x44,  /* [5869] */
    (xdc_Char)0x5f,  /* [5870] */
    (xdc_Char)0x65,  /* [5871] */
    (xdc_Char)0x6e,  /* [5872] */
    (xdc_Char)0x64,  /* [5873] */
    (xdc_Char)0x3a,  /* [5874] */
    (xdc_Char)0x20,  /* [5875] */
    (xdc_Char)0x68,  /* [5876] */
    (xdc_Char)0x77,  /* [5877] */
    (xdc_Char)0x69,  /* [5878] */
    (xdc_Char)0x3a,  /* [5879] */
    (xdc_Char)0x20,  /* [5880] */
    (xdc_Char)0x30,  /* [5881] */
    (xdc_Char)0x78,  /* [5882] */
    (xdc_Char)0x25,  /* [5883] */
    (xdc_Char)0x78,  /* [5884] */
    (xdc_Char)0x0,  /* [5885] */
    (xdc_Char)0x53,  /* [5886] */
    (xdc_Char)0x74,  /* [5887] */
    (xdc_Char)0x61,  /* [5888] */
    (xdc_Char)0x72,  /* [5889] */
    (xdc_Char)0x74,  /* [5890] */
    (xdc_Char)0x3a,  /* [5891] */
    (xdc_Char)0x20,  /* [5892] */
    (xdc_Char)0x25,  /* [5893] */
    (xdc_Char)0x24,  /* [5894] */
    (xdc_Char)0x53,  /* [5895] */
    (xdc_Char)0x20,  /* [5896] */
    (xdc_Char)0x0,  /* [5897] */
    (xdc_Char)0x53,  /* [5898] */
    (xdc_Char)0x74,  /* [5899] */
    (xdc_Char)0x6f,  /* [5900] */
    (xdc_Char)0x70,  /* [5901] */
    (xdc_Char)0x3a,  /* [5902] */
    (xdc_Char)0x20,  /* [5903] */
    (xdc_Char)0x25,  /* [5904] */
    (xdc_Char)0x24,  /* [5905] */
    (xdc_Char)0x53,  /* [5906] */
    (xdc_Char)0x20,  /* [5907] */
    (xdc_Char)0x0,  /* [5908] */
    (xdc_Char)0x53,  /* [5909] */
    (xdc_Char)0x74,  /* [5910] */
    (xdc_Char)0x61,  /* [5911] */
    (xdc_Char)0x72,  /* [5912] */
    (xdc_Char)0x74,  /* [5913] */
    (xdc_Char)0x49,  /* [5914] */
    (xdc_Char)0x6e,  /* [5915] */
    (xdc_Char)0x73,  /* [5916] */
    (xdc_Char)0x74,  /* [5917] */
    (xdc_Char)0x61,  /* [5918] */
    (xdc_Char)0x6e,  /* [5919] */
    (xdc_Char)0x63,  /* [5920] */
    (xdc_Char)0x65,  /* [5921] */
    (xdc_Char)0x3a,  /* [5922] */
    (xdc_Char)0x20,  /* [5923] */
    (xdc_Char)0x25,  /* [5924] */
    (xdc_Char)0x24,  /* [5925] */
    (xdc_Char)0x53,  /* [5926] */
    (xdc_Char)0x20,  /* [5927] */
    (xdc_Char)0x0,  /* [5928] */
    (xdc_Char)0x53,  /* [5929] */
    (xdc_Char)0x74,  /* [5930] */
    (xdc_Char)0x6f,  /* [5931] */
    (xdc_Char)0x70,  /* [5932] */
    (xdc_Char)0x49,  /* [5933] */
    (xdc_Char)0x6e,  /* [5934] */
    (xdc_Char)0x73,  /* [5935] */
    (xdc_Char)0x74,  /* [5936] */
    (xdc_Char)0x61,  /* [5937] */
    (xdc_Char)0x6e,  /* [5938] */
    (xdc_Char)0x63,  /* [5939] */
    (xdc_Char)0x65,  /* [5940] */
    (xdc_Char)0x3a,  /* [5941] */
    (xdc_Char)0x20,  /* [5942] */
    (xdc_Char)0x25,  /* [5943] */
    (xdc_Char)0x24,  /* [5944] */
    (xdc_Char)0x53,  /* [5945] */
    (xdc_Char)0x20,  /* [5946] */
    (xdc_Char)0x0,  /* [5947] */
    (xdc_Char)0x53,  /* [5948] */
    (xdc_Char)0x74,  /* [5949] */
    (xdc_Char)0x61,  /* [5950] */
    (xdc_Char)0x72,  /* [5951] */
    (xdc_Char)0x74,  /* [5952] */
    (xdc_Char)0x49,  /* [5953] */
    (xdc_Char)0x6e,  /* [5954] */
    (xdc_Char)0x73,  /* [5955] */
    (xdc_Char)0x74,  /* [5956] */
    (xdc_Char)0x61,  /* [5957] */
    (xdc_Char)0x6e,  /* [5958] */
    (xdc_Char)0x63,  /* [5959] */
    (xdc_Char)0x65,  /* [5960] */
    (xdc_Char)0x57,  /* [5961] */
    (xdc_Char)0x69,  /* [5962] */
    (xdc_Char)0x74,  /* [5963] */
    (xdc_Char)0x68,  /* [5964] */
    (xdc_Char)0x41,  /* [5965] */
    (xdc_Char)0x64,  /* [5966] */
    (xdc_Char)0x72,  /* [5967] */
    (xdc_Char)0x73,  /* [5968] */
    (xdc_Char)0x3a,  /* [5969] */
    (xdc_Char)0x20,  /* [5970] */
    (xdc_Char)0x25,  /* [5971] */
    (xdc_Char)0x24,  /* [5972] */
    (xdc_Char)0x53,  /* [5973] */
    (xdc_Char)0x0,  /* [5974] */
    (xdc_Char)0x53,  /* [5975] */
    (xdc_Char)0x74,  /* [5976] */
    (xdc_Char)0x6f,  /* [5977] */
    (xdc_Char)0x70,  /* [5978] */
    (xdc_Char)0x49,  /* [5979] */
    (xdc_Char)0x6e,  /* [5980] */
    (xdc_Char)0x73,  /* [5981] */
    (xdc_Char)0x74,  /* [5982] */
    (xdc_Char)0x61,  /* [5983] */
    (xdc_Char)0x6e,  /* [5984] */
    (xdc_Char)0x63,  /* [5985] */
    (xdc_Char)0x65,  /* [5986] */
    (xdc_Char)0x57,  /* [5987] */
    (xdc_Char)0x69,  /* [5988] */
    (xdc_Char)0x74,  /* [5989] */
    (xdc_Char)0x68,  /* [5990] */
    (xdc_Char)0x41,  /* [5991] */
    (xdc_Char)0x64,  /* [5992] */
    (xdc_Char)0x72,  /* [5993] */
    (xdc_Char)0x73,  /* [5994] */
    (xdc_Char)0x3a,  /* [5995] */
    (xdc_Char)0x20,  /* [5996] */
    (xdc_Char)0x25,  /* [5997] */
    (xdc_Char)0x24,  /* [5998] */
    (xdc_Char)0x53,  /* [5999] */
    (xdc_Char)0x0,  /* [6000] */
    (xdc_Char)0x53,  /* [6001] */
    (xdc_Char)0x74,  /* [6002] */
    (xdc_Char)0x61,  /* [6003] */
    (xdc_Char)0x72,  /* [6004] */
    (xdc_Char)0x74,  /* [6005] */
    (xdc_Char)0x49,  /* [6006] */
    (xdc_Char)0x6e,  /* [6007] */
    (xdc_Char)0x73,  /* [6008] */
    (xdc_Char)0x74,  /* [6009] */
    (xdc_Char)0x61,  /* [6010] */
    (xdc_Char)0x6e,  /* [6011] */
    (xdc_Char)0x63,  /* [6012] */
    (xdc_Char)0x65,  /* [6013] */
    (xdc_Char)0x57,  /* [6014] */
    (xdc_Char)0x69,  /* [6015] */
    (xdc_Char)0x74,  /* [6016] */
    (xdc_Char)0x68,  /* [6017] */
    (xdc_Char)0x53,  /* [6018] */
    (xdc_Char)0x74,  /* [6019] */
    (xdc_Char)0x72,  /* [6020] */
    (xdc_Char)0x3a,  /* [6021] */
    (xdc_Char)0x20,  /* [6022] */
    (xdc_Char)0x25,  /* [6023] */
    (xdc_Char)0x24,  /* [6024] */
    (xdc_Char)0x53,  /* [6025] */
    (xdc_Char)0x0,  /* [6026] */
    (xdc_Char)0x53,  /* [6027] */
    (xdc_Char)0x74,  /* [6028] */
    (xdc_Char)0x6f,  /* [6029] */
    (xdc_Char)0x70,  /* [6030] */
    (xdc_Char)0x49,  /* [6031] */
    (xdc_Char)0x6e,  /* [6032] */
    (xdc_Char)0x73,  /* [6033] */
    (xdc_Char)0x74,  /* [6034] */
    (xdc_Char)0x61,  /* [6035] */
    (xdc_Char)0x6e,  /* [6036] */
    (xdc_Char)0x63,  /* [6037] */
    (xdc_Char)0x65,  /* [6038] */
    (xdc_Char)0x57,  /* [6039] */
    (xdc_Char)0x69,  /* [6040] */
    (xdc_Char)0x74,  /* [6041] */
    (xdc_Char)0x68,  /* [6042] */
    (xdc_Char)0x53,  /* [6043] */
    (xdc_Char)0x74,  /* [6044] */
    (xdc_Char)0x72,  /* [6045] */
    (xdc_Char)0x3a,  /* [6046] */
    (xdc_Char)0x20,  /* [6047] */
    (xdc_Char)0x25,  /* [6048] */
    (xdc_Char)0x24,  /* [6049] */
    (xdc_Char)0x53,  /* [6050] */
    (xdc_Char)0x0,  /* [6051] */
    (xdc_Char)0x45,  /* [6052] */
    (xdc_Char)0x52,  /* [6053] */
    (xdc_Char)0x52,  /* [6054] */
    (xdc_Char)0x4f,  /* [6055] */
    (xdc_Char)0x52,  /* [6056] */
    (xdc_Char)0x3a,  /* [6057] */
    (xdc_Char)0x20,  /* [6058] */
    (xdc_Char)0x45,  /* [6059] */
    (xdc_Char)0x72,  /* [6060] */
    (xdc_Char)0x72,  /* [6061] */
    (xdc_Char)0x6f,  /* [6062] */
    (xdc_Char)0x72,  /* [6063] */
    (xdc_Char)0x43,  /* [6064] */
    (xdc_Char)0x6f,  /* [6065] */
    (xdc_Char)0x64,  /* [6066] */
    (xdc_Char)0x65,  /* [6067] */
    (xdc_Char)0x3a,  /* [6068] */
    (xdc_Char)0x30,  /* [6069] */
    (xdc_Char)0x78,  /* [6070] */
    (xdc_Char)0x25,  /* [6071] */
    (xdc_Char)0x78,  /* [6072] */
    (xdc_Char)0x0,  /* [6073] */
    (xdc_Char)0x45,  /* [6074] */
    (xdc_Char)0x52,  /* [6075] */
    (xdc_Char)0x52,  /* [6076] */
    (xdc_Char)0x4f,  /* [6077] */
    (xdc_Char)0x52,  /* [6078] */
    (xdc_Char)0x3a,  /* [6079] */
    (xdc_Char)0x20,  /* [6080] */
    (xdc_Char)0x45,  /* [6081] */
    (xdc_Char)0x72,  /* [6082] */
    (xdc_Char)0x72,  /* [6083] */
    (xdc_Char)0x6f,  /* [6084] */
    (xdc_Char)0x72,  /* [6085] */
    (xdc_Char)0x43,  /* [6086] */
    (xdc_Char)0x6f,  /* [6087] */
    (xdc_Char)0x64,  /* [6088] */
    (xdc_Char)0x65,  /* [6089] */
    (xdc_Char)0x3a,  /* [6090] */
    (xdc_Char)0x30,  /* [6091] */
    (xdc_Char)0x78,  /* [6092] */
    (xdc_Char)0x25,  /* [6093] */
    (xdc_Char)0x78,  /* [6094] */
    (xdc_Char)0x2e,  /* [6095] */
    (xdc_Char)0x20,  /* [6096] */
    (xdc_Char)0x25,  /* [6097] */
    (xdc_Char)0x24,  /* [6098] */
    (xdc_Char)0x53,  /* [6099] */
    (xdc_Char)0x0,  /* [6100] */
    (xdc_Char)0x48,  /* [6101] */
    (xdc_Char)0x57,  /* [6102] */
    (xdc_Char)0x20,  /* [6103] */
    (xdc_Char)0x45,  /* [6104] */
    (xdc_Char)0x52,  /* [6105] */
    (xdc_Char)0x52,  /* [6106] */
    (xdc_Char)0x4f,  /* [6107] */
    (xdc_Char)0x52,  /* [6108] */
    (xdc_Char)0x3a,  /* [6109] */
    (xdc_Char)0x20,  /* [6110] */
    (xdc_Char)0x45,  /* [6111] */
    (xdc_Char)0x72,  /* [6112] */
    (xdc_Char)0x72,  /* [6113] */
    (xdc_Char)0x6f,  /* [6114] */
    (xdc_Char)0x72,  /* [6115] */
    (xdc_Char)0x43,  /* [6116] */
    (xdc_Char)0x6f,  /* [6117] */
    (xdc_Char)0x64,  /* [6118] */
    (xdc_Char)0x65,  /* [6119] */
    (xdc_Char)0x3a,  /* [6120] */
    (xdc_Char)0x30,  /* [6121] */
    (xdc_Char)0x78,  /* [6122] */
    (xdc_Char)0x25,  /* [6123] */
    (xdc_Char)0x78,  /* [6124] */
    (xdc_Char)0x0,  /* [6125] */
    (xdc_Char)0x48,  /* [6126] */
    (xdc_Char)0x57,  /* [6127] */
    (xdc_Char)0x20,  /* [6128] */
    (xdc_Char)0x45,  /* [6129] */
    (xdc_Char)0x52,  /* [6130] */
    (xdc_Char)0x52,  /* [6131] */
    (xdc_Char)0x4f,  /* [6132] */
    (xdc_Char)0x52,  /* [6133] */
    (xdc_Char)0x3a,  /* [6134] */
    (xdc_Char)0x20,  /* [6135] */
    (xdc_Char)0x45,  /* [6136] */
    (xdc_Char)0x72,  /* [6137] */
    (xdc_Char)0x72,  /* [6138] */
    (xdc_Char)0x6f,  /* [6139] */
    (xdc_Char)0x72,  /* [6140] */
    (xdc_Char)0x43,  /* [6141] */
    (xdc_Char)0x6f,  /* [6142] */
    (xdc_Char)0x64,  /* [6143] */
    (xdc_Char)0x65,  /* [6144] */
    (xdc_Char)0x3a,  /* [6145] */
    (xdc_Char)0x30,  /* [6146] */
    (xdc_Char)0x78,  /* [6147] */
    (xdc_Char)0x25,  /* [6148] */
    (xdc_Char)0x78,  /* [6149] */
    (xdc_Char)0x2e,  /* [6150] */
    (xdc_Char)0x20,  /* [6151] */
    (xdc_Char)0x25,  /* [6152] */
    (xdc_Char)0x24,  /* [6153] */
    (xdc_Char)0x53,  /* [6154] */
    (xdc_Char)0x0,  /* [6155] */
    (xdc_Char)0x46,  /* [6156] */
    (xdc_Char)0x41,  /* [6157] */
    (xdc_Char)0x54,  /* [6158] */
    (xdc_Char)0x41,  /* [6159] */
    (xdc_Char)0x4c,  /* [6160] */
    (xdc_Char)0x20,  /* [6161] */
    (xdc_Char)0x45,  /* [6162] */
    (xdc_Char)0x52,  /* [6163] */
    (xdc_Char)0x52,  /* [6164] */
    (xdc_Char)0x4f,  /* [6165] */
    (xdc_Char)0x52,  /* [6166] */
    (xdc_Char)0x3a,  /* [6167] */
    (xdc_Char)0x20,  /* [6168] */
    (xdc_Char)0x45,  /* [6169] */
    (xdc_Char)0x72,  /* [6170] */
    (xdc_Char)0x72,  /* [6171] */
    (xdc_Char)0x6f,  /* [6172] */
    (xdc_Char)0x72,  /* [6173] */
    (xdc_Char)0x43,  /* [6174] */
    (xdc_Char)0x6f,  /* [6175] */
    (xdc_Char)0x64,  /* [6176] */
    (xdc_Char)0x65,  /* [6177] */
    (xdc_Char)0x3a,  /* [6178] */
    (xdc_Char)0x30,  /* [6179] */
    (xdc_Char)0x78,  /* [6180] */
    (xdc_Char)0x25,  /* [6181] */
    (xdc_Char)0x78,  /* [6182] */
    (xdc_Char)0x0,  /* [6183] */
    (xdc_Char)0x46,  /* [6184] */
    (xdc_Char)0x41,  /* [6185] */
    (xdc_Char)0x54,  /* [6186] */
    (xdc_Char)0x41,  /* [6187] */
    (xdc_Char)0x4c,  /* [6188] */
    (xdc_Char)0x20,  /* [6189] */
    (xdc_Char)0x45,  /* [6190] */
    (xdc_Char)0x52,  /* [6191] */
    (xdc_Char)0x52,  /* [6192] */
    (xdc_Char)0x4f,  /* [6193] */
    (xdc_Char)0x52,  /* [6194] */
    (xdc_Char)0x3a,  /* [6195] */
    (xdc_Char)0x20,  /* [6196] */
    (xdc_Char)0x45,  /* [6197] */
    (xdc_Char)0x72,  /* [6198] */
    (xdc_Char)0x72,  /* [6199] */
    (xdc_Char)0x6f,  /* [6200] */
    (xdc_Char)0x72,  /* [6201] */
    (xdc_Char)0x43,  /* [6202] */
    (xdc_Char)0x6f,  /* [6203] */
    (xdc_Char)0x64,  /* [6204] */
    (xdc_Char)0x65,  /* [6205] */
    (xdc_Char)0x3a,  /* [6206] */
    (xdc_Char)0x30,  /* [6207] */
    (xdc_Char)0x78,  /* [6208] */
    (xdc_Char)0x25,  /* [6209] */
    (xdc_Char)0x78,  /* [6210] */
    (xdc_Char)0x2e,  /* [6211] */
    (xdc_Char)0x20,  /* [6212] */
    (xdc_Char)0x25,  /* [6213] */
    (xdc_Char)0x24,  /* [6214] */
    (xdc_Char)0x53,  /* [6215] */
    (xdc_Char)0x0,  /* [6216] */
    (xdc_Char)0x43,  /* [6217] */
    (xdc_Char)0x52,  /* [6218] */
    (xdc_Char)0x49,  /* [6219] */
    (xdc_Char)0x54,  /* [6220] */
    (xdc_Char)0x49,  /* [6221] */
    (xdc_Char)0x43,  /* [6222] */
    (xdc_Char)0x41,  /* [6223] */
    (xdc_Char)0x4c,  /* [6224] */
    (xdc_Char)0x20,  /* [6225] */
    (xdc_Char)0x45,  /* [6226] */
    (xdc_Char)0x52,  /* [6227] */
    (xdc_Char)0x52,  /* [6228] */
    (xdc_Char)0x4f,  /* [6229] */
    (xdc_Char)0x52,  /* [6230] */
    (xdc_Char)0x3a,  /* [6231] */
    (xdc_Char)0x20,  /* [6232] */
    (xdc_Char)0x45,  /* [6233] */
    (xdc_Char)0x72,  /* [6234] */
    (xdc_Char)0x72,  /* [6235] */
    (xdc_Char)0x6f,  /* [6236] */
    (xdc_Char)0x72,  /* [6237] */
    (xdc_Char)0x43,  /* [6238] */
    (xdc_Char)0x6f,  /* [6239] */
    (xdc_Char)0x64,  /* [6240] */
    (xdc_Char)0x65,  /* [6241] */
    (xdc_Char)0x3a,  /* [6242] */
    (xdc_Char)0x30,  /* [6243] */
    (xdc_Char)0x78,  /* [6244] */
    (xdc_Char)0x25,  /* [6245] */
    (xdc_Char)0x78,  /* [6246] */
    (xdc_Char)0x0,  /* [6247] */
    (xdc_Char)0x43,  /* [6248] */
    (xdc_Char)0x52,  /* [6249] */
    (xdc_Char)0x49,  /* [6250] */
    (xdc_Char)0x54,  /* [6251] */
    (xdc_Char)0x49,  /* [6252] */
    (xdc_Char)0x43,  /* [6253] */
    (xdc_Char)0x41,  /* [6254] */
    (xdc_Char)0x4c,  /* [6255] */
    (xdc_Char)0x20,  /* [6256] */
    (xdc_Char)0x45,  /* [6257] */
    (xdc_Char)0x52,  /* [6258] */
    (xdc_Char)0x52,  /* [6259] */
    (xdc_Char)0x4f,  /* [6260] */
    (xdc_Char)0x52,  /* [6261] */
    (xdc_Char)0x3a,  /* [6262] */
    (xdc_Char)0x20,  /* [6263] */
    (xdc_Char)0x45,  /* [6264] */
    (xdc_Char)0x72,  /* [6265] */
    (xdc_Char)0x72,  /* [6266] */
    (xdc_Char)0x6f,  /* [6267] */
    (xdc_Char)0x72,  /* [6268] */
    (xdc_Char)0x43,  /* [6269] */
    (xdc_Char)0x6f,  /* [6270] */
    (xdc_Char)0x64,  /* [6271] */
    (xdc_Char)0x65,  /* [6272] */
    (xdc_Char)0x3a,  /* [6273] */
    (xdc_Char)0x30,  /* [6274] */
    (xdc_Char)0x78,  /* [6275] */
    (xdc_Char)0x25,  /* [6276] */
    (xdc_Char)0x78,  /* [6277] */
    (xdc_Char)0x2e,  /* [6278] */
    (xdc_Char)0x20,  /* [6279] */
    (xdc_Char)0x25,  /* [6280] */
    (xdc_Char)0x24,  /* [6281] */
    (xdc_Char)0x53,  /* [6282] */
    (xdc_Char)0x0,  /* [6283] */
    (xdc_Char)0x45,  /* [6284] */
    (xdc_Char)0x52,  /* [6285] */
    (xdc_Char)0x52,  /* [6286] */
    (xdc_Char)0x4f,  /* [6287] */
    (xdc_Char)0x52,  /* [6288] */
    (xdc_Char)0x3a,  /* [6289] */
    (xdc_Char)0x20,  /* [6290] */
    (xdc_Char)0x45,  /* [6291] */
    (xdc_Char)0x78,  /* [6292] */
    (xdc_Char)0x63,  /* [6293] */
    (xdc_Char)0x65,  /* [6294] */
    (xdc_Char)0x70,  /* [6295] */
    (xdc_Char)0x74,  /* [6296] */
    (xdc_Char)0x69,  /* [6297] */
    (xdc_Char)0x6f,  /* [6298] */
    (xdc_Char)0x6e,  /* [6299] */
    (xdc_Char)0x20,  /* [6300] */
    (xdc_Char)0x61,  /* [6301] */
    (xdc_Char)0x74,  /* [6302] */
    (xdc_Char)0x20,  /* [6303] */
    (xdc_Char)0x25,  /* [6304] */
    (xdc_Char)0x24,  /* [6305] */
    (xdc_Char)0x46,  /* [6306] */
    (xdc_Char)0x2e,  /* [6307] */
    (xdc_Char)0x0,  /* [6308] */
    (xdc_Char)0x45,  /* [6309] */
    (xdc_Char)0x52,  /* [6310] */
    (xdc_Char)0x52,  /* [6311] */
    (xdc_Char)0x4f,  /* [6312] */
    (xdc_Char)0x52,  /* [6313] */
    (xdc_Char)0x3a,  /* [6314] */
    (xdc_Char)0x20,  /* [6315] */
    (xdc_Char)0x55,  /* [6316] */
    (xdc_Char)0x6e,  /* [6317] */
    (xdc_Char)0x63,  /* [6318] */
    (xdc_Char)0x61,  /* [6319] */
    (xdc_Char)0x75,  /* [6320] */
    (xdc_Char)0x67,  /* [6321] */
    (xdc_Char)0x68,  /* [6322] */
    (xdc_Char)0x74,  /* [6323] */
    (xdc_Char)0x20,  /* [6324] */
    (xdc_Char)0x45,  /* [6325] */
    (xdc_Char)0x78,  /* [6326] */
    (xdc_Char)0x63,  /* [6327] */
    (xdc_Char)0x65,  /* [6328] */
    (xdc_Char)0x70,  /* [6329] */
    (xdc_Char)0x74,  /* [6330] */
    (xdc_Char)0x69,  /* [6331] */
    (xdc_Char)0x6f,  /* [6332] */
    (xdc_Char)0x6e,  /* [6333] */
    (xdc_Char)0x20,  /* [6334] */
    (xdc_Char)0x61,  /* [6335] */
    (xdc_Char)0x74,  /* [6336] */
    (xdc_Char)0x20,  /* [6337] */
    (xdc_Char)0x25,  /* [6338] */
    (xdc_Char)0x24,  /* [6339] */
    (xdc_Char)0x46,  /* [6340] */
    (xdc_Char)0x2e,  /* [6341] */
    (xdc_Char)0x0,  /* [6342] */
    (xdc_Char)0x45,  /* [6343] */
    (xdc_Char)0x52,  /* [6344] */
    (xdc_Char)0x52,  /* [6345] */
    (xdc_Char)0x4f,  /* [6346] */
    (xdc_Char)0x52,  /* [6347] */
    (xdc_Char)0x3a,  /* [6348] */
    (xdc_Char)0x20,  /* [6349] */
    (xdc_Char)0x4e,  /* [6350] */
    (xdc_Char)0x75,  /* [6351] */
    (xdc_Char)0x6c,  /* [6352] */
    (xdc_Char)0x6c,  /* [6353] */
    (xdc_Char)0x20,  /* [6354] */
    (xdc_Char)0x50,  /* [6355] */
    (xdc_Char)0x6f,  /* [6356] */
    (xdc_Char)0x69,  /* [6357] */
    (xdc_Char)0x6e,  /* [6358] */
    (xdc_Char)0x74,  /* [6359] */
    (xdc_Char)0x65,  /* [6360] */
    (xdc_Char)0x72,  /* [6361] */
    (xdc_Char)0x20,  /* [6362] */
    (xdc_Char)0x45,  /* [6363] */
    (xdc_Char)0x78,  /* [6364] */
    (xdc_Char)0x63,  /* [6365] */
    (xdc_Char)0x65,  /* [6366] */
    (xdc_Char)0x70,  /* [6367] */
    (xdc_Char)0x74,  /* [6368] */
    (xdc_Char)0x69,  /* [6369] */
    (xdc_Char)0x6f,  /* [6370] */
    (xdc_Char)0x6e,  /* [6371] */
    (xdc_Char)0x20,  /* [6372] */
    (xdc_Char)0x61,  /* [6373] */
    (xdc_Char)0x74,  /* [6374] */
    (xdc_Char)0x20,  /* [6375] */
    (xdc_Char)0x25,  /* [6376] */
    (xdc_Char)0x24,  /* [6377] */
    (xdc_Char)0x46,  /* [6378] */
    (xdc_Char)0x2e,  /* [6379] */
    (xdc_Char)0x0,  /* [6380] */
    (xdc_Char)0x45,  /* [6381] */
    (xdc_Char)0x52,  /* [6382] */
    (xdc_Char)0x52,  /* [6383] */
    (xdc_Char)0x4f,  /* [6384] */
    (xdc_Char)0x52,  /* [6385] */
    (xdc_Char)0x3a,  /* [6386] */
    (xdc_Char)0x20,  /* [6387] */
    (xdc_Char)0x55,  /* [6388] */
    (xdc_Char)0x6e,  /* [6389] */
    (xdc_Char)0x65,  /* [6390] */
    (xdc_Char)0x78,  /* [6391] */
    (xdc_Char)0x70,  /* [6392] */
    (xdc_Char)0x65,  /* [6393] */
    (xdc_Char)0x63,  /* [6394] */
    (xdc_Char)0x74,  /* [6395] */
    (xdc_Char)0x65,  /* [6396] */
    (xdc_Char)0x64,  /* [6397] */
    (xdc_Char)0x20,  /* [6398] */
    (xdc_Char)0x49,  /* [6399] */
    (xdc_Char)0x6e,  /* [6400] */
    (xdc_Char)0x74,  /* [6401] */
    (xdc_Char)0x65,  /* [6402] */
    (xdc_Char)0x72,  /* [6403] */
    (xdc_Char)0x72,  /* [6404] */
    (xdc_Char)0x75,  /* [6405] */
    (xdc_Char)0x70,  /* [6406] */
    (xdc_Char)0x74,  /* [6407] */
    (xdc_Char)0x20,  /* [6408] */
    (xdc_Char)0x61,  /* [6409] */
    (xdc_Char)0x74,  /* [6410] */
    (xdc_Char)0x20,  /* [6411] */
    (xdc_Char)0x25,  /* [6412] */
    (xdc_Char)0x24,  /* [6413] */
    (xdc_Char)0x46,  /* [6414] */
    (xdc_Char)0x2e,  /* [6415] */
    (xdc_Char)0x0,  /* [6416] */
    (xdc_Char)0x45,  /* [6417] */
    (xdc_Char)0x52,  /* [6418] */
    (xdc_Char)0x52,  /* [6419] */
    (xdc_Char)0x4f,  /* [6420] */
    (xdc_Char)0x52,  /* [6421] */
    (xdc_Char)0x3a,  /* [6422] */
    (xdc_Char)0x20,  /* [6423] */
    (xdc_Char)0x4d,  /* [6424] */
    (xdc_Char)0x65,  /* [6425] */
    (xdc_Char)0x6d,  /* [6426] */
    (xdc_Char)0x6f,  /* [6427] */
    (xdc_Char)0x72,  /* [6428] */
    (xdc_Char)0x79,  /* [6429] */
    (xdc_Char)0x20,  /* [6430] */
    (xdc_Char)0x41,  /* [6431] */
    (xdc_Char)0x63,  /* [6432] */
    (xdc_Char)0x63,  /* [6433] */
    (xdc_Char)0x65,  /* [6434] */
    (xdc_Char)0x73,  /* [6435] */
    (xdc_Char)0x73,  /* [6436] */
    (xdc_Char)0x20,  /* [6437] */
    (xdc_Char)0x46,  /* [6438] */
    (xdc_Char)0x61,  /* [6439] */
    (xdc_Char)0x75,  /* [6440] */
    (xdc_Char)0x6c,  /* [6441] */
    (xdc_Char)0x74,  /* [6442] */
    (xdc_Char)0x20,  /* [6443] */
    (xdc_Char)0x61,  /* [6444] */
    (xdc_Char)0x74,  /* [6445] */
    (xdc_Char)0x20,  /* [6446] */
    (xdc_Char)0x25,  /* [6447] */
    (xdc_Char)0x24,  /* [6448] */
    (xdc_Char)0x46,  /* [6449] */
    (xdc_Char)0x2e,  /* [6450] */
    (xdc_Char)0x20,  /* [6451] */
    (xdc_Char)0x5b,  /* [6452] */
    (xdc_Char)0x41,  /* [6453] */
    (xdc_Char)0x44,  /* [6454] */
    (xdc_Char)0x52,  /* [6455] */
    (xdc_Char)0x53,  /* [6456] */
    (xdc_Char)0x5d,  /* [6457] */
    (xdc_Char)0x30,  /* [6458] */
    (xdc_Char)0x78,  /* [6459] */
    (xdc_Char)0x25,  /* [6460] */
    (xdc_Char)0x78,  /* [6461] */
    (xdc_Char)0x0,  /* [6462] */
    (xdc_Char)0x45,  /* [6463] */
    (xdc_Char)0x52,  /* [6464] */
    (xdc_Char)0x52,  /* [6465] */
    (xdc_Char)0x4f,  /* [6466] */
    (xdc_Char)0x52,  /* [6467] */
    (xdc_Char)0x3a,  /* [6468] */
    (xdc_Char)0x20,  /* [6469] */
    (xdc_Char)0x53,  /* [6470] */
    (xdc_Char)0x65,  /* [6471] */
    (xdc_Char)0x63,  /* [6472] */
    (xdc_Char)0x75,  /* [6473] */
    (xdc_Char)0x72,  /* [6474] */
    (xdc_Char)0x69,  /* [6475] */
    (xdc_Char)0x74,  /* [6476] */
    (xdc_Char)0x79,  /* [6477] */
    (xdc_Char)0x20,  /* [6478] */
    (xdc_Char)0x45,  /* [6479] */
    (xdc_Char)0x78,  /* [6480] */
    (xdc_Char)0x63,  /* [6481] */
    (xdc_Char)0x65,  /* [6482] */
    (xdc_Char)0x70,  /* [6483] */
    (xdc_Char)0x74,  /* [6484] */
    (xdc_Char)0x69,  /* [6485] */
    (xdc_Char)0x6f,  /* [6486] */
    (xdc_Char)0x6e,  /* [6487] */
    (xdc_Char)0x20,  /* [6488] */
    (xdc_Char)0x61,  /* [6489] */
    (xdc_Char)0x74,  /* [6490] */
    (xdc_Char)0x20,  /* [6491] */
    (xdc_Char)0x25,  /* [6492] */
    (xdc_Char)0x24,  /* [6493] */
    (xdc_Char)0x46,  /* [6494] */
    (xdc_Char)0x2e,  /* [6495] */
    (xdc_Char)0x0,  /* [6496] */
    (xdc_Char)0x45,  /* [6497] */
    (xdc_Char)0x52,  /* [6498] */
    (xdc_Char)0x52,  /* [6499] */
    (xdc_Char)0x4f,  /* [6500] */
    (xdc_Char)0x52,  /* [6501] */
    (xdc_Char)0x3a,  /* [6502] */
    (xdc_Char)0x20,  /* [6503] */
    (xdc_Char)0x44,  /* [6504] */
    (xdc_Char)0x69,  /* [6505] */
    (xdc_Char)0x76,  /* [6506] */
    (xdc_Char)0x69,  /* [6507] */
    (xdc_Char)0x73,  /* [6508] */
    (xdc_Char)0x69,  /* [6509] */
    (xdc_Char)0x6f,  /* [6510] */
    (xdc_Char)0x6e,  /* [6511] */
    (xdc_Char)0x20,  /* [6512] */
    (xdc_Char)0x62,  /* [6513] */
    (xdc_Char)0x79,  /* [6514] */
    (xdc_Char)0x20,  /* [6515] */
    (xdc_Char)0x7a,  /* [6516] */
    (xdc_Char)0x65,  /* [6517] */
    (xdc_Char)0x72,  /* [6518] */
    (xdc_Char)0x6f,  /* [6519] */
    (xdc_Char)0x20,  /* [6520] */
    (xdc_Char)0x61,  /* [6521] */
    (xdc_Char)0x74,  /* [6522] */
    (xdc_Char)0x20,  /* [6523] */
    (xdc_Char)0x25,  /* [6524] */
    (xdc_Char)0x24,  /* [6525] */
    (xdc_Char)0x46,  /* [6526] */
    (xdc_Char)0x2e,  /* [6527] */
    (xdc_Char)0x0,  /* [6528] */
    (xdc_Char)0x45,  /* [6529] */
    (xdc_Char)0x52,  /* [6530] */
    (xdc_Char)0x52,  /* [6531] */
    (xdc_Char)0x4f,  /* [6532] */
    (xdc_Char)0x52,  /* [6533] */
    (xdc_Char)0x3a,  /* [6534] */
    (xdc_Char)0x20,  /* [6535] */
    (xdc_Char)0x4f,  /* [6536] */
    (xdc_Char)0x76,  /* [6537] */
    (xdc_Char)0x65,  /* [6538] */
    (xdc_Char)0x72,  /* [6539] */
    (xdc_Char)0x66,  /* [6540] */
    (xdc_Char)0x6c,  /* [6541] */
    (xdc_Char)0x6f,  /* [6542] */
    (xdc_Char)0x77,  /* [6543] */
    (xdc_Char)0x20,  /* [6544] */
    (xdc_Char)0x65,  /* [6545] */
    (xdc_Char)0x78,  /* [6546] */
    (xdc_Char)0x63,  /* [6547] */
    (xdc_Char)0x65,  /* [6548] */
    (xdc_Char)0x70,  /* [6549] */
    (xdc_Char)0x74,  /* [6550] */
    (xdc_Char)0x69,  /* [6551] */
    (xdc_Char)0x6f,  /* [6552] */
    (xdc_Char)0x6e,  /* [6553] */
    (xdc_Char)0x20,  /* [6554] */
    (xdc_Char)0x61,  /* [6555] */
    (xdc_Char)0x74,  /* [6556] */
    (xdc_Char)0x20,  /* [6557] */
    (xdc_Char)0x25,  /* [6558] */
    (xdc_Char)0x24,  /* [6559] */
    (xdc_Char)0x46,  /* [6560] */
    (xdc_Char)0x2e,  /* [6561] */
    (xdc_Char)0x0,  /* [6562] */
    (xdc_Char)0x45,  /* [6563] */
    (xdc_Char)0x52,  /* [6564] */
    (xdc_Char)0x52,  /* [6565] */
    (xdc_Char)0x4f,  /* [6566] */
    (xdc_Char)0x52,  /* [6567] */
    (xdc_Char)0x3a,  /* [6568] */
    (xdc_Char)0x20,  /* [6569] */
    (xdc_Char)0x49,  /* [6570] */
    (xdc_Char)0x6e,  /* [6571] */
    (xdc_Char)0x64,  /* [6572] */
    (xdc_Char)0x65,  /* [6573] */
    (xdc_Char)0x78,  /* [6574] */
    (xdc_Char)0x20,  /* [6575] */
    (xdc_Char)0x6f,  /* [6576] */
    (xdc_Char)0x75,  /* [6577] */
    (xdc_Char)0x74,  /* [6578] */
    (xdc_Char)0x20,  /* [6579] */
    (xdc_Char)0x6f,  /* [6580] */
    (xdc_Char)0x66,  /* [6581] */
    (xdc_Char)0x20,  /* [6582] */
    (xdc_Char)0x72,  /* [6583] */
    (xdc_Char)0x61,  /* [6584] */
    (xdc_Char)0x6e,  /* [6585] */
    (xdc_Char)0x67,  /* [6586] */
    (xdc_Char)0x65,  /* [6587] */
    (xdc_Char)0x20,  /* [6588] */
    (xdc_Char)0x61,  /* [6589] */
    (xdc_Char)0x74,  /* [6590] */
    (xdc_Char)0x20,  /* [6591] */
    (xdc_Char)0x25,  /* [6592] */
    (xdc_Char)0x24,  /* [6593] */
    (xdc_Char)0x46,  /* [6594] */
    (xdc_Char)0x2e,  /* [6595] */
    (xdc_Char)0x20,  /* [6596] */
    (xdc_Char)0x5b,  /* [6597] */
    (xdc_Char)0x49,  /* [6598] */
    (xdc_Char)0x4e,  /* [6599] */
    (xdc_Char)0x44,  /* [6600] */
    (xdc_Char)0x45,  /* [6601] */
    (xdc_Char)0x58,  /* [6602] */
    (xdc_Char)0x5d,  /* [6603] */
    (xdc_Char)0x30,  /* [6604] */
    (xdc_Char)0x78,  /* [6605] */
    (xdc_Char)0x25,  /* [6606] */
    (xdc_Char)0x78,  /* [6607] */
    (xdc_Char)0x0,  /* [6608] */
    (xdc_Char)0x45,  /* [6609] */
    (xdc_Char)0x52,  /* [6610] */
    (xdc_Char)0x52,  /* [6611] */
    (xdc_Char)0x4f,  /* [6612] */
    (xdc_Char)0x52,  /* [6613] */
    (xdc_Char)0x3a,  /* [6614] */
    (xdc_Char)0x20,  /* [6615] */
    (xdc_Char)0x41,  /* [6616] */
    (xdc_Char)0x74,  /* [6617] */
    (xdc_Char)0x74,  /* [6618] */
    (xdc_Char)0x65,  /* [6619] */
    (xdc_Char)0x6d,  /* [6620] */
    (xdc_Char)0x70,  /* [6621] */
    (xdc_Char)0x74,  /* [6622] */
    (xdc_Char)0x20,  /* [6623] */
    (xdc_Char)0x74,  /* [6624] */
    (xdc_Char)0x6f,  /* [6625] */
    (xdc_Char)0x20,  /* [6626] */
    (xdc_Char)0x61,  /* [6627] */
    (xdc_Char)0x63,  /* [6628] */
    (xdc_Char)0x63,  /* [6629] */
    (xdc_Char)0x65,  /* [6630] */
    (xdc_Char)0x73,  /* [6631] */
    (xdc_Char)0x73,  /* [6632] */
    (xdc_Char)0x20,  /* [6633] */
    (xdc_Char)0x66,  /* [6634] */
    (xdc_Char)0x65,  /* [6635] */
    (xdc_Char)0x61,  /* [6636] */
    (xdc_Char)0x74,  /* [6637] */
    (xdc_Char)0x75,  /* [6638] */
    (xdc_Char)0x72,  /* [6639] */
    (xdc_Char)0x65,  /* [6640] */
    (xdc_Char)0x20,  /* [6641] */
    (xdc_Char)0x74,  /* [6642] */
    (xdc_Char)0x68,  /* [6643] */
    (xdc_Char)0x61,  /* [6644] */
    (xdc_Char)0x74,  /* [6645] */
    (xdc_Char)0x20,  /* [6646] */
    (xdc_Char)0x69,  /* [6647] */
    (xdc_Char)0x73,  /* [6648] */
    (xdc_Char)0x20,  /* [6649] */
    (xdc_Char)0x6e,  /* [6650] */
    (xdc_Char)0x6f,  /* [6651] */
    (xdc_Char)0x74,  /* [6652] */
    (xdc_Char)0x20,  /* [6653] */
    (xdc_Char)0x69,  /* [6654] */
    (xdc_Char)0x6d,  /* [6655] */
    (xdc_Char)0x70,  /* [6656] */
    (xdc_Char)0x6c,  /* [6657] */
    (xdc_Char)0x65,  /* [6658] */
    (xdc_Char)0x6d,  /* [6659] */
    (xdc_Char)0x65,  /* [6660] */
    (xdc_Char)0x6e,  /* [6661] */
    (xdc_Char)0x74,  /* [6662] */
    (xdc_Char)0x65,  /* [6663] */
    (xdc_Char)0x64,  /* [6664] */
    (xdc_Char)0x20,  /* [6665] */
    (xdc_Char)0x61,  /* [6666] */
    (xdc_Char)0x74,  /* [6667] */
    (xdc_Char)0x20,  /* [6668] */
    (xdc_Char)0x25,  /* [6669] */
    (xdc_Char)0x24,  /* [6670] */
    (xdc_Char)0x46,  /* [6671] */
    (xdc_Char)0x2e,  /* [6672] */
    (xdc_Char)0x0,  /* [6673] */
    (xdc_Char)0x45,  /* [6674] */
    (xdc_Char)0x52,  /* [6675] */
    (xdc_Char)0x52,  /* [6676] */
    (xdc_Char)0x4f,  /* [6677] */
    (xdc_Char)0x52,  /* [6678] */
    (xdc_Char)0x3a,  /* [6679] */
    (xdc_Char)0x20,  /* [6680] */
    (xdc_Char)0x53,  /* [6681] */
    (xdc_Char)0x74,  /* [6682] */
    (xdc_Char)0x61,  /* [6683] */
    (xdc_Char)0x63,  /* [6684] */
    (xdc_Char)0x6b,  /* [6685] */
    (xdc_Char)0x20,  /* [6686] */
    (xdc_Char)0x4f,  /* [6687] */
    (xdc_Char)0x76,  /* [6688] */
    (xdc_Char)0x65,  /* [6689] */
    (xdc_Char)0x72,  /* [6690] */
    (xdc_Char)0x66,  /* [6691] */
    (xdc_Char)0x6c,  /* [6692] */
    (xdc_Char)0x6f,  /* [6693] */
    (xdc_Char)0x77,  /* [6694] */
    (xdc_Char)0x20,  /* [6695] */
    (xdc_Char)0x64,  /* [6696] */
    (xdc_Char)0x65,  /* [6697] */
    (xdc_Char)0x74,  /* [6698] */
    (xdc_Char)0x65,  /* [6699] */
    (xdc_Char)0x63,  /* [6700] */
    (xdc_Char)0x74,  /* [6701] */
    (xdc_Char)0x65,  /* [6702] */
    (xdc_Char)0x64,  /* [6703] */
    (xdc_Char)0x20,  /* [6704] */
    (xdc_Char)0x61,  /* [6705] */
    (xdc_Char)0x74,  /* [6706] */
    (xdc_Char)0x20,  /* [6707] */
    (xdc_Char)0x25,  /* [6708] */
    (xdc_Char)0x24,  /* [6709] */
    (xdc_Char)0x46,  /* [6710] */
    (xdc_Char)0x2e,  /* [6711] */
    (xdc_Char)0x0,  /* [6712] */
    (xdc_Char)0x45,  /* [6713] */
    (xdc_Char)0x52,  /* [6714] */
    (xdc_Char)0x52,  /* [6715] */
    (xdc_Char)0x4f,  /* [6716] */
    (xdc_Char)0x52,  /* [6717] */
    (xdc_Char)0x3a,  /* [6718] */
    (xdc_Char)0x20,  /* [6719] */
    (xdc_Char)0x49,  /* [6720] */
    (xdc_Char)0x6c,  /* [6721] */
    (xdc_Char)0x6c,  /* [6722] */
    (xdc_Char)0x65,  /* [6723] */
    (xdc_Char)0x67,  /* [6724] */
    (xdc_Char)0x61,  /* [6725] */
    (xdc_Char)0x6c,  /* [6726] */
    (xdc_Char)0x20,  /* [6727] */
    (xdc_Char)0x49,  /* [6728] */
    (xdc_Char)0x6e,  /* [6729] */
    (xdc_Char)0x73,  /* [6730] */
    (xdc_Char)0x74,  /* [6731] */
    (xdc_Char)0x72,  /* [6732] */
    (xdc_Char)0x75,  /* [6733] */
    (xdc_Char)0x63,  /* [6734] */
    (xdc_Char)0x74,  /* [6735] */
    (xdc_Char)0x69,  /* [6736] */
    (xdc_Char)0x6f,  /* [6737] */
    (xdc_Char)0x6e,  /* [6738] */
    (xdc_Char)0x20,  /* [6739] */
    (xdc_Char)0x65,  /* [6740] */
    (xdc_Char)0x78,  /* [6741] */
    (xdc_Char)0x65,  /* [6742] */
    (xdc_Char)0x63,  /* [6743] */
    (xdc_Char)0x75,  /* [6744] */
    (xdc_Char)0x74,  /* [6745] */
    (xdc_Char)0x65,  /* [6746] */
    (xdc_Char)0x64,  /* [6747] */
    (xdc_Char)0x20,  /* [6748] */
    (xdc_Char)0x61,  /* [6749] */
    (xdc_Char)0x74,  /* [6750] */
    (xdc_Char)0x20,  /* [6751] */
    (xdc_Char)0x25,  /* [6752] */
    (xdc_Char)0x24,  /* [6753] */
    (xdc_Char)0x46,  /* [6754] */
    (xdc_Char)0x2e,  /* [6755] */
    (xdc_Char)0x0,  /* [6756] */
    (xdc_Char)0x45,  /* [6757] */
    (xdc_Char)0x52,  /* [6758] */
    (xdc_Char)0x52,  /* [6759] */
    (xdc_Char)0x4f,  /* [6760] */
    (xdc_Char)0x52,  /* [6761] */
    (xdc_Char)0x3a,  /* [6762] */
    (xdc_Char)0x20,  /* [6763] */
    (xdc_Char)0x45,  /* [6764] */
    (xdc_Char)0x6e,  /* [6765] */
    (xdc_Char)0x74,  /* [6766] */
    (xdc_Char)0x72,  /* [6767] */
    (xdc_Char)0x79,  /* [6768] */
    (xdc_Char)0x20,  /* [6769] */
    (xdc_Char)0x50,  /* [6770] */
    (xdc_Char)0x6f,  /* [6771] */
    (xdc_Char)0x69,  /* [6772] */
    (xdc_Char)0x6e,  /* [6773] */
    (xdc_Char)0x74,  /* [6774] */
    (xdc_Char)0x20,  /* [6775] */
    (xdc_Char)0x4e,  /* [6776] */
    (xdc_Char)0x6f,  /* [6777] */
    (xdc_Char)0x74,  /* [6778] */
    (xdc_Char)0x20,  /* [6779] */
    (xdc_Char)0x46,  /* [6780] */
    (xdc_Char)0x6f,  /* [6781] */
    (xdc_Char)0x75,  /* [6782] */
    (xdc_Char)0x6e,  /* [6783] */
    (xdc_Char)0x64,  /* [6784] */
    (xdc_Char)0x20,  /* [6785] */
    (xdc_Char)0x61,  /* [6786] */
    (xdc_Char)0x74,  /* [6787] */
    (xdc_Char)0x20,  /* [6788] */
    (xdc_Char)0x25,  /* [6789] */
    (xdc_Char)0x24,  /* [6790] */
    (xdc_Char)0x46,  /* [6791] */
    (xdc_Char)0x2e,  /* [6792] */
    (xdc_Char)0x0,  /* [6793] */
    (xdc_Char)0x45,  /* [6794] */
    (xdc_Char)0x52,  /* [6795] */
    (xdc_Char)0x52,  /* [6796] */
    (xdc_Char)0x4f,  /* [6797] */
    (xdc_Char)0x52,  /* [6798] */
    (xdc_Char)0x3a,  /* [6799] */
    (xdc_Char)0x20,  /* [6800] */
    (xdc_Char)0x4d,  /* [6801] */
    (xdc_Char)0x6f,  /* [6802] */
    (xdc_Char)0x64,  /* [6803] */
    (xdc_Char)0x75,  /* [6804] */
    (xdc_Char)0x6c,  /* [6805] */
    (xdc_Char)0x65,  /* [6806] */
    (xdc_Char)0x20,  /* [6807] */
    (xdc_Char)0x6e,  /* [6808] */
    (xdc_Char)0x6f,  /* [6809] */
    (xdc_Char)0x74,  /* [6810] */
    (xdc_Char)0x20,  /* [6811] */
    (xdc_Char)0x66,  /* [6812] */
    (xdc_Char)0x6f,  /* [6813] */
    (xdc_Char)0x75,  /* [6814] */
    (xdc_Char)0x6e,  /* [6815] */
    (xdc_Char)0x64,  /* [6816] */
    (xdc_Char)0x20,  /* [6817] */
    (xdc_Char)0x61,  /* [6818] */
    (xdc_Char)0x74,  /* [6819] */
    (xdc_Char)0x20,  /* [6820] */
    (xdc_Char)0x25,  /* [6821] */
    (xdc_Char)0x24,  /* [6822] */
    (xdc_Char)0x46,  /* [6823] */
    (xdc_Char)0x2e,  /* [6824] */
    (xdc_Char)0x20,  /* [6825] */
    (xdc_Char)0x5b,  /* [6826] */
    (xdc_Char)0x4d,  /* [6827] */
    (xdc_Char)0x4f,  /* [6828] */
    (xdc_Char)0x44,  /* [6829] */
    (xdc_Char)0x55,  /* [6830] */
    (xdc_Char)0x4c,  /* [6831] */
    (xdc_Char)0x45,  /* [6832] */
    (xdc_Char)0x5f,  /* [6833] */
    (xdc_Char)0x49,  /* [6834] */
    (xdc_Char)0x44,  /* [6835] */
    (xdc_Char)0x5d,  /* [6836] */
    (xdc_Char)0x30,  /* [6837] */
    (xdc_Char)0x78,  /* [6838] */
    (xdc_Char)0x25,  /* [6839] */
    (xdc_Char)0x78,  /* [6840] */
    (xdc_Char)0x2e,  /* [6841] */
    (xdc_Char)0x0,  /* [6842] */
    (xdc_Char)0x45,  /* [6843] */
    (xdc_Char)0x52,  /* [6844] */
    (xdc_Char)0x52,  /* [6845] */
    (xdc_Char)0x4f,  /* [6846] */
    (xdc_Char)0x52,  /* [6847] */
    (xdc_Char)0x3a,  /* [6848] */
    (xdc_Char)0x20,  /* [6849] */
    (xdc_Char)0x46,  /* [6850] */
    (xdc_Char)0x6c,  /* [6851] */
    (xdc_Char)0x6f,  /* [6852] */
    (xdc_Char)0x61,  /* [6853] */
    (xdc_Char)0x74,  /* [6854] */
    (xdc_Char)0x69,  /* [6855] */
    (xdc_Char)0x6e,  /* [6856] */
    (xdc_Char)0x67,  /* [6857] */
    (xdc_Char)0x20,  /* [6858] */
    (xdc_Char)0x50,  /* [6859] */
    (xdc_Char)0x6f,  /* [6860] */
    (xdc_Char)0x69,  /* [6861] */
    (xdc_Char)0x6e,  /* [6862] */
    (xdc_Char)0x74,  /* [6863] */
    (xdc_Char)0x20,  /* [6864] */
    (xdc_Char)0x45,  /* [6865] */
    (xdc_Char)0x72,  /* [6866] */
    (xdc_Char)0x72,  /* [6867] */
    (xdc_Char)0x6f,  /* [6868] */
    (xdc_Char)0x72,  /* [6869] */
    (xdc_Char)0x20,  /* [6870] */
    (xdc_Char)0x61,  /* [6871] */
    (xdc_Char)0x74,  /* [6872] */
    (xdc_Char)0x20,  /* [6873] */
    (xdc_Char)0x25,  /* [6874] */
    (xdc_Char)0x24,  /* [6875] */
    (xdc_Char)0x46,  /* [6876] */
    (xdc_Char)0x2e,  /* [6877] */
    (xdc_Char)0x0,  /* [6878] */
    (xdc_Char)0x45,  /* [6879] */
    (xdc_Char)0x52,  /* [6880] */
    (xdc_Char)0x52,  /* [6881] */
    (xdc_Char)0x4f,  /* [6882] */
    (xdc_Char)0x52,  /* [6883] */
    (xdc_Char)0x3a,  /* [6884] */
    (xdc_Char)0x20,  /* [6885] */
    (xdc_Char)0x49,  /* [6886] */
    (xdc_Char)0x6e,  /* [6887] */
    (xdc_Char)0x76,  /* [6888] */
    (xdc_Char)0x61,  /* [6889] */
    (xdc_Char)0x6c,  /* [6890] */
    (xdc_Char)0x69,  /* [6891] */
    (xdc_Char)0x64,  /* [6892] */
    (xdc_Char)0x20,  /* [6893] */
    (xdc_Char)0x50,  /* [6894] */
    (xdc_Char)0x61,  /* [6895] */
    (xdc_Char)0x72,  /* [6896] */
    (xdc_Char)0x61,  /* [6897] */
    (xdc_Char)0x6d,  /* [6898] */
    (xdc_Char)0x65,  /* [6899] */
    (xdc_Char)0x74,  /* [6900] */
    (xdc_Char)0x65,  /* [6901] */
    (xdc_Char)0x72,  /* [6902] */
    (xdc_Char)0x20,  /* [6903] */
    (xdc_Char)0x61,  /* [6904] */
    (xdc_Char)0x74,  /* [6905] */
    (xdc_Char)0x20,  /* [6906] */
    (xdc_Char)0x25,  /* [6907] */
    (xdc_Char)0x24,  /* [6908] */
    (xdc_Char)0x46,  /* [6909] */
    (xdc_Char)0x2e,  /* [6910] */
    (xdc_Char)0x20,  /* [6911] */
    (xdc_Char)0x5b,  /* [6912] */
    (xdc_Char)0x50,  /* [6913] */
    (xdc_Char)0x61,  /* [6914] */
    (xdc_Char)0x72,  /* [6915] */
    (xdc_Char)0x61,  /* [6916] */
    (xdc_Char)0x6d,  /* [6917] */
    (xdc_Char)0x4e,  /* [6918] */
    (xdc_Char)0x75,  /* [6919] */
    (xdc_Char)0x6d,  /* [6920] */
    (xdc_Char)0x5d,  /* [6921] */
    (xdc_Char)0x25,  /* [6922] */
    (xdc_Char)0x64,  /* [6923] */
    (xdc_Char)0x20,  /* [6924] */
    (xdc_Char)0x5b,  /* [6925] */
    (xdc_Char)0x50,  /* [6926] */
    (xdc_Char)0x61,  /* [6927] */
    (xdc_Char)0x72,  /* [6928] */
    (xdc_Char)0x61,  /* [6929] */
    (xdc_Char)0x6d,  /* [6930] */
    (xdc_Char)0x56,  /* [6931] */
    (xdc_Char)0x61,  /* [6932] */
    (xdc_Char)0x6c,  /* [6933] */
    (xdc_Char)0x75,  /* [6934] */
    (xdc_Char)0x65,  /* [6935] */
    (xdc_Char)0x5d,  /* [6936] */
    (xdc_Char)0x30,  /* [6937] */
    (xdc_Char)0x78,  /* [6938] */
    (xdc_Char)0x25,  /* [6939] */
    (xdc_Char)0x78,  /* [6940] */
    (xdc_Char)0x0,  /* [6941] */
    (xdc_Char)0x57,  /* [6942] */
    (xdc_Char)0x41,  /* [6943] */
    (xdc_Char)0x52,  /* [6944] */
    (xdc_Char)0x4e,  /* [6945] */
    (xdc_Char)0x49,  /* [6946] */
    (xdc_Char)0x4e,  /* [6947] */
    (xdc_Char)0x47,  /* [6948] */
    (xdc_Char)0x3a,  /* [6949] */
    (xdc_Char)0x20,  /* [6950] */
    (xdc_Char)0x45,  /* [6951] */
    (xdc_Char)0x76,  /* [6952] */
    (xdc_Char)0x65,  /* [6953] */
    (xdc_Char)0x6e,  /* [6954] */
    (xdc_Char)0x74,  /* [6955] */
    (xdc_Char)0x43,  /* [6956] */
    (xdc_Char)0x6f,  /* [6957] */
    (xdc_Char)0x64,  /* [6958] */
    (xdc_Char)0x65,  /* [6959] */
    (xdc_Char)0x3a,  /* [6960] */
    (xdc_Char)0x30,  /* [6961] */
    (xdc_Char)0x78,  /* [6962] */
    (xdc_Char)0x25,  /* [6963] */
    (xdc_Char)0x78,  /* [6964] */
    (xdc_Char)0x0,  /* [6965] */
    (xdc_Char)0x57,  /* [6966] */
    (xdc_Char)0x41,  /* [6967] */
    (xdc_Char)0x52,  /* [6968] */
    (xdc_Char)0x4e,  /* [6969] */
    (xdc_Char)0x49,  /* [6970] */
    (xdc_Char)0x4e,  /* [6971] */
    (xdc_Char)0x47,  /* [6972] */
    (xdc_Char)0x3a,  /* [6973] */
    (xdc_Char)0x20,  /* [6974] */
    (xdc_Char)0x45,  /* [6975] */
    (xdc_Char)0x76,  /* [6976] */
    (xdc_Char)0x65,  /* [6977] */
    (xdc_Char)0x6e,  /* [6978] */
    (xdc_Char)0x74,  /* [6979] */
    (xdc_Char)0x43,  /* [6980] */
    (xdc_Char)0x6f,  /* [6981] */
    (xdc_Char)0x64,  /* [6982] */
    (xdc_Char)0x65,  /* [6983] */
    (xdc_Char)0x3a,  /* [6984] */
    (xdc_Char)0x30,  /* [6985] */
    (xdc_Char)0x78,  /* [6986] */
    (xdc_Char)0x25,  /* [6987] */
    (xdc_Char)0x78,  /* [6988] */
    (xdc_Char)0x2e,  /* [6989] */
    (xdc_Char)0x20,  /* [6990] */
    (xdc_Char)0x25,  /* [6991] */
    (xdc_Char)0x24,  /* [6992] */
    (xdc_Char)0x53,  /* [6993] */
    (xdc_Char)0x0,  /* [6994] */
    (xdc_Char)0x49,  /* [6995] */
    (xdc_Char)0x4e,  /* [6996] */
    (xdc_Char)0x46,  /* [6997] */
    (xdc_Char)0x4f,  /* [6998] */
    (xdc_Char)0x3a,  /* [6999] */
    (xdc_Char)0x20,  /* [7000] */
    (xdc_Char)0x45,  /* [7001] */
    (xdc_Char)0x76,  /* [7002] */
    (xdc_Char)0x65,  /* [7003] */
    (xdc_Char)0x6e,  /* [7004] */
    (xdc_Char)0x74,  /* [7005] */
    (xdc_Char)0x43,  /* [7006] */
    (xdc_Char)0x6f,  /* [7007] */
    (xdc_Char)0x64,  /* [7008] */
    (xdc_Char)0x65,  /* [7009] */
    (xdc_Char)0x3a,  /* [7010] */
    (xdc_Char)0x20,  /* [7011] */
    (xdc_Char)0x30,  /* [7012] */
    (xdc_Char)0x78,  /* [7013] */
    (xdc_Char)0x25,  /* [7014] */
    (xdc_Char)0x78,  /* [7015] */
    (xdc_Char)0x0,  /* [7016] */
    (xdc_Char)0x49,  /* [7017] */
    (xdc_Char)0x4e,  /* [7018] */
    (xdc_Char)0x46,  /* [7019] */
    (xdc_Char)0x4f,  /* [7020] */
    (xdc_Char)0x3a,  /* [7021] */
    (xdc_Char)0x20,  /* [7022] */
    (xdc_Char)0x45,  /* [7023] */
    (xdc_Char)0x76,  /* [7024] */
    (xdc_Char)0x65,  /* [7025] */
    (xdc_Char)0x6e,  /* [7026] */
    (xdc_Char)0x74,  /* [7027] */
    (xdc_Char)0x43,  /* [7028] */
    (xdc_Char)0x6f,  /* [7029] */
    (xdc_Char)0x64,  /* [7030] */
    (xdc_Char)0x65,  /* [7031] */
    (xdc_Char)0x3a,  /* [7032] */
    (xdc_Char)0x30,  /* [7033] */
    (xdc_Char)0x78,  /* [7034] */
    (xdc_Char)0x25,  /* [7035] */
    (xdc_Char)0x78,  /* [7036] */
    (xdc_Char)0x2e,  /* [7037] */
    (xdc_Char)0x20,  /* [7038] */
    (xdc_Char)0x20,  /* [7039] */
    (xdc_Char)0x25,  /* [7040] */
    (xdc_Char)0x24,  /* [7041] */
    (xdc_Char)0x53,  /* [7042] */
    (xdc_Char)0x0,  /* [7043] */
    (xdc_Char)0x44,  /* [7044] */
    (xdc_Char)0x45,  /* [7045] */
    (xdc_Char)0x54,  /* [7046] */
    (xdc_Char)0x41,  /* [7047] */
    (xdc_Char)0x49,  /* [7048] */
    (xdc_Char)0x4c,  /* [7049] */
    (xdc_Char)0x3a,  /* [7050] */
    (xdc_Char)0x20,  /* [7051] */
    (xdc_Char)0x45,  /* [7052] */
    (xdc_Char)0x76,  /* [7053] */
    (xdc_Char)0x65,  /* [7054] */
    (xdc_Char)0x6e,  /* [7055] */
    (xdc_Char)0x74,  /* [7056] */
    (xdc_Char)0x43,  /* [7057] */
    (xdc_Char)0x6f,  /* [7058] */
    (xdc_Char)0x64,  /* [7059] */
    (xdc_Char)0x65,  /* [7060] */
    (xdc_Char)0x3a,  /* [7061] */
    (xdc_Char)0x30,  /* [7062] */
    (xdc_Char)0x78,  /* [7063] */
    (xdc_Char)0x25,  /* [7064] */
    (xdc_Char)0x78,  /* [7065] */
    (xdc_Char)0x0,  /* [7066] */
    (xdc_Char)0x44,  /* [7067] */
    (xdc_Char)0x45,  /* [7068] */
    (xdc_Char)0x54,  /* [7069] */
    (xdc_Char)0x41,  /* [7070] */
    (xdc_Char)0x49,  /* [7071] */
    (xdc_Char)0x4c,  /* [7072] */
    (xdc_Char)0x3a,  /* [7073] */
    (xdc_Char)0x20,  /* [7074] */
    (xdc_Char)0x45,  /* [7075] */
    (xdc_Char)0x76,  /* [7076] */
    (xdc_Char)0x65,  /* [7077] */
    (xdc_Char)0x6e,  /* [7078] */
    (xdc_Char)0x74,  /* [7079] */
    (xdc_Char)0x43,  /* [7080] */
    (xdc_Char)0x6f,  /* [7081] */
    (xdc_Char)0x64,  /* [7082] */
    (xdc_Char)0x65,  /* [7083] */
    (xdc_Char)0x3a,  /* [7084] */
    (xdc_Char)0x30,  /* [7085] */
    (xdc_Char)0x78,  /* [7086] */
    (xdc_Char)0x25,  /* [7087] */
    (xdc_Char)0x78,  /* [7088] */
    (xdc_Char)0x2e,  /* [7089] */
    (xdc_Char)0x20,  /* [7090] */
    (xdc_Char)0x20,  /* [7091] */
    (xdc_Char)0x25,  /* [7092] */
    (xdc_Char)0x24,  /* [7093] */
    (xdc_Char)0x53,  /* [7094] */
    (xdc_Char)0x0,  /* [7095] */
    (xdc_Char)0x56,  /* [7096] */
    (xdc_Char)0x41,  /* [7097] */
    (xdc_Char)0x4c,  /* [7098] */
    (xdc_Char)0x55,  /* [7099] */
    (xdc_Char)0x45,  /* [7100] */
    (xdc_Char)0x3d,  /* [7101] */
    (xdc_Char)0x25,  /* [7102] */
    (xdc_Char)0x64,  /* [7103] */
    (xdc_Char)0x20,  /* [7104] */
    (xdc_Char)0x28,  /* [7105] */
    (xdc_Char)0x41,  /* [7106] */
    (xdc_Char)0x75,  /* [7107] */
    (xdc_Char)0x78,  /* [7108] */
    (xdc_Char)0x44,  /* [7109] */
    (xdc_Char)0x61,  /* [7110] */
    (xdc_Char)0x74,  /* [7111] */
    (xdc_Char)0x61,  /* [7112] */
    (xdc_Char)0x3d,  /* [7113] */
    (xdc_Char)0x25,  /* [7114] */
    (xdc_Char)0x64,  /* [7115] */
    (xdc_Char)0x2c,  /* [7116] */
    (xdc_Char)0x20,  /* [7117] */
    (xdc_Char)0x25,  /* [7118] */
    (xdc_Char)0x64,  /* [7119] */
    (xdc_Char)0x29,  /* [7120] */
    (xdc_Char)0x20,  /* [7121] */
    (xdc_Char)0x4b,  /* [7122] */
    (xdc_Char)0x65,  /* [7123] */
    (xdc_Char)0x79,  /* [7124] */
    (xdc_Char)0x3a,  /* [7125] */
    (xdc_Char)0x25,  /* [7126] */
    (xdc_Char)0x24,  /* [7127] */
    (xdc_Char)0x53,  /* [7128] */
    (xdc_Char)0x0,  /* [7129] */
    (xdc_Char)0x52,  /* [7130] */
    (xdc_Char)0x6f,  /* [7131] */
    (xdc_Char)0x75,  /* [7132] */
    (xdc_Char)0x6e,  /* [7133] */
    (xdc_Char)0x64,  /* [7134] */
    (xdc_Char)0x74,  /* [7135] */
    (xdc_Char)0x72,  /* [7136] */
    (xdc_Char)0x69,  /* [7137] */
    (xdc_Char)0x70,  /* [7138] */
    (xdc_Char)0x5f,  /* [7139] */
    (xdc_Char)0x53,  /* [7140] */
    (xdc_Char)0x74,  /* [7141] */
    (xdc_Char)0x61,  /* [7142] */
    (xdc_Char)0x72,  /* [7143] */
    (xdc_Char)0x74,  /* [7144] */
    (xdc_Char)0x3a,  /* [7145] */
    (xdc_Char)0x20,  /* [7146] */
    (xdc_Char)0x25,  /* [7147] */
    (xdc_Char)0x24,  /* [7148] */
    (xdc_Char)0x53,  /* [7149] */
    (xdc_Char)0x0,  /* [7150] */
    (xdc_Char)0x52,  /* [7151] */
    (xdc_Char)0x6f,  /* [7152] */
    (xdc_Char)0x75,  /* [7153] */
    (xdc_Char)0x6e,  /* [7154] */
    (xdc_Char)0x64,  /* [7155] */
    (xdc_Char)0x74,  /* [7156] */
    (xdc_Char)0x72,  /* [7157] */
    (xdc_Char)0x69,  /* [7158] */
    (xdc_Char)0x70,  /* [7159] */
    (xdc_Char)0x5f,  /* [7160] */
    (xdc_Char)0x53,  /* [7161] */
    (xdc_Char)0x74,  /* [7162] */
    (xdc_Char)0x6f,  /* [7163] */
    (xdc_Char)0x70,  /* [7164] */
    (xdc_Char)0x3a,  /* [7165] */
    (xdc_Char)0x20,  /* [7166] */
    (xdc_Char)0x25,  /* [7167] */
    (xdc_Char)0x24,  /* [7168] */
    (xdc_Char)0x53,  /* [7169] */
    (xdc_Char)0x0,  /* [7170] */
    (xdc_Char)0x52,  /* [7171] */
    (xdc_Char)0x6f,  /* [7172] */
    (xdc_Char)0x75,  /* [7173] */
    (xdc_Char)0x6e,  /* [7174] */
    (xdc_Char)0x64,  /* [7175] */
    (xdc_Char)0x74,  /* [7176] */
    (xdc_Char)0x72,  /* [7177] */
    (xdc_Char)0x69,  /* [7178] */
    (xdc_Char)0x70,  /* [7179] */
    (xdc_Char)0x5f,  /* [7180] */
    (xdc_Char)0x53,  /* [7181] */
    (xdc_Char)0x74,  /* [7182] */
    (xdc_Char)0x61,  /* [7183] */
    (xdc_Char)0x72,  /* [7184] */
    (xdc_Char)0x74,  /* [7185] */
    (xdc_Char)0x49,  /* [7186] */
    (xdc_Char)0x6e,  /* [7187] */
    (xdc_Char)0x73,  /* [7188] */
    (xdc_Char)0x74,  /* [7189] */
    (xdc_Char)0x61,  /* [7190] */
    (xdc_Char)0x6e,  /* [7191] */
    (xdc_Char)0x63,  /* [7192] */
    (xdc_Char)0x65,  /* [7193] */
    (xdc_Char)0x3a,  /* [7194] */
    (xdc_Char)0x20,  /* [7195] */
    (xdc_Char)0x25,  /* [7196] */
    (xdc_Char)0x24,  /* [7197] */
    (xdc_Char)0x53,  /* [7198] */
    (xdc_Char)0x0,  /* [7199] */
    (xdc_Char)0x52,  /* [7200] */
    (xdc_Char)0x6f,  /* [7201] */
    (xdc_Char)0x75,  /* [7202] */
    (xdc_Char)0x6e,  /* [7203] */
    (xdc_Char)0x64,  /* [7204] */
    (xdc_Char)0x74,  /* [7205] */
    (xdc_Char)0x72,  /* [7206] */
    (xdc_Char)0x69,  /* [7207] */
    (xdc_Char)0x70,  /* [7208] */
    (xdc_Char)0x5f,  /* [7209] */
    (xdc_Char)0x53,  /* [7210] */
    (xdc_Char)0x74,  /* [7211] */
    (xdc_Char)0x6f,  /* [7212] */
    (xdc_Char)0x70,  /* [7213] */
    (xdc_Char)0x49,  /* [7214] */
    (xdc_Char)0x6e,  /* [7215] */
    (xdc_Char)0x73,  /* [7216] */
    (xdc_Char)0x74,  /* [7217] */
    (xdc_Char)0x61,  /* [7218] */
    (xdc_Char)0x6e,  /* [7219] */
    (xdc_Char)0x63,  /* [7220] */
    (xdc_Char)0x65,  /* [7221] */
    (xdc_Char)0x3a,  /* [7222] */
    (xdc_Char)0x20,  /* [7223] */
    (xdc_Char)0x25,  /* [7224] */
    (xdc_Char)0x24,  /* [7225] */
    (xdc_Char)0x53,  /* [7226] */
    (xdc_Char)0x0,  /* [7227] */
    (xdc_Char)0x52,  /* [7228] */
    (xdc_Char)0x6f,  /* [7229] */
    (xdc_Char)0x75,  /* [7230] */
    (xdc_Char)0x6e,  /* [7231] */
    (xdc_Char)0x64,  /* [7232] */
    (xdc_Char)0x74,  /* [7233] */
    (xdc_Char)0x72,  /* [7234] */
    (xdc_Char)0x69,  /* [7235] */
    (xdc_Char)0x70,  /* [7236] */
    (xdc_Char)0x5f,  /* [7237] */
    (xdc_Char)0x53,  /* [7238] */
    (xdc_Char)0x74,  /* [7239] */
    (xdc_Char)0x61,  /* [7240] */
    (xdc_Char)0x72,  /* [7241] */
    (xdc_Char)0x74,  /* [7242] */
    (xdc_Char)0x49,  /* [7243] */
    (xdc_Char)0x6e,  /* [7244] */
    (xdc_Char)0x73,  /* [7245] */
    (xdc_Char)0x74,  /* [7246] */
    (xdc_Char)0x61,  /* [7247] */
    (xdc_Char)0x6e,  /* [7248] */
    (xdc_Char)0x63,  /* [7249] */
    (xdc_Char)0x65,  /* [7250] */
    (xdc_Char)0x57,  /* [7251] */
    (xdc_Char)0x69,  /* [7252] */
    (xdc_Char)0x74,  /* [7253] */
    (xdc_Char)0x68,  /* [7254] */
    (xdc_Char)0x41,  /* [7255] */
    (xdc_Char)0x64,  /* [7256] */
    (xdc_Char)0x72,  /* [7257] */
    (xdc_Char)0x73,  /* [7258] */
    (xdc_Char)0x3a,  /* [7259] */
    (xdc_Char)0x20,  /* [7260] */
    (xdc_Char)0x25,  /* [7261] */
    (xdc_Char)0x24,  /* [7262] */
    (xdc_Char)0x53,  /* [7263] */
    (xdc_Char)0x0,  /* [7264] */
    (xdc_Char)0x52,  /* [7265] */
    (xdc_Char)0x6f,  /* [7266] */
    (xdc_Char)0x75,  /* [7267] */
    (xdc_Char)0x6e,  /* [7268] */
    (xdc_Char)0x64,  /* [7269] */
    (xdc_Char)0x74,  /* [7270] */
    (xdc_Char)0x72,  /* [7271] */
    (xdc_Char)0x69,  /* [7272] */
    (xdc_Char)0x70,  /* [7273] */
    (xdc_Char)0x5f,  /* [7274] */
    (xdc_Char)0x53,  /* [7275] */
    (xdc_Char)0x74,  /* [7276] */
    (xdc_Char)0x6f,  /* [7277] */
    (xdc_Char)0x70,  /* [7278] */
    (xdc_Char)0x49,  /* [7279] */
    (xdc_Char)0x6e,  /* [7280] */
    (xdc_Char)0x73,  /* [7281] */
    (xdc_Char)0x74,  /* [7282] */
    (xdc_Char)0x61,  /* [7283] */
    (xdc_Char)0x6e,  /* [7284] */
    (xdc_Char)0x63,  /* [7285] */
    (xdc_Char)0x65,  /* [7286] */
    (xdc_Char)0x57,  /* [7287] */
    (xdc_Char)0x69,  /* [7288] */
    (xdc_Char)0x74,  /* [7289] */
    (xdc_Char)0x68,  /* [7290] */
    (xdc_Char)0x41,  /* [7291] */
    (xdc_Char)0x64,  /* [7292] */
    (xdc_Char)0x72,  /* [7293] */
    (xdc_Char)0x73,  /* [7294] */
    (xdc_Char)0x3a,  /* [7295] */
    (xdc_Char)0x20,  /* [7296] */
    (xdc_Char)0x25,  /* [7297] */
    (xdc_Char)0x24,  /* [7298] */
    (xdc_Char)0x53,  /* [7299] */
    (xdc_Char)0x0,  /* [7300] */
    (xdc_Char)0x52,  /* [7301] */
    (xdc_Char)0x6f,  /* [7302] */
    (xdc_Char)0x75,  /* [7303] */
    (xdc_Char)0x6e,  /* [7304] */
    (xdc_Char)0x64,  /* [7305] */
    (xdc_Char)0x74,  /* [7306] */
    (xdc_Char)0x72,  /* [7307] */
    (xdc_Char)0x69,  /* [7308] */
    (xdc_Char)0x70,  /* [7309] */
    (xdc_Char)0x5f,  /* [7310] */
    (xdc_Char)0x53,  /* [7311] */
    (xdc_Char)0x74,  /* [7312] */
    (xdc_Char)0x61,  /* [7313] */
    (xdc_Char)0x72,  /* [7314] */
    (xdc_Char)0x74,  /* [7315] */
    (xdc_Char)0x49,  /* [7316] */
    (xdc_Char)0x6e,  /* [7317] */
    (xdc_Char)0x73,  /* [7318] */
    (xdc_Char)0x74,  /* [7319] */
    (xdc_Char)0x61,  /* [7320] */
    (xdc_Char)0x6e,  /* [7321] */
    (xdc_Char)0x63,  /* [7322] */
    (xdc_Char)0x65,  /* [7323] */
    (xdc_Char)0x57,  /* [7324] */
    (xdc_Char)0x69,  /* [7325] */
    (xdc_Char)0x74,  /* [7326] */
    (xdc_Char)0x68,  /* [7327] */
    (xdc_Char)0x53,  /* [7328] */
    (xdc_Char)0x74,  /* [7329] */
    (xdc_Char)0x72,  /* [7330] */
    (xdc_Char)0x3a,  /* [7331] */
    (xdc_Char)0x20,  /* [7332] */
    (xdc_Char)0x25,  /* [7333] */
    (xdc_Char)0x24,  /* [7334] */
    (xdc_Char)0x53,  /* [7335] */
    (xdc_Char)0x0,  /* [7336] */
    (xdc_Char)0x52,  /* [7337] */
    (xdc_Char)0x6f,  /* [7338] */
    (xdc_Char)0x75,  /* [7339] */
    (xdc_Char)0x6e,  /* [7340] */
    (xdc_Char)0x64,  /* [7341] */
    (xdc_Char)0x74,  /* [7342] */
    (xdc_Char)0x72,  /* [7343] */
    (xdc_Char)0x69,  /* [7344] */
    (xdc_Char)0x70,  /* [7345] */
    (xdc_Char)0x5f,  /* [7346] */
    (xdc_Char)0x53,  /* [7347] */
    (xdc_Char)0x74,  /* [7348] */
    (xdc_Char)0x6f,  /* [7349] */
    (xdc_Char)0x70,  /* [7350] */
    (xdc_Char)0x49,  /* [7351] */
    (xdc_Char)0x6e,  /* [7352] */
    (xdc_Char)0x73,  /* [7353] */
    (xdc_Char)0x74,  /* [7354] */
    (xdc_Char)0x61,  /* [7355] */
    (xdc_Char)0x6e,  /* [7356] */
    (xdc_Char)0x63,  /* [7357] */
    (xdc_Char)0x65,  /* [7358] */
    (xdc_Char)0x57,  /* [7359] */
    (xdc_Char)0x69,  /* [7360] */
    (xdc_Char)0x74,  /* [7361] */
    (xdc_Char)0x68,  /* [7362] */
    (xdc_Char)0x53,  /* [7363] */
    (xdc_Char)0x74,  /* [7364] */
    (xdc_Char)0x72,  /* [7365] */
    (xdc_Char)0x3a,  /* [7366] */
    (xdc_Char)0x20,  /* [7367] */
    (xdc_Char)0x25,  /* [7368] */
    (xdc_Char)0x24,  /* [7369] */
    (xdc_Char)0x53,  /* [7370] */
    (xdc_Char)0x0,  /* [7371] */
    (xdc_Char)0x43,  /* [7372] */
    (xdc_Char)0x50,  /* [7373] */
    (xdc_Char)0x55,  /* [7374] */
    (xdc_Char)0x20,  /* [7375] */
    (xdc_Char)0x4c,  /* [7376] */
    (xdc_Char)0x6f,  /* [7377] */
    (xdc_Char)0x61,  /* [7378] */
    (xdc_Char)0x64,  /* [7379] */
    (xdc_Char)0x3a,  /* [7380] */
    (xdc_Char)0x20,  /* [7381] */
    (xdc_Char)0x4e,  /* [7382] */
    (xdc_Char)0x75,  /* [7383] */
    (xdc_Char)0x6d,  /* [7384] */
    (xdc_Char)0x43,  /* [7385] */
    (xdc_Char)0x79,  /* [7386] */
    (xdc_Char)0x63,  /* [7387] */
    (xdc_Char)0x6c,  /* [7388] */
    (xdc_Char)0x65,  /* [7389] */
    (xdc_Char)0x73,  /* [7390] */
    (xdc_Char)0x3d,  /* [7391] */
    (xdc_Char)0x25,  /* [7392] */
    (xdc_Char)0x64,  /* [7393] */
    (xdc_Char)0x0,  /* [7394] */
    (xdc_Char)0x43,  /* [7395] */
    (xdc_Char)0x50,  /* [7396] */
    (xdc_Char)0x55,  /* [7397] */
    (xdc_Char)0x20,  /* [7398] */
    (xdc_Char)0x4c,  /* [7399] */
    (xdc_Char)0x6f,  /* [7400] */
    (xdc_Char)0x61,  /* [7401] */
    (xdc_Char)0x64,  /* [7402] */
    (xdc_Char)0x20,  /* [7403] */
    (xdc_Char)0x66,  /* [7404] */
    (xdc_Char)0x6f,  /* [7405] */
    (xdc_Char)0x72,  /* [7406] */
    (xdc_Char)0x20,  /* [7407] */
    (xdc_Char)0x25,  /* [7408] */
    (xdc_Char)0x73,  /* [7409] */
    (xdc_Char)0x20,  /* [7410] */
    (xdc_Char)0x28,  /* [7411] */
    (xdc_Char)0x69,  /* [7412] */
    (xdc_Char)0x6e,  /* [7413] */
    (xdc_Char)0x73,  /* [7414] */
    (xdc_Char)0x74,  /* [7415] */
    (xdc_Char)0x61,  /* [7416] */
    (xdc_Char)0x6e,  /* [7417] */
    (xdc_Char)0x63,  /* [7418] */
    (xdc_Char)0x65,  /* [7419] */
    (xdc_Char)0x49,  /* [7420] */
    (xdc_Char)0x64,  /* [7421] */
    (xdc_Char)0x20,  /* [7422] */
    (xdc_Char)0x3d,  /* [7423] */
    (xdc_Char)0x20,  /* [7424] */
    (xdc_Char)0x30,  /* [7425] */
    (xdc_Char)0x78,  /* [7426] */
    (xdc_Char)0x25,  /* [7427] */
    (xdc_Char)0x78,  /* [7428] */
    (xdc_Char)0x29,  /* [7429] */
    (xdc_Char)0x3a,  /* [7430] */
    (xdc_Char)0x20,  /* [7431] */
    (xdc_Char)0x4e,  /* [7432] */
    (xdc_Char)0x75,  /* [7433] */
    (xdc_Char)0x6d,  /* [7434] */
    (xdc_Char)0x43,  /* [7435] */
    (xdc_Char)0x79,  /* [7436] */
    (xdc_Char)0x63,  /* [7437] */
    (xdc_Char)0x6c,  /* [7438] */
    (xdc_Char)0x65,  /* [7439] */
    (xdc_Char)0x73,  /* [7440] */
    (xdc_Char)0x3d,  /* [7441] */
    (xdc_Char)0x25,  /* [7442] */
    (xdc_Char)0x64,  /* [7443] */
    (xdc_Char)0x0,  /* [7444] */
    (xdc_Char)0x42,  /* [7445] */
    (xdc_Char)0x79,  /* [7446] */
    (xdc_Char)0x74,  /* [7447] */
    (xdc_Char)0x65,  /* [7448] */
    (xdc_Char)0x73,  /* [7449] */
    (xdc_Char)0x20,  /* [7450] */
    (xdc_Char)0x50,  /* [7451] */
    (xdc_Char)0x72,  /* [7452] */
    (xdc_Char)0x6f,  /* [7453] */
    (xdc_Char)0x63,  /* [7454] */
    (xdc_Char)0x65,  /* [7455] */
    (xdc_Char)0x73,  /* [7456] */
    (xdc_Char)0x73,  /* [7457] */
    (xdc_Char)0x65,  /* [7458] */
    (xdc_Char)0x64,  /* [7459] */
    (xdc_Char)0x20,  /* [7460] */
    (xdc_Char)0x62,  /* [7461] */
    (xdc_Char)0x79,  /* [7462] */
    (xdc_Char)0x20,  /* [7463] */
    (xdc_Char)0x25,  /* [7464] */
    (xdc_Char)0x73,  /* [7465] */
    (xdc_Char)0x3a,  /* [7466] */
    (xdc_Char)0x20,  /* [7467] */
    (xdc_Char)0x4e,  /* [7468] */
    (xdc_Char)0x75,  /* [7469] */
    (xdc_Char)0x6d,  /* [7470] */
    (xdc_Char)0x42,  /* [7471] */
    (xdc_Char)0x79,  /* [7472] */
    (xdc_Char)0x74,  /* [7473] */
    (xdc_Char)0x65,  /* [7474] */
    (xdc_Char)0x73,  /* [7475] */
    (xdc_Char)0x3d,  /* [7476] */
    (xdc_Char)0x30,  /* [7477] */
    (xdc_Char)0x78,  /* [7478] */
    (xdc_Char)0x25,  /* [7479] */
    (xdc_Char)0x78,  /* [7480] */
    (xdc_Char)0x0,  /* [7481] */
    (xdc_Char)0x42,  /* [7482] */
    (xdc_Char)0x79,  /* [7483] */
    (xdc_Char)0x74,  /* [7484] */
    (xdc_Char)0x65,  /* [7485] */
    (xdc_Char)0x73,  /* [7486] */
    (xdc_Char)0x20,  /* [7487] */
    (xdc_Char)0x50,  /* [7488] */
    (xdc_Char)0x72,  /* [7489] */
    (xdc_Char)0x6f,  /* [7490] */
    (xdc_Char)0x63,  /* [7491] */
    (xdc_Char)0x65,  /* [7492] */
    (xdc_Char)0x73,  /* [7493] */
    (xdc_Char)0x73,  /* [7494] */
    (xdc_Char)0x65,  /* [7495] */
    (xdc_Char)0x64,  /* [7496] */
    (xdc_Char)0x20,  /* [7497] */
    (xdc_Char)0x61,  /* [7498] */
    (xdc_Char)0x74,  /* [7499] */
    (xdc_Char)0x20,  /* [7500] */
    (xdc_Char)0x25,  /* [7501] */
    (xdc_Char)0x24,  /* [7502] */
    (xdc_Char)0x46,  /* [7503] */
    (xdc_Char)0x20,  /* [7504] */
    (xdc_Char)0x28,  /* [7505] */
    (xdc_Char)0x49,  /* [7506] */
    (xdc_Char)0x6e,  /* [7507] */
    (xdc_Char)0x73,  /* [7508] */
    (xdc_Char)0x74,  /* [7509] */
    (xdc_Char)0x61,  /* [7510] */
    (xdc_Char)0x6e,  /* [7511] */
    (xdc_Char)0x63,  /* [7512] */
    (xdc_Char)0x65,  /* [7513] */
    (xdc_Char)0x49,  /* [7514] */
    (xdc_Char)0x64,  /* [7515] */
    (xdc_Char)0x20,  /* [7516] */
    (xdc_Char)0x30,  /* [7517] */
    (xdc_Char)0x78,  /* [7518] */
    (xdc_Char)0x25,  /* [7519] */
    (xdc_Char)0x78,  /* [7520] */
    (xdc_Char)0x29,  /* [7521] */
    (xdc_Char)0x3a,  /* [7522] */
    (xdc_Char)0x20,  /* [7523] */
    (xdc_Char)0x4e,  /* [7524] */
    (xdc_Char)0x75,  /* [7525] */
    (xdc_Char)0x6d,  /* [7526] */
    (xdc_Char)0x20,  /* [7527] */
    (xdc_Char)0x42,  /* [7528] */
    (xdc_Char)0x79,  /* [7529] */
    (xdc_Char)0x74,  /* [7530] */
    (xdc_Char)0x65,  /* [7531] */
    (xdc_Char)0x73,  /* [7532] */
    (xdc_Char)0x3d,  /* [7533] */
    (xdc_Char)0x25,  /* [7534] */
    (xdc_Char)0x64,  /* [7535] */
    (xdc_Char)0x0,  /* [7536] */
    (xdc_Char)0x57,  /* [7537] */
    (xdc_Char)0x6f,  /* [7538] */
    (xdc_Char)0x72,  /* [7539] */
    (xdc_Char)0x64,  /* [7540] */
    (xdc_Char)0x73,  /* [7541] */
    (xdc_Char)0x20,  /* [7542] */
    (xdc_Char)0x50,  /* [7543] */
    (xdc_Char)0x72,  /* [7544] */
    (xdc_Char)0x6f,  /* [7545] */
    (xdc_Char)0x63,  /* [7546] */
    (xdc_Char)0x65,  /* [7547] */
    (xdc_Char)0x73,  /* [7548] */
    (xdc_Char)0x73,  /* [7549] */
    (xdc_Char)0x65,  /* [7550] */
    (xdc_Char)0x64,  /* [7551] */
    (xdc_Char)0x20,  /* [7552] */
    (xdc_Char)0x62,  /* [7553] */
    (xdc_Char)0x79,  /* [7554] */
    (xdc_Char)0x20,  /* [7555] */
    (xdc_Char)0x25,  /* [7556] */
    (xdc_Char)0x73,  /* [7557] */
    (xdc_Char)0x3a,  /* [7558] */
    (xdc_Char)0x20,  /* [7559] */
    (xdc_Char)0x4e,  /* [7560] */
    (xdc_Char)0x75,  /* [7561] */
    (xdc_Char)0x6d,  /* [7562] */
    (xdc_Char)0x57,  /* [7563] */
    (xdc_Char)0x6f,  /* [7564] */
    (xdc_Char)0x72,  /* [7565] */
    (xdc_Char)0x64,  /* [7566] */
    (xdc_Char)0x73,  /* [7567] */
    (xdc_Char)0x3d,  /* [7568] */
    (xdc_Char)0x30,  /* [7569] */
    (xdc_Char)0x78,  /* [7570] */
    (xdc_Char)0x25,  /* [7571] */
    (xdc_Char)0x78,  /* [7572] */
    (xdc_Char)0x0,  /* [7573] */
    (xdc_Char)0x57,  /* [7574] */
    (xdc_Char)0x6f,  /* [7575] */
    (xdc_Char)0x72,  /* [7576] */
    (xdc_Char)0x64,  /* [7577] */
    (xdc_Char)0x73,  /* [7578] */
    (xdc_Char)0x20,  /* [7579] */
    (xdc_Char)0x50,  /* [7580] */
    (xdc_Char)0x72,  /* [7581] */
    (xdc_Char)0x6f,  /* [7582] */
    (xdc_Char)0x63,  /* [7583] */
    (xdc_Char)0x65,  /* [7584] */
    (xdc_Char)0x73,  /* [7585] */
    (xdc_Char)0x73,  /* [7586] */
    (xdc_Char)0x65,  /* [7587] */
    (xdc_Char)0x64,  /* [7588] */
    (xdc_Char)0x20,  /* [7589] */
    (xdc_Char)0x61,  /* [7590] */
    (xdc_Char)0x74,  /* [7591] */
    (xdc_Char)0x20,  /* [7592] */
    (xdc_Char)0x25,  /* [7593] */
    (xdc_Char)0x24,  /* [7594] */
    (xdc_Char)0x46,  /* [7595] */
    (xdc_Char)0x20,  /* [7596] */
    (xdc_Char)0x28,  /* [7597] */
    (xdc_Char)0x49,  /* [7598] */
    (xdc_Char)0x6e,  /* [7599] */
    (xdc_Char)0x73,  /* [7600] */
    (xdc_Char)0x74,  /* [7601] */
    (xdc_Char)0x61,  /* [7602] */
    (xdc_Char)0x6e,  /* [7603] */
    (xdc_Char)0x63,  /* [7604] */
    (xdc_Char)0x65,  /* [7605] */
    (xdc_Char)0x49,  /* [7606] */
    (xdc_Char)0x64,  /* [7607] */
    (xdc_Char)0x20,  /* [7608] */
    (xdc_Char)0x30,  /* [7609] */
    (xdc_Char)0x78,  /* [7610] */
    (xdc_Char)0x25,  /* [7611] */
    (xdc_Char)0x78,  /* [7612] */
    (xdc_Char)0x29,  /* [7613] */
    (xdc_Char)0x3a,  /* [7614] */
    (xdc_Char)0x20,  /* [7615] */
    (xdc_Char)0x4e,  /* [7616] */
    (xdc_Char)0x75,  /* [7617] */
    (xdc_Char)0x6d,  /* [7618] */
    (xdc_Char)0x20,  /* [7619] */
    (xdc_Char)0x57,  /* [7620] */
    (xdc_Char)0x6f,  /* [7621] */
    (xdc_Char)0x72,  /* [7622] */
    (xdc_Char)0x64,  /* [7623] */
    (xdc_Char)0x73,  /* [7624] */
    (xdc_Char)0x3d,  /* [7625] */
    (xdc_Char)0x25,  /* [7626] */
    (xdc_Char)0x64,  /* [7627] */
    (xdc_Char)0x0,  /* [7628] */
    (xdc_Char)0x48,  /* [7629] */
    (xdc_Char)0x65,  /* [7630] */
    (xdc_Char)0x61,  /* [7631] */
    (xdc_Char)0x70,  /* [7632] */
    (xdc_Char)0x20,  /* [7633] */
    (xdc_Char)0x61,  /* [7634] */
    (xdc_Char)0x74,  /* [7635] */
    (xdc_Char)0x20,  /* [7636] */
    (xdc_Char)0x25,  /* [7637] */
    (xdc_Char)0x24,  /* [7638] */
    (xdc_Char)0x46,  /* [7639] */
    (xdc_Char)0x20,  /* [7640] */
    (xdc_Char)0x28,  /* [7641] */
    (xdc_Char)0x48,  /* [7642] */
    (xdc_Char)0x65,  /* [7643] */
    (xdc_Char)0x61,  /* [7644] */
    (xdc_Char)0x70,  /* [7645] */
    (xdc_Char)0x49,  /* [7646] */
    (xdc_Char)0x64,  /* [7647] */
    (xdc_Char)0x20,  /* [7648] */
    (xdc_Char)0x30,  /* [7649] */
    (xdc_Char)0x78,  /* [7650] */
    (xdc_Char)0x25,  /* [7651] */
    (xdc_Char)0x78,  /* [7652] */
    (xdc_Char)0x29,  /* [7653] */
    (xdc_Char)0x3a,  /* [7654] */
    (xdc_Char)0x20,  /* [7655] */
    (xdc_Char)0x46,  /* [7656] */
    (xdc_Char)0x72,  /* [7657] */
    (xdc_Char)0x65,  /* [7658] */
    (xdc_Char)0x65,  /* [7659] */
    (xdc_Char)0x20,  /* [7660] */
    (xdc_Char)0x42,  /* [7661] */
    (xdc_Char)0x79,  /* [7662] */
    (xdc_Char)0x74,  /* [7663] */
    (xdc_Char)0x65,  /* [7664] */
    (xdc_Char)0x73,  /* [7665] */
    (xdc_Char)0x3d,  /* [7666] */
    (xdc_Char)0x25,  /* [7667] */
    (xdc_Char)0x64,  /* [7668] */
    (xdc_Char)0x0,  /* [7669] */
    (xdc_Char)0x53,  /* [7670] */
    (xdc_Char)0x79,  /* [7671] */
    (xdc_Char)0x6e,  /* [7672] */
    (xdc_Char)0x63,  /* [7673] */
    (xdc_Char)0x20,  /* [7674] */
    (xdc_Char)0x50,  /* [7675] */
    (xdc_Char)0x6f,  /* [7676] */
    (xdc_Char)0x69,  /* [7677] */
    (xdc_Char)0x6e,  /* [7678] */
    (xdc_Char)0x74,  /* [7679] */
    (xdc_Char)0x3a,  /* [7680] */
    (xdc_Char)0x20,  /* [7681] */
    (xdc_Char)0x20,  /* [7682] */
    (xdc_Char)0x53,  /* [7683] */
    (xdc_Char)0x65,  /* [7684] */
    (xdc_Char)0x72,  /* [7685] */
    (xdc_Char)0x69,  /* [7686] */
    (xdc_Char)0x61,  /* [7687] */
    (xdc_Char)0x6c,  /* [7688] */
    (xdc_Char)0x4e,  /* [7689] */
    (xdc_Char)0x75,  /* [7690] */
    (xdc_Char)0x6d,  /* [7691] */
    (xdc_Char)0x62,  /* [7692] */
    (xdc_Char)0x65,  /* [7693] */
    (xdc_Char)0x72,  /* [7694] */
    (xdc_Char)0x3d,  /* [7695] */
    (xdc_Char)0x30,  /* [7696] */
    (xdc_Char)0x78,  /* [7697] */
    (xdc_Char)0x25,  /* [7698] */
    (xdc_Char)0x78,  /* [7699] */
    (xdc_Char)0x2c,  /* [7700] */
    (xdc_Char)0x20,  /* [7701] */
    (xdc_Char)0x43,  /* [7702] */
    (xdc_Char)0x70,  /* [7703] */
    (xdc_Char)0x75,  /* [7704] */
    (xdc_Char)0x54,  /* [7705] */
    (xdc_Char)0x53,  /* [7706] */
    (xdc_Char)0x74,  /* [7707] */
    (xdc_Char)0x61,  /* [7708] */
    (xdc_Char)0x6d,  /* [7709] */
    (xdc_Char)0x70,  /* [7710] */
    (xdc_Char)0x20,  /* [7711] */
    (xdc_Char)0x5b,  /* [7712] */
    (xdc_Char)0x4c,  /* [7713] */
    (xdc_Char)0x53,  /* [7714] */
    (xdc_Char)0x57,  /* [7715] */
    (xdc_Char)0x3d,  /* [7716] */
    (xdc_Char)0x30,  /* [7717] */
    (xdc_Char)0x78,  /* [7718] */
    (xdc_Char)0x25,  /* [7719] */
    (xdc_Char)0x78,  /* [7720] */
    (xdc_Char)0x2c,  /* [7721] */
    (xdc_Char)0x20,  /* [7722] */
    (xdc_Char)0x4d,  /* [7723] */
    (xdc_Char)0x53,  /* [7724] */
    (xdc_Char)0x57,  /* [7725] */
    (xdc_Char)0x3d,  /* [7726] */
    (xdc_Char)0x30,  /* [7727] */
    (xdc_Char)0x78,  /* [7728] */
    (xdc_Char)0x25,  /* [7729] */
    (xdc_Char)0x78,  /* [7730] */
    (xdc_Char)0x5d,  /* [7731] */
    (xdc_Char)0x2c,  /* [7732] */
    (xdc_Char)0x20,  /* [7733] */
    (xdc_Char)0x47,  /* [7734] */
    (xdc_Char)0x6c,  /* [7735] */
    (xdc_Char)0x6f,  /* [7736] */
    (xdc_Char)0x62,  /* [7737] */
    (xdc_Char)0x61,  /* [7738] */
    (xdc_Char)0x6c,  /* [7739] */
    (xdc_Char)0x54,  /* [7740] */
    (xdc_Char)0x53,  /* [7741] */
    (xdc_Char)0x74,  /* [7742] */
    (xdc_Char)0x61,  /* [7743] */
    (xdc_Char)0x6d,  /* [7744] */
    (xdc_Char)0x70,  /* [7745] */
    (xdc_Char)0x20,  /* [7746] */
    (xdc_Char)0x5b,  /* [7747] */
    (xdc_Char)0x4c,  /* [7748] */
    (xdc_Char)0x53,  /* [7749] */
    (xdc_Char)0x57,  /* [7750] */
    (xdc_Char)0x3d,  /* [7751] */
    (xdc_Char)0x30,  /* [7752] */
    (xdc_Char)0x78,  /* [7753] */
    (xdc_Char)0x25,  /* [7754] */
    (xdc_Char)0x78,  /* [7755] */
    (xdc_Char)0x2c,  /* [7756] */
    (xdc_Char)0x20,  /* [7757] */
    (xdc_Char)0x4d,  /* [7758] */
    (xdc_Char)0x53,  /* [7759] */
    (xdc_Char)0x57,  /* [7760] */
    (xdc_Char)0x3d,  /* [7761] */
    (xdc_Char)0x30,  /* [7762] */
    (xdc_Char)0x78,  /* [7763] */
    (xdc_Char)0x25,  /* [7764] */
    (xdc_Char)0x78,  /* [7765] */
    (xdc_Char)0x5d,  /* [7766] */
    (xdc_Char)0x2c,  /* [7767] */
    (xdc_Char)0x20,  /* [7768] */
    (xdc_Char)0x43,  /* [7769] */
    (xdc_Char)0x70,  /* [7770] */
    (xdc_Char)0x75,  /* [7771] */
    (xdc_Char)0x43,  /* [7772] */
    (xdc_Char)0x79,  /* [7773] */
    (xdc_Char)0x63,  /* [7774] */
    (xdc_Char)0x6c,  /* [7775] */
    (xdc_Char)0x65,  /* [7776] */
    (xdc_Char)0x73,  /* [7777] */
    (xdc_Char)0x50,  /* [7778] */
    (xdc_Char)0x65,  /* [7779] */
    (xdc_Char)0x72,  /* [7780] */
    (xdc_Char)0x43,  /* [7781] */
    (xdc_Char)0x70,  /* [7782] */
    (xdc_Char)0x75,  /* [7783] */
    (xdc_Char)0x54,  /* [7784] */
    (xdc_Char)0x69,  /* [7785] */
    (xdc_Char)0x6d,  /* [7786] */
    (xdc_Char)0x65,  /* [7787] */
    (xdc_Char)0x72,  /* [7788] */
    (xdc_Char)0x54,  /* [7789] */
    (xdc_Char)0x69,  /* [7790] */
    (xdc_Char)0x63,  /* [7791] */
    (xdc_Char)0x6b,  /* [7792] */
    (xdc_Char)0x3d,  /* [7793] */
    (xdc_Char)0x25,  /* [7794] */
    (xdc_Char)0x64,  /* [7795] */
    (xdc_Char)0x2c,  /* [7796] */
    (xdc_Char)0x20,  /* [7797] */
    (xdc_Char)0x43,  /* [7798] */
    (xdc_Char)0x70,  /* [7799] */
    (xdc_Char)0x75,  /* [7800] */
    (xdc_Char)0x46,  /* [7801] */
    (xdc_Char)0x72,  /* [7802] */
    (xdc_Char)0x65,  /* [7803] */
    (xdc_Char)0x71,  /* [7804] */
    (xdc_Char)0x20,  /* [7805] */
    (xdc_Char)0x5b,  /* [7806] */
    (xdc_Char)0x4c,  /* [7807] */
    (xdc_Char)0x53,  /* [7808] */
    (xdc_Char)0x57,  /* [7809] */
    (xdc_Char)0x3d,  /* [7810] */
    (xdc_Char)0x30,  /* [7811] */
    (xdc_Char)0x78,  /* [7812] */
    (xdc_Char)0x25,  /* [7813] */
    (xdc_Char)0x78,  /* [7814] */
    (xdc_Char)0x2c,  /* [7815] */
    (xdc_Char)0x20,  /* [7816] */
    (xdc_Char)0x4d,  /* [7817] */
    (xdc_Char)0x53,  /* [7818] */
    (xdc_Char)0x57,  /* [7819] */
    (xdc_Char)0x3d,  /* [7820] */
    (xdc_Char)0x30,  /* [7821] */
    (xdc_Char)0x78,  /* [7822] */
    (xdc_Char)0x25,  /* [7823] */
    (xdc_Char)0x78,  /* [7824] */
    (xdc_Char)0x5d,  /* [7825] */
    (xdc_Char)0x0,  /* [7826] */
    (xdc_Char)0x53,  /* [7827] */
    (xdc_Char)0x79,  /* [7828] */
    (xdc_Char)0x6e,  /* [7829] */
    (xdc_Char)0x63,  /* [7830] */
    (xdc_Char)0x20,  /* [7831] */
    (xdc_Char)0x50,  /* [7832] */
    (xdc_Char)0x6f,  /* [7833] */
    (xdc_Char)0x69,  /* [7834] */
    (xdc_Char)0x6e,  /* [7835] */
    (xdc_Char)0x74,  /* [7836] */
    (xdc_Char)0x20,  /* [7837] */
    (xdc_Char)0x41,  /* [7838] */
    (xdc_Char)0x66,  /* [7839] */
    (xdc_Char)0x74,  /* [7840] */
    (xdc_Char)0x65,  /* [7841] */
    (xdc_Char)0x72,  /* [7842] */
    (xdc_Char)0x20,  /* [7843] */
    (xdc_Char)0x48,  /* [7844] */
    (xdc_Char)0x61,  /* [7845] */
    (xdc_Char)0x6c,  /* [7846] */
    (xdc_Char)0x74,  /* [7847] */
    (xdc_Char)0x3a,  /* [7848] */
    (xdc_Char)0x20,  /* [7849] */
    (xdc_Char)0x20,  /* [7850] */
    (xdc_Char)0x53,  /* [7851] */
    (xdc_Char)0x65,  /* [7852] */
    (xdc_Char)0x72,  /* [7853] */
    (xdc_Char)0x69,  /* [7854] */
    (xdc_Char)0x61,  /* [7855] */
    (xdc_Char)0x6c,  /* [7856] */
    (xdc_Char)0x4e,  /* [7857] */
    (xdc_Char)0x75,  /* [7858] */
    (xdc_Char)0x6d,  /* [7859] */
    (xdc_Char)0x62,  /* [7860] */
    (xdc_Char)0x65,  /* [7861] */
    (xdc_Char)0x72,  /* [7862] */
    (xdc_Char)0x3d,  /* [7863] */
    (xdc_Char)0x30,  /* [7864] */
    (xdc_Char)0x78,  /* [7865] */
    (xdc_Char)0x25,  /* [7866] */
    (xdc_Char)0x78,  /* [7867] */
    (xdc_Char)0x2c,  /* [7868] */
    (xdc_Char)0x20,  /* [7869] */
    (xdc_Char)0x43,  /* [7870] */
    (xdc_Char)0x70,  /* [7871] */
    (xdc_Char)0x75,  /* [7872] */
    (xdc_Char)0x54,  /* [7873] */
    (xdc_Char)0x53,  /* [7874] */
    (xdc_Char)0x74,  /* [7875] */
    (xdc_Char)0x61,  /* [7876] */
    (xdc_Char)0x6d,  /* [7877] */
    (xdc_Char)0x70,  /* [7878] */
    (xdc_Char)0x20,  /* [7879] */
    (xdc_Char)0x5b,  /* [7880] */
    (xdc_Char)0x4c,  /* [7881] */
    (xdc_Char)0x53,  /* [7882] */
    (xdc_Char)0x57,  /* [7883] */
    (xdc_Char)0x3d,  /* [7884] */
    (xdc_Char)0x30,  /* [7885] */
    (xdc_Char)0x78,  /* [7886] */
    (xdc_Char)0x25,  /* [7887] */
    (xdc_Char)0x78,  /* [7888] */
    (xdc_Char)0x2c,  /* [7889] */
    (xdc_Char)0x20,  /* [7890] */
    (xdc_Char)0x4d,  /* [7891] */
    (xdc_Char)0x53,  /* [7892] */
    (xdc_Char)0x57,  /* [7893] */
    (xdc_Char)0x3d,  /* [7894] */
    (xdc_Char)0x30,  /* [7895] */
    (xdc_Char)0x78,  /* [7896] */
    (xdc_Char)0x25,  /* [7897] */
    (xdc_Char)0x78,  /* [7898] */
    (xdc_Char)0x5d,  /* [7899] */
    (xdc_Char)0x2c,  /* [7900] */
    (xdc_Char)0x20,  /* [7901] */
    (xdc_Char)0x47,  /* [7902] */
    (xdc_Char)0x6c,  /* [7903] */
    (xdc_Char)0x6f,  /* [7904] */
    (xdc_Char)0x62,  /* [7905] */
    (xdc_Char)0x61,  /* [7906] */
    (xdc_Char)0x6c,  /* [7907] */
    (xdc_Char)0x54,  /* [7908] */
    (xdc_Char)0x53,  /* [7909] */
    (xdc_Char)0x74,  /* [7910] */
    (xdc_Char)0x61,  /* [7911] */
    (xdc_Char)0x6d,  /* [7912] */
    (xdc_Char)0x70,  /* [7913] */
    (xdc_Char)0x20,  /* [7914] */
    (xdc_Char)0x5b,  /* [7915] */
    (xdc_Char)0x4c,  /* [7916] */
    (xdc_Char)0x53,  /* [7917] */
    (xdc_Char)0x57,  /* [7918] */
    (xdc_Char)0x3d,  /* [7919] */
    (xdc_Char)0x30,  /* [7920] */
    (xdc_Char)0x78,  /* [7921] */
    (xdc_Char)0x25,  /* [7922] */
    (xdc_Char)0x78,  /* [7923] */
    (xdc_Char)0x2c,  /* [7924] */
    (xdc_Char)0x20,  /* [7925] */
    (xdc_Char)0x4d,  /* [7926] */
    (xdc_Char)0x53,  /* [7927] */
    (xdc_Char)0x57,  /* [7928] */
    (xdc_Char)0x3d,  /* [7929] */
    (xdc_Char)0x30,  /* [7930] */
    (xdc_Char)0x78,  /* [7931] */
    (xdc_Char)0x25,  /* [7932] */
    (xdc_Char)0x78,  /* [7933] */
    (xdc_Char)0x5d,  /* [7934] */
    (xdc_Char)0x2c,  /* [7935] */
    (xdc_Char)0x20,  /* [7936] */
    (xdc_Char)0x43,  /* [7937] */
    (xdc_Char)0x70,  /* [7938] */
    (xdc_Char)0x75,  /* [7939] */
    (xdc_Char)0x43,  /* [7940] */
    (xdc_Char)0x79,  /* [7941] */
    (xdc_Char)0x63,  /* [7942] */
    (xdc_Char)0x6c,  /* [7943] */
    (xdc_Char)0x65,  /* [7944] */
    (xdc_Char)0x73,  /* [7945] */
    (xdc_Char)0x50,  /* [7946] */
    (xdc_Char)0x65,  /* [7947] */
    (xdc_Char)0x72,  /* [7948] */
    (xdc_Char)0x43,  /* [7949] */
    (xdc_Char)0x70,  /* [7950] */
    (xdc_Char)0x75,  /* [7951] */
    (xdc_Char)0x54,  /* [7952] */
    (xdc_Char)0x69,  /* [7953] */
    (xdc_Char)0x6d,  /* [7954] */
    (xdc_Char)0x65,  /* [7955] */
    (xdc_Char)0x72,  /* [7956] */
    (xdc_Char)0x54,  /* [7957] */
    (xdc_Char)0x69,  /* [7958] */
    (xdc_Char)0x63,  /* [7959] */
    (xdc_Char)0x6b,  /* [7960] */
    (xdc_Char)0x3d,  /* [7961] */
    (xdc_Char)0x25,  /* [7962] */
    (xdc_Char)0x64,  /* [7963] */
    (xdc_Char)0x2c,  /* [7964] */
    (xdc_Char)0x20,  /* [7965] */
    (xdc_Char)0x43,  /* [7966] */
    (xdc_Char)0x70,  /* [7967] */
    (xdc_Char)0x75,  /* [7968] */
    (xdc_Char)0x46,  /* [7969] */
    (xdc_Char)0x72,  /* [7970] */
    (xdc_Char)0x65,  /* [7971] */
    (xdc_Char)0x71,  /* [7972] */
    (xdc_Char)0x20,  /* [7973] */
    (xdc_Char)0x5b,  /* [7974] */
    (xdc_Char)0x4c,  /* [7975] */
    (xdc_Char)0x53,  /* [7976] */
    (xdc_Char)0x57,  /* [7977] */
    (xdc_Char)0x3d,  /* [7978] */
    (xdc_Char)0x30,  /* [7979] */
    (xdc_Char)0x78,  /* [7980] */
    (xdc_Char)0x25,  /* [7981] */
    (xdc_Char)0x78,  /* [7982] */
    (xdc_Char)0x2c,  /* [7983] */
    (xdc_Char)0x20,  /* [7984] */
    (xdc_Char)0x4d,  /* [7985] */
    (xdc_Char)0x53,  /* [7986] */
    (xdc_Char)0x57,  /* [7987] */
    (xdc_Char)0x3d,  /* [7988] */
    (xdc_Char)0x30,  /* [7989] */
    (xdc_Char)0x78,  /* [7990] */
    (xdc_Char)0x25,  /* [7991] */
    (xdc_Char)0x78,  /* [7992] */
    (xdc_Char)0x5d,  /* [7993] */
    (xdc_Char)0x0,  /* [7994] */
    (xdc_Char)0x53,  /* [7995] */
    (xdc_Char)0x79,  /* [7996] */
    (xdc_Char)0x6e,  /* [7997] */
    (xdc_Char)0x63,  /* [7998] */
    (xdc_Char)0x20,  /* [7999] */
    (xdc_Char)0x50,  /* [8000] */
    (xdc_Char)0x6f,  /* [8001] */
    (xdc_Char)0x69,  /* [8002] */
    (xdc_Char)0x6e,  /* [8003] */
    (xdc_Char)0x74,  /* [8004] */
    (xdc_Char)0x20,  /* [8005] */
    (xdc_Char)0x47,  /* [8006] */
    (xdc_Char)0x6c,  /* [8007] */
    (xdc_Char)0x6f,  /* [8008] */
    (xdc_Char)0x62,  /* [8009] */
    (xdc_Char)0x61,  /* [8010] */
    (xdc_Char)0x6c,  /* [8011] */
    (xdc_Char)0x20,  /* [8012] */
    (xdc_Char)0x54,  /* [8013] */
    (xdc_Char)0x69,  /* [8014] */
    (xdc_Char)0x6d,  /* [8015] */
    (xdc_Char)0x65,  /* [8016] */
    (xdc_Char)0x72,  /* [8017] */
    (xdc_Char)0x20,  /* [8018] */
    (xdc_Char)0x46,  /* [8019] */
    (xdc_Char)0x72,  /* [8020] */
    (xdc_Char)0x65,  /* [8021] */
    (xdc_Char)0x71,  /* [8022] */
    (xdc_Char)0x3a,  /* [8023] */
    (xdc_Char)0x20,  /* [8024] */
    (xdc_Char)0x20,  /* [8025] */
    (xdc_Char)0x53,  /* [8026] */
    (xdc_Char)0x65,  /* [8027] */
    (xdc_Char)0x72,  /* [8028] */
    (xdc_Char)0x69,  /* [8029] */
    (xdc_Char)0x61,  /* [8030] */
    (xdc_Char)0x6c,  /* [8031] */
    (xdc_Char)0x4e,  /* [8032] */
    (xdc_Char)0x75,  /* [8033] */
    (xdc_Char)0x6d,  /* [8034] */
    (xdc_Char)0x62,  /* [8035] */
    (xdc_Char)0x65,  /* [8036] */
    (xdc_Char)0x72,  /* [8037] */
    (xdc_Char)0x3d,  /* [8038] */
    (xdc_Char)0x30,  /* [8039] */
    (xdc_Char)0x78,  /* [8040] */
    (xdc_Char)0x25,  /* [8041] */
    (xdc_Char)0x78,  /* [8042] */
    (xdc_Char)0x2c,  /* [8043] */
    (xdc_Char)0x20,  /* [8044] */
    (xdc_Char)0x43,  /* [8045] */
    (xdc_Char)0x70,  /* [8046] */
    (xdc_Char)0x75,  /* [8047] */
    (xdc_Char)0x43,  /* [8048] */
    (xdc_Char)0x79,  /* [8049] */
    (xdc_Char)0x63,  /* [8050] */
    (xdc_Char)0x6c,  /* [8051] */
    (xdc_Char)0x65,  /* [8052] */
    (xdc_Char)0x73,  /* [8053] */
    (xdc_Char)0x50,  /* [8054] */
    (xdc_Char)0x65,  /* [8055] */
    (xdc_Char)0x72,  /* [8056] */
    (xdc_Char)0x47,  /* [8057] */
    (xdc_Char)0x6c,  /* [8058] */
    (xdc_Char)0x6f,  /* [8059] */
    (xdc_Char)0x62,  /* [8060] */
    (xdc_Char)0x61,  /* [8061] */
    (xdc_Char)0x6c,  /* [8062] */
    (xdc_Char)0x54,  /* [8063] */
    (xdc_Char)0x69,  /* [8064] */
    (xdc_Char)0x6d,  /* [8065] */
    (xdc_Char)0x65,  /* [8066] */
    (xdc_Char)0x72,  /* [8067] */
    (xdc_Char)0x54,  /* [8068] */
    (xdc_Char)0x69,  /* [8069] */
    (xdc_Char)0x63,  /* [8070] */
    (xdc_Char)0x6b,  /* [8071] */
    (xdc_Char)0x3d,  /* [8072] */
    (xdc_Char)0x25,  /* [8073] */
    (xdc_Char)0x64,  /* [8074] */
    (xdc_Char)0x2c,  /* [8075] */
    (xdc_Char)0x20,  /* [8076] */
    (xdc_Char)0x47,  /* [8077] */
    (xdc_Char)0x6c,  /* [8078] */
    (xdc_Char)0x6f,  /* [8079] */
    (xdc_Char)0x62,  /* [8080] */
    (xdc_Char)0x61,  /* [8081] */
    (xdc_Char)0x6c,  /* [8082] */
    (xdc_Char)0x54,  /* [8083] */
    (xdc_Char)0x69,  /* [8084] */
    (xdc_Char)0x6d,  /* [8085] */
    (xdc_Char)0x65,  /* [8086] */
    (xdc_Char)0x72,  /* [8087] */
    (xdc_Char)0x46,  /* [8088] */
    (xdc_Char)0x72,  /* [8089] */
    (xdc_Char)0x65,  /* [8090] */
    (xdc_Char)0x71,  /* [8091] */
    (xdc_Char)0x20,  /* [8092] */
    (xdc_Char)0x5b,  /* [8093] */
    (xdc_Char)0x4c,  /* [8094] */
    (xdc_Char)0x53,  /* [8095] */
    (xdc_Char)0x57,  /* [8096] */
    (xdc_Char)0x3d,  /* [8097] */
    (xdc_Char)0x30,  /* [8098] */
    (xdc_Char)0x78,  /* [8099] */
    (xdc_Char)0x25,  /* [8100] */
    (xdc_Char)0x78,  /* [8101] */
    (xdc_Char)0x2c,  /* [8102] */
    (xdc_Char)0x20,  /* [8103] */
    (xdc_Char)0x4d,  /* [8104] */
    (xdc_Char)0x53,  /* [8105] */
    (xdc_Char)0x57,  /* [8106] */
    (xdc_Char)0x3d,  /* [8107] */
    (xdc_Char)0x30,  /* [8108] */
    (xdc_Char)0x78,  /* [8109] */
    (xdc_Char)0x25,  /* [8110] */
    (xdc_Char)0x78,  /* [8111] */
    (xdc_Char)0x5d,  /* [8112] */
    (xdc_Char)0x0,  /* [8113] */
    (xdc_Char)0x53,  /* [8114] */
    (xdc_Char)0x79,  /* [8115] */
    (xdc_Char)0x6e,  /* [8116] */
    (xdc_Char)0x63,  /* [8117] */
    (xdc_Char)0x20,  /* [8118] */
    (xdc_Char)0x50,  /* [8119] */
    (xdc_Char)0x6f,  /* [8120] */
    (xdc_Char)0x69,  /* [8121] */
    (xdc_Char)0x6e,  /* [8122] */
    (xdc_Char)0x74,  /* [8123] */
    (xdc_Char)0x20,  /* [8124] */
    (xdc_Char)0x55,  /* [8125] */
    (xdc_Char)0x73,  /* [8126] */
    (xdc_Char)0x65,  /* [8127] */
    (xdc_Char)0x72,  /* [8128] */
    (xdc_Char)0x20,  /* [8129] */
    (xdc_Char)0x44,  /* [8130] */
    (xdc_Char)0x61,  /* [8131] */
    (xdc_Char)0x74,  /* [8132] */
    (xdc_Char)0x61,  /* [8133] */
    (xdc_Char)0x3a,  /* [8134] */
    (xdc_Char)0x20,  /* [8135] */
    (xdc_Char)0x53,  /* [8136] */
    (xdc_Char)0x65,  /* [8137] */
    (xdc_Char)0x72,  /* [8138] */
    (xdc_Char)0x69,  /* [8139] */
    (xdc_Char)0x61,  /* [8140] */
    (xdc_Char)0x6c,  /* [8141] */
    (xdc_Char)0x4e,  /* [8142] */
    (xdc_Char)0x75,  /* [8143] */
    (xdc_Char)0x6d,  /* [8144] */
    (xdc_Char)0x62,  /* [8145] */
    (xdc_Char)0x65,  /* [8146] */
    (xdc_Char)0x72,  /* [8147] */
    (xdc_Char)0x3d,  /* [8148] */
    (xdc_Char)0x30,  /* [8149] */
    (xdc_Char)0x78,  /* [8150] */
    (xdc_Char)0x25,  /* [8151] */
    (xdc_Char)0x78,  /* [8152] */
    (xdc_Char)0x2c,  /* [8153] */
    (xdc_Char)0x20,  /* [8154] */
    (xdc_Char)0x25,  /* [8155] */
    (xdc_Char)0x24,  /* [8156] */
    (xdc_Char)0x53,  /* [8157] */
    (xdc_Char)0x0,  /* [8158] */
    (xdc_Char)0x4c,  /* [8159] */
    (xdc_Char)0x53,  /* [8160] */
    (xdc_Char)0x5f,  /* [8161] */
    (xdc_Char)0x63,  /* [8162] */
    (xdc_Char)0x70,  /* [8163] */
    (xdc_Char)0x75,  /* [8164] */
    (xdc_Char)0x4c,  /* [8165] */
    (xdc_Char)0x6f,  /* [8166] */
    (xdc_Char)0x61,  /* [8167] */
    (xdc_Char)0x64,  /* [8168] */
    (xdc_Char)0x3a,  /* [8169] */
    (xdc_Char)0x20,  /* [8170] */
    (xdc_Char)0x25,  /* [8171] */
    (xdc_Char)0x64,  /* [8172] */
    (xdc_Char)0x25,  /* [8173] */
    (xdc_Char)0x25,  /* [8174] */
    (xdc_Char)0x0,  /* [8175] */
    (xdc_Char)0x4c,  /* [8176] */
    (xdc_Char)0x53,  /* [8177] */
    (xdc_Char)0x5f,  /* [8178] */
    (xdc_Char)0x68,  /* [8179] */
    (xdc_Char)0x77,  /* [8180] */
    (xdc_Char)0x69,  /* [8181] */
    (xdc_Char)0x4c,  /* [8182] */
    (xdc_Char)0x6f,  /* [8183] */
    (xdc_Char)0x61,  /* [8184] */
    (xdc_Char)0x64,  /* [8185] */
    (xdc_Char)0x3a,  /* [8186] */
    (xdc_Char)0x20,  /* [8187] */
    (xdc_Char)0x25,  /* [8188] */
    (xdc_Char)0x64,  /* [8189] */
    (xdc_Char)0x2c,  /* [8190] */
    (xdc_Char)0x25,  /* [8191] */
    (xdc_Char)0x64,  /* [8192] */
    (xdc_Char)0x0,  /* [8193] */
    (xdc_Char)0x4c,  /* [8194] */
    (xdc_Char)0x53,  /* [8195] */
    (xdc_Char)0x5f,  /* [8196] */
    (xdc_Char)0x73,  /* [8197] */
    (xdc_Char)0x77,  /* [8198] */
    (xdc_Char)0x69,  /* [8199] */
    (xdc_Char)0x4c,  /* [8200] */
    (xdc_Char)0x6f,  /* [8201] */
    (xdc_Char)0x61,  /* [8202] */
    (xdc_Char)0x64,  /* [8203] */
    (xdc_Char)0x3a,  /* [8204] */
    (xdc_Char)0x20,  /* [8205] */
    (xdc_Char)0x25,  /* [8206] */
    (xdc_Char)0x64,  /* [8207] */
    (xdc_Char)0x2c,  /* [8208] */
    (xdc_Char)0x25,  /* [8209] */
    (xdc_Char)0x64,  /* [8210] */
    (xdc_Char)0x0,  /* [8211] */
    (xdc_Char)0x4c,  /* [8212] */
    (xdc_Char)0x53,  /* [8213] */
    (xdc_Char)0x5f,  /* [8214] */
    (xdc_Char)0x74,  /* [8215] */
    (xdc_Char)0x61,  /* [8216] */
    (xdc_Char)0x73,  /* [8217] */
    (xdc_Char)0x6b,  /* [8218] */
    (xdc_Char)0x4c,  /* [8219] */
    (xdc_Char)0x6f,  /* [8220] */
    (xdc_Char)0x61,  /* [8221] */
    (xdc_Char)0x64,  /* [8222] */
    (xdc_Char)0x3a,  /* [8223] */
    (xdc_Char)0x20,  /* [8224] */
    (xdc_Char)0x30,  /* [8225] */
    (xdc_Char)0x78,  /* [8226] */
    (xdc_Char)0x25,  /* [8227] */
    (xdc_Char)0x78,  /* [8228] */
    (xdc_Char)0x2c,  /* [8229] */
    (xdc_Char)0x25,  /* [8230] */
    (xdc_Char)0x64,  /* [8231] */
    (xdc_Char)0x2c,  /* [8232] */
    (xdc_Char)0x25,  /* [8233] */
    (xdc_Char)0x64,  /* [8234] */
    (xdc_Char)0x2c,  /* [8235] */
    (xdc_Char)0x30,  /* [8236] */
    (xdc_Char)0x78,  /* [8237] */
    (xdc_Char)0x25,  /* [8238] */
    (xdc_Char)0x78,  /* [8239] */
    (xdc_Char)0x0,  /* [8240] */
    (xdc_Char)0x78,  /* [8241] */
    (xdc_Char)0x64,  /* [8242] */
    (xdc_Char)0x63,  /* [8243] */
    (xdc_Char)0x2e,  /* [8244] */
    (xdc_Char)0x0,  /* [8245] */
    (xdc_Char)0x72,  /* [8246] */
    (xdc_Char)0x75,  /* [8247] */
    (xdc_Char)0x6e,  /* [8248] */
    (xdc_Char)0x74,  /* [8249] */
    (xdc_Char)0x69,  /* [8250] */
    (xdc_Char)0x6d,  /* [8251] */
    (xdc_Char)0x65,  /* [8252] */
    (xdc_Char)0x2e,  /* [8253] */
    (xdc_Char)0x0,  /* [8254] */
    (xdc_Char)0x41,  /* [8255] */
    (xdc_Char)0x73,  /* [8256] */
    (xdc_Char)0x73,  /* [8257] */
    (xdc_Char)0x65,  /* [8258] */
    (xdc_Char)0x72,  /* [8259] */
    (xdc_Char)0x74,  /* [8260] */
    (xdc_Char)0x0,  /* [8261] */
    (xdc_Char)0x43,  /* [8262] */
    (xdc_Char)0x6f,  /* [8263] */
    (xdc_Char)0x72,  /* [8264] */
    (xdc_Char)0x65,  /* [8265] */
    (xdc_Char)0x0,  /* [8266] */
    (xdc_Char)0x44,  /* [8267] */
    (xdc_Char)0x65,  /* [8268] */
    (xdc_Char)0x66,  /* [8269] */
    (xdc_Char)0x61,  /* [8270] */
    (xdc_Char)0x75,  /* [8271] */
    (xdc_Char)0x6c,  /* [8272] */
    (xdc_Char)0x74,  /* [8273] */
    (xdc_Char)0x73,  /* [8274] */
    (xdc_Char)0x0,  /* [8275] */
    (xdc_Char)0x44,  /* [8276] */
    (xdc_Char)0x69,  /* [8277] */
    (xdc_Char)0x61,  /* [8278] */
    (xdc_Char)0x67,  /* [8279] */
    (xdc_Char)0x73,  /* [8280] */
    (xdc_Char)0x0,  /* [8281] */
    (xdc_Char)0x45,  /* [8282] */
    (xdc_Char)0x72,  /* [8283] */
    (xdc_Char)0x72,  /* [8284] */
    (xdc_Char)0x6f,  /* [8285] */
    (xdc_Char)0x72,  /* [8286] */
    (xdc_Char)0x0,  /* [8287] */
    (xdc_Char)0x47,  /* [8288] */
    (xdc_Char)0x61,  /* [8289] */
    (xdc_Char)0x74,  /* [8290] */
    (xdc_Char)0x65,  /* [8291] */
    (xdc_Char)0x0,  /* [8292] */
    (xdc_Char)0x4c,  /* [8293] */
    (xdc_Char)0x6f,  /* [8294] */
    (xdc_Char)0x67,  /* [8295] */
    (xdc_Char)0x0,  /* [8296] */
    (xdc_Char)0x4d,  /* [8297] */
    (xdc_Char)0x61,  /* [8298] */
    (xdc_Char)0x69,  /* [8299] */
    (xdc_Char)0x6e,  /* [8300] */
    (xdc_Char)0x0,  /* [8301] */
    (xdc_Char)0x4d,  /* [8302] */
    (xdc_Char)0x65,  /* [8303] */
    (xdc_Char)0x6d,  /* [8304] */
    (xdc_Char)0x6f,  /* [8305] */
    (xdc_Char)0x72,  /* [8306] */
    (xdc_Char)0x79,  /* [8307] */
    (xdc_Char)0x0,  /* [8308] */
    (xdc_Char)0x52,  /* [8309] */
    (xdc_Char)0x65,  /* [8310] */
    (xdc_Char)0x67,  /* [8311] */
    (xdc_Char)0x69,  /* [8312] */
    (xdc_Char)0x73,  /* [8313] */
    (xdc_Char)0x74,  /* [8314] */
    (xdc_Char)0x72,  /* [8315] */
    (xdc_Char)0x79,  /* [8316] */
    (xdc_Char)0x0,  /* [8317] */
    (xdc_Char)0x53,  /* [8318] */
    (xdc_Char)0x74,  /* [8319] */
    (xdc_Char)0x61,  /* [8320] */
    (xdc_Char)0x72,  /* [8321] */
    (xdc_Char)0x74,  /* [8322] */
    (xdc_Char)0x75,  /* [8323] */
    (xdc_Char)0x70,  /* [8324] */
    (xdc_Char)0x0,  /* [8325] */
    (xdc_Char)0x53,  /* [8326] */
    (xdc_Char)0x79,  /* [8327] */
    (xdc_Char)0x73,  /* [8328] */
    (xdc_Char)0x74,  /* [8329] */
    (xdc_Char)0x65,  /* [8330] */
    (xdc_Char)0x6d,  /* [8331] */
    (xdc_Char)0x0,  /* [8332] */
    (xdc_Char)0x53,  /* [8333] */
    (xdc_Char)0x79,  /* [8334] */
    (xdc_Char)0x73,  /* [8335] */
    (xdc_Char)0x4d,  /* [8336] */
    (xdc_Char)0x69,  /* [8337] */
    (xdc_Char)0x6e,  /* [8338] */
    (xdc_Char)0x0,  /* [8339] */
    (xdc_Char)0x54,  /* [8340] */
    (xdc_Char)0x65,  /* [8341] */
    (xdc_Char)0x78,  /* [8342] */
    (xdc_Char)0x74,  /* [8343] */
    (xdc_Char)0x0,  /* [8344] */
    (xdc_Char)0x54,  /* [8345] */
    (xdc_Char)0x69,  /* [8346] */
    (xdc_Char)0x6d,  /* [8347] */
    (xdc_Char)0x65,  /* [8348] */
    (xdc_Char)0x73,  /* [8349] */
    (xdc_Char)0x74,  /* [8350] */
    (xdc_Char)0x61,  /* [8351] */
    (xdc_Char)0x6d,  /* [8352] */
    (xdc_Char)0x70,  /* [8353] */
    (xdc_Char)0x0,  /* [8354] */
    (xdc_Char)0x54,  /* [8355] */
    (xdc_Char)0x69,  /* [8356] */
    (xdc_Char)0x6d,  /* [8357] */
    (xdc_Char)0x65,  /* [8358] */
    (xdc_Char)0x73,  /* [8359] */
    (xdc_Char)0x74,  /* [8360] */
    (xdc_Char)0x61,  /* [8361] */
    (xdc_Char)0x6d,  /* [8362] */
    (xdc_Char)0x70,  /* [8363] */
    (xdc_Char)0x4e,  /* [8364] */
    (xdc_Char)0x75,  /* [8365] */
    (xdc_Char)0x6c,  /* [8366] */
    (xdc_Char)0x6c,  /* [8367] */
    (xdc_Char)0x0,  /* [8368] */
    (xdc_Char)0x54,  /* [8369] */
    (xdc_Char)0x79,  /* [8370] */
    (xdc_Char)0x70,  /* [8371] */
    (xdc_Char)0x65,  /* [8372] */
    (xdc_Char)0x73,  /* [8373] */
    (xdc_Char)0x0,  /* [8374] */
    (xdc_Char)0x74,  /* [8375] */
    (xdc_Char)0x69,  /* [8376] */
    (xdc_Char)0x2e,  /* [8377] */
    (xdc_Char)0x0,  /* [8378] */
    (xdc_Char)0x63,  /* [8379] */
    (xdc_Char)0x61,  /* [8380] */
    (xdc_Char)0x74,  /* [8381] */
    (xdc_Char)0x61,  /* [8382] */
    (xdc_Char)0x6c,  /* [8383] */
    (xdc_Char)0x6f,  /* [8384] */
    (xdc_Char)0x67,  /* [8385] */
    (xdc_Char)0x2e,  /* [8386] */
    (xdc_Char)0x0,  /* [8387] */
    (xdc_Char)0x61,  /* [8388] */
    (xdc_Char)0x72,  /* [8389] */
    (xdc_Char)0x6d,  /* [8390] */
    (xdc_Char)0x2e,  /* [8391] */
    (xdc_Char)0x0,  /* [8392] */
    (xdc_Char)0x63,  /* [8393] */
    (xdc_Char)0x6f,  /* [8394] */
    (xdc_Char)0x72,  /* [8395] */
    (xdc_Char)0x74,  /* [8396] */
    (xdc_Char)0x65,  /* [8397] */
    (xdc_Char)0x78,  /* [8398] */
    (xdc_Char)0x6d,  /* [8399] */
    (xdc_Char)0x34,  /* [8400] */
    (xdc_Char)0x2e,  /* [8401] */
    (xdc_Char)0x0,  /* [8402] */
    (xdc_Char)0x74,  /* [8403] */
    (xdc_Char)0x69,  /* [8404] */
    (xdc_Char)0x76,  /* [8405] */
    (xdc_Char)0x61,  /* [8406] */
    (xdc_Char)0x2e,  /* [8407] */
    (xdc_Char)0x0,  /* [8408] */
    (xdc_Char)0x63,  /* [8409] */
    (xdc_Char)0x65,  /* [8410] */
    (xdc_Char)0x2e,  /* [8411] */
    (xdc_Char)0x0,  /* [8412] */
    (xdc_Char)0x42,  /* [8413] */
    (xdc_Char)0x6f,  /* [8414] */
    (xdc_Char)0x6f,  /* [8415] */
    (xdc_Char)0x74,  /* [8416] */
    (xdc_Char)0x0,  /* [8417] */
    (xdc_Char)0x73,  /* [8418] */
    (xdc_Char)0x79,  /* [8419] */
    (xdc_Char)0x73,  /* [8420] */
    (xdc_Char)0x62,  /* [8421] */
    (xdc_Char)0x69,  /* [8422] */
    (xdc_Char)0x6f,  /* [8423] */
    (xdc_Char)0x73,  /* [8424] */
    (xdc_Char)0x2e,  /* [8425] */
    (xdc_Char)0x0,  /* [8426] */
    (xdc_Char)0x42,  /* [8427] */
    (xdc_Char)0x49,  /* [8428] */
    (xdc_Char)0x4f,  /* [8429] */
    (xdc_Char)0x53,  /* [8430] */
    (xdc_Char)0x0,  /* [8431] */
    (xdc_Char)0x68,  /* [8432] */
    (xdc_Char)0x61,  /* [8433] */
    (xdc_Char)0x6c,  /* [8434] */
    (xdc_Char)0x2e,  /* [8435] */
    (xdc_Char)0x0,  /* [8436] */
    (xdc_Char)0x48,  /* [8437] */
    (xdc_Char)0x77,  /* [8438] */
    (xdc_Char)0x69,  /* [8439] */
    (xdc_Char)0x0,  /* [8440] */
    (xdc_Char)0x54,  /* [8441] */
    (xdc_Char)0x69,  /* [8442] */
    (xdc_Char)0x6d,  /* [8443] */
    (xdc_Char)0x65,  /* [8444] */
    (xdc_Char)0x72,  /* [8445] */
    (xdc_Char)0x0,  /* [8446] */
    (xdc_Char)0x6b,  /* [8447] */
    (xdc_Char)0x6e,  /* [8448] */
    (xdc_Char)0x6c,  /* [8449] */
    (xdc_Char)0x2e,  /* [8450] */
    (xdc_Char)0x0,  /* [8451] */
    (xdc_Char)0x43,  /* [8452] */
    (xdc_Char)0x6c,  /* [8453] */
    (xdc_Char)0x6f,  /* [8454] */
    (xdc_Char)0x63,  /* [8455] */
    (xdc_Char)0x6b,  /* [8456] */
    (xdc_Char)0x0,  /* [8457] */
    (xdc_Char)0x49,  /* [8458] */
    (xdc_Char)0x64,  /* [8459] */
    (xdc_Char)0x6c,  /* [8460] */
    (xdc_Char)0x65,  /* [8461] */
    (xdc_Char)0x0,  /* [8462] */
    (xdc_Char)0x49,  /* [8463] */
    (xdc_Char)0x6e,  /* [8464] */
    (xdc_Char)0x74,  /* [8465] */
    (xdc_Char)0x72,  /* [8466] */
    (xdc_Char)0x69,  /* [8467] */
    (xdc_Char)0x6e,  /* [8468] */
    (xdc_Char)0x73,  /* [8469] */
    (xdc_Char)0x69,  /* [8470] */
    (xdc_Char)0x63,  /* [8471] */
    (xdc_Char)0x73,  /* [8472] */
    (xdc_Char)0x0,  /* [8473] */
    (xdc_Char)0x45,  /* [8474] */
    (xdc_Char)0x76,  /* [8475] */
    (xdc_Char)0x65,  /* [8476] */
    (xdc_Char)0x6e,  /* [8477] */
    (xdc_Char)0x74,  /* [8478] */
    (xdc_Char)0x0,  /* [8479] */
    (xdc_Char)0x51,  /* [8480] */
    (xdc_Char)0x75,  /* [8481] */
    (xdc_Char)0x65,  /* [8482] */
    (xdc_Char)0x75,  /* [8483] */
    (xdc_Char)0x65,  /* [8484] */
    (xdc_Char)0x0,  /* [8485] */
    (xdc_Char)0x53,  /* [8486] */
    (xdc_Char)0x65,  /* [8487] */
    (xdc_Char)0x6d,  /* [8488] */
    (xdc_Char)0x61,  /* [8489] */
    (xdc_Char)0x70,  /* [8490] */
    (xdc_Char)0x68,  /* [8491] */
    (xdc_Char)0x6f,  /* [8492] */
    (xdc_Char)0x72,  /* [8493] */
    (xdc_Char)0x65,  /* [8494] */
    (xdc_Char)0x0,  /* [8495] */
    (xdc_Char)0x53,  /* [8496] */
    (xdc_Char)0x77,  /* [8497] */
    (xdc_Char)0x69,  /* [8498] */
    (xdc_Char)0x0,  /* [8499] */
    (xdc_Char)0x54,  /* [8500] */
    (xdc_Char)0x61,  /* [8501] */
    (xdc_Char)0x73,  /* [8502] */
    (xdc_Char)0x6b,  /* [8503] */
    (xdc_Char)0x0,  /* [8504] */
    (xdc_Char)0x66,  /* [8505] */
    (xdc_Char)0x61,  /* [8506] */
    (xdc_Char)0x6d,  /* [8507] */
    (xdc_Char)0x69,  /* [8508] */
    (xdc_Char)0x6c,  /* [8509] */
    (xdc_Char)0x79,  /* [8510] */
    (xdc_Char)0x2e,  /* [8511] */
    (xdc_Char)0x0,  /* [8512] */
    (xdc_Char)0x6d,  /* [8513] */
    (xdc_Char)0x33,  /* [8514] */
    (xdc_Char)0x2e,  /* [8515] */
    (xdc_Char)0x0,  /* [8516] */
    (xdc_Char)0x49,  /* [8517] */
    (xdc_Char)0x6e,  /* [8518] */
    (xdc_Char)0x74,  /* [8519] */
    (xdc_Char)0x72,  /* [8520] */
    (xdc_Char)0x69,  /* [8521] */
    (xdc_Char)0x6e,  /* [8522] */
    (xdc_Char)0x73,  /* [8523] */
    (xdc_Char)0x69,  /* [8524] */
    (xdc_Char)0x63,  /* [8525] */
    (xdc_Char)0x73,  /* [8526] */
    (xdc_Char)0x53,  /* [8527] */
    (xdc_Char)0x75,  /* [8528] */
    (xdc_Char)0x70,  /* [8529] */
    (xdc_Char)0x70,  /* [8530] */
    (xdc_Char)0x6f,  /* [8531] */
    (xdc_Char)0x72,  /* [8532] */
    (xdc_Char)0x74,  /* [8533] */
    (xdc_Char)0x0,  /* [8534] */
    (xdc_Char)0x54,  /* [8535] */
    (xdc_Char)0x61,  /* [8536] */
    (xdc_Char)0x73,  /* [8537] */
    (xdc_Char)0x6b,  /* [8538] */
    (xdc_Char)0x53,  /* [8539] */
    (xdc_Char)0x75,  /* [8540] */
    (xdc_Char)0x70,  /* [8541] */
    (xdc_Char)0x70,  /* [8542] */
    (xdc_Char)0x6f,  /* [8543] */
    (xdc_Char)0x72,  /* [8544] */
    (xdc_Char)0x74,  /* [8545] */
    (xdc_Char)0x0,  /* [8546] */
    (xdc_Char)0x6c,  /* [8547] */
    (xdc_Char)0x6d,  /* [8548] */
    (xdc_Char)0x34,  /* [8549] */
    (xdc_Char)0x2e,  /* [8550] */
    (xdc_Char)0x0,  /* [8551] */
    (xdc_Char)0x54,  /* [8552] */
    (xdc_Char)0x69,  /* [8553] */
    (xdc_Char)0x6d,  /* [8554] */
    (xdc_Char)0x65,  /* [8555] */
    (xdc_Char)0x73,  /* [8556] */
    (xdc_Char)0x74,  /* [8557] */
    (xdc_Char)0x61,  /* [8558] */
    (xdc_Char)0x6d,  /* [8559] */
    (xdc_Char)0x70,  /* [8560] */
    (xdc_Char)0x50,  /* [8561] */
    (xdc_Char)0x72,  /* [8562] */
    (xdc_Char)0x6f,  /* [8563] */
    (xdc_Char)0x76,  /* [8564] */
    (xdc_Char)0x69,  /* [8565] */
    (xdc_Char)0x64,  /* [8566] */
    (xdc_Char)0x65,  /* [8567] */
    (xdc_Char)0x72,  /* [8568] */
    (xdc_Char)0x0,  /* [8569] */
    (xdc_Char)0x68,  /* [8570] */
    (xdc_Char)0x65,  /* [8571] */
    (xdc_Char)0x61,  /* [8572] */
    (xdc_Char)0x70,  /* [8573] */
    (xdc_Char)0x73,  /* [8574] */
    (xdc_Char)0x2e,  /* [8575] */
    (xdc_Char)0x0,  /* [8576] */
    (xdc_Char)0x48,  /* [8577] */
    (xdc_Char)0x65,  /* [8578] */
    (xdc_Char)0x61,  /* [8579] */
    (xdc_Char)0x70,  /* [8580] */
    (xdc_Char)0x4d,  /* [8581] */
    (xdc_Char)0x65,  /* [8582] */
    (xdc_Char)0x6d,  /* [8583] */
    (xdc_Char)0x0,  /* [8584] */
    (xdc_Char)0x75,  /* [8585] */
    (xdc_Char)0x69,  /* [8586] */
    (xdc_Char)0x61,  /* [8587] */
    (xdc_Char)0x2e,  /* [8588] */
    (xdc_Char)0x0,  /* [8589] */
    (xdc_Char)0x65,  /* [8590] */
    (xdc_Char)0x76,  /* [8591] */
    (xdc_Char)0x65,  /* [8592] */
    (xdc_Char)0x6e,  /* [8593] */
    (xdc_Char)0x74,  /* [8594] */
    (xdc_Char)0x73,  /* [8595] */
    (xdc_Char)0x2e,  /* [8596] */
    (xdc_Char)0x0,  /* [8597] */
    (xdc_Char)0x44,  /* [8598] */
    (xdc_Char)0x76,  /* [8599] */
    (xdc_Char)0x74,  /* [8600] */
    (xdc_Char)0x54,  /* [8601] */
    (xdc_Char)0x79,  /* [8602] */
    (xdc_Char)0x70,  /* [8603] */
    (xdc_Char)0x65,  /* [8604] */
    (xdc_Char)0x73,  /* [8605] */
    (xdc_Char)0x0,  /* [8606] */
    (xdc_Char)0x55,  /* [8607] */
    (xdc_Char)0x49,  /* [8608] */
    (xdc_Char)0x41,  /* [8609] */
    (xdc_Char)0x42,  /* [8610] */
    (xdc_Char)0x65,  /* [8611] */
    (xdc_Char)0x6e,  /* [8612] */
    (xdc_Char)0x63,  /* [8613] */
    (xdc_Char)0x68,  /* [8614] */
    (xdc_Char)0x6d,  /* [8615] */
    (xdc_Char)0x61,  /* [8616] */
    (xdc_Char)0x72,  /* [8617] */
    (xdc_Char)0x6b,  /* [8618] */
    (xdc_Char)0x0,  /* [8619] */
    (xdc_Char)0x55,  /* [8620] */
    (xdc_Char)0x49,  /* [8621] */
    (xdc_Char)0x41,  /* [8622] */
    (xdc_Char)0x45,  /* [8623] */
    (xdc_Char)0x72,  /* [8624] */
    (xdc_Char)0x72,  /* [8625] */
    (xdc_Char)0x0,  /* [8626] */
    (xdc_Char)0x55,  /* [8627] */
    (xdc_Char)0x49,  /* [8628] */
    (xdc_Char)0x41,  /* [8629] */
    (xdc_Char)0x45,  /* [8630] */
    (xdc_Char)0x76,  /* [8631] */
    (xdc_Char)0x74,  /* [8632] */
    (xdc_Char)0x0,  /* [8633] */
    (xdc_Char)0x55,  /* [8634] */
    (xdc_Char)0x49,  /* [8635] */
    (xdc_Char)0x41,  /* [8636] */
    (xdc_Char)0x52,  /* [8637] */
    (xdc_Char)0x6f,  /* [8638] */
    (xdc_Char)0x75,  /* [8639] */
    (xdc_Char)0x6e,  /* [8640] */
    (xdc_Char)0x64,  /* [8641] */
    (xdc_Char)0x74,  /* [8642] */
    (xdc_Char)0x72,  /* [8643] */
    (xdc_Char)0x69,  /* [8644] */
    (xdc_Char)0x70,  /* [8645] */
    (xdc_Char)0x0,  /* [8646] */
    (xdc_Char)0x55,  /* [8647] */
    (xdc_Char)0x49,  /* [8648] */
    (xdc_Char)0x41,  /* [8649] */
    (xdc_Char)0x53,  /* [8650] */
    (xdc_Char)0x74,  /* [8651] */
    (xdc_Char)0x61,  /* [8652] */
    (xdc_Char)0x74,  /* [8653] */
    (xdc_Char)0x69,  /* [8654] */
    (xdc_Char)0x73,  /* [8655] */
    (xdc_Char)0x74,  /* [8656] */
    (xdc_Char)0x69,  /* [8657] */
    (xdc_Char)0x63,  /* [8658] */
    (xdc_Char)0x0,  /* [8659] */
    (xdc_Char)0x55,  /* [8660] */
    (xdc_Char)0x49,  /* [8661] */
    (xdc_Char)0x41,  /* [8662] */
    (xdc_Char)0x53,  /* [8663] */
    (xdc_Char)0x79,  /* [8664] */
    (xdc_Char)0x6e,  /* [8665] */
    (xdc_Char)0x63,  /* [8666] */
    (xdc_Char)0x0,  /* [8667] */
    (xdc_Char)0x4c,  /* [8668] */
    (xdc_Char)0x6f,  /* [8669] */
    (xdc_Char)0x67,  /* [8670] */
    (xdc_Char)0x53,  /* [8671] */
    (xdc_Char)0x79,  /* [8672] */
    (xdc_Char)0x6e,  /* [8673] */
    (xdc_Char)0x63,  /* [8674] */
    (xdc_Char)0x0,  /* [8675] */
    (xdc_Char)0x4c,  /* [8676] */
    (xdc_Char)0x6f,  /* [8677] */
    (xdc_Char)0x67,  /* [8678] */
    (xdc_Char)0x67,  /* [8679] */
    (xdc_Char)0x65,  /* [8680] */
    (xdc_Char)0x72,  /* [8681] */
    (xdc_Char)0x53,  /* [8682] */
    (xdc_Char)0x74,  /* [8683] */
    (xdc_Char)0x6f,  /* [8684] */
    (xdc_Char)0x70,  /* [8685] */
    (xdc_Char)0x4d,  /* [8686] */
    (xdc_Char)0x6f,  /* [8687] */
    (xdc_Char)0x64,  /* [8688] */
    (xdc_Char)0x65,  /* [8689] */
    (xdc_Char)0x0,  /* [8690] */
    (xdc_Char)0x51,  /* [8691] */
    (xdc_Char)0x75,  /* [8692] */
    (xdc_Char)0x65,  /* [8693] */
    (xdc_Char)0x75,  /* [8694] */
    (xdc_Char)0x65,  /* [8695] */
    (xdc_Char)0x44,  /* [8696] */
    (xdc_Char)0x65,  /* [8697] */
    (xdc_Char)0x73,  /* [8698] */
    (xdc_Char)0x63,  /* [8699] */
    (xdc_Char)0x72,  /* [8700] */
    (xdc_Char)0x69,  /* [8701] */
    (xdc_Char)0x70,  /* [8702] */
    (xdc_Char)0x74,  /* [8703] */
    (xdc_Char)0x6f,  /* [8704] */
    (xdc_Char)0x72,  /* [8705] */
    (xdc_Char)0x0,  /* [8706] */
    (xdc_Char)0x55,  /* [8707] */
    (xdc_Char)0x49,  /* [8708] */
    (xdc_Char)0x41,  /* [8709] */
    (xdc_Char)0x4d,  /* [8710] */
    (xdc_Char)0x65,  /* [8711] */
    (xdc_Char)0x74,  /* [8712] */
    (xdc_Char)0x61,  /* [8713] */
    (xdc_Char)0x44,  /* [8714] */
    (xdc_Char)0x61,  /* [8715] */
    (xdc_Char)0x74,  /* [8716] */
    (xdc_Char)0x61,  /* [8717] */
    (xdc_Char)0x0,  /* [8718] */
    (xdc_Char)0x67,  /* [8719] */
    (xdc_Char)0x61,  /* [8720] */
    (xdc_Char)0x74,  /* [8721] */
    (xdc_Char)0x65,  /* [8722] */
    (xdc_Char)0x73,  /* [8723] */
    (xdc_Char)0x2e,  /* [8724] */
    (xdc_Char)0x0,  /* [8725] */
    (xdc_Char)0x47,  /* [8726] */
    (xdc_Char)0x61,  /* [8727] */
    (xdc_Char)0x74,  /* [8728] */
    (xdc_Char)0x65,  /* [8729] */
    (xdc_Char)0x48,  /* [8730] */
    (xdc_Char)0x77,  /* [8731] */
    (xdc_Char)0x69,  /* [8732] */
    (xdc_Char)0x0,  /* [8733] */
    (xdc_Char)0x47,  /* [8734] */
    (xdc_Char)0x61,  /* [8735] */
    (xdc_Char)0x74,  /* [8736] */
    (xdc_Char)0x65,  /* [8737] */
    (xdc_Char)0x4d,  /* [8738] */
    (xdc_Char)0x75,  /* [8739] */
    (xdc_Char)0x74,  /* [8740] */
    (xdc_Char)0x65,  /* [8741] */
    (xdc_Char)0x78,  /* [8742] */
    (xdc_Char)0x0,  /* [8743] */
    (xdc_Char)0x75,  /* [8744] */
    (xdc_Char)0x74,  /* [8745] */
    (xdc_Char)0x69,  /* [8746] */
    (xdc_Char)0x6c,  /* [8747] */
    (xdc_Char)0x73,  /* [8748] */
    (xdc_Char)0x2e,  /* [8749] */
    (xdc_Char)0x0,  /* [8750] */
    (xdc_Char)0x4c,  /* [8751] */
    (xdc_Char)0x6f,  /* [8752] */
    (xdc_Char)0x61,  /* [8753] */
    (xdc_Char)0x64,  /* [8754] */
    (xdc_Char)0x0,  /* [8755] */
    (xdc_Char)0x63,  /* [8756] */
    (xdc_Char)0x6c,  /* [8757] */
    (xdc_Char)0x6f,  /* [8758] */
    (xdc_Char)0x63,  /* [8759] */
    (xdc_Char)0x6b,  /* [8760] */
    (xdc_Char)0x30,  /* [8761] */
    (xdc_Char)0x0,  /* [8762] */
    (xdc_Char)0x74,  /* [8763] */
    (xdc_Char)0x61,  /* [8764] */
    (xdc_Char)0x73,  /* [8765] */
    (xdc_Char)0x6b,  /* [8766] */
    (xdc_Char)0x30,  /* [8767] */
    (xdc_Char)0x0,  /* [8768] */
    (xdc_Char)0x74,  /* [8769] */
    (xdc_Char)0x61,  /* [8770] */
    (xdc_Char)0x73,  /* [8771] */
    (xdc_Char)0x6b,  /* [8772] */
    (xdc_Char)0x31,  /* [8773] */
    (xdc_Char)0x0,  /* [8774] */
    (xdc_Char)0x6d,  /* [8775] */
    (xdc_Char)0x61,  /* [8776] */
    (xdc_Char)0x73,  /* [8777] */
    (xdc_Char)0x74,  /* [8778] */
    (xdc_Char)0x65,  /* [8779] */
    (xdc_Char)0x72,  /* [8780] */
    (xdc_Char)0x54,  /* [8781] */
    (xdc_Char)0x61,  /* [8782] */
    (xdc_Char)0x73,  /* [8783] */
    (xdc_Char)0x6b,  /* [8784] */
    (xdc_Char)0x0,  /* [8785] */
    (xdc_Char)0x73,  /* [8786] */
    (xdc_Char)0x6c,  /* [8787] */
    (xdc_Char)0x61,  /* [8788] */
    (xdc_Char)0x76,  /* [8789] */
    (xdc_Char)0x65,  /* [8790] */
    (xdc_Char)0x54,  /* [8791] */
    (xdc_Char)0x61,  /* [8792] */
    (xdc_Char)0x73,  /* [8793] */
    (xdc_Char)0x6b,  /* [8794] */
    (xdc_Char)0x0,  /* [8795] */
    (xdc_Char)0x74,  /* [8796] */
    (xdc_Char)0x61,  /* [8797] */
    (xdc_Char)0x73,  /* [8798] */
    (xdc_Char)0x6b,  /* [8799] */
    (xdc_Char)0x53,  /* [8800] */
    (xdc_Char)0x44,  /* [8801] */
    (xdc_Char)0x0,  /* [8802] */
    (xdc_Char)0x74,  /* [8803] */
    (xdc_Char)0x69,  /* [8804] */
    (xdc_Char)0x2e,  /* [8805] */
    (xdc_Char)0x73,  /* [8806] */
    (xdc_Char)0x79,  /* [8807] */
    (xdc_Char)0x73,  /* [8808] */
    (xdc_Char)0x62,  /* [8809] */
    (xdc_Char)0x69,  /* [8810] */
    (xdc_Char)0x6f,  /* [8811] */
    (xdc_Char)0x73,  /* [8812] */
    (xdc_Char)0x2e,  /* [8813] */
    (xdc_Char)0x6b,  /* [8814] */
    (xdc_Char)0x6e,  /* [8815] */
    (xdc_Char)0x6c,  /* [8816] */
    (xdc_Char)0x2e,  /* [8817] */
    (xdc_Char)0x54,  /* [8818] */
    (xdc_Char)0x61,  /* [8819] */
    (xdc_Char)0x73,  /* [8820] */
    (xdc_Char)0x6b,  /* [8821] */
    (xdc_Char)0x2e,  /* [8822] */
    (xdc_Char)0x49,  /* [8823] */
    (xdc_Char)0x64,  /* [8824] */
    (xdc_Char)0x6c,  /* [8825] */
    (xdc_Char)0x65,  /* [8826] */
    (xdc_Char)0x54,  /* [8827] */
    (xdc_Char)0x61,  /* [8828] */
    (xdc_Char)0x73,  /* [8829] */
    (xdc_Char)0x6b,  /* [8830] */
    (xdc_Char)0x0,  /* [8831] */
    (xdc_Char)0x4c,  /* [8832] */
    (xdc_Char)0x6f,  /* [8833] */
    (xdc_Char)0x61,  /* [8834] */
    (xdc_Char)0x64,  /* [8835] */
    (xdc_Char)0x20,  /* [8836] */
    (xdc_Char)0x4c,  /* [8837] */
    (xdc_Char)0x6f,  /* [8838] */
    (xdc_Char)0x67,  /* [8839] */
    (xdc_Char)0x67,  /* [8840] */
    (xdc_Char)0x65,  /* [8841] */
    (xdc_Char)0x72,  /* [8842] */
    (xdc_Char)0x0,  /* [8843] */
    (xdc_Char)0x4d,  /* [8844] */
    (xdc_Char)0x61,  /* [8845] */
    (xdc_Char)0x69,  /* [8846] */
    (xdc_Char)0x6e,  /* [8847] */
    (xdc_Char)0x20,  /* [8848] */
    (xdc_Char)0x4c,  /* [8849] */
    (xdc_Char)0x6f,  /* [8850] */
    (xdc_Char)0x67,  /* [8851] */
    (xdc_Char)0x67,  /* [8852] */
    (xdc_Char)0x65,  /* [8853] */
    (xdc_Char)0x72,  /* [8854] */
    (xdc_Char)0x0,  /* [8855] */
    (xdc_Char)0x53,  /* [8856] */
    (xdc_Char)0x59,  /* [8857] */
    (xdc_Char)0x53,  /* [8858] */
    (xdc_Char)0x42,  /* [8859] */
    (xdc_Char)0x49,  /* [8860] */
    (xdc_Char)0x4f,  /* [8861] */
    (xdc_Char)0x53,  /* [8862] */
    (xdc_Char)0x20,  /* [8863] */
    (xdc_Char)0x53,  /* [8864] */
    (xdc_Char)0x79,  /* [8865] */
    (xdc_Char)0x73,  /* [8866] */
    (xdc_Char)0x74,  /* [8867] */
    (xdc_Char)0x65,  /* [8868] */
    (xdc_Char)0x6d,  /* [8869] */
    (xdc_Char)0x20,  /* [8870] */
    (xdc_Char)0x4c,  /* [8871] */
    (xdc_Char)0x6f,  /* [8872] */
    (xdc_Char)0x67,  /* [8873] */
    (xdc_Char)0x67,  /* [8874] */
    (xdc_Char)0x65,  /* [8875] */
    (xdc_Char)0x72,  /* [8876] */
    (xdc_Char)0x0,  /* [8877] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[69] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x2031,  /* left */
        (xdc_Bits16)0x2036,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x203f,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2046,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x204b,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2054,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x205a,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2060,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2065,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2069,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x206e,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2075,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x207e,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2086,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x208d,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2094,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x2099,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20a3,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x20b1,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x20b7,  /* left */
        (xdc_Bits16)0x20bb,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x20c4,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x20c9,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x20d3,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x20d9,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x20dd,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x20b7,  /* left */
        (xdc_Bits16)0x20e2,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x20eb,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x20f0,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x20f5,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x20f9,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x20ff,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2104,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x210a,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x210f,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x211a,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2120,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2126,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2130,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x2134,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2139,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x20c4,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x2141,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x20f5,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x2145,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x2157,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x2163,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x2168,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x20f9,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x217a,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x2181,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x20b7,  /* left */
        (xdc_Bits16)0x2189,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x218e,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x2196,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x219f,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21ac,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21b3,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21ba,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21c7,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x21d4,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x2036,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x21dc,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x21e4,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x21f3,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x803b,  /* left */
        (xdc_Bits16)0x2203,  /* right */
    },  /* [63] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x220f,  /* right */
    },  /* [64] */
    {
        (xdc_Bits16)0x8040,  /* left */
        (xdc_Bits16)0x2216,  /* right */
    },  /* [65] */
    {
        (xdc_Bits16)0x8040,  /* left */
        (xdc_Bits16)0x221e,  /* right */
    },  /* [66] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x2228,  /* right */
    },  /* [67] */
    {
        (xdc_Bits16)0x8043,  /* left */
        (xdc_Bits16)0x222f,  /* right */
    },  /* [68] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x22ae;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x45;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((CT__xdc_runtime_TimestampNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((CT__xdc_runtime_TimestampNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((CT__xdc_runtime_TimestampNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((CT__xdc_runtime_TimestampNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Module__startupDoneFxn xdc_runtime_TimestampNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_TimestampNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm4_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_m3_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_uia_runtime_LogSync_Module_startup__E( xdc_Int state )
{
    return ti_uia_runtime_LogSync_Module_startup__F(state);
}


/*
 * ======== ti.uia.runtime.LoggerStopMode FUNCTION STUBS ========
 */

/* getTransferType__E */
ti_uia_runtime_IUIATransfer_TransferType ti_uia_runtime_LoggerStopMode_getTransferType__E( ti_uia_runtime_LoggerStopMode_Handle __inst ) 
{
    return ti_uia_runtime_LoggerStopMode_getTransferType__F((void*)__inst);
}

/* reset__E */
xdc_Void ti_uia_runtime_LoggerStopMode_reset__E( ti_uia_runtime_LoggerStopMode_Handle __inst ) 
{
    ti_uia_runtime_LoggerStopMode_reset__F((void*)__inst);
}

/* flushAll__E */
xdc_Void ti_uia_runtime_LoggerStopMode_flushAll__E( void ) 
{
    ti_uia_runtime_LoggerStopMode_flushAll__F();
}

/* Module_startup */
xdc_Int ti_uia_runtime_LoggerStopMode_Module_startup__E( xdc_Int state )
{
    return ti_uia_runtime_LoggerStopMode_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_CString control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_CString file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Registry_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Registry_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Registry_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Registry_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Registry_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Registry_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Registry_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Registry_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Registry_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Registry_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Registry_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Registry_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Registry_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Registry_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Registry_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Registry_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Registry_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Registry_Module_GateProxy_query

/* entry/exit Log events */
#define xdc_runtime_Registry_addModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_addModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByName__EXIT_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findByNamePattern__EXIT_EVT 0x0
#define xdc_runtime_Registry_findById__ENTRY_EVT 0x0
#define xdc_runtime_Registry_findById__EXIT_EVT 0x0
#define xdc_runtime_Registry_getMask__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getMask__EXIT_EVT 0x0
#define xdc_runtime_Registry_isMember__ENTRY_EVT 0x0
#define xdc_runtime_Registry_isMember__EXIT_EVT 0x0
#define xdc_runtime_Registry_getNextModule__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getNextModule__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleName__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleName__EXIT_EVT 0x0
#define xdc_runtime_Registry_getModuleId__ENTRY_EVT 0x0
#define xdc_runtime_Registry_getModuleId__EXIT_EVT 0x0

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_CString modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_CString modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_CString namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_CString name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_CString xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_CString str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_CString str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vsnprintf__E */
xdc_Int xdc_runtime_System_vsnprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsnprintf__F(buf, n, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_CString pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
}


/*
 * ======== xdc.runtime.TimestampNull FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_TimestampNull_get32__E( void ) 
{
    return xdc_runtime_TimestampNull_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_TimestampNull_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_TimestampNull_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_TimestampNull_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_TimestampNull_getFreq__F(freq);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.Timestamp */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_CpuTimestampProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_Timestamp_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 ti_uia_runtime_LogSync_CpuTimestampProxy_get32__E( void )
{
    return xdc_runtime_Timestamp_get32();
}

/* get64__E */
xdc_Void ti_uia_runtime_LogSync_CpuTimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    xdc_runtime_Timestamp_get64(result);
}

/* getFreq__E */
xdc_Void ti_uia_runtime_LogSync_CpuTimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    xdc_runtime_Timestamp_getFreq(freq);
}


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.TimestampNull */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_GlobalTimestampProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_TimestampNull_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 ti_uia_runtime_LogSync_GlobalTimestampProxy_get32__E( void )
{
    return xdc_runtime_TimestampNull_get32();
}

/* get64__E */
xdc_Void ti_uia_runtime_LogSync_GlobalTimestampProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    xdc_runtime_TimestampNull_get64(result);
}

/* getFreq__E */
xdc_Void ti_uia_runtime_LogSync_GlobalTimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    xdc_runtime_TimestampNull_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    offsetof(ti_sysbios_knl_Task_Object__, __name), /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.uia.runtime.LogSync OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_runtime_LogSync_Object2__ s0; char c; } ti_uia_runtime_LogSync___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LogSync_Object__DESC__C = {
    (Ptr)&ti_uia_runtime_LogSync_Module__FXNS__C, /* fxnTab */
    &ti_uia_runtime_LogSync_Module__root__V.link, /* modLink */
    sizeof(ti_uia_runtime_LogSync___S1) - sizeof(ti_uia_runtime_LogSync_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_runtime_LogSync_Object2__), /* objSize */
    (Ptr)&ti_uia_runtime_LogSync_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_runtime_LogSync_Params), /* prmsSize */
};



/*
 * ======== ti.uia.runtime.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_runtime_LoggerStopMode_Object2__ s0; char c; } ti_uia_runtime_LoggerStopMode___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_runtime_LoggerStopMode_Object__DESC__C = {
    (Ptr)&ti_uia_runtime_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_runtime_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_runtime_LoggerStopMode___S1) - sizeof(ti_uia_runtime_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_runtime_LoggerStopMode_Object2__), /* objSize */
    (Ptr)&ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_runtime_LoggerStopMode_Params), /* prmsSize */
};



/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_lm4_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32815;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__*)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params prms;
    ti_sysbios_family_arm_lm4_Timer_Object* obj;
    int iStat;

    ti_sysbios_family_arm_lm4_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_m3_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__*)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_arm_m3_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32833;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32834;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32817;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Event_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__*)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Event___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->swiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, ((ti_sysbios_knl_Task_Object__*)obj)->__name, 1);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIABenchmark SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIABenchmark_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIARoundtrip SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIARoundtrip_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAStatistic SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAStatistic_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.events.UIASync SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIASync_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.LogSync SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_runtime_LogSync_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_runtime_LogSync_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_runtime_LogSync_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_runtime_LogSync_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_runtime_LogSync_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_runtime_LogSync_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_runtime_LogSync_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_runtime_LogSync_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_runtime_LogSync_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_runtime_LogSync_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_runtime_LogSync_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_runtime_LogSync_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_runtime_LogSync_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_runtime_LogSync_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_runtime_LogSync_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_runtime_LogSync_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_runtime_LogSync_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_runtime_LogSync_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LogSync_Module__startupDone__S( void ) 
{
    return ti_uia_runtime_LogSync_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_uia_runtime_LogSync_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32828;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_runtime_LogSync_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_runtime_LogSync_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_uia_runtime_LogSync_Object__*)oa) + i;
    }

    if (ti_uia_runtime_LogSync_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_runtime_LogSync_Object__*)ti_uia_runtime_LogSync_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_runtime_LogSync_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_runtime_LogSync_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_runtime_LogSync_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_runtime_LogSync_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_uia_runtime_LogSync___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_uia_runtime_LogSync_Params prms;
    ti_uia_runtime_LogSync_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_uia_runtime_LogSync_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_runtime_LogSync_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LogSync_Object__DESC__C, *((ti_uia_runtime_LogSync_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_runtime_LogSync_Handle*)instp) = NULL;
}


/*
 * ======== ti.uia.runtime.LogSync_CpuTimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_uia_runtime_LogSync_CpuTimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_uia_runtime_LogSync_CpuTimestampProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_Timestamp_Module__FXNS__C;
}


/*
 * ======== ti.uia.runtime.LogSync_GlobalTimestampProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_uia_runtime_LogSync_GlobalTimestampProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_uia_runtime_LogSync_GlobalTimestampProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_TimestampNull_Module__FXNS__C;
}


/*
 * ======== ti.uia.runtime.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_runtime_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_runtime_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_runtime_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_runtime_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_runtime_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_runtime_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_runtime_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_runtime_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_runtime_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_runtime_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_LoggerStopMode_Module__startupDone__S( void ) 
{
    return ti_uia_runtime_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_uia_runtime_LoggerStopMode_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32829;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_runtime_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_uia_runtime_LoggerStopMode_Object__*)oa) + i;
    }

    if (ti_uia_runtime_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_runtime_LoggerStopMode_Object__*)ti_uia_runtime_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_runtime_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_runtime_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_runtime_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_runtime_LoggerStopMode_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_uia_runtime_LoggerStopMode___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_uia_runtime_LoggerStopMode_Params prms;
    ti_uia_runtime_LoggerStopMode_Object* obj;
    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_uia_runtime_LoggerStopMode_Instance_init__F(obj, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, obj, (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, obj, (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_runtime_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_runtime_LoggerStopMode_Object__DESC__C, *((ti_uia_runtime_LoggerStopMode_Object**)instp), (xdc_Fxn)ti_uia_runtime_LoggerStopMode_Instance_finalize__F, 0, FALSE);
    *((ti_uia_runtime_LoggerStopMode_Handle*)instp) = NULL;
}


/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Clock_Handle clock0 = (ti_sysbios_knl_Clock_Handle)((ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[0]);

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle task0 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle task1 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1]);

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle masterTask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[2]);

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle slaveTask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[3]);

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle taskSD = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[4]);











/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_events_IUIAMetaProvider_Interface__BASE__C, ".const:ti_uia_events_IUIAMetaProvider_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C, ".const:ti_uia_runtime_IUIATraceSyncClient_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__FXNS__C, ".const:ti_uia_events_UIABenchmark_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__FXNS__C, ".const:ti_uia_events_UIARoundtrip_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__FXNS__C, ".const:ti_uia_events_UIAStatistic_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__FXNS__C, ".const:ti_uia_events_UIASync_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__FXNS__C, ".const:ti_uia_runtime_LogSync_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_runtime_LoggerStopMode_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__PARAMS__C, ".const:ti_uia_runtime_LogSync_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_runtime_LoggerStopMode_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priorities__A, ".const:ti_sysbios_family_arm_m3_Hwi_priorities__A");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatchTable__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatchTable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priorities__C, ".const:ti_sysbios_family_arm_m3_Hwi_priorities__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsEnabled__C, ".const:ti_uia_events_UIABenchmark_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsIncluded__C, ".const:ti_uia_events_UIABenchmark_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__diagsMask__C, ".const:ti_uia_events_UIABenchmark_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gateObj__C, ".const:ti_uia_events_UIABenchmark_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__gatePrms__C, ".const:ti_uia_events_UIABenchmark_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__id__C, ".const:ti_uia_events_UIABenchmark_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerDefined__C, ".const:ti_uia_events_UIABenchmark_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerObj__C, ".const:ti_uia_events_UIABenchmark_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn0__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn1__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn2__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn4__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__loggerFxn8__C, ".const:ti_uia_events_UIABenchmark_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Module__startupDoneFxn__C, ".const:ti_uia_events_UIABenchmark_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__count__C, ".const:ti_uia_events_UIABenchmark_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__heap__C, ".const:ti_uia_events_UIABenchmark_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__sizeof__C, ".const:ti_uia_events_UIABenchmark_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_Object__table__C, ".const:ti_uia_events_UIABenchmark_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_start__C, ".const:ti_uia_events_UIABenchmark_start__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stop__C, ".const:ti_uia_events_UIABenchmark_stop__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstance__C, ".const:ti_uia_events_UIABenchmark_startInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstance__C, ".const:ti_uia_events_UIABenchmark_stopInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_startInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_startInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIABenchmark_stopInstanceWithStr__C, ".const:ti_uia_events_UIABenchmark_stopInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsEnabled__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsIncluded__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__diagsMask__C, ".const:ti_uia_events_UIARoundtrip_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__gateObj__C, ".const:ti_uia_events_UIARoundtrip_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__gatePrms__C, ".const:ti_uia_events_UIARoundtrip_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__id__C, ".const:ti_uia_events_UIARoundtrip_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerDefined__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerObj__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn0__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn1__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn2__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn4__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__loggerFxn8__C, ".const:ti_uia_events_UIARoundtrip_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C, ".const:ti_uia_events_UIARoundtrip_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__count__C, ".const:ti_uia_events_UIARoundtrip_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__heap__C, ".const:ti_uia_events_UIARoundtrip_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__sizeof__C, ".const:ti_uia_events_UIARoundtrip_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_Object__table__C, ".const:ti_uia_events_UIARoundtrip_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_start__C, ".const:ti_uia_events_UIARoundtrip_start__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stop__C, ".const:ti_uia_events_UIARoundtrip_stop__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstance__C, ".const:ti_uia_events_UIARoundtrip_startInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstance__C, ".const:ti_uia_events_UIARoundtrip_stopInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C, ".const:ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C, ".const:ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_startInstanceWithStr__C, ".const:ti_uia_events_UIARoundtrip_startInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIARoundtrip_stopInstanceWithStr__C, ".const:ti_uia_events_UIARoundtrip_stopInstanceWithStr__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsEnabled__C, ".const:ti_uia_events_UIAStatistic_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsIncluded__C, ".const:ti_uia_events_UIAStatistic_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__diagsMask__C, ".const:ti_uia_events_UIAStatistic_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__gateObj__C, ".const:ti_uia_events_UIAStatistic_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__gatePrms__C, ".const:ti_uia_events_UIAStatistic_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__id__C, ".const:ti_uia_events_UIAStatistic_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerDefined__C, ".const:ti_uia_events_UIAStatistic_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerObj__C, ".const:ti_uia_events_UIAStatistic_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn0__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn1__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn2__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn4__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__loggerFxn8__C, ".const:ti_uia_events_UIAStatistic_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAStatistic_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__count__C, ".const:ti_uia_events_UIAStatistic_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__heap__C, ".const:ti_uia_events_UIAStatistic_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__sizeof__C, ".const:ti_uia_events_UIAStatistic_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_Object__table__C, ".const:ti_uia_events_UIAStatistic_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_cpuLoad__C, ".const:ti_uia_events_UIAStatistic_cpuLoad__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_cpuLoadByInstance__C, ".const:ti_uia_events_UIAStatistic_cpuLoadByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_bytesProcessed__C, ".const:ti_uia_events_UIAStatistic_bytesProcessed__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_bytesProcessedByInstance__C, ".const:ti_uia_events_UIAStatistic_bytesProcessedByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_wordsProcessed__C, ".const:ti_uia_events_UIAStatistic_wordsProcessed__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_wordsProcessedByInstance__C, ".const:ti_uia_events_UIAStatistic_wordsProcessedByInstance__C");
#pragma DATA_SECTION(ti_uia_events_UIAStatistic_freeBytes__C, ".const:ti_uia_events_UIAStatistic_freeBytes__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsEnabled__C, ".const:ti_uia_events_UIASync_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsIncluded__C, ".const:ti_uia_events_UIASync_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__diagsMask__C, ".const:ti_uia_events_UIASync_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__gateObj__C, ".const:ti_uia_events_UIASync_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__gatePrms__C, ".const:ti_uia_events_UIASync_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__id__C, ".const:ti_uia_events_UIASync_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerDefined__C, ".const:ti_uia_events_UIASync_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerObj__C, ".const:ti_uia_events_UIASync_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn0__C, ".const:ti_uia_events_UIASync_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn1__C, ".const:ti_uia_events_UIASync_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn2__C, ".const:ti_uia_events_UIASync_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn4__C, ".const:ti_uia_events_UIASync_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__loggerFxn8__C, ".const:ti_uia_events_UIASync_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Module__startupDoneFxn__C, ".const:ti_uia_events_UIASync_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__count__C, ".const:ti_uia_events_UIASync_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__heap__C, ".const:ti_uia_events_UIASync_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__sizeof__C, ".const:ti_uia_events_UIASync_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_Object__table__C, ".const:ti_uia_events_UIASync_Object__table__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPoint__C, ".const:ti_uia_events_UIASync_syncPoint__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPointAfterHalt__C, ".const:ti_uia_events_UIASync_syncPointAfterHalt__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_globalTimerFreq__C, ".const:ti_uia_events_UIASync_globalTimerFreq__C");
#pragma DATA_SECTION(ti_uia_events_UIASync_syncPointUserProvidedData__C, ".const:ti_uia_events_UIASync_syncPointUserProvidedData__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__DESC__C, ".const:ti_uia_runtime_LogSync_Object__DESC__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__PARAMS__C, ".const:ti_uia_runtime_LogSync_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsEnabled__C, ".const:ti_uia_runtime_LogSync_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsIncluded__C, ".const:ti_uia_runtime_LogSync_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__diagsMask__C, ".const:ti_uia_runtime_LogSync_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__gateObj__C, ".const:ti_uia_runtime_LogSync_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__gatePrms__C, ".const:ti_uia_runtime_LogSync_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__id__C, ".const:ti_uia_runtime_LogSync_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerDefined__C, ".const:ti_uia_runtime_LogSync_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerObj__C, ".const:ti_uia_runtime_LogSync_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn0__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn1__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn2__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn4__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__loggerFxn8__C, ".const:ti_uia_runtime_LogSync_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Module__startupDoneFxn__C, ".const:ti_uia_runtime_LogSync_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__count__C, ".const:ti_uia_runtime_LogSync_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__heap__C, ".const:ti_uia_runtime_LogSync_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__sizeof__C, ".const:ti_uia_runtime_LogSync_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_Object__table__C, ".const:ti_uia_runtime_LogSync_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_injectIntoTraceFxn__C, ".const:ti_uia_runtime_LogSync_injectIntoTraceFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C, ".const:ti_uia_runtime_LogSync_cpuTimestampCyclesPerTick__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C, ".const:ti_uia_runtime_LogSync_globalTimestampCpuCyclesPerTick__C");
#pragma DATA_SECTION(ti_uia_runtime_LogSync_maxGlobalClockFreq__C, ".const:ti_uia_runtime_LogSync_maxGlobalClockFreq__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__DESC__C, ".const:ti_uia_runtime_LoggerStopMode_Object__DESC__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_runtime_LoggerStopMode_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_runtime_LoggerStopMode_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_runtime_LoggerStopMode_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_runtime_LoggerStopMode_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__id__C, ".const:ti_uia_runtime_LoggerStopMode_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_runtime_LoggerStopMode_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_runtime_LoggerStopMode_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__count__C, ".const:ti_uia_runtime_LoggerStopMode_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__heap__C, ".const:ti_uia_runtime_LoggerStopMode_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_runtime_LoggerStopMode_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_Object__table__C, ".const:ti_uia_runtime_LoggerStopMode_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_filterByLevel__C, ".const:ti_uia_runtime_LoggerStopMode_filterByLevel__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_E_badLevel__C, ".const:ti_uia_runtime_LoggerStopMode_E_badLevel__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_runtime_LoggerStopMode_isTimestampEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_enableFlush__C, ".const:ti_uia_runtime_LoggerStopMode_enableFlush__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_statusLogger__C, ".const:ti_uia_runtime_LoggerStopMode_statusLogger__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_overflowLogger__C, ".const:ti_uia_runtime_LoggerStopMode_overflowLogger__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level1Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level1Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level2Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level2Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level3Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level3Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_LoggerStopMode_level4Mask__C, ".const:ti_uia_runtime_LoggerStopMode_level4Mask__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__startupDoneFxn__C, ".const:xdc_runtime_TimestampNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
