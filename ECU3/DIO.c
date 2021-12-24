#include "DIO.h"


E_Status Dio_WritePin(uint8_t Port, uint8_t Pin, uint8_t Data)
{

    E_Status error = E_NOT_OK;

    switch(Port)
    {
/*PORT A*/
    case PortA:
        switch(Pin)
        {
        case Pin0:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin0);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin0;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin1:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin1);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin1;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin2:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin2);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin2;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin3:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin3);
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin3;
            }
            else
            {

            }
            break;
        case Pin4:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin4);
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin4;
            }
            else
            {

            }
            break;
        case Pin5:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin5);
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin5;
            }
            else
            {

            }
            break;
        case Pin6:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin6);
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin6;
            }
            else
            {

            }
            break;
        case Pin7:
            if(Data==0U)
            {
                GPIO_PORTA_DATA_R &= ~(0x01<<Pin7);
            }
            else if (Data==1U)
            {
                GPIO_PORTA_DATA_R |= 0x01<<Pin7;
            }
            else
            {

            }
            break;
        default:
            break;
        }

/*PORT B*/
    case PortB:
        switch(Pin)
        {
        case Pin0:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin0);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin0;
            }
            else
            {

            }
            break;
        case Pin1:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin1);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin1;
            }
            else
            {

            }
            break;
        case Pin2:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin2);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin2;
            }
            else
            {

            }
            break;
        case Pin3:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin3);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin3;
            }
            else
            {

            }
            break;
        case Pin4:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin4);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin4;
            }
            else
            {

            }
            break;
        case Pin5:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin5);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin5;
            }
            else
            {

            }
            break;
        case Pin6:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin6);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin6;
            }
            else
            {

            }
            break;
        case Pin7:
            if(Data==0U)
            {
                GPIO_PORTB_DATA_R &= ~(0x01<<Pin7);
            }
            else if (Data==1U)
            {
                GPIO_PORTB_DATA_R |= 0x01<<Pin7;
            }
            else
            {

            }
            break;
        default:
            break;
        }

/*PORT C*/
    case PortC:
        switch(Pin)
        {
        case Pin0:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin0);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin0;
            }
            else
            {

            }
            break;
        case Pin1:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin1);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin1;
            }
            else
            {

            }
            break;
        case Pin2:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin2);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin2;
            }
            else
            {

            }
            break;
        case Pin3:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin3);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin3;
            }
            else
            {

            }
            break;
        case Pin4:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin4);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin4;
            }
            else
            {

            }
            break;
        case Pin5:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin5);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin5;
            }
            else
            {

            }
            break;
        case Pin6:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin6);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin6;
            }
            else
            {

            }
            break;
        case Pin7:
            if(Data==0U)
            {
                GPIO_PORTC_DATA_R &= ~(0x01<<Pin7);
            }
            else if (Data==1U)
            {
                GPIO_PORTC_DATA_R |= 0x01<<Pin7;
            }
            else
            {

            }
            break;
        default:
            break;
        }

/*PORT D*/
    case PortD:
        switch(Pin)
        {
        case Pin0:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin0);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin0;
            }
            else
            {

            }
            break;
        case Pin1:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin1);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin1;
            }
            else
            {

            }
            break;
        case Pin2:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin2);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin2;
            }
            else
            {

            }
            break;
        case Pin3:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin3);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin3;
            }
            else
            {

            }
            break;
        case Pin4:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin4);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin4;
            }
            else
            {

            }
            break;
        case Pin5:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin5);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin5;
            }
            else
            {

            }
            break;
        case Pin6:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin6);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin6;
            }
            else
            {

            }
            break;
        case Pin7:
            if(Data==0U)
            {
                GPIO_PORTD_DATA_R &= ~(0x01<<Pin7);
            }
            else if (Data==1U)
            {
                GPIO_PORTD_DATA_R |= 0x01<<Pin7;
            }
            else
            {

            }
            break;
        default:
            break;
        }

/*PORT E*/
    case PortE:
        switch(Pin)
        {
        case Pin0:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin0);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin0;
            }
            else
            {

            }
            break;
        case Pin1:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin1);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin1;
            }
            else
            {

            }
            break;
        case Pin2:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin2);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin2;
            }
            else
            {

            }
            break;
        case Pin3:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin3);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin3;
            }
            else
            {

            }
            break;
        case Pin4:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin4);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin4;
            }
            else
            {

            }
            break;
        case Pin5:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin5);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin5;
            }
            else
            {

            }
            break;
        case Pin6:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin6);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin6;
            }
            else
            {

            }
            break;
        case Pin7:
            if(Data==0U)
            {
                GPIO_PORTE_DATA_R &= ~(0x01<<Pin7);
            }
            else if (Data==1U)
            {
                GPIO_PORTE_DATA_R |= 0x01<<Pin7;
            }
            else
            {

            }
            break;
        default:
            break;
        }

