#include<iostream.h>
#include<conio.h>
class myclass
{
private:
int a,b,sum;
public:
void getdata(int p,int q=5)
{
a=p;
b=q;
}
void calc()
{
sum=a+b;
}
void show()
{
cout<<"sum="<<sum;
}
};
void main()
{
myclass m;
clrscr();
m.getdata(7);
m.calc();
m.show();
getch();
}

