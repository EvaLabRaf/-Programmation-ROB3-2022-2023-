#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include "Arduino.h"

/**
Je vais ici créer la classe Translator qui servira a faire la traduction des mots en morse,
ainsi que toutes les variables que la fonction va utiliser pour le faire.
MorseWord est la variable qui va recevoir le texte traduit en trait, points, espace et slash afin d'ensuite allumer la led.
CharacterWord est la variable qui recoit le texte initial en alphabet.
Morse est la variable qui prendra la valeur en morse de chaque lettre avant de les mettre fans MorseWord.
La fonction CharacterToMorse sert a traduire une phrase en alphabet sous forme de liste, en une suite de trait, point, slash, espace dans une autre liste 
qui sera ensuite envoyé dans la fonction MorseToLight de l'extension Lux.
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

