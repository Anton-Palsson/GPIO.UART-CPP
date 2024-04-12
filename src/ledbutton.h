#ifndef __LEDBUTTON_H__
#define __LEDBUTTON_H__

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define BUTTON_PIN PB1
#define LED_PIN PB0

void setup();
void toggleLed();
bool isButtonPressed();
void buttonlogic();

#endif

