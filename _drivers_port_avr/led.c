
#include "led.h"

void led_init(void)
{
  LED_DDR  = (LED7 | LED6 | LED5 | LED4 | LED3 | LED2 | LED1 | LED0);
  LED_PORT = (LED7 | LED6 | LED5 | LED4 | LED3 | LED2 | LED1 | LED0);
}

uint8_t led_read(void)
{
  return ~LED_PORT;
}

void led_write(uint8_t led_state)
{
  LED_PORT = ~led_state;
}
