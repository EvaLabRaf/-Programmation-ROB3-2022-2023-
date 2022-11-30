#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include "Arduino.h"

/**
Je vais ici créer la classe Translator qui servira a faire la traduction des mots en morse,
ainsi que toutes les variables que la fonction va utiliser pour le faire
*/

class Translator{
  public:
    Translator();
    String MorseWord;
    String CharacterWord;
    String Morse;
    void CharacterToMorse();
};

#endif

