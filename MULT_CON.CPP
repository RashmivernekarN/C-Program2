//program to multiple constuctor
#include<iostream.h>
#include<conio.h>
class sample
{
   int b,c;
   public:sample();
	  sample(int ,int );
	  void display();
	  int addition();
 };
 sample::sample()
 {
cout<<"\n\tdefault constructor";
 }
 sample::sample(int p,int q)
 {
    b=p;
    c=q;
 }
 int sample::addition()
 {
   return(b+c);
}
void sample::display()
{
   cout<<"\nb="<<b<<"\nc="<<c<<"\nsum="<<addition();
 }
 void main()
 {
   clrscr();
   sample x;
   sample s1(20,30);
   s1.display();
   getch();
}

