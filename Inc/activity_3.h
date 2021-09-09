#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
#define PWM_20_DEGREE (201) 
#define PWM_40_DEGREE (401) 
#define PWM_70_DEGREE (701) 
#define PWM_95_DEGREE (901) 
#include <util/delay.h>
#include <avr/io.h>
void InitTimer();
void activity3_PWM(uint16_t temp);
#endif