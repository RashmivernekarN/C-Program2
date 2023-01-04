//prg to find area of a circle
#include<stdio.h>
#include<conio.h>
void main()
  {
    float area,r,pi=3.142;
    clrscr();
    printf("\n Enter radius");
    scanf("%f",&r);
    area=pi*r*r;
    printf("\n Area of a circle=%f",area);
    getch();
  }