/**
 * @file activity_3.c
 * @author vinod kumar reddy jogappagari
 * @brief  automatic seat heater
 * @version 0.1
 * @date 2021-09-09
 * 
 * @copyright Copyright (c) 2021
 * 
#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
#define F_CPU 16000000UL 
#define USART_BAUDRATE 9600
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) 
#include <util/delay.h>
#include <avr/io.h>
void USARTInit();
int USARTRead();
void activity4_USARTWrite(uint16_t temp);
#endif 