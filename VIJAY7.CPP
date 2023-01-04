/* programme to find sum and average of three numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum;
float avg;
clrscr();
printf("\n enter three numbers");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg=(float)sum/3;//type casting method
printf("\n sum=%d",sum);
printf("\n average=%f",avg);
getch();
}