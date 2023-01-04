//PROGRAM TO FIND SUM AND AVERAGE OF 3 NUMBERS
#include<stdio.h>
#include<conio.h>

void main()
{
   float a,b,c,sum,avg;
   clrscr();
  printf("\n\tenter values for a b c");
  scanf("%f%f%f",&a,&b,&c);
   sum=a+b+c;
   avg=sum/3;
   printf("\n\ta=%f\n\tb=%f\n\tc=%f\n\tsum=%f\n\tavg=%f",a,b,c,sum,avg);
   getch();
}