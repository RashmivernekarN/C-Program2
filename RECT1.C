//area of rectangle using function

#include<stdio.h>
#include<conio.h>
void rect();
float area,l,b;

void main()
{
  clrscr();
  rect();
  getch();
}
void rect()
{
   printf("\n\t enter length and breadth of rectangle");
   scanf("%f%f",&l,&b);
   area=l*b;
   printf("\n\tlen=%f\n\tbr=%f\n\tarea=%f",l,b,area);
}


