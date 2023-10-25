/*
 * timer.c
 *
 * Created: 25.10.2023 13:08:14
 *  Author: oem1
 */

#include "timer.h"

void timer_init()
{
	TCCR0 |= (1 << WGM01);
	OCR0 = 230;
	TCCR0 |= (1 << CS01) | (1 << CS00);
	TIMSK |= (1 << OCIE0);
	sei();
}

ISR(TIMER0_COMP_vect)
{
	timer_callback();
}

void timer_callback(void)
{
	
}