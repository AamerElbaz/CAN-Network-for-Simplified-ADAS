#ifndef __RECEIVE_H__
#define __RECEIVE_H__

#include <stdint.h>
#include <stdbool.h>

#include "CAN.h"
#include "CommonTypes.h"


extern E_Status RECEIVE_Message(RuntimeParametersType* g_RuntimeParametersPtr);
/******************************************************************************
*. Name:            RECEIVE_Message
*. Inputs :         g_RuntimeParametersPtr
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Reads data on CAN bus when flag raised by CAN Interrupt handler
******************************************************************************/


#endif /* __RECEIVE_H__*/
