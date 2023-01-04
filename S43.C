/*prg to print below format
1
1 2
1 2 3
1 2 3 4*/
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
printf ("%3d",j);
}
printf ("\n");
}
getch();
}

