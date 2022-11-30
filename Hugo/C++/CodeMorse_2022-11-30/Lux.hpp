#ifndef LUX_H
#define LUX_H
#include "Arduino.h"

/**
Je vais ici créer la classe Lux qui servira a faire s'allumer la led de la carte arduino,
ainsi que toutes les variables que la fonction va utiliser pour le faire.
*/

class Lux{
  public:
    Lux();
    int InstantTime;
    void MorseToLight(String x);
};

#endif