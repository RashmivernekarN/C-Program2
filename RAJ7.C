#include<stdio.h>
#include<conio.h>
 void main()
 {
   float a,b,c,sum;
   float avg;
   clrscr();
   printf("\n enter three num\n");
   scanf("%f%f%f",&a,&b,&c);
   sum=(a+b+c);
   avg=sum/3;
   printf("\n sum of three num =%f",sum);
   printf("\n avg of three num=%f",avg);
   getch();
   }
