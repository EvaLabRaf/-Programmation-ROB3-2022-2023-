#include <Arduino.h>
#ifndef LETTREMORSE_H 
#define LETTREMORSE_H

class LettreMorse {
  public:
    LettreMorse(); //Constructeur
    static String traducteurmorse(char lettre); //Fonction pour traduire une lettre classique en code morse
    

};

#endif