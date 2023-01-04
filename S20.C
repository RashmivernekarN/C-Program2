/*prg to find area of a triangle,rectangle,circle by using switch*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int ch;
float area,b,h,l,r,pi=3.142;
clrscr();
printf ("\n 1-->area of triangle");
printf ("\n 2-->area of rectangle");
printf ("\n 3-->area of circle");
scanf ("%d",&ch);
switch(ch)
{
 case 1:
      printf ("\n enter base,height");
      scanf ("%f%f",&b,&h);
      area=0.5*b*h;
      printf ("\n area of triangle=%f",area);
      break;
 case 2:
      printf ("\n enter length,bredth");
      scanf ("%f%f",&l,&b);
      area=l*b;
      printf ("\n area of rectangle=%f",area);
      break;
 case 3:
      printf ("\n enter radius");
      scanf ("%f",&r);
      printf ("\n area of circle=%f",area);
      break;
 default:
      printf ("\n Invalid choice");
      }
getch();
}