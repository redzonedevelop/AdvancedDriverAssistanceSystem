/*
 * scheduler.c
 *
 *  Created on: 2025. 5. 22.
 *      Author: USER
 */


#include "scheduler.h"

typedef struct
{
    Ifx_STM             *stmSfr;            /**< \brief Pointer to Stm register base */
    IfxStm_CompareConfig stmConfig;         /**< \brief Stm Configuration structure */
    volatile uint32      counter;           /**< \brief interrupt counter */
} App_Stm;

App_Stm g_Stm; /**< \brief Stm global data */
uint32_t u32nuCounter1ms = 0u;
scheduling_flag_t st_scheduling_info;

IFX_INTERRUPT(scheduler_int0_handler, 0, 100);

void scheduler_init(void)
{
    /* disable interrupts */
    boolean interruptState = IfxCpu_disableInterrupts();

    IfxStm_enableOcdsSuspend(&MODULE_STM0);

    g_Stm.stmSfr = &MODULE_STM0;
    IfxStm_initCompareConfig(&g_Stm.stmConfig);

    g_Stm.stmConfig.triggerPriority = 100u;
    g_Stm.stmConfig.typeOfService   = IfxSrc_Tos_cpu0;
    g_Stm.stmConfig.ticks           = 100000u;

    IfxStm_initCompare(g_Stm.stmSfr, &g_Stm.stmConfig);

    /* enable interrupts again */
    IfxCpu_restoreInterrupts(interruptState);
}

void scheduler_int0_handler(void)
{
    IfxCpu_enableInterrupts();

    IfxStm_clearCompareFlag(g_Stm.stmSfr, g_Stm.stmConfig.comparator);
    IfxStm_increaseCompare(g_Stm.stmSfr, g_Stm.stmConfig.comparator, 100000u);

    u32nuCounter1ms++;

    if((u32nuCounter1ms % 1) == 0u)
    {
        st_scheduling_info.u8nu_scheduling_1ms_flag = 1u;
    }
    if((u32nuCounter1ms % 50) == 0u)
    {
        st_scheduling_info.u8nu_scheduling_50ms_flag = 1u;
    }
    if((u32nuCounter1ms % 100) == 0u)
    {
        st_scheduling_info.u8nu_scheduling_100ms_flag = 1u;
    }

}
