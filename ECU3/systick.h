#ifndef SYSTICK__H__
#define SYSTICK__H__



#include <stdbool.h>
#include <stdint.h>

#include "CommonTypes.h"

#define SYSTEM_CLK_SPEED_KHZ        (16000)
#define SYSTEM_TICK_MS                (100)

extern E_Status SYSTICK_Init(void);
/******************************************************************************
*. Name:            SYSTICK_Init
*. Inputs :         None
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Function to Initialize systick timer
******************************************************************************/

#endif


