/*prg to read N number and find sum of odd and even element by using array*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[20],i,n,sume=0,sumo=0;
clrscr();
printf ("\n enter the limit");
scanf ("%d",&n);
printf ("\n enter element");
for (i=0;i<n;i++)
 {
  scanf ("%d",&a[i]);
 }
/* compute sum of all elerment*/
for (i=0;i<n;i++)
 {
  if (a[i]%2==0)
  {
  sume=sume+a[i];
  }
  else
  {
  sumo=sumo+a[i];
  }
 }
printf ("\n sum of even element are:%d",sume);
printf ("\n sum of odd element are3:%d",sumo);
getch();
}
