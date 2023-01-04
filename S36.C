/*prg to find sum of 1 to N number using for loop*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,n,sum=0;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
for (i=1;i<=n;i++)
{
sum=sum+i;
}
printf ("\n sum of 1 to N number=%d",sum);
getch();
}

