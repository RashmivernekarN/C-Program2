/*prg to read N number and a seach key and
 find whether the search key is persent in an array or not*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[20],i,n,key,f=0;
clrscr();
printf ("\n enter any N number");
scanf ("%d",&n);
printf ("\n enter element");
for (i=0;i<n;i++)
  {
  scanf ("%d",&a[i]);
  }
  printf ("\n enter a search key");
  scanf ("%d",&key);
  for (i=0;i<n;i++)
  {
  if (a[i]==key)
  {
  f=1;
  break;
  }
  }
 if (f>0)
 printf ("\n search key is present at location=%d",i+1);
 else
 printf ("\n search key is not found");
getch();
}