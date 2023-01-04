//single inheritance

#include<iostream.h>
#include<conio.h>

class employee
{
    int age;
    char name[20];
    int e_id;
    public:void getdata()
	   {
		cout<<"\n\tenter name age employee id";
		cin>>name>>age>>e_id;
	   }
	   void putdata()
	   {
	      cout<<"\n\tname="<<name<<"\n\tage="<<age<<"\n\tEmp_id="<<e_id;
	   }
};
class clerk:public employee
{
    long int sal;
    char dept[20];
    public:void getinfo()
	    {
	      employee::getdata();
	      cout<<"\n\tenter salary and dept of employee";
	      cin>>sal>>dept;
	     }
	     void putinfo()
	     {
		employee::putdata();
		cout<<"\n\tsalary="<<sal<<"\n\tdept="<<dept;
	     }
};
void main()
{
    clerk x;
    clrscr();
    cout<<"\n\tENTER CLERK INFORMATION";
    x.getinfo();
    cout<<"\n\tCLERK INFO";
    x.putinfo();
    getch();
}
