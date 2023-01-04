/*prg to calculate simple intrest*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int p,t;
float r,si;
clrscr();
printf ("\n enter p t r");
scanf ("%d%d%f",&p,&t,&r);
si=(p*t*r)/100;
printf ("\n simple intrest=%f",si);
getch();
}
