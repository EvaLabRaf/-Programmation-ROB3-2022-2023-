#include <Arduino.h>
#include "LettreMorse.h"

class Traducteur {
  public:
    Traducteur (); //Constructeur
    String codemorse(String mot); //Fonction pour balayer un mot lettre par lettre et le traduire en morse
    void clign(String mot); //Fonction pour faire clignoter la led de la carte Arduino
    
};