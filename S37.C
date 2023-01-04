/*prg to find factorial of a given number using for loop*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,n,fact=1;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
for (i=1;i<=n;i++)
{
fact=fact*i;
}
printf ("\n factorial of a given number=%d",fact);
getch();
}

