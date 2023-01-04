/*prg to find area of tirangle using sub prg*/
#include <stdio.h>
#include <conio.h>
float area(float,float);//prototype declaration
void main()
{
float ar,h,b;
clrscr();
printf ("\n enter the height,base");
scanf ("%f%f",&h,&b);
ar=area(h,b);
printf ("\n area of triangle=%f",ar);
getch();
}
float area (float x,float y)
{
float ar;
ar=0.5*x*y;
return (ar);
}