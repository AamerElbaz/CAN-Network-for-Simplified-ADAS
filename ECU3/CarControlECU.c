#include "CarControlECU.h"

uint8_t UltrasonicSensorReading = 0;

char Terminal_Message0[MESSAGE_SIZE]= " CAR STOP " ;
char Terminal_Message1[MESSAGE_SIZE]= " CAR TURN " ;
char Terminal_Message2[MESSAGE_SIZE]= " MOVE FORWARD AND REDUCE THE SPEED! " ;
char Terminal_Message3[MESSAGE_SIZE]= " MOVE FORWARD " ;
char Terminal_Message4[MESSAGE_SIZE]= " MOVE FORWARD AND INCREASE THE SPEED " ;

void RecieveUltrasonicReadings (uint8_t UltrasonicSensorReading)
{

  switch(UltrasonicSensorReading)
  {
    case 0:
    UART_Print(Terminal_Message0);
    break;

    case 1:
    UART_Print(Terminal_Message1);
    break;
    
    case 2:
    UART_Print(Terminal_Message2);

    break;
        
    case 3:
    UART_Print(Terminal_Message3);
    break;
	
    case 4:
    UART_Print(Terminal_Message4);
    break;
      
    default:
    break;
  }

}
