#include "Lux.hpp"

Lux::Lux(){};

/**
La fonction Lux va reprendre la chaine de caractere en morse et va un par un, 
allumer et ou eteindre la led une pendant une certaine duree en fonction de si le caractere est un trait, un point ou un espace.
Dans chaque cas, la fonction millis prend la valeur du temps depuis le lancement du programme en ms.
On prend donc cette mesure au début de chaque allumage de led puis en fonction du temps qu'on veut, 
on calcul la difference entre le temps au début et le temps actuel, on attend qu'il soit superieur au temps qu'on a choisis
Pour le point, on allume 1s puis on coupe 1s.
Pour le trait, on allume 2s puis on coupe 1s.
Pour l'espace, on coupe 3s.
*/
void Lux::MorseToLight(String x) {
  for (int i = 0; i < x.length();i++) {

    if (x.charAt(i)=='.'){
      InstantTime = millis();
      while ((millis()- InstantTime) < 1000){
        digitalWrite(LED_BUILTIN, HIGH);
      }
      while ((millis()-InstantTime) < 2000){
        digitalWrite(LED_BUILTIN, LOW);
      }
    }

    else if (x.charAt(i)=='-'){
      InstantTime = millis();
      while ((millis()- InstantTime) < 2000){
        digitalWrite(LED_BUILTIN, HIGH);
      }
      while ((millis()-InstantTime) < 3000){
        digitalWrite(LED_BUILTIN, LOW);
      }
    }

    else if (x.charAt(i)==' '){
      InstantTime = millis();
      while ((millis() - InstantTime) <2000){
      }
    } 
  }
}