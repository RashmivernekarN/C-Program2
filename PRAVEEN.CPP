//program to demonstrate switch statement.
#include<stdio.h>
#include<conio.h>
void main()
{
char code;
clrscr();
printf("enter the code:");
scanf("%s",&code);
switch(code)
{
case 'f':
printf("female");
break;
case 'm':
printf("male");
break;
default:
printf("invalid code");
}
getch();
}