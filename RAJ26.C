#include<stdio.h>
#include<conio.h>
void main()
{
 int yr;
 clrscr();
 printf("enter any year \n");
 scanf("%d",&yr);
 (yr%4==0)?printf("%d is leap year",yr):printf("%d is not leap year",yr);
 getch();
 }
