//program to find the sum and avereg of three number
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float sum,avg;
clrscr();
printf("enter three number:");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("sum=%f",sum);
printf("\navg=%f",avg);
getch();
}
