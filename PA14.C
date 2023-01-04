\*prg to find Area of a circle when 3 sides are given*/
#include<stdio.h>
#include<conio.h>
 void main()
 {
 float area a,b,c,s;
 clrscr();
 printf("\n enter 3 sides");
 scanf("%f%f%f",&a,&a,&c);
 s=(a+b+c)/2;
 area=sqrt(*(s-a)*(s-b)*(s-c));
 printf("\n Area of a circle=%f",area);
 getch();
 }
