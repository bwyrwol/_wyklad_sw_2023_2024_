
#ifndef LED_H
#define LED_H

#include <avr/io.h>
#include <stdint.h>

/*
 * PORT FOR AVR
 */
#define LED_PORT   PORTA
#define LED_DDR    _SFR_IO8(_SFR_IO_ADDR(LED_PORT)-1)
#define LED_PIN    _SFR_IO8(_SFR_IO_ADDR(LED_PORT)-2)

#define LED0 0x01
#define LED1 0x02
#define LED2 0x04
#define LED3 0x08
#define LED4 0x10
#define LED5 0x20
#define LED6 0x40
#define LED7 0x80

void led_init(void);
uint8_t led_read(void);
void led_write(uint8_t led_state);

#endif//LED_H
