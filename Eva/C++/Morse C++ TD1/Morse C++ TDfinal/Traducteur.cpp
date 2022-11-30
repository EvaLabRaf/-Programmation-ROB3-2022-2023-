#include "Traducteur.h"
#include "LettreMorse.h"

Traducteur::Traducteur() {

}

String Traducteur::codemorse(String mot) { //Affichage caractère par caractère d'un mot

	for(const char &lettre:mot) {
 	 String a = LettreMorse::traducteurmorse(lettre);
  }
}



void Traducteur::clign(String mot) { //Faire s'allumer pour chaque . ou - à un temps plus ou moins long selon la lettre 
  for (const char &lettre:mot) { 
    if (LettreMorse::traducteurmorse(lettre) == ".") { //Si on a un "." on allume une durée donnée puis on eteint
      int Time1=millis(); //Pour pouvoir inserer la valeur du temps de début de boucle actuel facilement 
      while (millis()<Time1 + 250) {
        digitalWrite(LED_BUILTIN, HIGH);
      }
      while (millis()<Time1 + 250 + 750) { 
        digitalWrite(LED_BUILTIN, LOW);
      }
    }
    if (LettreMorse::traducteurmorse(lettre) == "-") { //Si on a un "-" on allume trois fois plus longtemps que pour "." puis on éteint
      int Time2=millis(); //Pour pouvoir inserer la valeur du temps de début de boucle actuel facilement 
      while (millis()< Time2 + 750) { //Allumer pendant 750 msecondes
        digitalWrite(LED_BUILTIN, HIGH);
      }
      
      while (millis()< Time2 + 750 + 750) { //Pause pendant 750 msecondes 
        digitalWrite(LED_BUILTIN, LOW);
      }
      } 
 }
}