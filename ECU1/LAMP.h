
#ifndef LAMP_H_
#define LAMP_H_

#include "CommonTypes.h"
#include "DIO.h"

#include <stdint.h>
#include <stdbool.h>

#define Red_Led 1U
#define Blue_Led 2U
#define Green_Led 3U

#define OFF 0U
#define ON  1U


extern E_Status LAMPs_Init(void);
/******************************************************************************
*. Name:            LAMP_Init
*. Inputs :         Lamp_Ch_No
*. Outputs:         None
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Initialization of lamp : Red / Green / Blue
******************************************************************************/

extern E_Status LAMP_ON(uint8_t Lamp_Ch_No);
/******************************************************************************
*. Name:            LAMP_ON
*. Inputs :         Lamp_Ch_No
*. Outputs:         None
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Turns on lamp : Red / Green / Blue
******************************************************************************/

extern E_Status LAMP_OFF(uint8_t Lamp_Ch_No);
/******************************************************************************
*. Name:            LAMP_OFF
*. Inputs :         Lamp_Ch_No
*. Outputs:         None
*. Return Value:    E_Status: E_OK / E_NOT_OK
*. Description:     Turns off lamp : Red / Green / Blue
******************************************************************************/

extern void UpdateLamps_Status(RuntimeParametersType* g_RuntimeParametersPtr);


#endif /* LAMP_H_ */
