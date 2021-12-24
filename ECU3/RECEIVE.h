#ifndef __RECEIVE_H__
#define __RECEIVE_H__

#include <stdint.h>
#include <stdbool.h>

#include "CAN.h"
#include "CommonTypes.h"
#include "CarControlECU.h"

extern E_Status RECEIVE_Message(RuntimeParametersType* g_RuntimeParametersPtr);
/******************************************************************************
*. Name:            RECEIVE
*. Inputs :         None
*. Outputs:         My_State, ECU, Flag_change
*. Return Value:    E_status: E_OK / E_NOT_OK
*. Description:     Reads data on CAN bus when flag raised by CAN Interrupt handler
******************************************************************************/


#endif /* __RECEIVE_H__*/
