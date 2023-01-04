/*prg to read a matrix of order 3*3 print same*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[3][3],j,i;
clrscr();
printf ("\n enter the array element \n");
for (i=0;i<3;i++)
  {
  for (j=0;j<3;j++)
  {
  scanf ("%d",&a[i][j]);
  }
  }
  printf ("\n entered array element \n");
  for (i=0;i<3;i++)
  {
  for (j=0;j<3;j++)
  {
  printf ("%3d",a[i][j]);
  }
  printf ("\n");
  }
getch();
}