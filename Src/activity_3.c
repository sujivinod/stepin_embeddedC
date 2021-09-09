/**
 * @file activity_3.c
 * @author vinod kumar reddy jogappagari
 * @brief  automatic seat heater
 * @version 0.1
 * @date 2021-09-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity_3.h"
#include "activity_2.h"
void InitTimer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}

void activity3_PWM(uint16_t temp)
{
    InitTimer();
    if(temp>=0 && temp<=200){
            OCR1A = PWM_20_DEGREE;
            _delay_ms(500);
        }
        else if(temp>=210 && temp<=500){
             OCR1A = PWM_40_DEGREE;
            _delay_ms(500);
        }
        else if(temp>=510 && temp<=700){
             OCR1A = PWM_70_DEGREE;
            _delay_ms(500);
        }
        else if(temp>=710 && temp<=1024){
             OCR1A = PWM_95_DEGREE;
            _delay_ms(500);
        }
        else{
            OCR1A=0;
            _delay_ms(500);
        }
