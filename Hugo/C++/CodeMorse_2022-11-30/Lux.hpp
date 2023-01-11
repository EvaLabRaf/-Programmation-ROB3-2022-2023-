#ifndef LUX_H
#define LUX_H
#include "Arduino.h"

/**
Je vais ici créer la classe Lux qui servira a faire s'allumer la led de la carte arduino,
ainsi que toutes les variables que la fonction va utiliser pour le faire.
Le unsigned long permet d'avoir des valeurs allant jusqu'à 2^32 -1
Instant time est la variable qui permet de stocker le temps qui s'est passé depuis le lancement du code.
La fonction MorseToLight permet de transformer chaque caracteres d'une liste en une certaine durée d'impulsion lumineuse.
*/

class Lux{
  public:
    Lux();
    unsigned long InstantTime;
    void MorseToLight(String x);
};

#endif