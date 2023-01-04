/*prg to print below format
1
2 2
3 3 3
4 4 4 4*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j;
clrscr();
for (i=1;i<=4;i++)
 {
  for (j=1;j<=i;j++)
   {
    printf ("%3d",i);
   }
  printf ("\n");
 }
getch();
}

