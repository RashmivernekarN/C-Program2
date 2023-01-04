/*prg to read N number and find biggest element by using array*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[20],i,n,lar;
clrscr();
printf ("\n enter any N number");
scanf ("%d",&n);
printf ("\n enter element");
for (i=0;i<n;i++)
 {
  scanf ("%d",&a[i]);
 }
 lar=0;
 for (i=1;i<n;i++)
 {
 if (a[i]>lar);
 }
printf ("\n biggest element is:%d",lar);
getch();
}
