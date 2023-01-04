//program to illustrate simple interest by using function

#include<stdio.h>
#include<conio.h>

void main()
{
int p,r,t,si;
int *p1,*p2,*p3;
clrscr();
printf("Enter the values of principle,rate,time:\n");
scanf("%d%d%d",&p,&r,&t);
p1=&p;
p2=&r;
p3=&t;
si=((*p1)*(*p2)*(*p3))/100;

printf("SIMPLE INTEREST IS %d",si);
getch();
}
