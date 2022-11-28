#ifndef CODEMORSE_H
#define CODEMORSE_H

#include "Arduino.h"

class CodeMorse{   /// Definition de ma classe Lettre

  private:
    char text = 0;
    

  public:
    CodeMorse();
    String morsemot;
    String mot;
    String morse;
    void traduction(char text);
    void textversmorse();
};

#endif

