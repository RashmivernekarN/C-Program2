#include<iostream.h>
#include<conio.h>
class base
{
protected:
int a,b,sum;
public:
void getdata()
{
cout<<"enter the vqalues of a and b:";
cin>>a>>b;
}
void calc()
{
sum=a+b;
}
};
class derived
{
public:
void show()
{
cout<<"sum="<<sum;
}
};
void main()
{
derived d;
d.getdata();
d.calc();
d.show();
getch();
}