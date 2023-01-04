#include<stdio.h>
#include<conio.h>

void main()
{
int age;
clrscr();
printf("Enter your age to know whether you are eligible for voting or not.\n");
scanf("%d",&age);
(age>=18)?printf("\t%d YOU ARE ELIGIBLE",age):printf("\t%d YOU ARE NOT ELIGIBLE",age);
getch();
}