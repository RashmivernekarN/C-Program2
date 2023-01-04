#include<stdio.h>
#include<conio.h>
void main()
{
int x,*p,*p2;
clrscr();
x=25;
p=&x;
p2=&p;
printf("\n x value=%d", x);
printf("\n adress of a x=%d", p);
printf("\n adress of po+%d",p2);
getch();
}





