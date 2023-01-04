/*prg to check whetherthe given conitional operator is positive or negative*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter any number");
scanf("%d",&n);
(n>0)?printf("positive number"):printf("negative number");
getch();
}