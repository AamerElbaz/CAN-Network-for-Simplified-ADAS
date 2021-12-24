#ifndef __CARCONTROLECU_H__
#define __CARCONTROLECU_H__


#include <stdio.h>
#include <stdint.h>
#include "UART.h"

#define MESSAGE_SIZE    64

extern uint8_t UltrasonicSensorReading;


/******************************************************************************
*. Name:            RecieveUltrasonicReadings
*. Inputs :         None
*. Return Value:    void
*. Description:     Function to Initialize the UART Module.
******************************************************************************/
extern void RecieveUltrasonicReadings (uint8_t UltrasonicSensorReading);


#endif
