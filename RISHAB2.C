//prog to find sum of 1*1/2*1/3... 1/n
#include<stdio.h>
#include<conio.h>
void main()
 {
 float n,p=1,i=1;
 clrscr();
 printf("\n Enter any no");
 scanf("%f",&n);
 do
  {
   p=p*1/i;
   i++;
  }while(i<=n);
 printf("\n sum of 1X1/2X1X3...1/n is %f",p);
 getch();
 }





