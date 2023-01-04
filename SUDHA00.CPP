//program to find simple interest.
#include<stdio.h>
#include<conio.h>
void main()
{
int p,t;
float r,si;
clrscr();
printf("\n enter the value of p,t and r:");
scanf("%d%d%f",&p,&t,&r);
si=(p*t*r)/100;
printf("\n  simple  interest:=%f",si);
getch();
}

