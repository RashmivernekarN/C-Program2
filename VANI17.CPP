#include<iostream.h>
#include<conio.h>
inline float simple(long int p,int t,float r)
{
return((p*t*r)/100);
}
void main()
{
clrscr();
cout<<"simple interest="<<simple(15000,5,6.8);
getch();
}
