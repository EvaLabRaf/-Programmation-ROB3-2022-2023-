#include "Traducteur.h"
#include "LettreMorse.h"

String mot="Jimmy";

Traducteur t=Traducteur();

void setup() {  //Setup pour la carte arduino
  Serial.begin (9600);
  pinMode (LED_BUILTIN, OUTPUT);
  
}

void loop() { 
  t.clign(mot);
 
}
