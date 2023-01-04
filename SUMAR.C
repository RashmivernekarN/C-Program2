#include<stdio.h>
#include<conio.h>

void main()
{
  int a[3],i,*p;
  clrscr();
  printf("Enter 3 array elements\n");
  for(i=0;i<3;i++)
    {
      scanf("%d",&a[i]);
    }

  p=a;
  for(i=0;i<=3;i++)
    {
     *p=a[0]+a[1]+a[2];
     printf("sum is %d",*p);
    }
  getch();
  }