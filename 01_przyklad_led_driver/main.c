
#include <avr/io.h>
#include "../_drivers_port_avr/led.h"

#define F_CPU 14745600UL
#include <util/delay.h>

int main(void)
{
  led_init();
    
  // wersja 0
  while (1)
  {
    led_write(LED0);
    _delay_ms(250);
    led_write(LED7);
    _delay_ms(250);
  }
}
