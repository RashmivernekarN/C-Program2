// program to demonstrate employee slary detail.
#include<iostream.h>
#include<conio.h>
class employee
{
private:
char name[10],design;
int code;
float basic,hra,da,gross,pf,lic,ded,ns,tax,mi;
public:
void getdata()
{
cout<<"enter the employee name:";
cin>>name;
cout<<"enter the code:";
cin>>code;
cout<<"enter the basic:";
cin>>basic;
cout<<"enter the designation:";
cin>>design;
}
void calc()
{
hra=basic*0.25;
da=basic*0.20;
gross=basic+hra+da;
pf=basic*0.12;
lic=500;
tax=basic*0.0125;
mi=basic*0.01;
ded=pf+lic+tax+mi;
ns=gross-ded;
}
void show()
{
cout<<"\n             employee name:"<<name;
cout<<"\n             employee code:"<<code;
cout<<"\n      employee designation:"<<design;
cout<<"\n     earning for emp basic:"<<basic;
cout<<"\n       house rent allownce:"<<basic;
cout<<"\n  dearness(daily) allownce:"<<da;
cout<<"\n               total gross:"<<gross;
cout<<"\n           providend found:"<<pf;
cout<<"\n           value added tax:"<<tax;
cout<<"\n         medical insurance:"<<mi;
cout<<"\n                 deduction:"<<ded;
cout<<"\n                net salary:"<<ns;
}
};
void main()
{
employee e;
clrscr();
e.getdata();
e.calc();
e.show();
getch();
}
