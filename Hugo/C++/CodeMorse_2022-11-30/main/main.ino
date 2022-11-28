#include "morse.h"
#include "translator.h"

//morse code blink on the LED_BUILTIN

void setup() {
  char X;
  Serial.begin(9600);
  Serial.println("Entrez votre message")
  Serial.readString()
  
  cin >> X;
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
}