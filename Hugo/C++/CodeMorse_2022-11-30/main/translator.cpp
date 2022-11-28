#include "translator.h"
#include "Arduino.h"
// Constructeur, créer l'objet et lui donner une valeur de base

translator::translator(int pin)
{
   mor = morse(pin);
}

// Constructeur
translator::translator()
{
   mor = morse();
}

// Cette partie sert a changer les charactère alphabétique en caractère morse
void translator::translate(char c)
{
   switch (c)
   {
   case 'a':
      action(" .-");
      break;
   case 'b':
      action("-...");
      break;
   case 'c':
      action("-.-.");
      break;
   case 'd':
      action("-..");
      break;
   case 'e':
      action(".");
      break;
   case 'f':
      action("..-.");
      break;
   case 'g':
      action("--.");
      break;
   case 'h':
      action("....");
      break;
   case 'i':
      action("..");
      break;
   case 'j':
      action(".---");
      break;
   case 'k':
      action("-.-");
      break;
   case 'l':
      action(".-..");
      break;
   case 'm':
      action("--");
      break;
   case 'n':
      action("-.");
      break;
   case 'o':
      action("---");
      break;
   case 'p':
      action(".--.");
      break;
   case 'q':
      action("--.-");
      break;
   case 'r':
      action(".-.");
      break;
   case 's':
      action("...");
      break;
   case 't':
      action("-");
      break;
   case 'u':
      action("..-");
      break;
   case 'v':
      action("...-");
      break;
   case 'w':
      action(".--");
      break;
   case 'x':
      action("-..-");
      break;
   case 'y':
      action("-.--");
      break;
   case 'z':
      action("--..");
      break;
   case ' ':
      action(" ");
      break;
   default:
      break;
   }
}

//Cette partie permet de changer notre chaine de caractere en morse en allumage de la led grace aux fonction dot/dash/space
void translator::action(char *morse)
{
   for (int i = 0; i < strlen(morse); i++)
   {
      if (morse[i] == '.')
      {
         mor.dot();
      }
      else if (morse[i] == '-')
      {
         mor.dash();
      }
      else if (morse[i] == ' ')
      {
         mor.space();
      }
      else
      {
         break;
      }
   }
}


//Créé une liste de dash/dot/space à partir de chaque lettre en appelant la fonction translate
void translator::translateword(char *word)
{
   for (int i = 0; i < strlen(word); i++)
   {
      translate(word[i]);
   }
}