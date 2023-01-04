/*prg to check whether given character is alphabet,digit
or spcial character by using built in function*/
#include <stdio.h>
#include <conio.h>
void main ()
{
char ch;
clrscr();
printf ("\n enter any number");
scanf ("%c",&ch);
if (isalphabet (ch))
    printf ("\n alphabet");
else if (isdigit (ch))
    printf ("\n digit");
else
    printf ("\n is a spcial character");
getch();
}
