//program to find area and circumference of circle

#include<iostream.h>
#include<conio.h>

void main()
{
   float r,area,cir;
   clrscr();
   cout<<"\n\tenter rad of circle";
   cin>>r;
   area=3.142*r*r;
   cir=2*3.142*r;
   cout<<"\n\trad="<<r<<"\n\tarea="<<area<<"\n\tcir="<<cir;
   getch();
}