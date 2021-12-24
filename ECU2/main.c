#include "stdint.h"
#include "systick.h"
#include "task.h"
#include "scheduler.h"
#include "CommonTypes.h"

char  Node_Message[] = "Node 2 Terminal Started";

void EnableInterrupts(void);


void main()
{

    E_Status System_Init_Status = E_NOT_OK;

        System_Init_Status = System_Init(NodeID);

        if(E_OK == System_Init_Status)
        {
            UART_Print (Node_Message);
            Start_Scheduler(g_RuntimeParametersPtr);
        }
        else
        {
            /* MISRA RULE */
        }

}