/*PORT F*/
    case PortF:
        switch(Pin)
        {
        case Pin0:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin0);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin0;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin1:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin1);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin1;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin2:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin2);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin2;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin3:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin3);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin3;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin4:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin4);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin4;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin5:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin5);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin5;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin6:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin6);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin6;
                error = E_OK;
            }
            else
            {

            }
            break;
        case Pin7:
            if(Data==0U)
            {
                GPIO_PORTF_DATA_R &= ~(0x01<<Pin7);
                error = E_OK;
            }
            else if (Data==1U)
            {
                GPIO_PORTF_DATA_R |= 0x01<<Pin7;
                error = E_OK;
            }
            else
            {

            }
            break;

            default:
            break;

        }



        default:
            break;

    }
    return error;
}


/************************************************************************************/


E_Status Dio_ReadPin(uint8_t Port, uint8_t Pin, uint8_t *Data)
{
    E_Status error = E_NOT_OK;

    switch(Port)
    {

/* PORT A*/
    case PortA:
        switch(Pin)
        {
        case Pin0:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin0);
            error = E_OK;
            break;
        case Pin1:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin1);
            error = E_OK;
            break;
        case Pin2:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin2);
            error = E_OK;
            break;
        case Pin3:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin3);
            error = E_OK;
            break;
        case Pin4:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin4);
            error = E_OK;
            break;
        case Pin5:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin5);
            error = E_OK;
            break;
        case Pin6:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin6);
            error = E_OK;
            break;
        case Pin7:
            *Data = GPIO_PORTA_DATA_R & (0x01<<Pin7);
            error = E_OK;
            break;

            default:
                break;
        }

/*PORT B*/
    case PortB:
        switch(Pin)
        {
        case Pin0:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin0);
            error = E_OK;
            break;
        case Pin1:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin1);
            error = E_OK;
            break;
        case Pin2:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin2);
            error = E_OK;
            break;
        case Pin3:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin3);
            error = E_OK;
            break;
        case Pin4:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin4);
            error = E_OK;
            break;
        case Pin5:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin5);
            error = E_OK;
            break;
        case Pin6:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin6);
            error = E_OK;
            break;
        case Pin7:
            *Data = GPIO_PORTB_DATA_R & (0x01<<Pin7);
            error = E_OK;
            break;
        default:
            break;
        }

/*PORT C*/
    case PortC:
        switch(Pin)
        {
        case Pin0:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin0);
            break;
        case Pin1:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin1);
            break;
        case Pin2:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin2);
            break;
        case Pin3:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin3);
            break;
        case Pin4:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin4);
            break;
        case Pin5:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin5);
            break;
        case Pin6:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin6);
            break;
        case Pin7:
            *Data = GPIO_PORTC_DATA_R & (0x01<<Pin7);
            break;
        default:
            break;
        }

/*PORT D*/
    case PortD:
        switch(Pin)
        {
        case Pin0:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin0);
            break;
        case Pin1:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin1);
            break;
        case Pin2:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin2);
            break;
        case Pin3:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin3);
            break;
        case Pin4:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin4);
            break;
        case Pin5:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin5);
            break;
        case Pin6:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin6);
            break;
        case Pin7:
            *Data = GPIO_PORTD_DATA_R & (0x01<<Pin7);
            break;
        default:
            break;
        }

/*PORT E*/
    case PortE:
        switch(Pin)
        {
        case Pin0:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin0);
            break;
        case Pin1:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin1);
            break;
        case Pin2:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin2);
            break;
        case Pin3:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin3);
            break;
        case Pin4:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin4);
            break;
        case Pin5:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin5);
            break;
        case Pin6:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin6);
            break;
        case Pin7:
            *Data = GPIO_PORTE_DATA_R & (0x01<<Pin7);
            break;
        default:
            break;
        }

