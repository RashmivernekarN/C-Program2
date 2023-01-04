/*prg to check whether given character is alphabet,digit
or spcial character by using ascii values*/
#include <stdio.h>
#include <conio.h>
void main ()
{
char ch;
clrscr();
printf ("\n enter any character");
scanf ("%c",&ch);
if (ch>=65 && ch<=90 || ch>=97 && ch<=122)
    printf ("\n %c is alphabet",ch);
else if (ch>=48 && ch<=57)
    printf ("\n %c is digit",ch);
else
    printf ("\n is a spcial character",ch);
getch();
}
