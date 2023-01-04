//swap two variables using function
#include<iostream.h>
#include<conio.h>
void swap(int ,int );
void main()
{
   int a,b;
   clrscr();
   cout<<"\n\tEnter 2 nu";
   cin>>a>>b;
   cout<<"\n\tBefore swapping nu";
   cout<<"\n\ta="<<a<<"\t"<<"b="<<b;
   swap(a,b);

   getch();
}
void swap(int x,int y)
{
   x=x+y;
   y=x-y;
   x=x-y;
 cout<<"\n\tAfter swapping nu";
 cout<<"\n\ta="<<x<<"\t"<<"b="<<y;
}











































