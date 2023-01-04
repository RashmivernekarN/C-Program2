//area oftriangle using function

#include<stdio.h>
#include<conio.h>

void triangle();
float b,h,area;
void main()
{
   clrscr();
   triangle();
   getch();
}
void triangle()
{
   printf("\nenter base and height of triangle");
   scanf("%f%f",&b,&h);
   area=0.5*b*h;
   printf("\n\tarea of triangle=%f",area);
}