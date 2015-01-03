/*
 * GccApplication3.cpp
 *
 * Created: 2014-10-18 20:02:11
 *  Author: 1025450
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    while(1)
    {
		_delay_ms(50);              // 50ms delay
		PORTB &= ~(1 << PB2);       // LED off
		_delay_ms(50);              // 50ms delay
		PORTB |=  (1 << PB2);       // LED on  
    }
}