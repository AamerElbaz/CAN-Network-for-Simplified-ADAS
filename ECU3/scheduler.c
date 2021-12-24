#include "scheduler.h"




void Start_Scheduler(RuntimeParametersType* g_RuntimeParametersPtr)
{

  while(1)
  {
      uint32_t iter=0;
      static uint32_t tickCtr=0;
 
  if(1 == g_RuntimeParametersPtr->Scheduler->SystickFlag)
        { tickCtr++;
 
            while(iter<tasksNo)
              {

                  if(tickCtr % task[iter].period==0)
                  {
                    task[iter].code();
                  }
                  else
                  {
                      /* MISRA RULE */
                  }

                  iter++;
              }
        }

  }
}
