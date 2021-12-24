#include "systick.h"
#include "stdbool.h"
#include "stdint.h"
#include "tm4c123gh6pm.h"



E_Status SYSTICK_Init(void)
{
    E_Status error = E_NOT_OK;
    NVIC_ST_CTRL_R = 0;
    NVIC_ST_CTRL_R = 0x07;

    NVIC_ST_RELOAD_R = (SYSTEM_CLK_SPEED_KHZ*SYSTEM_TICK_MS-1);

    error = E_OK;

    return error;
}

void SysTick_Handler(void)
{
    g_RuntimeParametersPtr->Scheduler->SystickFlag=1;
}








