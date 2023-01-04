#include<iostream.h>
#include<conio.h>
class school
{
	char res[10],n[20];
	int no_books;
 public: void getdata();
	 void putdata();
};

class college
{
	char name[20],est[20];
	int no_staff;
 public: void get_info();
	 void put_info();
};

class student:public school,public college
{
	char H[10];
 public: void get_t();
	 void put_t();
};

void school::getdata()
{
	cout<<"Enter name,result and nu.of books";
	cin>>n>>res>>no_books;
}
void school::putdata()
{
	cout<<"\nName="<<n<<"\nresult="<<res<<"\nno of books="<<no_books;
}
void college::get_info()
{
	cout<<"\nEnter establishment";
	cin>>est;
}
void college::put_info()
{
	cout<<"\nEstablishment="<<est;
}
void student::get_t()
{
	cout<<"Enter hobbey";
	cin>>H;
}
void student::put_t()
{
	cout<<"\nHobbey="<<H;
}


void main()
{
	student s;
	clrscr();
	s.getdata();
	s.get_info();
	s.get_t();
	cout<<"\nEntered details";
	s.putdata();
	s.put_info();
	s.put_t();
	getch();
}