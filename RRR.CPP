/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y,z;
float a,b,c;
clrscr();
printf("\n\nenter any number:");
scanf("%d",&x);
printf("enter the power:");
scanf("%d",&y);
printf("enter the second number:");
scanf("%d",&z);
a=sqrt(x);
b=pow(x,y);
c=abs(z);
printf("\n square root of a number:%f",a);
printf("\n Power  of a number:%f",b);
printf("\n Absolute  of a number:%f",c);
getch();
} */

/*
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,max;
clrscr();
printf("\n\nenter the value of a and b:");
scanf("%d%d",&a,&b);
max=(a>b)?a:b;
printf("Biggest of two number =%d",max);
getch();
} */
/*
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n\nenter the value of a and b:");
scanf("%d%d",&a,&b);
if(a>b)
printf("Biggest of two number =%d",a);
else
printf("Biggest of two number =%d",b);
getch();
} */

/*#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n\nenter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
printf("Biggest of two number =%d",a);
else if(b>c)
printf("Biggest of two number =%d",b);
else if(c>a)
printf("Biggest of two number =%d",c);
getch();
} */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max1,max2;
clrscr();
printf("\n\nenter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
max1=(a>b)?a:b;
max2=(max1>c)?max1:c;
printf("Biggest of two number =%d",max2);
getch();
}

