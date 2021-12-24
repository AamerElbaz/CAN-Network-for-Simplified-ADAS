
#include "STATE_MACHINE.h"


static inline void OperateSwitch_1_Request(Lighting_Type* Lighting)
{
    Lighting->CurrentECU_Status  = RED;
}

static inline void OperateSwitch_2_Request(Lighting_Type* Lighting)
{

    switch (Lighting->CurrentECU_Status)
    {
    case RED:
        Lighting->CurrentECU_Status  = GREEN;
    break;

    case GREEN:
        Lighting->CurrentECU_Status  = BLUE;
    break;


    case BLUE:
        Lighting->CurrentECU_Status  = RED;
    break;

    default:
    break;
    }

}


void STATE_MACHINE(RuntimeParametersType* g_RuntimeParametersPtr)
{

    if(TRUE == g_RuntimeParametersPtr->Token->TokenOwner)
    {
        if( Pressed  == g_RuntimeParametersPtr->Switches->Switch1_Status && //
           UnPressed == g_RuntimeParametersPtr->Switches->Switch2_Status)
        {
            OperateSwitch_1_Request(g_RuntimeParametersPtr->Lighting);
            g_RuntimeParametersPtr->StateMachine->StatusChanged = TRUE;
        }

        else if( Pressed   == g_RuntimeParametersPtr->Switches->Switch2_Status && //
                UnPressed  == g_RuntimeParametersPtr->Switches->Switch1_Status)
        {
            OperateSwitch_2_Request(g_RuntimeParametersPtr->Lighting);
            g_RuntimeParametersPtr->StateMachine->StatusChanged = TRUE;
        }

        else
        {
            /* MISRA RULE */
        }

    }
    else
    {
        /* MISRA RULE */
    }

    if(ACTIVATE == g_RuntimeParametersPtr->Token->ReleasedTokenOrder)
       {
           g_RuntimeParametersPtr->StateMachine->StatusChanged = TRUE;
       }
       else
       {
           /* MISRA RULE */
       }

}
