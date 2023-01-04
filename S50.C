/*prg to read 5 number and reverse the same by using array*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[5],i;
clrscr();
printf ("\n enter any 5 number");
for (i=0;i<5;i++)
 {
  scanf ("%d",&a[i]);
 }
printf ("\n reversed number are:\n");
for (i=4;i>0;i--)
 {
 printf ("\t %d",a[i]);
 }
getch();
}
