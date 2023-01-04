/*prg to check whether given character is alphabet,digit
or spcial character*/
#include <stdio.h>
#include <conio.h>
void main ()
{
char ch;
clrscr();
printf ("\n enter any character");
scanf ("%c",&ch);
if (ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    printf ("\n %c is alphabet",ch);
else if (ch>='0' && ch<='9')
    printf ("\n %c is digit",ch);
else
    printf ("\n is a spcial character",ch);
getch();
}
