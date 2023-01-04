//program to illustrate class with array

#include<iostream.h>
#include<conio.h>

class bank
{
   private:char name[20];
	   int a_no;
	   int balance;
   public:void getdata()
	  {
	    cout<<"enter name acc no and balance";
	    cin>>name>>a_no>>balance;
	  }
	  void display();
};
void bank::display()
{
   cout<<"\nname="<<name<<"\nacc no="<<a_no<<"\nbalance="<<balance<<endl;
}

void main()
{
   bank b1[5];
   int i;
   clrscr();
   cout<<"enter 5 acc holder information\n\n";
   for(i=0;i<5;i++)
   {
   b1[i].getdata();
   }
   cout<<"\ndetails are\n";
   for(i=0;i<5;i++)
   {
   b1[i].display();
   }
   getch();
}
