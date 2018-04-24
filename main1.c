#include <msp430.h>

void main(void)
{
  volatile unsigned int a;
  WDTCTL = WDTPW + WDTHOLD;
  P1DIR |= BIT0;
  P1OUT = BIT0;
  while(1)
  {
    for(a=10;a>0;a--);
    P1OUT ^= BIT0;
  }
}
