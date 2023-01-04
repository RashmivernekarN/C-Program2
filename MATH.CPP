//program to demonstate mathmatical function.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y,z;
float a,b,c;
clrscr();
printf("enter the number:");
scanf("%d",&x);
printf("enter the power:");
printf("%d",y);
printf("enter the sceond number:");
scanf("%d",&z);
a=sqrt(x);
b=pow(x,y);
c=abs(z);
printf("\n squreroot=%6.2f",a);
printf("\n power=%6.2f",b);
printf("\n absoulte=%6.2f",c);
getch();
}