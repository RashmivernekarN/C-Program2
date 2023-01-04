//program to find area of triangle

#include<iostream.h>
#include<conio.h>

void main()
{
   float b,h,area;
   clrscr();
   cout<<"\n\tenter base and height";
   cin>>b>>h;
   area=0.5*b*h;
   cout<<"\n\tbase="<<b<<"\n\theight="<<h<<"\n\tarea="<<area;
   getch();
}