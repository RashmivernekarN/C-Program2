\*prg to find area of acircle when 3sides are given*/
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
 printf("\n areaofa circle=%f",area);
 getch();
 }
