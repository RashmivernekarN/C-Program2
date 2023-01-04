//area of circle

#include<iostream.h>
#include<conio.h>
#define pi 3.142

void main()
 {
    float r,area;
    clrscr();
    cout<<"\n\tenter radious of the circle";
    cin>>r;
    area=pi*r*r;
    cout<<"\n\tradious="<<r<<"\n\tarea="<<area;
    getch();
}
