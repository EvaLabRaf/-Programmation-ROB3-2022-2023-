#include <Arduino.h>
#include "LettreMorse.h"

class Traducteur {
  public:
    Traducteur ();
    String codemorse(String mot);
    void clign(String mot);
    
};