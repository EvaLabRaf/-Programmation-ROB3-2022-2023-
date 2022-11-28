#include "CodeMorse.hpp"

CodeMorse::CodeMorse(){};

void CodeMorse::textversmorse(){  ///fonction permettant de demander un mot et retournant la traduction en Morse
    char text[82] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','1','2','3','4','5','6','7','8','9','0','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    String morse[82] = {".-","-...","-.-.","-..",".","..-","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----",".-","-...","-.-.","-..",".","..-","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    Serial.println("Ecris le mot que tu veux traduire:\n");
    Serial.println(mot);
    
      Serial.println("La traduction est:\n");
 
      for (int i = 0; i < mot.length(); ++i){
          for (int j = 0; j < 82; j++){
              if (mot.charAt(i) == text[j]){
                Serial.print(morse[j]);
                morsemot = morsemot + morse[j];
              }
          }
      }
  
}