/*PORT F*/
    case PortF:
        switch(Pin)
        {
        case Pin0:
            if ((GPIO_PORTF_DATA_R & (0x01<<Pin0) == 1 ))
               { *Data = 0; }
            else
                {*Data = 1 ;}
            error = E_OK;
            break;
        case Pin1:
            *Data = GPIO_PORTF_DATA_R & (0x01<<Pin1);
            error = E_OK;
            break;
        case Pin2:
            *Data = GPIO_PORTF_DATA_R & (0x01<<Pin2);
            error = E_OK;
            break;
        case Pin3:
            *Data = GPIO_PORTF_DATA_R & (0x01<<Pin3);
            error = E_OK;
            break;
        case Pin4:
         if (((GPIO_PORTF_DATA_R & (0x01<<Pin4)) == 0x10 ))
                    { *Data = 0; }
            else
                    {*Data = 0x10 ;}
            error = E_OK;
            break;
        case Pin5:
            *Data = GPIO_PORTF_DATA_R & (0x01<<Pin5);
            error = E_OK;
            break;
        case Pin6:
            *Data = GPIO_PORTF_DATA_R & (0x01<<Pin6);
            error = E_OK;
            break;
        case Pin7:
            *Data = GPIO_PORTF_DATA_R & (0x01<<Pin7);
            error = E_OK;
            break;

        default:
            break;
        }

    default:
        break;
    }

    return error;
}

/************************************************************************************/


E_Status Dio_InitPin(uint8_t Port, uint8_t Pin, uint8_t mode)
{
  volatile unsigned long delay;

  E_Status error = E_NOT_OK;


  switch(Port)
  {

/*PORT A*/
  case PortA:
      SYSCTL_RCGC2_R |= 0x00000001U;
      delay = SYSCTL_RCGC2_R;

      GPIO_PORTA_LOCK_R |= 0X4C4F434BU;
      GPIO_PORTA_LOCK_R  |= 0XFFU;
      GPIO_PORTA_PUR_R |= 0X00U;
      GPIO_PORTA_DEN_R |= 0XFFU;
      GPIO_PORTA_AFSEL_R &= ~ 0XFFU;  /*Disable Alternative functions on PORTA */
      GPIO_PORTA_AMSEL_R &= ~ 0XFFU;  /*Disable Analog mode on PORTA */
      GPIO_PORTA_AMSEL_R &= ~ 0XFFU;  /*Disable Analog mode on PORTA */

      switch(Pin)
      {

      case Pin0:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin0);
          error = E_OK;
          }
          else
          {

          }
          break;

      case Pin1:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin1);
          error = E_OK;
          }
          else
          {

          }
          break;

      case Pin2:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin2);
          error = E_OK;
          }
          else
          {

          }
          break;

      case Pin3:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin3);
          }
          else
          {

          }
          break;

      case Pin4:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin4);
          }
          else
          {

          }
          break;

      case Pin5:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin5);
          }
          else
          {

          }
          break;

      case Pin6:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin6);
          }
          else
          {

          }
          break;

      case Pin7:
          if(mode == Input)
          {
          GPIO_PORTA_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTA_DIR_R |= (0x01U<<Pin7);
          }
          else
          {

          }
          break;
      default:
          break;
      }



/*PORT B*/
  case PortB:
      SYSCTL_RCGC2_R |= 0x000000002U;
      delay = SYSCTL_RCGC2_R;
      GPIO_PORTB_LOCK_R |= 0X4C4F434BU;
      GPIO_PORTB_PUR_R |= 0XFFU;
      GPIO_PORTB_DEN_R |= 0XFFU;

      switch(Pin){
      case Pin0:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin0);
          }
          else
          {

          }
          break;
      case Pin1:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin1);
          }
          else
          {

          }
          break;
      case Pin2:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin2);
          }
          else
          {

          }
          break;
      case Pin3:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin3);
          }
          else
          {

          }
          break;
      case Pin4:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin4);
          }
          else
          {

          }
          break;
      case Pin5:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin5);
          }
          else
          {

          }
          break;
      case Pin6:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin6);
          }
          else
          {

          }
          break;
      case Pin7:
          if(mode == Input)
          {
          GPIO_PORTB_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTB_DIR_R |= (0x01U<<Pin7);
          }
          else
          {

          }
          break;
      default:
          break;
      }

/*PORT C*/
  case PortC:
      SYSCTL_RCGC2_R |= 0x00000004U;
      delay = SYSCTL_RCGC2_R;
      GPIO_PORTC_LOCK_R |= 0X4C4F434BU;
      GPIO_PORTC_PUR_R |= 0X00U;
      GPIO_PORTC_DEN_R |= 0XFFU;
      GPIO_PORTC_DIR_R |= 0XFFU;

      switch(Pin){
      case Pin0:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin0);
          }
          else
          {

          }
          break;
      case Pin1:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin1);
          }
          else
          {

          }
          break;
      case Pin2:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin2);
          }
          else
          {

          }
          break;
      case Pin3:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin3);
          }
          else
          {

          }
          break;
      case Pin4:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin4);
          }
          else
          {

          }
          break;
      case Pin5:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin5);
          }
          else
          {

          }
          break;
      case Pin6:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin6);
          }
          else
          {

          }
          break;
      case Pin7:
          if(mode == Input)
          {
          GPIO_PORTC_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTC_DIR_R |= (0x01U<<Pin7);
          }
          else
          {

          }
          break;
      default:
          break;
      }

