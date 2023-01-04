//program to illustrate single inheritance

#include<iostream.h>
#include<conio.h>

class father
{
    char name[10];
    int age;
    public:void getdata()
	   {
	       cout<<"enter name and age\n";
		cin>>name>>age;
	   }
	     void putdata()
	     {
		cout<<"\nname="<<name<<"\nage="<<age;
	    }
};

class son:public father
{
   char q[10];
   long int sal;
   public:  void accept()
	   {
	       cout<<"enter qualification and salary\n";
		cin>>q>>sal;
	   }
	     void print()
	     {
		cout<<"\nqual="<<q<<"\nsal="<<sal;
	    }
};
void main()
{
   son s1,s2;
   clrscr();
   cout<<"\n\nenter father details";
   s1.getdata();
   s1.accept();
   cout<<"\n\nenter son details";
   s2.getdata();
   s2.accept();
   cout<<"\nfather details are\n";
   s1.putdata();
   s1.print();
    cout<<"\n\nson details are\n";
   s2.putdata();
   s2.print();
   getch();
}