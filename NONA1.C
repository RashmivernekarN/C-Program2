#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum;
float avrg;
clrscr();
printf("\n\tenter the value of a,b");
scanf("%d%d",&a,&b);
sum=a+b;
avrg=sum/2;
printf("\n\tsum=%d\navrg=%f",sum,avrg);
getch();
}