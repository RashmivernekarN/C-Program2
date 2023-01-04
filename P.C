/*prg to check whether the given year is leap year or not using conditional operater*/
#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\n Enter any year");
scanf("%d",&year);
(year%4==0)?printf("\n %d is leap year"):printf("\n %d is not a leap year",year);
getch();
}