//program to swap two variables without using third variable

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b;
   clrscr();
   cout<<"\nenter values for a and b";
   cin>>a>>b;
   cout<<"\n\tBEFORE SWAPPING THE VALUES ARE\n";
   cout<<"\n\ta="<<a<<"\n\tb="<<b;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"\n\n\tAFTER SWAPPING THE VALUES ARE\n";
   cout<<"\n\ta="<<a<<"\n\tb="<<b;
   getch();
}

