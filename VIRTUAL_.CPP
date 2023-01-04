//program to illustrate virtual functions
#include<iostream.h>
#include<conio.h>
class student
{
   private:int roll_no;
	   char name[20];
	   float per;
   public:virtual void getdata()
	  {
	      cout<<"\n\nenter roll no\n";
	      cin>>roll_no;
	      cout<<"\nenter name";
	      cin>>name;
	      cout<<"enter per";
	      cin>>per;
	   }
	   virtual void putdata()
	   {
	       cout<<"\n in the base class\n";
	       cout<<"\nroll no="<<roll_no<<"\nname="<<name<<"\nper="<<per;
	   }
};
class jr_student:public student
{
    private:int age;
	    char hobby[20];
     public:void getdata();
	     void putdata();
 };
     void jr_student::getdata()
     {
	cout<<"\n enter age and hobby";
	cin>>age>>hobby;
     }
    void jr_student::putdata()
      {
	  cout<<"\nage="<<age<<"\nhobby="<<hobby;
      }
  void main()
  {
      student s;
      student *sptr;
      jr_student js;
      clrscr();
      sptr=&s; //pointer initialisation
      sptr->getdata();
      sptr->putdata();
      cout<<"\n\n";
      sptr=&js;
      sptr->getdata();
      sptr->putdata();
      getch();
  }




