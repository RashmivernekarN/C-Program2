/*prg to read a matrix of order 3X3 and find the sum of primary
diagonal elements*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[3][3],r,c,s=0;
clrscr();
printf ("\n enter the elements of order 3X3 \n");
for (r=0;r<3;r++)
  {
  for (c=0;c<3;c++)
  {
  scanf ("%d",&a[r][c]);
  }
  }
  //sum of primary diagonal elements
  for (r=0;r<3;r++)
  {
  for (c=0;c<3;c++)
   {
     if(r==c)
	s=s+a[r][c];
    }
  }
  printf ("\n sum of primary  diagonal elements=%d",s);
  getch();
 }