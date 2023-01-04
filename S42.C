/*prg to print number 1 to 75 which are divisible
by 5 and 7 by using for loop*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i;
clrscr();
printf ("\n enter number which are divisible by 5 and 7");
for (i=1;i<=75;i++)
{
if (i%5==0 && i%7==0)
printf ("\n %d",i);
}
getch();
}

