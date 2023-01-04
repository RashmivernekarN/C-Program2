#include<iostream.h>
#include<conio.h>

void main()
{
    float r,area;
    clrscr();
    cout<<"\n\tenter radious of the circle";
    cin>>r;
    if(r<5)
    {
       area=3.142*r*r;
       cout<<endl<<"\tarea="<<area;
     }
     getch();
}
