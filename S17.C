/*prg to accept a number and find sum of 1 to N number*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int n,sum=0,i=1;
clrscr();
printf ("\n enter any number");
scanf("%d",&n);
while (i<=n)
 {
 sum=sum+i;
 }
printf ("\n sum of 1 to N number=%d",sum);
getch();
}