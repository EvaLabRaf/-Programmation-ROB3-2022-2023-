#include "Traducteur.h"
#include "LettreMorse.h"

String mot="selma florian 1234"; //Entrer la phrase à traduire (pas de majuscules, ni d'accents pour les lettres, les caractères spéciaux seront des espaces)

Traducteur t=Traducteur();

void setup() {  //Setup pour la carte arduino
  Serial.begin (9600);
  pinMode (LED_BUILTIN, OUTPUT);
  
}

void loop() { 
  t.clign(mot);
 Serial.print(mot);
}
