#ifndef __CAN_H__
#define __CAN_H__

#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_can.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "driverlib/can.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"

#include "CommonTypes.h"

/*TX*/
extern tCANMsgObject sCANMessage_TX;
extern uint32_t Buffer_TX;

/*RX*/
extern tCANMsgObject sCANMessage_RX;
extern uint16_t  Buffer_RX;


/******************************************************************************
*. Name:            CAN_Init
*. Inputs :         None
*. Return Value:    void
*. Description:     Initialization of CAN
******************************************************************************/
extern E_Status CAN_Init(void);

/******************************************************************************
*. Name:            CAN0_IntHandler
*. Inputs :         None
*. Return Value:    void
*. Description:     Can Interrupt Handler, main purpose the raise of the receiving flag.
******************************************************************************/
void CAN0_IntHandler(void);


#endif /*__CAN_H__*/
