//program to illustrate built in function
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int s,r1,r2,c,f;
  clrscr();
  s=sqrt(25);
  r1=round(32.8);
  r2=round(32.8);
  c=ceil(2.4);
  f=floor(3.8);
  printf("\nsquare root of 25is=%d",s);
  printf("\nceil function 2.4 is=%d",c);
  printf("\nfloor function 3.8 is=%d",f);
  getch();
}