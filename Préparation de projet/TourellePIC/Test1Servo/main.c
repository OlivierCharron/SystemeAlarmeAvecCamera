#include <main.h>

unsigned int angle=0,i;
void cs_delay(unsigned int);

void main()
{
   while(1)
   {
      for(angle=0;angle<=180;angle+=45) // Loop to increase the angle by 45°
      {
         for(i=0;i<50;i++) // Loop to provide continuous train of pulse
         {
            output_high(PIN_D0); //=1; // Send high to control signal terninal
            cs_delay(angle); // Call delay function
            output_low (PIN_D0); //=0; // Send low to control signal terninal
            Delay_ms(18);
         }
      }
   }
}

void cs_delay(unsigned int count)
{
   int j=0;
   Delay_us(550); // Delay to move the servo at 0°
   for(j=0;j<count;j++) // Repeat the loop equal to as much as angle
   {
      Delay_us(6); // Delay to displace servo by 1°
   }
}
