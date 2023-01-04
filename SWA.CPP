#include<iostream.h>
#include<conio.h>
void swap(int x,int y);
void main()
{
     int a,b;
     clrscr();
     cout<<"Enter 2 nu\n";
     cin>>a>>b;
     cout<<"Before swapping nu are";
     cout<<"a="<<a<<"\t"<<"b="<<b;
     swap(a,b);
     getch();
}
void swap(int x,int y)
{
     x=x+y;
     y=x-y;
     x=x-y;
     cout<<"\n After swapping nu are";
     cout<<"x="<<x<<"\t"<<"y="<<y;
}