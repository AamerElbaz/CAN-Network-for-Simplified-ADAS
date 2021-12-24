#ifndef __DIO_H__
#define __DIO_H__

#include "CommonTypes.h"

#define Pin0 0U
#define Pin1 1U
#define Pin2 2U
#define Pin3 3U
#define Pin4 4U
#define Pin5 5U
#define Pin6 6U
#define Pin7 7U

#define PortA 0U
#define PortB 1U
#define PortC 2U
#define PortD 3U
#define PortE 4U
#define PortF 5U

#define Output 1U
#define Input 0U


extern E_Status Dio_WritePin(uint8_t Port, uint8_t Pin, uint8_t Data);
/******************************************************************************
*. Name:            Dio_WritePin
*. Inputs :         Port, Pin, Data
*. Return Value:    E_status: E_OK / E_NOT_OK
*. Description:     Writes a value to a pin in a certain port
******************************************************************************/

extern E_Status Dio_ReadPin(uint8_t Port, uint8_t Pin, uint8_t *Data);
/******************************************************************************
*. Name:            Dio_ReadPin
*. Inputs :         Port, Pin
*. Outputs:         Data
*. Return Value:    E_status: E_OK / E_NOT_OK
*. Description:     Read a value from a pin in a certain port
******************************************************************************/

extern E_Status Dio_InitPin(uint8_t Port, uint8_t Pin, uint8_t mode);
/******************************************************************************
*. Name:            Dio_InitPin
*. Inputs :         Port, Pin, mode
*. Return Value:    E_status: E_OK / E_NOT_OK
*. Description:     Initiates a pin in a certain port with modes : Output / Input
******************************************************************************/


#endif /*__DIO_H__*/
