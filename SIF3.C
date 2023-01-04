//program to find area of circle if radious is less than 5
#include<stdio.h>
#include<conio.h>
void main()
{
  float r,area;
  clrscr();
  printf("\nenter radious of the circle");
  scanf("%f",&r);
  if(r<5)
  {
     area=3.142*r*r;
     printf("\n\trad=%f\n\tarea of circle=%f",r,area);
  }
  getch();
}
