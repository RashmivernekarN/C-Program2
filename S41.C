/*prg to print number 50 to 75 which are divisible by 5 by using for loop*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i;
clrscr();
printf ("\n enter number which are divisible by 5");
for (i=50;i<=75;i++)
{
if (i%5==0)
printf ("\n %d",i);
}
getch();
}

