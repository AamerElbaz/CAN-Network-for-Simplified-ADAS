

#include "UART.h"

void PORTA_UART_Init(void)
{
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R0;

    while(!((SYSCTL_RCGCGPIO_R & SYSCTL_RCGCGPIO_R0) == SYSCTL_RCGCGPIO_R0));

    UART0_CTL_R &= (~UART_CTL_UARTEN);

    GPIO_PORTA_DEN_R = 0x03U;
    GPIO_PORTA_AFSEL_R = 0x03U;
    GPIO_PORTA_PCTL_R = (GPIO_PCTL_PA1_U0TX | GPIO_PCTL_PA0_U0RX);
}


E_Status UART_Init(void)
{
    E_Status error = E_NOT_OK;

    SYSCTL_RCGCUART_R |= SYSCTL_RCGCUART_R0;

    while(!((SYSCTL_RCGCUART_R & SYSCTL_RCGCUART_R0) == SYSCTL_RCGCUART_R0));

    PORTA_UART_Init();

    UART0_CTL_R &= (~UART_CTL_UARTEN);

    UART0_IBRD_R = 104;

    UART0_FBRD_R = 11;

    UART0_CC_R = UART_CC_CS_SYSCLK;

    UART0_LCRH_R = UART_LCRH_WLEN_8;

    UART0_CTL_R |= (UART_CTL_RXE | UART_CTL_TXE | UART_CTL_UARTEN);

    error = E_OK;

        return error;
}


void UART_SetOutput(uint8_t Data)
{
    while((UART0_FR_R & UART_FR_TXFF) != 0);

    UART0_DR_R = Data;
}

uint16_t UART_GetInput( void)
{
    static uint8_t Reading = 0 ;
    static uint8_t counter = 0 ;
    uint8_t result = 222;
    uint8_t  x = 10 ;
    if ((UART0_FR_R & UART_FR_RXFE) == 0)
    {
        x = (UART0_DR_R - 0x30) ;
        UART0_DR_R = 0;
    }

if ( ((x > 0) && (x <= 9)) || (0 == x) )
{
    if (counter == 0 )
    {
        Reading = 0 ;
        Reading += x * 100;
        counter ++;
        result = 222 ;
    }
    else if (counter == 1 )
    {
        Reading += x * 10;
        counter ++;
        result = 222;
    }
    else if (counter == 2)
    {
        Reading += x;
        counter = 0;
        result = Reading ;
        char c []= "Sensor Reading Saved";
        UART_Print (c);

    }
    else
    {
        /* MISRA RULE */
    }
}
else
{
    /* MISRA RULE */
}
    return (result);
}

void UART_Print(char* Reading)
{
    uint8_t i;

    for(i=0; i< strlen(Reading); i++)
    {
        UART_SetOutput(Reading[i]);
    }
}



