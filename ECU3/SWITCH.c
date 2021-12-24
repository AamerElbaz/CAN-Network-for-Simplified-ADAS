

#include "SWITCH.h"

static E_Status Switch_Init(uint8_t Switch_No)
{
    E_Status error = E_NOT_OK;

    if(SW_1 == Switch_No)
    {
        error = Dio_InitPin(PortF, Pin0, Input);
    }
    else
    {
        /* MISRA RULE */
    }

    if(SW_2 == Switch_No)
    {
        error = Dio_InitPin(PortF, Pin4, Input);
    }
    else
    {
        /* MISRA RULE */
    }

    return error;
}

E_Status SWITCHes_Init(void)
{
    E_Status SW1_result = E_NOT_OK;
    E_Status SW2_result = E_NOT_OK;

    SW1_result = Switch_Init(SW_1);
    SW2_result = Switch_Init(SW_2);

    return (SW1_result & SW2_result);
}

/************************************/

E_Status Switch_GetStatus(uint8_t Switch_No, uint8_t* Status)
{
    E_Status error = E_NOT_OK;

    error = Dio_ReadPin(PortF, Switch_No, Status);

    return error;
}


void UpdateSwitchesStatus(RuntimeParametersType* g_RuntimeParametersPtr)
{

    SwitchType Switch_1 = NOT_PRESSED;
    SwitchType Switch_2 = NOT_PRESSED;

    Switch_GetStatus(SW_1, &Switch_1);

    Switch_GetStatus(SW_2, &Switch_2);

    if(SW1_IS_PRESSED == Switch_1)
    {
        g_RuntimeParametersPtr->Switches->Switch1_Status = Pressed;
    }
    else if (SW2_IS_PRESSED == Switch_2)
    {
        g_RuntimeParametersPtr->Switches->Switch2_Status = Pressed;
    }
    else
    {
        /* MISRA RULE */
    }

}
