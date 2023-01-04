#include<iostream.h>
#include<conio.h>
class construct
{
private:
int a,b,sum;
public:
construct (){}
construct(int p,int q)
{
a=p;
b=q;
}
int calc()
{
return(a+b);
}
};
void main()
{
construct c(4,5);
clrscr();
c.calc();
cout<<"sum="<<c.calc();
getch();
}