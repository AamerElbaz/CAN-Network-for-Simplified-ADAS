#ifndef __COMMONTYPES_H__
#define __COMMONTYPES_H__

#include "stdint.h"
#include "stdbool.h"
#include "tm4c123gh6pm.h"



typedef uint8_t E_Status;
#define E_OK            (E_Status)(1U)
#define E_NOT_OK        (E_Status)(0U)

typedef uint8_t switchStatusType;
#define Pressed       (switchStatusType)(0x01U)
#define UnPressed     (switchStatusType)(0x00U)


typedef uint8_t colorType;
#define RED             (colorType)(0x02U)
#define GREEN           (colorType)(0x08U)
#define BLUE            (colorType)(0x04U)
#define WHITE           (colorType)(0x0EU)

typedef uint8_t boolean;
#define FALSE             (boolean)(0U)
#define TRUE              (boolean)(1U)

typedef uint16_t Token_StatusType;
#define ACTIVATE               (Token_StatusType)(1U)
#define DEACTIVATE             (Token_StatusType)(0U)


typedef struct
{
    volatile bool       bErrFlag;
    volatile bool       bRXFlag;
}CAN_Type;

typedef struct
{
    volatile uint8_t    SystickFlag;
}Scheduler_Type;

typedef struct
{
    switchStatusType    Switch1_Status;
    switchStatusType    Switch2_Status;
}Switches_Type;

typedef struct
{
    colorType           CurrentECU_Status;
    colorType           NextECU_Status;
    colorType           PreviousECU_Status;
}Lighting_Type;

typedef struct
{
    boolean             TokenOwner;
    Token_StatusType    TakenTokenOrder;
    Token_StatusType    ReleasedTokenOrder;
}Token_Type;

typedef struct
{
    uint16_t             StatusChanged;
}StateMachine_Type;


typedef struct
{
    Scheduler_Type      *Scheduler;
    CAN_Type            *CAN;
    Switches_Type       *Switches;
    Lighting_Type       *Lighting;
    Token_Type          *Token;
    StateMachine_Type   *StateMachine;
}RuntimeParametersType;

extern const uint8_t NodeID;

extern RuntimeParametersType* g_RuntimeParametersPtr;

extern E_Status System_Init(const uint8_t NodeID);


#endif /* __COMMONTYPES_H__*/
