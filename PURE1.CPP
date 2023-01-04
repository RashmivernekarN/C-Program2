//program to illustrate virtual functions
#include<iostream.h>
#include<conio.h>
class student
{

   public:virtual void getdata()
	  {

	   }
	   virtual void putdata()
	   {

	   }
};
class student1:public student
{
   private:int roll_no;
	   float per;
   public: void getdata()
	  {  roll_no=80;
	     per=90;
	   }
	    void putdata()
	   {
		    cout<<"\nrollno="<<roll_no<<"\nper="<<per;
	   }
};
class jr_student:public student1
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

      student *sptr;
      jr_student js;
      student1 s;
      clrscr();
      sptr=&js;
      sptr->getdata();
      sptr->putdata();
	    sptr=&s;
      sptr->getdata();
      sptr->putdata();
      getch();
  }




