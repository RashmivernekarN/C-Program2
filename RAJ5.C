
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,temp;
 clrscr();
  printf("\n enter 2 num \n");
  scanf("%d%d",&a,&b);
  printf("\n before swapping a=%d \t b=%d \t",a,b);
  temp=a;a=b;b=temp;
  printf("\n after swapping a=%d \t b=%d",a,b);
  getch();
  }