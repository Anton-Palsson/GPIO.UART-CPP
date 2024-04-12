#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

#define RX_BUFFER_SIZE 64
#define BUTTON_PIN PB1
#define SERIAL_8N1 ((1 << UCSZ00) | (1 << UCSZ01))
#define LED_PIN (1 << PB0)
#define LedOn(bool) if(bool) { PORTB |= LED_PIN; } else { PORTB &= ~LED_PIN; }

void uart_init(unsigned long baud);

void uart_putchar(unsigned char data);

char uart_getchar(void);

void uart_transmit_string(const char* str);

void uart_receive_string(char* str, int max_length);

void uart_echo();

void uart_rec_str(char* str, int max_length);

void parse_led_command(const char* cmd);





#endif




