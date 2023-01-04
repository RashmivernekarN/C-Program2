//program to find area of circle only if radious is less than 5

#include<stdio.h>
#include<conio.h>
#define pi 3.142

void main()
{
   float r,area;
   clrscr();
   printf("\n\tenter rad of circle");
   scanf("%f",&r);
   if(r<5)
      {
	 area=pi*r*r;
	 printf("\n\tarea of circle=%f",area);
       }
  getch();
}
