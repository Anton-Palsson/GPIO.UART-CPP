#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define BUTTON_PIN PB1
#define LED_PIN PB0

void setup() {
  DDRB &= ~(1 << BUTTON_PIN);
  PORTB |= (1 << BUTTON_PIN);
  DDRB |= (1 << LED_PIN);
}

void toggleLed() {
  PORTB ^= (1 << LED_PIN); // Växlar tillståndet för LED:en
}

bool isButtonPressed() {
  return !(PINB & (1 << BUTTON_PIN));
}

void buttonlogic() {
  setup();

  int prev_button_state = 1;

  while (1) {
    int button_state = isButtonPressed();

    if (button_state && !prev_button_state) {
      toggleLed();
    }

    prev_button_state = button_state;

    _delay_ms(50);
  }
}