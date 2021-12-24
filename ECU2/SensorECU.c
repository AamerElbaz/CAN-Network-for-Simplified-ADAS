
#include "SensorECU.h"

    /* Ultrasonic Sensor */

static uint8_t DutyCycle = 0;
       boolean SensorReadingFlag = FALSE;
       uint8_t SensorReading = 0;

void CaptureReading(void)
{
    DutyCycle = UART_GetInput();
    if (NO_READING == DutyCycle) /* this  means that no reading was recieved from uart */
    {
        SensorReadingFlag = FALSE;

    }
    else if(((DutyCycle > 0 ) && ( DutyCycle <= 100) ) || (0 == DutyCycle))
    {
        SensorReadingFlag = TRUE;

        if(((DutyCycle > 0 ) && ( DutyCycle <= 10) ) || (0 == DutyCycle))
        {SensorReading = 0x00;}

        else if ((DutyCycle >= 11) && ( DutyCycle <= 20))
        {SensorReading = 0x01;}

        else if ((DutyCycle >= 21) && ( DutyCycle <= 40))
        {SensorReading = 0x02;}

        else if ((DutyCycle >= 41) && ( DutyCycle <= 60))
        {SensorReading = 0x03;}

        else if ((DutyCycle >= 61) && ( DutyCycle <= 100))
        {SensorReading = 0x04;}

        else
        { /* MISRA */ }
    }
    else
    {
        SensorReadingFlag = FALSE;
    }

    

}

