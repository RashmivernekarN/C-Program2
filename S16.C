/*prg to accept a number and find sum of 1 to N even or odd number */
#include <stdio.h>
#include <conio.h>
void main ()
{
int n,sume=0,sumo=0,i=1;
clrscr();
printf ("\n enter any number");
scanf("%d",&n);
while (i<=n)
 {
 if (i%2==0)
 {
 sume=sume+i;
 }
 else
 {
 sumo=sumo+i;
 }
 i++;
 }
printf ("\n sum of 1 to N even number=%d",sume);
printf ("\n sum of 1 to N odd number=%d",sumo);
getch();
}