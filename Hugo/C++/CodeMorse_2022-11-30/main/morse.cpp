#include "morse.h"
#include "Arduino.h"
//morse class definition

morse::morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

morse::morse()
{
  pinMode(LED_BUILTIN, OUTPUT);
  _pin = LED_BUILTIN;
}


//Ces trois fonctions servent a allumer la led en fonction des caracteres donnés
void morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);
}

void morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

void morse::space()
{