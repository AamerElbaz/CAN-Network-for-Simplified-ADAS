
#include "RECEIVE.h"

static boolean CheckTokenOrder(const uint8_t CurrentNodeID, uint8_t Sender_NodeID)
{
    boolean result = FALSE;

   if( (0x01 == (CurrentNodeID - Sender_NodeID)) || ((0x01 == CurrentNodeID)&&(0x03 == Sender_NodeID))  )
   {
       result = TRUE;
   }
   else
   {
       /* MISRA RULE */
   }

   return result;
}

static void SW1_Color_Decision (const uint8_t NodeID, uint8_t SenderNodeID )
{
    switch (NodeID)
              {
              case 0x01: /* case Node 1 */
              {
                  switch (SenderNodeID)
                  {
                  case 0x02:
                      g_RuntimeParametersPtr->Lighting->CurrentECU_Status = BLUE;
                      break;
                  case 0x03:
                      g_RuntimeParametersPtr->Lighting->CurrentECU_Status = GREEN;
                      break;
                  }
              }
              break;
              case 0x02: /* case Node 2 */
              {
                  switch (SenderNodeID)
                  {
                  case 0x01:
                      g_RuntimeParametersPtr->Lighting->CurrentECU_Status = GREEN;
                      break;
                  case 0x03:
                      g_RuntimeParametersPtr->Lighting->CurrentECU_Status = BLUE;
                      break;
                  }
              }
              break;
              case 0x03: /* case Node 3 */
              {
                  switch (SenderNodeID) // Case NodeID 0x01
                  {
                  case 0x01:
                      g_RuntimeParametersPtr->Lighting->CurrentECU_Status = BLUE;
                      break;
                  case 0x02:
                      g_RuntimeParametersPtr->Lighting->CurrentECU_Status = GREEN;
                      break;
                  }
              }
              break;
              }
}


inline static void Decode_Message(RuntimeParametersType* g_RuntimeParametersPtr)
{
    uint16_t SW1_Status = FALSE , SW2_Status = FALSE ;
    uint16_t SenderNodeID = 0x00;
    g_RuntimeParametersPtr->StateMachine->StatusChanged = (Buffer_RX<<15);
    g_RuntimeParametersPtr->StateMachine->StatusChanged =( g_RuntimeParametersPtr->StateMachine->StatusChanged >>15) ;

    if (TRUE == g_RuntimeParametersPtr->StateMachine->StatusChanged)
    {
        SW1_Status = ( Buffer_RX << 12);
        SW1_Status = SW1_Status  >> 15;

        SW2_Status = ( Buffer_RX << 11);
        SW2_Status = SW2_Status  >> 15;

        SenderNodeID = (Buffer_RX<<13);
        SenderNodeID = SenderNodeID >> 14 ;

        if(TRUE == CheckTokenOrder(NodeID, SenderNodeID))
        {
           g_RuntimeParametersPtr->Token->TakenTokenOrder = (Buffer_RX<<10);
           g_RuntimeParametersPtr->Token->TakenTokenOrder = (g_RuntimeParametersPtr->Token->TakenTokenOrder>>15);
        }
        else
        {
           /* MISRA RULE */
        }

        Buffer_RX = 0x00;

        if (TRUE == SW2_Status)
        {
            switch (g_RuntimeParametersPtr->Lighting->CurrentECU_Status )
            {
            case RED:
                g_RuntimeParametersPtr->Lighting->CurrentECU_Status = GREEN;
                break;
            case GREEN:
                g_RuntimeParametersPtr->Lighting->CurrentECU_Status = BLUE;
                break;
            case BLUE:
                g_RuntimeParametersPtr->Lighting->CurrentECU_Status = RED;
                break;
            default:
                break;
            }

        }
        else if ((0x00 != SenderNodeID) && (TRUE == SW1_Status))
        {
            SW1_Color_Decision (NodeID, SenderNodeID);
        }
        else
        {
            /* MISRA RULE */
        }
        g_RuntimeParametersPtr->StateMachine->StatusChanged = FALSE;

    }
    else
    {
        /* MISRA RULE */
    }
}


E_Status RECEIVE_Message  (RuntimeParametersType* g_RuntimeParametersPtr)
{
    E_Status result = E_OK;

    sCANMessage_RX.pui8MsgData = &Buffer_RX;

    CANMessageGet(CAN0_BASE, 1U, &sCANMessage_RX, 0U);

    if(sCANMessage_RX.ui32Flags & MSG_OBJ_DATA_LOST)
    {
        result = E_NOT_OK;
    }
    else /*MISRA*/
    {

    }

    Decode_Message(g_RuntimeParametersPtr);


    return result;
}
