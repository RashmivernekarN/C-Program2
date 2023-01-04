/*prg to demonstrate the switch statement*/
#include <stdio.h>
#include <conio.h>
void main ()
{
char ch;
clrscr();
printf ("\n enter any character");
scanf ("%c",&ch);
switch(ch)
{
 case 'R':
 case 'r':
       printf ("\n Red");
       break;
 case 'G':
 case 'g':
       printf ("\n Green");
       break;
 case 'B':
 case 'b':
       printf ("\n Blue");
       break;
 case 'P':
 case 'p':
       printf ("\n Pink");
       break;
 default:
       printf ("\n Invalid choice");
}
getch();
}
