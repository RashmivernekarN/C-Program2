/*prg to print below format
1 1 1
2 2 2
3 3 3
*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j;
clrscr();
for (i=1;i<=3;i++)
 {
  for (j=1;j<=3;j++)
   {
    printf ("%3d",i);
   }
  printf ("\n");
 }
getch();
}

