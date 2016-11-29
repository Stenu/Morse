//Morse.cpp
#include "Arduino.h"
#include "Morse.h"
Morse::Morse(int pin)
{
 pinMode(pin, OUTPUT);
 _pin = pin;
}
void Morse::dot()
{
 digitalWrite(_pin, HIGH);
 delay(250);
 digitalWrite(_pin, LOW);
 delay(250); 
}
void Morse::dash()
{
 digitalWrite(_pin, HIGH);
 delay(1000);
 digitalWrite(_pin, LOW);
 delay(250);
}
void Morse::letter(char letter)
{
	switch (letter) {
		case 'A':
		  	dot();
			dash();
		  break;
		case 'B':
			dash();
			dot();
			dot();
			dot();
		  break;
		case 'C':
		  	dash();
			dot();
			dash();
			dot();
		  break;
		case 'D':
		  	dash();
			dot();
			dot();
		  break;
		case 'E':
		  	dot();
		  break;
		case 'F':
		  	dot();
			dot();
			dash();
			dot();
		  break;
		case 'G':
		  	dash();
			dash();
			dot();
		  break;
		case 'H':
		  	dot();
			dot();
			dot();
			dot();
		  break;
		case 'I':
		  	dot();
			dot();
		  break;
		case 'J':
		  	dot();
			dash();
			dash();
			dash();
		  break;
		case 'K':
			dash();
		  	dot();
			dash();
		  break;
		case 'L':
		  	dot();
			dash();
			dot();
			dot();
		  break;
		case 'M':
		  	dash();
			dash();
		  break;
		case 'N':
		  	dash();
			dot();
		  break;
		case 'O':
		  	dash();
			dash();
			dash();
		  break;
		case 'P':
		  	dot();
			dash();
			dash();
			dot();
		  break;
		case 'Q':
			dash();
			dash();
		  	dot();
			dash();
		  break;
		case 'R':
		  	dot();
			dash();
			dot();
		  break;
		case 'S':
		  	dot();
			dot();
			dot();
		  break;
		case 'T':
			dash();
		  break;
		case 'U':
			dot();
		  	dot();
			dash();
		  break;
		case 'V':
			dot();
			dot();
		  	dot();
			dash();
		  break;
		case 'W':
		  	dot();
			dash();
			dash();
		  break;
		case 'X':
			dash();
			dot();
		  	dot();
			dash();
		  break;
		case 'Y':
			dash();
			dot();
			dash();
			dash();
		  break;
		case 'Z':
		  	dash();
			dash();
			dot();
			dot();
		  break;
		default:
		  // if nothing else matches, do the default
		  // default is optional
		break;
		
  }
delay(3000);

}
