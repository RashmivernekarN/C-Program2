//program to find sum and average of 3 numbers

#include<iostream.h>
#include<conio.h>

void main()
{
   float a,b,c,sum,avg;
   clrscr();
   cout<<endl<<"enter values for a b c";
   cin>>a>>b>>c;
   sum=a+b+c;
   avg=sum/3;
   cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tc="<<c;
   cout<<"\n\tsum="<<sum<<"\n\taverage="<<avg;
   getch();
}
