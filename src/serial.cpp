#include <avr/io.h>
#include <stdio.h>
#include <string.h>
#include <util/delay.h>
#include <serial.h>
#include <Arduino.h>

int main(void) {
  
  
  /*DDRB &= ~(1 << BUTTON_PIN); // SÄTTER PIN 9/KNAPP TILL INPUT/0
  PORTB |= (1 << BUTTON_PIN); // PULL UP

  DDRB |= (1 << LED_PIN); // LED TILL OUTPUT

  int prev_button_state = 1;

  while (1) {
    int button_state = !(PINB & (1 << BUTTON_PIN));


    if (button_state && !prev_button_state) {
      PORTB ^= (1 << LED_PIN);
    }

    prev_button_state = button_state;

    _delay_ms(50);*/

    uart_init(9600); // Initiera UART med baudhastighet 9600
    //DDRB |= LED_PIN; // Sätt LED-pinne som utgång

    //char buffer[64]; // Buffert för att lagra inkommen rad

    //while (1) {
        //uart_rec_str(buffer); // Läs in en rad
        //parse_led_command(buffer); // Parsa kommandot och kontrollera LED-tillståndet
    //}


 // Skicka ett enskilt tecken över UART
    //uart_putchar('A');

    // Skicka en sträng över UART
    //uart_transmit_string("Hello, world!\n");

    // Ta emot ett enskilt tecken över UART och skicka tillbaka samma tecken
    //uart_echo();

    // Läs in en rad tills \n (line feed)
    //char received_str[64];
    //uart_rec_str(received_str);
    //uart_transmit_string("Received string: ");
    //uart_transmit_string(received_str);

    // Parsa kommandot för att kontrollera LED-tillståndet
   // parse_led_command(received_str);
   Serial.println("Hello world");

    return 0;
}
