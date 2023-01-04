#include<iostream.h>
#include<conio.h>
class staff
{
	char name[20];
	int no_staffs;
 public:void getd();
	void putd();
};
 class Teaching:public staff
 {
	int n;
 public:void get_t();
	void put_t();
 };
 class non_teaching:public staff
 {
	int n1;
  public:void getr();
	 void putr();
 };


 void staff::getd()
 {
   cout<<"\nEnter name and nu of staffs ";
   cin>>name>>no_staffs;
 }
 void staff::putd()
 {
   cout<<"\nName= "<<name<<"\n No of staffs "<<no_staffs;
 }

 void Teching::get_t()
 {
   cout<<"How many no of teaching staffs:";
   cin>>n;
 }
 void Teaching::put_t()
 {
   cou<<"\n No of Teaching staffs : "<<n;
 }