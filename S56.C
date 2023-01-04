/*prg to copy the element of one array to another*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[20],b[20],n,i;
clrscr();
printf ("\n enter limit");
scanf ("%d",&n);
printf ("\n enter element of array A");
for (i=0;i<n;i++)
  {
  scanf ("%d",&a[i]);
  }
  printf ("\n entered element of array A");
  for (i=0;i<n;i++)
  {
  printf ("%d \t",a[i]);
  }
  for (i=0;i<n;i++)
  {
  b[i]=a[i];
  }
  printf ("\n the copied element of array B");
  for (i=0;i<n;i++)
  {
  printf ("%d\t", b[i]);
  }
getch();
}
getch();
}