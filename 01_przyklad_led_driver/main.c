
#include <avr/io.h>
#include "led.h"
#include "timer.h"

#define F_CPU 14745600UL
#include <util/delay.h>

volatile uint16_t delay_ms;

void timer_callback(void) // 1ms
{
	if (delay_ms > 0)
		--delay_ms;
}

void delay(uint16_t delay_in_ms)
{
	delay_ms = delay_in_ms;
	while (delay_ms != 0)
	{
	}
}


int main(void)
{
  led_init();
    
  // wersja 0
  while (1)
  {
    led_write(LED0);
    //_delay_ms(250);
	delay(100);
    led_write(LED7);
    //_delay_ms(250);
	delay(100);
  }
}
