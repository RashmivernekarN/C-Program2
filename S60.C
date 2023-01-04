/*prg to read a matrix of order 3*3 find the sum of all odd and even
element of given matrix*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[3][3],j,i,sume=0,sumo=0;
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
  if (a[i][j]%2==0)
  {
  sume=sume+a[i][j];
  }
  else
  {
  sumo=sumo+a[i][j];
  }
  }
  printf ("\n sum of even element=%d",sume);
  printf ("\n sum of odd element=%d",sumo);
getch();
}
