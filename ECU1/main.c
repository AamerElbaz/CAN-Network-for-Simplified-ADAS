#include "stdint.h"
#include "systick.h"
#include "task.h"
#include "scheduler.h"
#include "CommonTypes.h"



void EnableInterrupts(void);


void main()
{
    E_Status System_Init_Status = E_NOT_OK;

    System_Init_Status = System_Init(NodeID);

    if(E_OK == System_Init_Status)
    {
      Start_Scheduler(g_RuntimeParametersPtr);
    }
    else
    {
        /* MISRA RULE */
    }

}
