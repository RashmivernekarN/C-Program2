/*prg to find check whether the given year
is leap year or not using if else*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int year;
clrscr();
printf ("\n enter any year");
scanf ("%d",&year);
if (year%4==0)
    printf ("\n is leap year");
else
    printf ("\n is not leap year");
getch();
}
