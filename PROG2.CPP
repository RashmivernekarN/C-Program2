#include<iostream.h>
#include<conio.h>


void main()
{
   float r,a,c,pi=3.142;
   clrscr();
   cout<<"\n\tenter radius of the circle";
   cin>>r;
   a=pi*r*r;
   c=2*pi*r;
   cout<<"\n\tradius="<<r<<"\n\tarea ofcircle ="<<a<<"\n\tcircumference="<<c;
   getch();
   }