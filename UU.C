#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum;
float avg;
clrscr();
printf("\n enter any three numbers");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("\n sum=%d",sum);
printf("\n average=%f",avg);
getch();
}