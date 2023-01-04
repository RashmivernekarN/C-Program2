/*prg to print below format
1 2 3
1 2 3
1 2 3
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
    printf ("%3d",j);
   }
  printf ("\n");
 }
getch();
}

