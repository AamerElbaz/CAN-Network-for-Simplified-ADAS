#ifndef TASK__H__
#define TASK__H__


#include "SEND.h"
#include "RECEIVE.h"
#include "CommonTypes.h"
#include "SWITCH.h"
#include "LAMP.h"
#include "TOKEN.h"
#include "STATE_MACHINE.h"


typedef struct task_t
{
   void (*code)(void);
   uint8_t period;
    
}task_t;

extern const uint8_t tasksNo;
extern task_t task[];


#endif
