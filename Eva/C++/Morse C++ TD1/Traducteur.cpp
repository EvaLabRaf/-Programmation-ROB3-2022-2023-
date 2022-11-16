#include "Traducteur.h"
#include "LettreMorse.h"

Traducteur::Traducteur() {

}

String Traducteur::codemorse(String mot) { //Affichage caractère par caractère d'un mot

	for(const char &c:mot) {
 	 String a = LettreMorse::traducteurmorse(c);
  }
}

void Traducteur::clign(String mot) { //Faire s'allumer pour chaque . ou - à un temps plus ou moins long selon le mot
  for (const char &l:mot) { 
    if (LettreMorse::traducteurmorse(l) == ".") { //si on a un . on allume une durée donnée puis on eteint
      digitalWrite(LED_BUILTIN, HIGH); 
      delay (400);
      digitalWrite(LED_BUILTIN, LOW);
    }
    if (LettreMorse::traducteurmorse(l) == "-") { //si on a un - on allume une durée plus longue que pour . puis on éteint
      digitalWrite(LED_BUILTIN, HIGH); 
      delay(1200);
      digitalWrite(LED_BUILTIN, LOW); 
      }
  } 
  Serial.print ("\n"); //separer chaque mot pour meilleure visibilité

}