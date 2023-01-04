//program to display your name for specified number of times

#include<iostream.h>
#include<conio.h>

void main()
{
    int i,time;
    clrscr();
    cout<<"\n\thow many times you want to display your name";
    cin>>time;
    i=0;
    do
    {
     cout<<"\n\tKEONICS";
     i++;
    }
    while(i<time);
    getch();
}
