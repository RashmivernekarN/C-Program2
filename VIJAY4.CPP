/* programme to swap two numbers using dummy variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("\n enter 2 nums");
scanf("\%d%d",&a,&b);
printf("\n before swapping a=%d \t b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\n after swapping a=%d\t b=&d", a,b);
getch();
}