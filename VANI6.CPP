#include<iostream.h>
#include<conio.h>
int volume(int);
double volume(double,int);
long volume(long, int,int);
int main()
{
clrscr();
cout<<volume(10)<<"\n";
cout<<volume(2.5,8)<<"\n";
cout<<volume(100,75,15)<<"\n";
getch();
return 0;
}
int volume(int s)
{
return(s*s*s);
}
double volume(double r,int h)
{
return(3.14519*r*r*h);
}
long volume(long l,int b,int h)
{
return(l*b*h);
}