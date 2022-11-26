#include <Arduino.h>
#include <LettreMorse.h>
#include <Traducteur.h>


void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}



#include<stdio.h>
#include<conio.h>
#include<string.h>

void saisie_m(char[],char[37][6],char[]);
void menu(char[],char[],char[37][6],int*);
void saisie_t(char[]);
int taille_mot(char[]);
void affiche_morse(char[],char[],char[37][6]);
void affich_t(char[],char[],int);
void help(char[37][6],char[]);

/******************************************************************************/
         /*fonction affichant tout le tableau du code morse pouvant
         etre code ou decode par ce programme*/

void help(char m[37][6],char t[])
{int i;
clrscr();

for(i=0;i<37;i++)
{
printf(" %c :  %s\n",t[i],m[i]);
}

}

/******************************************************************************/
                     /*fonction affichant le menu du programme*/

void menu(char c[],char t[],char m[37][6],int *k)
{
printf("\n\n\t\t\t* Le code morse *\n\n\n");
printf(" Vous desirez :\n\n");
printf("\t1 : Coder un texte en morse\n\n");
printf("\t2 : Decoder un texte morse\n\n");
printf("\t3 : Afficher le tableau du code morse\n\n");
printf("\t4 : Quitter le programme\n\n\n");
printf("\t\t\tFaites votre choix...\n");
textcolor(12);
cprintf("\n\n\n\n                  Realise par 2PAC esgi (2pac 4 ever!!)");

 switch(getch())
 {
 case'1':saisie_t(c);
 			clrscr();
         printf("\n voici - %s - code en morse\n\n",c);
         affiche_morse(c,t,m);break;
 case'2':saisie_m(c,m,t);getch();break;
 case'3':help(m,t);getch();break;
 case'4':*k=0;break;
 default:printf("\a");
 }
}

/******************************************************************************/
                         /*fonction permettant la saisie du texte*/

void saisie_t(char c[])
{
clrscr();
printf("\t\t\t* Codage d'un texte en morse *\n\n\n");
printf("\tVeuillez saisir votre phrase a coder en morse (200 caracteres max)\n\n  ->  ");
gets(c);
}

/******************************************************************************/
                     /*fonction permettant la saisie du texte morse*/

void saisie_m(char c[],char m[37][6],char t[])
{
char z[1][6],x[200];
int i,k=0,ex,zb=1;

do{
clrscr();
printf("\t\t\t* Decodage d'un texte morse *\n\n\n");
printf("\tSaisissez votre texte caractere par caractere\n\n");
printf("\tA l'affichage de la fleche => appuyer sur Entree pour continuer,\n\n");
printf("\tsur h pour afficher le tableau du code morse\n\n");
printf("\tou sur Esc pour quitter la saisie et afficher le texte \n\n\t\t(PS: // represente l'espace)\n\n\n\n");

printf("Saisir un caractere en morse : ");
gets(z[0]);

for(i=0;i<37;i++)
{
if(strcmp(z[0],m[i])==0){x[k]=i;k++;ex=1;i=37;}else{ex=0;}
}

if(ex==0){printf("\n\nCe caractere morse n'existe pas !");}

printf("\n =>\n\n\n");

switch(getch())
{
case'H':
case'h':help(m,t);getch();break;
case 27:zb=0;break;
}
}while(zb!=0);
printf("Voici votre texte decode : ");
affich_t(t,x,k);
}

/********************************************************************************/
                         /*fonction affichant le texte*/

void affich_t(char t[],char x[],int k)
{
int i;

for(i=0;i<k;i++)
{
printf("%c",t[x[i]]);
}

}

/********************************************************************************/
                           /*fonction calculant la taille d un mot ou texte*/

int taille_mot(char c[])
{
int i=0;
while(c[i]!='\0'){i++;}
return i;
}

/******************************************************************************/
                 /*fonction affichant le texte code en mose*/

void affiche_morse(char c[],char t[],char m[37][6])
{
int i,j,b=0;

for(i=0;i<taille_mot(c);i++)
{
for(j=0;j<37;j++)
{

if(c[i]==t[j])
	{
   if(c[i]==' '){printf(" ");}
   if(j!=36){b++;}
   if(b==12){printf("\n\n");}
   if(j==36){textcolor(12);}else{textcolor(10);}
   cprintf("%s",m[j]);
   if((c[i+1]!='\0')&&(c[i+1]!=' ')&&(c[i]!=' ')){printf(" / ");}
   if(c[i]==' '){printf(" ");}
   }

}

}
getch();
}

/********************************************************************************/
/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
/******************************************************************************/

                     /*ici se lance le programme*/

main()
{
char t[37]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
				's','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0',
            ' '},
            m[37][6]={{".-"},{"-..."},{"-.-."},{"-.."},{"."},{"..-."},{"--."},{"...."},{".."},
  				   {".---"},{"-.-"},{".-.."},{"--"},{"-."},{"---"},{".--."},{"--.-"},{".-."},
				   {"..."},{"-"},{"..-"},{"...-"},{".--"},{"-..-"},{"-.--"},{"--.."},{".----"},
				   {"..---"},{"...--"},{"....-"},{"....."},{"-...."},{"--..."},{"---.."},{"---."},
				   {"-----"},{"//"}},c[200];

int i,k=1,j,n;

do
{
clrscr();
menu(c,t,m,&k);

}while(k!=0);
}