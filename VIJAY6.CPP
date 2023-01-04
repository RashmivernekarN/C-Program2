/* programme to swap two numbers without using dummy variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter two nums");
scanf("%d%d",&a,&b);
printf("\n before swapping a=%d \t b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping a=%d \t b=%d", a,b);
getch();
}