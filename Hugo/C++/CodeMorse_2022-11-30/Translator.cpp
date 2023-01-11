#include "Translator.hpp"

Translator::Translator(){};

/**
La fonction CharacterToMorse va chercher dans une liste de 63 characteres la position de chaques lettres dans celle-ci, le tout dans l'ordre de la phrase.
On va ensuite chercher la suite de points et traits qui correspondent a ce caractere, a la meme position dans une deuxieme liste,
afin de former une nouvelle suite de caractere composé de ceux-ci.
Evidemment les carcteres qui ne sont pas dans cette liste ne sont pas pris en compte, comme par exemple les ponctuactions,
on pourrait neanmoins les-y rajouter car ils ont une traduction en morse.
On place un " " à la fin des caracteres de chaque lettre pour faire attendre la led un certains temps entre chaque lettre.
*/

void Translator::CharacterToMorse(){  
    char Characters[63] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','1','2','3','4','5','6','7','8','9','0','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    String Morse[63] = {"/",".- ","-... ","-.-. ","-.. ",". ","..- ","--. ",".... ",".. ",".--- ","-.- ",".-.. ","-- ","-. ","--- ",".--. ","--.- ",".-. ","... ","- ","..- ","...- ",".-- ","-..- ","-.-- ","--.. ",".----/","..---/","...--/","....-/","...../","-..../","--.../","---../","----./","-----/",".-/","-.../","-.-./","-../","./","..-/","--./","..../","../",".---/","-.-/",".-../","--/","-./","---/",".--./","--.-/",".-./",".../","-/","..-/","...-/",".--/","-..-/","-.--/","--../"};
      
      Serial.print("The translation of ");
      Serial.print(CharacterWord);
      Serial.println("is: ");

      for (int i = 0; i < CharacterWord.length(); i++){
          for (int j = 0; j < 63; j++){
              if (CharacterWord.charAt(i) == Characters[j]){
                Serial.print(Morse[j]);
                MorseWord = MorseWord + Morse[j];
              }
          }
      }
  
}
