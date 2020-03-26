#ifndef __AVR_ATmega2560__
    #define __AVR_ATmega2560__
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= 7 << PINB7;  // Set the pin 13 as output
    while (1)
    {
        _delay_ms(1000);
        PORTB ^= 1 << PINB7; // Toggle the output HI/LOW
        
    }
    return 0;
}