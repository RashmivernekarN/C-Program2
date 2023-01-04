//sum and average of 3 numbers

#include<iostream.h>
#include<conio.h>

void main()
{
  float a,b,c,sum,avg;
  clrscr();
  cout<<"\nenter 3 numbers";
  cin>>a>>b>>c;
  sum=a+b+c;
  avg=sum/3;
  cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tc="<<c<<"\n\tsum="<<sum<<"\n\tavg="<<avg;
  getch();
}