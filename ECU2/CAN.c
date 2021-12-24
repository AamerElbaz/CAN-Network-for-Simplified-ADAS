

#include "CAN.h"


E_Status CAN_Init(void)
{
    E_Status error = E_NOT_OK;

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);

    GPIOPinConfigure(GPIO_PB4_CAN0RX);

    GPIOPinConfigure(GPIO_PB5_CAN0TX);

    GPIOPinTypeCAN(GPIO_PORTB_BASE, GPIO_PIN_4 | GPIO_PIN_5);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_CAN0);

    CANInit(CAN0_BASE);

    CANBitRateSet(CAN0_BASE, SysCtlClockGet(), 500000U);

    CANIntEnable(CAN0_BASE, CAN_INT_MASTER | CAN_INT_ERROR | CAN_INT_STATUS);

    IntEnable(INT_CAN0);

    CANEnable(CAN0_BASE);


    /*TX CAN*/
    uint16_t* pui8Msg_Data;

    pui8Msg_Data = (uint16_t *)&Buffer_TX;

    sCANMessage_TX.ui32MsgID = 1U;
    sCANMessage_TX.ui32MsgIDMask = 0U;
    sCANMessage_TX.ui32Flags = 0U;
    sCANMessage_TX.ui32MsgLen = sizeof(pui8Msg_Data);
    sCANMessage_TX.pui8MsgData = pui8Msg_Data;



    /*RX CAN*/
    sCANMessage_RX.ui32MsgID = 0U;
    sCANMessage_RX.ui32MsgIDMask = 0U;
    sCANMessage_RX.ui32Flags = MSG_OBJ_RX_INT_ENABLE | MSG_OBJ_USE_ID_FILTER;
    sCANMessage_RX.ui32MsgLen = 4U;

    CANMessageSet(CAN0_BASE, 1U, &sCANMessage_RX, MSG_OBJ_TYPE_RX);

    error = E_OK;

        return error;

}



void CAN0_IntHandler(void)
{
    uint32_t ui32Status;

    ui32Status = CANIntStatus(CAN0_BASE, CAN_INT_STS_CAUSE);

    if(ui32Status == CAN_INT_INTID_STATUS)
    {
        ui32Status = CANStatusGet(CAN0_BASE, CAN_STS_CONTROL);

        g_RuntimeParametersPtr->CAN->bErrFlag = 1U;
    }

    else if(ui32Status == 1U)
    {
        CANIntClear(CAN0_BASE, 1U);

        g_RuntimeParametersPtr->CAN->bRXFlag = 1U;

        g_RuntimeParametersPtr->CAN->bErrFlag = 0U;
    }

    else
    {
        /* MISRA RULE */
    }
}
