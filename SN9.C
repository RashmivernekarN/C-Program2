//prg to find sum and avg of 3 nums
#include<stdio.h>
#include<conio.h>
void main()
  {
    float a,b,c,sum,avg;
    clrscr();
    printf("\n Enter any 3 nums");
    scanf("%f%f%f",&a,&b,&c);
    sum=(a+b+c);
    avg=sum/3;
    printf("\n Total=%f",sum);
    printf("\n Average=%f",avg);
    getch();
  }