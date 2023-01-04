/*prg to find area of triangle,rectangle circle using swtich*/
#include<stdio.h>
int main()
{
int ch;
float area,b,h,l,r,pi;
pi=3.142;
printf("\n 1---> Area of triangle");
printf("\n 2---> Area of rectangle");
printf("\n 3---> Area of circle");
printf("\n Enter your choice");
scanf ("%d",&ch);
switch(ch)
{
case 1:
	 printf("\n Enter base and height");
	 scanf("%f%f",&b,&h);
	 area=0.5*b*h;
	 printf("\n Area of triangle=%f",area);
	 break;
case 2:
	 printf("\n Enter length and breadth");
	 scanf("%f%f",&l,&b);
	 area=l*b;
	 printf("\n Area of a rectangle=%f",area);
	 break;
case 3:
	 printf("\n Enter radius");
	 scanf("%f",&r);
	 area=pi*r*r;
	 printf("\n Area of a circle=%f",area);
	 break;
default:
	 printf("\n invalid choice");
 }
 return 0;
 }