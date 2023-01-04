/*prg to read a matrix of order 3X3 and print the transpose of a given
matrix*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[3][3],r,c;
clrscr();
printf ("\n enter the elements of order 3X3 \n");
for (r=0;r<3;r++)
  {
  for (c=0;c<3;c++)
  {
  scanf ("%d",&a[r][c]);
  }
  }
  printf ("\n Transposed array element are: \n");
  for (r=0;r<3;r++)
  {
  for (c=0;c<3;c++)
  {
  printf ("%3d",a[c][r]);
  }
  printf ("\n");
  }

getch();
}