/*PORT D*/
  case PortD:
      SYSCTL_RCGC2_R |= 0x00000008U;
      delay = SYSCTL_RCGC2_R;
      GPIO_PORTD_LOCK_R |= 0X4C4F434BU;
      GPIO_PORTD_CR_R  |= 0XFFU;
      GPIO_PORTD_PUR_R |= 0X00U;
      GPIO_PORTD_DEN_R |= 0XFFU;
      GPIO_PORTD_DIR_R |= 0XFFU;

      switch(Pin){
      case Pin0:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin0);
          }
          else
          {

          }
          break;
      case Pin1:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin1);
          }
          else
          {

          }
          break;
      case Pin2:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin2);
          }
          else
          {

          }
          break;
      case Pin3:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin3);
          }
          else
          {

          }
          break;
      case Pin4:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin4);
          }
          else
          {

          }
          break;
      case Pin5:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin5);
          }
          else
          {

          }
          break;
      case Pin6:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin6);
          }
          else
          {

          }
          break;
      case Pin7:
          if(mode == Input)
          {
          GPIO_PORTD_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTD_DIR_R |= (0x01U<<Pin7);
          }
          else
          {

          }
          break;
      default:
          break;
      }

/*PORT E*/
  case PortE:
      SYSCTL_RCGC2_R |= 0x00000010U;
      delay = SYSCTL_RCGC2_R;
      GPIO_PORTE_LOCK_R |= 0X4C4F434BU;
      GPIO_PORTE_PUR_R |= 0X00U;
      GPIO_PORTE_DEN_R |= 0XFFU;
      GPIO_PORTE_DIR_R |= 0XFFU;

      switch(Pin){
      case Pin0:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin0);
          }
          else
          {

          }
          break;
      case Pin1:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin1);
          }
          else
          {

          }
          break;
      case Pin2:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin2);
          }
          else
          {

          }
          break;
      case Pin3:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin3);
          }
          else
          {

          }
          break;
      case Pin4:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin4);
          }
          else
          {

          }
          break;
      case Pin5:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin5);
          }
          else
          {

          }
          break;
      case Pin6:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin6);
          }
          else
          {

          }
          break;
      case Pin7:
          if(mode == Input)
          {
          GPIO_PORTE_DIR_R |= 0X00U;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTE_DIR_R |= (0x01U<<Pin7);
          }
          else
          {

          }
          break;
      default:
          break;
      }

/*PORT F*/
  case PortF:
      SYSCTL_RCGC2_R |= 0x00000020U;
      delay = SYSCTL_RCGC2_R;
      GPIO_PORTF_LOCK_R = 0X4C4F434BU; /*Unlock PORTF*/
      GPIO_PORTF_AMSEL_R = 0x00U;
      GPIO_PORTF_PCTL_R = 0x00U;
      GPIO_PORTF_CR_R = 0XFFU; /*Enable modifying PORTF registers*/
      GPIO_PORTF_PUR_R = 0X11U; /* Pull Up resistor*/
      GPIO_PORTF_DEN_R = 0XFFU; /*Enable digital function at PORTF*/


      switch(Pin){
      case Pin0:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin0);
          error = E_OK;
          }
          else
          {

          }
          break;
      case Pin1:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin1);
          error = E_OK;
          }
          else
          {

          }
          break;
      case Pin2:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin2);
          error = E_OK;
          }
          else
          {

          }
          break;
      case Pin3:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin3);
          error = E_OK;
          }
          else
          {

          }
          break;
      case Pin4:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin4);
          error = E_OK;
          }
          else
          {

          }
          break;
      case Pin5:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin5);
          error = E_OK;
          }
          else
          {

          }
          break;
      case Pin6:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)  /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin6);
          error = E_OK;
          }
          else
          {

          }
          break;
      case Pin7:
          if(mode == Input)
          {
          GPIO_PORTF_DIR_R |= 0X00U;
          error = E_OK;
          }

          else if(mode == Output)    /* Output */
          {
          GPIO_PORTF_DIR_R |= (0x01U<<Pin7);
          error = E_OK;
          }
          else
          {

          }


          default:
              break;
      }


      default:
          break;
  }

  return error;

}
