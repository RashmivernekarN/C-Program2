/*prg to find factorial of a given number*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int n,fact=1,i=1;
clrscr();
printf ("\n enter any number");
scanf("%d",&n);
while (i<=n)
 {
 fact=fact*i;
 i++;
 }
printf ("\n factorial of given number=%d",fact);
getch();
}