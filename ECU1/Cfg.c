
#include "CommonTypes.h"
#include "SWITCH.h"
#include "LAMP.h"
#include "systick.h"
#include "CAN.h"

const uint8_t NodeID = 0x01;


tCANMsgObject sCANMessage_TX;
uint32_t Buffer_TX;

tCANMsgObject sCANMessage_RX;
uint16_t Buffer_RX;

Scheduler_Type      Scheduler;
CAN_Type            CAN;
Switches_Type       Switches;
Lighting_Type       Lighting;
Token_Type          Token;
StateMachine_Type   StateMachine;



static RuntimeParametersType g_RuntimeParameters =
        {
         &Scheduler,
         &CAN,
         &Switches,
         &Lighting,
         &Token,
         &StateMachine
        };

RuntimeParametersType* g_RuntimeParametersPtr = &g_RuntimeParameters;



static E_Status Node_Init(const uint8_t NodeID)
{
    E_Status error = E_NOT_OK;

        Buffer_TX = 0;

        Buffer_RX = 0;

        g_RuntimeParametersPtr->Switches->Switch1_Status = UnPressed;

        g_RuntimeParametersPtr->Switches->Switch2_Status = UnPressed;

        g_RuntimeParametersPtr->Token->TokenOwner = FALSE;

        if(0x01 == NodeID)
        {
            g_RuntimeParametersPtr->Token->TakenTokenOrder = ACTIVATE;
        }
        else
        {
            g_RuntimeParametersPtr->Token->TakenTokenOrder = DEACTIVATE;
        }
        g_RuntimeParametersPtr->Token->ReleasedTokenOrder = DEACTIVATE;

        g_RuntimeParametersPtr->StateMachine->StatusChanged = FALSE;


        switch (NodeID)

        {
            case 0x01:
            g_RuntimeParametersPtr->Lighting->CurrentECU_Status = RED;
            error = LAMP_ON(Red_Led);
            //GPIO_PORTF_DATA_R |= RED;
            break;

            case 0x02:
            g_RuntimeParametersPtr->Lighting->CurrentECU_Status = GREEN;
            error = LAMP_ON(Green_Led);
            //GPIO_PORTF_DATA_R |= GREEN;
            break;

            case 0x03:
            g_RuntimeParametersPtr->Lighting->CurrentECU_Status = BLUE;
            error = LAMP_ON(Blue_Led);
            //GPIO_PORTF_DATA_R |= BLUE;
            break;

            default:
            break;
        }

        return error;
}


E_Status System_Init(const uint8_t NodeID)
{
    E_Status SWITCHes_error = E_NOT_OK;
    E_Status LAMPs_error    = E_NOT_OK;
    E_Status Node_error     = E_NOT_OK;
    E_Status SYSTICK_error  = E_NOT_OK;
    E_Status CAN_error      = E_NOT_OK;


    SWITCHes_error  = SWITCHes_Init();
    LAMPs_error     = LAMPs_Init();

    Node_error      = Node_Init(NodeID);

    SYSTICK_error   = SYSTICK_Init();
    CAN_error       = CAN_Init();

    return(SWITCHes_error & LAMPs_error & Node_error & SYSTICK_error & CAN_error);
}
