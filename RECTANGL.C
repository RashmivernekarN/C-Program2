
#include<stdio.h>
#include<conio.h>

void main()
{
   float b,l,area;
   clrscr();
   printf("\n\tenter length and breadth of rectangle");
   scanf("%f%f",&l,&b);
   area=l*b;
printf("\n\tarea of ractangle\n\tlength=%f\n\tbreadth=%f\n\tarea=%f",l,b,area);
  getch();
}