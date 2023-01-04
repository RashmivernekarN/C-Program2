/*prg to read a character and check whether it is a vowel or not*/
#include <stdio.h>
#include <conio.h>
void main ()
{
char ch;
clrscr();
printf ("\n enter any number");
scanf ("%c",&ch);
switch(ch)
{
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
 case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 printf ("\n %c is a vowel",ch);
 break;
 default:
 printf ("\n %c is not a vowel",ch);
}
getch();
}
