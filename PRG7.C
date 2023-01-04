//program to find area of triangle

#include<stdio.h>
#include<conio.h>

void main()
{
   float area,b,h;
   clrscr();
   printf("\nenter values for base and height");
   scanf("%f%f",&b,&h);
   area=0.5*b*h;
   printf("\n\tbase=%f\n\theight=%f\n\tarea of triangle=%f",b,h,area);
   getch();
}
