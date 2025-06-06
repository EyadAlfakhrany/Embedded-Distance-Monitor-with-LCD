/*
 * LED_Core.c
 *
 * Created: 9/15/2023 10:03:12 AM
 *  Author: Eyad
 */ 

#include "LED_Core.h"


void LED_Init(void)
{
	SET_BIT(DDRC , 2);
}

void LED_ON(void)
{
	SET_BIT(PORTC , 2);
}

void LED_OFF(void)
{
	CLR_BIT(PORTC , 2);
}

void LED_Toggle(void)
{
	TOGGLE_BIT(PORTC , 0);
}