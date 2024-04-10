#include <avr/io.h>
#include <util/delay.h>
#define BUTTON_PIN PB1
#define LED_PIN PB0



/*int main() {
  DDRB &= ~(1 << BUTTON_PIN); // SÄTTER PIN 9/KNAPP TILL INPUT/0
  PORTB |= (1 << BUTTON_PIN); // PULL UP

  DDRB |= (1 << LED_PIN); // LED TILL OUTPUT

  int prev_button_state = 1;

  while (1) {
    int button_state = !(PINB & (1 << BUTTON_PIN));


    if (button_state && !prev_button_state) {
      PORTB ^= (1 << LED_PIN);
    }

    prev_button_state = button_state;

    _delay_ms(50);
  }






 return 0;

}*/