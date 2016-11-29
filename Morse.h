//Morse.h
#ifndef Morse_h
#define Morse_h
#include "Arduino.h"
class Morse
{
 public:
 Morse(int pin);
 void dot();
 void dash();
 void letter(char a);
 private:
 int _pin;
};
#endif
