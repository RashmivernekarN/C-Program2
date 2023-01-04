/*prg to find check whether the given number
is divisible by 5 and 7 or not using if else*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int n;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
if (n%5==0 && n%7==0)
    printf ("\n %d is divisible by 5 and 7",n);
else
    printf ("\n %d is not divisible by 5 and 7",n);
getch();
}
