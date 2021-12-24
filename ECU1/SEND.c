
#include "SEND.h"
static inline void Reset_Parameters (void){
    g_RuntimeParametersPtr->Switches->Switch1_Status = UnPressed;
    g_RuntimeParametersPtr->Switches->Switch2_Status = UnPressed;
    g_RuntimeParametersPtr->Token->ReleasedTokenOrder = DEACTIVATE;
    g_RuntimeParametersPtr -> StateMachine -> StatusChanged = FALSE;

}
static void Encode_Message(RuntimeParametersType* g_RuntimeParametersPtr)
{
    Buffer_TX &= 0;
    Buffer_TX  = g_RuntimeParametersPtr->StateMachine->StatusChanged;
    /* NodeID FOR SW1 = 1 OR 2 OR 3 */
    Buffer_TX += (NodeID <<1 ) ;

    if ( Pressed   == g_RuntimeParametersPtr -> Switches-> Switch1_Status )
    {
        /*Switch 1 Status*/
    Buffer_TX += (TRUE <<3 );
    }
    else
    {
         /* MISRA RULE */
    }

    if ( Pressed   == g_RuntimeParametersPtr -> Switches-> Switch2_Status )
    {
        /*  Switch2_Status */
    Buffer_TX += (TRUE<< 4 );
    }
    else
    {
        /* MISRA RULE */
    }

    Buffer_TX += (g_RuntimeParametersPtr->Token->ReleasedTokenOrder << 5);

}


E_Status SEND_Message(RuntimeParametersType* g_RuntimeParametersPtr)
{
    E_Status result = E_OK;

    if ( TRUE == g_RuntimeParametersPtr -> StateMachine -> StatusChanged )
    {
        Encode_Message(g_RuntimeParametersPtr);
        CANMessageSet( CAN0_BASE , 2U , &sCANMessage_TX , MSG_OBJ_TYPE_TX );


        if(g_RuntimeParametersPtr->CAN->bErrFlag)
        {
            result = E_NOT_OK;
        }
        else
        {
            /* MISRA RULE */
        }
        Reset_Parameters ();


    }
    else
    {
        /* MISRA RULE */
    }

    return result;
}
