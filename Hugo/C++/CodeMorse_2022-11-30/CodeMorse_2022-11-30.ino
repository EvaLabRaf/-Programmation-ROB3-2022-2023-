#include "Translator.hpp"
#include "Lux.hpp"

Translator cm;
Lux cl;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

/**
Le programme est a usage unique, il faut reteleverse avant de rentrer une nouvelle phrase a traduite dans le moniteur.
Les fonctions sont expliquées dans les fichiers complementaires. 
Globalement, on prend une chaine de caractere qu'on nomme CharacterWord, puis on la traduit en morse avec CharacterToMorse 
et finalement on transforme la chaine de carcatere morse en lumiere avec MorseToLight.
Le code a ete cree sur arduino, je ne sais donc pas si il marche sur vscode.
*/
void loop() {
  if (Serial.available()){
    cm.CharacterWord = Serial.readString();
    cm.CharacterToMorse();
    cl.MorseToLight(cm.MorseWord);
  }
}