


#include "TOKEN.h"



void TokenOwnerDecision(RuntimeParametersType* g_RuntimeParametersPtr)
{

   if(TRUE == g_RuntimeParametersPtr->Token->TokenOwner)
   {
       g_RuntimeParametersPtr->Token->ReleasedTokenOrder = ACTIVATE;
   }
   else
   {
       /* MISRA RULE */
   }

   if(ACTIVATE == g_RuntimeParametersPtr->Token->TakenTokenOrder)
   {
       g_RuntimeParametersPtr->Token->TokenOwner = TRUE;
       g_RuntimeParametersPtr->Token->TakenTokenOrder = DEACTIVATE;
   }
   else if(DEACTIVATE == g_RuntimeParametersPtr->Token->TakenTokenOrder)
   {
       g_RuntimeParametersPtr->Token->TokenOwner = FALSE;
   }
   else
   {
       /* MISRA RULE */
   }

}
