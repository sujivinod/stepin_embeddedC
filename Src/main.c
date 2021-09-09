/*
 */

#include <avr/io.h>
#define F_CPU 16000000UL
int main(void)
{
    DDRB |=(1<<PB0);//led pin
    DDRD &=~(1<<PD1);//clear temperature pin
    PORTD |=(1<<PD1);//set temperature pin
    DDRD &=~(1<<PD0);//clear button pin
    PORTD|=(1<<PD0);//set button pin
    while(1)
    {
        if(!(PIND&&(1<<PD0))&& !(PIND&&(1<<PD1)))
        {

            PORTB |=(1<<PB0);
        }
        else
        {

            PORTB &=~(1<<PB0);
        }
    }

    return 0;
}
