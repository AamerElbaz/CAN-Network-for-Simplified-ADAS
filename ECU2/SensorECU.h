#ifndef __SENSORECU_H__
#define __SENSORECU_H__

#include "UART.h"
#include <stdio.h>
#include "CommonTypes.h"

#define NO_READING 222

extern boolean SensorReadingFlag;
extern uint8_t SensorReading;

extern void CaptureReading(void);

#endif
