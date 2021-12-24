/*
 * UART.h
 *
 *  Created on: Aug 14, 2020
 *      Author: Lenovo
 */

#ifndef UART_H_
#define UART_H_

#include "CommonTypes.h"

#include "tm4c123gh6pm.h"
#include <stdint.h>
#include <string.h>

/******************************************************************************
*. Name:            UART_Init
*. Inputs :         None
*. Return Value:    E_Status
*. Description:     Function to Initialize the UART Module.
******************************************************************************/
extern E_Status UART_Init(void);


/******************************************************************************
*. Name:            PORTA_UART_Init
*. Inputs :         None
*. Return Value:    void
*. Description:     Function to PortA for UART Module.
******************************************************************************/
extern void PORTA_UART_Init(void);


/******************************************************************************
*. Name:            UART_SetOutput
*. Inputs :         Data
*. Return Value:    void
*. Description:     Function to save data into UART_DR_R Register to be printed.
******************************************************************************/
extern void UART_SetOutput(uint8_t Data);



/******************************************************************************
*. Name:            UART_Print
*. Inputs :         Reading
*. Return Value:    void
*. Description:     Function to print data onto the terminal.
******************************************************************************/
extern void UART_Print(char* Reading);


/******************************************************************************
*. Name:            UART_GetInput
*. Inputs :         None
*. Return Value:    uint8_t:  Duty cycle input by user.
*. Description:     Function to Get Input from the user by UART and Save it.
******************************************************************************/
extern uint16_t UART_GetInput(void);


#endif /* UART_H_ */
