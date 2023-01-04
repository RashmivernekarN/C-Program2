/*prg to find sum and avg of 3 nums*/
#include<stdio.h>
#include<conio.h>
 void main()
 {
 float a,b,c,sum,avg;
 clrscr();
 printf("\n enter 3 nos");
 scanf("%f%f%f",&a,&b,&c);
 sum=a+b+c;
 avg=(sum%3);
 printf("\n sum=%f",sum);
 printf("\n averege=%f",avg);
 getch();
 }