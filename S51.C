/*prg to read N number and find sum of all element by using array*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[20],i,n,sum=0;
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
 sum=sum+a[i];
 }
printf ("\n\t sum of all element are:%d",sum);
getch();
}
