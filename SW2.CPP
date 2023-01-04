//swapping

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,t;
   clrscr();
   cout<<"\n\tenter value for a and b";
   cin>>a>>b;
   cout<<"\n\tBEFORE SWAPPING THE VALUES ARE";
   cout<<"\n\ta="<<a<<"\n\tb="<<b;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"\n\tAFTER SWAPPING THE VALUES ARE";
   cout<<"\n\ta="<<a<<"\n\tb="<<b;
   getch();
}