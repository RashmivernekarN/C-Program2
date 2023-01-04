#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,x,y,sq1,s;
clrscr();
printf("\n\tenter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
s=(b*b-4*a*c);
sq1=sqrt(s);
x=(-b+sq1)/(2*a);
y=(-b-sq1)/(2*a);
printf("\nx=%d\ny=%d",x,y);
getch();
}
