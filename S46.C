/*prg to print below format
* * *
* * *
* * *
*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j;
clrscr();
for (i=1;i<=3;i++)
 {
  for (j=1;j<=i;j++)
   {
    printf ("\t*");
   }
  printf ("\n");
 }
getch();
}

