/*
 * timer.h
 *
 * Created: 25.10.2023 13:08:38
 *  Author: oem1
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include <avr/interrupt.h>

void timer_init();
void timer_callback(void) __attribute__((weak));

#endif /* TIMER_H_ */