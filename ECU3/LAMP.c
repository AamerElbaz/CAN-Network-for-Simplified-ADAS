

#include "LAMP.h"




static E_Status LAMP_Init(uint8_t Lamp_Ch_No)
{
    E_Status error = E_NOT_OK;

    error = Dio_InitPin(PortF, Lamp_Ch_No, Output);

    return error;
}

E_Status LAMPs_Init(void)
{
    E_Status error1 = E_NOT_OK;
    E_Status error2 = E_NOT_OK;
    E_Status error3 = E_NOT_OK;

    error1 = LAMP_Init(Red_Led);
    error2 = LAMP_Init(Green_Led);
    error3 = LAMP_Init(Blue_Led);

    return (error1 & error2 & error3);
}


E_Status LAMP_ON(uint8_t Lamp_Ch_No)
{
    E_Status error = E_NOT_OK;

    error = Dio_WritePin(PortF, Lamp_Ch_No, ON);

    return error;
}


/************************************/


E_Status LAMP_OFF(uint8_t Lamp_Ch_No)
{

    E_Status error = E_NOT_OK;

    error = Dio_WritePin(PortF, Lamp_Ch_No, OFF);

    return error;
}


void UpdateLamps_Status(RuntimeParametersType* g_RuntimeParametersPtr)
{

    if(TRUE == g_RuntimeParametersPtr->Token->TokenOwner)
    {
        LAMP_ON(Red_Led);
        LAMP_ON(Green_Led);
        LAMP_ON(Blue_Led);
    }
    else if (FALSE == g_RuntimeParametersPtr->Token->TokenOwner)
    {
        LAMP_OFF(Red_Led);
        LAMP_OFF(Green_Led);
        LAMP_OFF(Blue_Led);

        switch (g_RuntimeParametersPtr->Lighting->CurrentECU_Status)
        {
            case RED:
                LAMP_ON(Red_Led);
                break;

            case GREEN:
                LAMP_ON(Green_Led);
                break;

            case BLUE:
                LAMP_ON(Blue_Led);
                break;

            default:
                break;
        }
    }
    else
    {
        /* MISRA RULE */
    }

}
