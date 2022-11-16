#include <Arduino.h>
#ifndef LETTREMORSE_H 
#define LETTREMORSE_H

class LettreMorse {
  public:
    LettreMorse();
    static String traducteurmorse(char lettre);
    

};

#endif