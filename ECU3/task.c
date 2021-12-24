

#include "task.h"


static void Task1(void);
static void Task2(void);
static void Task3(void);
static void Task4(void);
static void Task5(void);
static void Task6(void);
static void Task7(void);



task_t task[]=
{
    { .code=Task1,
      .period=1
    },
    { .code=Task2,
      .period=1
    },
    { .code=Task3,
      .period=4
    },
    { .code=Task4,
      .period=10
    },
    { .code=Task5,
      .period=1
    },
    { .code=Task6,
      .period=10
    },
    { .code=Task7,
      .period=1
    }
   
};


const uint8_t tasksNo=sizeof(task)/sizeof(task_t);


static void Task1(void)
{
   g_RuntimeParametersPtr->Scheduler->SystickFlag=0;
   SEND_Message(g_RuntimeParametersPtr);

}

static void Task2(void)
{
    g_RuntimeParametersPtr->Scheduler->SystickFlag=0;
    RECEIVE_Message(g_RuntimeParametersPtr);
}

static void Task3(void)
{
    g_RuntimeParametersPtr->Scheduler->SystickFlag=0;
    UpdateSwitchesStatus(g_RuntimeParametersPtr);
}

static void Task4(void)
{
    g_RuntimeParametersPtr->Scheduler->SystickFlag=0;
    TokenOwnerDecision(g_RuntimeParametersPtr);
}

static void Task5(void)
{
    g_RuntimeParametersPtr->Scheduler->SystickFlag=0;
    UpdateLamps_Status(g_RuntimeParametersPtr);
}

static void Task6(void)
{
   g_RuntimeParametersPtr->Scheduler->SystickFlag=0;
   RecieveUltrasonicReadings(UltrasonicSensorReading);
}

static void Task7(void)
{
    g_RuntimeParametersPtr->Scheduler->SystickFlag=0;
    STATE_MACHINE(g_RuntimeParametersPtr);
}
