#include "CodeMorse.hpp"   ///Importation des fichiers
#include "Clignotement.hpp"

CodeMorse cm;
Clignotement cl;

void setup() {   ///Téléversement du code pour le clignotement sur la Arduino

  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

if (Serial.available()){
      cm.mot = Serial.readString();
      cm.textversmorse();
      cl.clignotementmillis(cm.morsemot);
      //cl.clignotementdelay(cm.morsemot);
}

}