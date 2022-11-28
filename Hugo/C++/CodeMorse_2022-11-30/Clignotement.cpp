#include "Clignotement.hpp"

Clignotement::Clignotement(){};



void Clignotement::tiret() {   ///Fonction permettant de communiquer un tiret avec Arduino
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void Clignotement::point() {   ///Fonction permettant de communiquer un point avec Arduino
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void Clignotement::clignotementdelay(String x) {   ///Fonction permettant de communiquer un tiret ou un point selon le mot demandé avec Arduino
  for (int i = 0; i < x.length(); i++) {
    if (x.charAt(i) == '.') {
      point();
    }else if (x.charAt(i) == '-'){
      tiret();
    }
  }
}

void Clignotement::clignotementmillis(String x) {   ///Fonction permettant de communiquer un tiret ou un point selon le mot demandé avec Arduino
  for (int i = 0; i < x.length();i++) {
    if (x.charAt(i)=='.'){
      millisactuel = millis();
      while ((millis()- millisactuel) < 1000){
        digitalWrite(LED_BUILTIN, HIGH);
      }
      while ((millis()-millisactuel) < 2000){
        digitalWrite(LED_BUILTIN, LOW);
      }
    }
    else if (x.charAt(i)=='-'){
      millisactuel = millis();
      while ((millis()- millisactuel) < 2000){
        digitalWrite(LED_BUILTIN, HIGH);
      }
      while ((millis()-millisactuel) < 3000){
        digitalWrite(LED_BUILTIN, LOW);
      }
    } 
  }
}