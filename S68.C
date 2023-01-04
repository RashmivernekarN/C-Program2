/*prg to calculate simple intrest using sub prg*/
#include <stdio.h>
#include <conio.h>
float simple(float,float,float);//prototype declaration
void main()
{
float si,p,t,r;
clrscr();
printf ("\n enter the p,t,r value");
scanf ("%f%f%f",&p,&t,&r);
si=simple(p,t,r);
printf ("\n simple intrest=%f",si);
getch();
}
float simple (float x,float y,float z)
{
float si;
si=(x*y*z)/100;
return (si);
}