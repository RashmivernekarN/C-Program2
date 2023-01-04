/*prg to read a matrix of order 3*3 find the sum of all
element of given matrix*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[3][3],j,i,sum=0;
clrscr();
printf ("\n enter the array element \n");
for (i=0;i<3;i++)
  {
  for (j=0;j<3;j++)
  {
  scanf ("%d",&a[i][j]);
  }
  }
  for (i=0;i<3;i++)
  {
  for (j=0;j<3;j++)
  {
  sum=sum+a[i][j];
  }
  }
  printf ("\n sum of all element=%d",sum);
getch();
}
