//program to find sum and average of 3 numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   float a,b,c,sum,avg;
   clrscr();
   a=4.5;
   b=5.8;
   c=10.6;
   sum=a+b+c;
   avg=sum/3;
   printf("\n\ta=%f\n\tb=%f\n\tc=%f\n\tsum=%f\n\taverage=%f",a,b,c,sum,avg);
   getch();
}