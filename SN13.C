//prg to find area of a traingle when 3 side are given
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    float area,a,b,c,s;
    clrscr();
    printf("\n Enter 3 sides");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Area of a traingle=%f",area);
    getch();
  }