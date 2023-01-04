//program to swap two variables

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,t;
   clrscr();
   cout<<"\nenter values for a and b";
   cin>>a>>b;
   cout<<"\n\tBEFORE SWAPPING THE VALUES ARE\n";
   cout<<"\n\ta="<<a<<"\n\tb="<<b;
   t=a;
   a=b;
   b=t;
   cout<<"\n\n\tAFTER SWAPPING THE VALUES ARE\n";
   cout<<"\n\ta="<<a<<"\n\tb="<<b;
   getch();
}

