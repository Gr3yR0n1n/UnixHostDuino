/*
 * Copyright (c) 2019 Brian T. Park
 * MIT License
 * 
 * Parts derived from the Arduino SDK
 * Copyright (c) 2005-2013 Arduino Team
 */

#ifndef UNIX_HOST_DUINO_ARDUINO_H
#define UNIX_HOST_DUINO_ARDUINO_H

#include "Print.h"
#include "StdioSerial.h"

// xx.yy.zz => xxyyzz (without leading 0)
#define UNIX_HOST_DUINO_VERSION 103
#define UNIX_HOST_DUINO_VERSION_STRING "0.1.3"

// Used by digitalRead() and digitalWrite()
#define HIGH 0x1
#define LOW  0x0

// Used by pinMode()
#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2

// Various math constants.
#define PI 3.1415926535897932384626433832795
#define HALF_PI 1.5707963267948966192313216916398
#define TWO_PI 6.283185307179586476925286766559
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105
#define EULER 2.718281828459045235360287471352

#define SERIAL  0x0
#define DISPLAY 0x1

#define LSBFIRST 0
#define MSBFIRST 1

#define CHANGE 1
#define FALLING 2
#define RISING 3

// Arbitrarily define the pin for the LED_BUILTIN
#define LED_BUILTIN 1

extern "C" {

void delay(unsigned long ms);
void yield();
unsigned long millis();
unsigned long micros();
void digitalWrite(uint8_t pin, uint8_t val);
int digitalRead(uint8_t pin);
void pinMode(uint8_t pin, uint8_t mode);

/** Provided in the client code's *.ino file. */
void setup();

/** Provided in the client code's *.ino file. */
void loop();

}

#endif
