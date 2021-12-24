
#include "SEND.h"

static inline void Reset_Parameters (void){
    g_RuntimeParametersPtr->Switches->Switch1_Status = UnPressed;
    g_RuntimeParametersPtr->Switches->Switch2_Status = UnPressed;
    g_RuntimeParametersPtr->Token->ReleasedTokenOrder = DEACTIVATE;
    g_RuntimeParametersPtr -> StateMachine -> StatusChanged = FALSE;

}
static boolean CheckApplicationOverHeads(void)
{
   boolean result = FALSE;

   if(0x02 == NodeID)
   {
      if(TRUE == SensorReadingFlag)
      {
          result = TRUE;
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

   return result;
}

static void Encode_Message(RuntimeParametersType* g_RuntimeParametersPtr)
{
    Buffer_TX &= 0;
    if ( TRUE == g_RuntimeParametersPtr -> StateMachine -> StatusChanged )
    {
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

        if(TRUE == CheckApplicationOverHeads())
        {
           Buffer_TX += (SensorReadingFlag<<6);
           Buffer_TX += (SensorReading<<7);
        }
        else
        {
           /* MISRA RULE */
        }
    }
    else if(TRUE == CheckApplicationOverHeads())
    {
        Buffer_TX += (SensorReadingFlag<<6);
        Buffer_TX += (SensorReading<<7);
    }
    else
    {
       /* MISRA RULE */
    }
}


E_Status SEND_Message(RuntimeParametersType* g_RuntimeParametersPtr)
{
    E_Status result = E_OK;
    Encode_Message(g_RuntimeParametersPtr);
    if (Buffer_TX != 0x0000)
    {
    CANMessageSet( CAN0_BASE , 2U , &sCANMessage_TX , MSG_OBJ_TYPE_TX );
    }
    else
    {
        /* MISRA RULES */
    }
    if(g_RuntimeParametersPtr->CAN->bErrFlag)
    {
        result = E_NOT_OK;
    }
    else
    {
        /* MISRA RULE */
    }
    Reset_Parameters ();
    return result;
}
