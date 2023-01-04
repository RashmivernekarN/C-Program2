//area of rectangle using function

#include<stdio.h>
#include<conio.h>
float rect();
float area,l,b;

void main()
{
  clrscr();
  printf("\n\tarea=%f",rect());
  getch();
}
float rect()
{
   printf("\n\t enter length and breadth of rectangle");
   scanf("%f%f",&l,&b);
   area=l*b;
   printf("\n\tlen=%f\n\tbr=%f\n\t",l,b);
   return(area);
}
