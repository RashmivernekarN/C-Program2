/*prg to find sum and avg of three nums*/
#include<stdio.h>
#include<conio.h>
int main()
  {
    float a,b,c,sum,avg;
    clrscr();
    printf("\n enter three nums");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("\n sum of three nums=%f",sum);
    printf("\n avg of three nums=%f",avg);
    getch();
  }