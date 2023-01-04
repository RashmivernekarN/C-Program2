#include<iostream.h>
#include<conio.h>
class myclass
{
private:
long int p;
int t;
float si,r;
public:
void getdata();
int calc();
};
void myclass::getdata()
{
cout<<"enter the values of p,tand r:";
cin>>p>>t>>r;
}
int myclass::calc()
{
return((p*t*r)/100);
}
void main()
{
myclass m;
clrscr();
m.getdata();
cout<<"simple interest="<<m.calc();
getch();
}


