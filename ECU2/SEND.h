#ifndef __SEND_H__
#define __SEND_H__

#include <stdint.h>
#include <stdbool.h>

#include "CAN.h"
#include "CommonTypes.h"
#include "SensorECU.h"


extern E_Status SEND_Message(RuntimeParametersType* g_RuntimeParametersPtr);
/******************************************************************************
*. Name:            SEND_Message
*. Inputs :         g_RuntimeParametersPtr
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Sends message on CAN bus
******************************************************************************/

#endif /* __SEND_H__*/
