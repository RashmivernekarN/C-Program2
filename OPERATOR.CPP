//program to illustrate operator overloading(- operator)
#include<iostream.h>
#include<conio.h>
class space
{
    int x,y,z;
    public:void getdata(int a,int b,int c);
	   void display();
	   void operator -();//operator function declaration
 };

 void space::getdata(int a,int b,int c)
 {
     x=a;
     y=b;
     z=c;
}
void space::display()
{
   cout<<"\n\n\ta="<<x<<"\tb="<<y<<"\t c="<<z;
}
void space::operator -()  //operator function definition
{
    x=-x;
     y=-y;
     z=-z;
     }

     void main()
     {
       space s;
       clrscr();
       s.getdata(10,-20,30);
       s.display();
       -s;//calling of operator function
       cout<<"\nafter calling operator function";
       s.display();
       getch();
     }

