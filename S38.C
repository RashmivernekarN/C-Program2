/*prg to find sum of odd and even number using for loop*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,n,sume=0,sumo=0;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
for (i=1;i<=n;i++)
{
if (i%2==0)
{
sume=sume+i;
}
else
{
sumo=sumo+i;
}
}
printf ("\n sum of even number=%d",sume);
printf ("\n sum of odd number=%d",sumo);
getch();

}

