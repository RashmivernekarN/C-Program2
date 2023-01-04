/*prg to read a num and print its equivalent month name*/
#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("\n enter any num");
scanf("%d",&ch);
switch(ch)
{
case 1:
 printf("\n jan");
 break;
 case 2:
printf("\n feb");
break;
case 3:
printf("\n mar");
break;
case 11:
printf("\n nov");
break;
case 12:
printf("\n dec");
break;

default:
printf("\n invaild month no");
}
getch();
}

