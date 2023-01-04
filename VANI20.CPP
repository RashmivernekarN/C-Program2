#include<iostream.h>
#include<conio.h>
class code
{
int id;
public:
code(int a)
{
id=a;
}
code(code &x)
{
id=x.id;
}
void display(void)
{
cout<<id;
}
};
void main()
{
code A(100);
code B=A;
code C=A;
clrscr();
cout<<"\n id of A:";A.display();
cout<<"\n id of B:";B.display();
cout<<"\n id of C:";C.display();
getch();
}

