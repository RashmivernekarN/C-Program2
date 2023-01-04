/*prg to read 5 number and print the same by using array*/
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
printf ("\n entered number are:\n");
for (i=0;i<5;i++)
 {
 printf ("\n\t %d",a[i]);
 }
getch();
}
