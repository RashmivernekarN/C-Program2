/*prg to print first ten even numberu by using for loop*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i;
clrscr();
printf ("\n enter first ten even number");
for (i=1;i<=20;i++)
{
if (i%2==0)
printf ("\n %d",i);
}
getch();
}

