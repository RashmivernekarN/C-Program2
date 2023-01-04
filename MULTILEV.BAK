//illustrate multi level inheritance

#include<iostream.h>
#include<conio.h>

class grandfather
{
    char name[30];
    int age;
    public:void getdata();
	  void putdata();
};
class father:public grandfather
{
  char q[30];
 long int sal;
  public:void read();
	 void print();
};
class son:public father
{
   char hobby[20];
   public:void input();
	   void output();
};
void grandfather::getdata()
{
   cout<<"\n\tenter name and age";
   cin>>name>>age;
}
void grandfather::putdata()
{
   cout<<"\n\tname="<<name<<"\n\tage="<<age;
}
void father::read()
{
   getdata();
   cout<<"\n\tenter qualification and salary";
   cin>>q>>sal;
}
void father::print()
{
   putdata();
   cout<<"\n\tqualification="<<q<<"\n\tsal="<<sal;
}
void son::input()
{
   read();
   cout<<"\n\tenter hobby";
   cin>>hobby;
}
void son::output()
{
   print();
   cout<<"\n\thobby="<<hobby;
}
void main()
{
   son s;
   clrscr();
   cout<<"\n\tenter son information";
   s.input();
   cout<<"\n\tson informations are:";
   s.output();
   getch();
}


