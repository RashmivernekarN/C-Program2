//program to find area of the circle

#include<stdio.h>
#include<conio.h>

void main()
{
   float r,area;
   clrscr();
   printf("\nenter radius of the circle");
   scanf("%f",&r);
   area=3.142*r*r;
   printf("\n\tr=%f\n\tarea=%f",r,area);
   getch();
}