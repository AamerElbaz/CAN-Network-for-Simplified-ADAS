

#ifndef SWITCH_H_
#define SWITCH_H_

#include "DIO.h"
#include "stdbool.h"
#include "stdint.h"
#include "CommonTypes.h"

#define SW_1 0U
#define SW_2 4U

typedef uint8_t SwitchType;
#define NOT_PRESSED         (SwitchType)(0x00U)
#define SW1_IS_PRESSED      (SwitchType)(0x01U)
#define SW2_IS_PRESSED      (SwitchType)(0x10U)


extern E_Status SWITCHes_Init();
/******************************************************************************
*. Name:            Switch_Init
*. Inputs :
*. Outputs:         None
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Switches Initialization, calls the DIO driver in MCAL
******************************************************************************/


extern E_Status Switch_GetStatus(uint8_t Switch_No, uint8_t* Status);
/******************************************************************************
*. Name:            Switch_GetStatus
*. Inputs :         Switch_No
*. Outputs:         Status
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Gets the switch status; pressed or not, calls the DIO driver in MCAL
******************************************************************************/

extern void UpdateSwitchesStatus(RuntimeParametersType* g_RuntimeParametersPtr);
/******************************************************************************
*. Name:            UpdateSwitchesStatus
*. Inputs :         g_RuntimeParametersPtr
*. Return Value:    None
*. Description:     Function to update switches statuses by OS
******************************************************************************/

#endif /* SWITCH_H_ */
