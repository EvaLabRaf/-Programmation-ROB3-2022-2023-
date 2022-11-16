#include "LettreMorse.h"

LettreMorse::LettreMorse() {
  
}
static String LettreMorse::traducteurmorse(char lettre) //Création d'une fonction pour traduire de l'alphabet classique en alphabet morse
{
	//Après avoir trouvé la commande switch-case-default j'ai décidé de l'utiliser a la place de nombreux "if"
  // pour tester les lettres et renvoyer la traduction morse d'une lettre 
	switch (lettre) {
	case 'a':
		return ".-";
	case 'b':
		return "-...";
	case 'c':
		return "-.-.";
	case 'd':
		return "-..";
	case 'e':
		return ".";
	case 'f':
		return "..-.";
	case 'g':
		return "--.";
	case 'h':
		return "....";
	case 'i':
		return "..";
	case 'j':
		return ".---";
	case 'k':
		return "-.-";
	case 'l':
		return ".-..";
	case 'm':
		return "--";
	case 'n':
		return "-.";
	case 'o':
		return "---";
	case 'p':
		return ".--.";
	case 'q':
		return "--.-";
	case 'r':
		return ".-.";
	case 's':
		return "...";
	case 't':
		return "-";
	case 'u':
		return "..-";
	case 'v':
		return "...-";
	case 'w':
		return ".--";
	case 'x':
		return "-..-";
	case 'y':
		return "-.--";
	case 'z':
		return "--..";
  default :
  return " ";
	}
}