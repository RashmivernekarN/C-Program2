// program to demonstrate commission of sales.
#include<iostream.h>
#include<conio.h>
class commission
{
private:
char name[10],item[10];
int code;
float qty,rate,amount,discount,tax,comm,na,ta;
public:
void getdata()
{
cout<<"enter the sales  b/g name:";
cin>>name;
cout<<"enter the code:";
cin>>code;
cout<<"enter the item:";
cin>>item;
cout<<"enter the quantity:";
cin>>qty;
cout<<"enter the rate:";
cin>>rate;
}
void calc()
{
amount=qty*rate;
discount=0.1;
tax=rate*0.012;
ta=amount-discount+tax;
comm=ta*0.3;
}
void show()
{
cout<<"\n*************commission of sales*********************";
cout<<"\n       sales girl/boy name:"<<name;
cout<<"\n                      code:"<<code;
cout<<"\n             name of items:"<<item;
cout<<"\n                  quantity:"<<qty;
cout<<"\n              rate of item:"<<rate;
cout<<"\n                    amount:"<<amount;
cout<<"\n                  discount:"<<discount;
cout<<"\n           value added tax:"<<tax;
cout<<"\n              total amount:"<<ta;
cout<<"\n                commission:"<<comm;
cout<<"\n*************commission of sales*********************";
}
};
void main()
{
commission c;
clrscr();
c.getdata();
c.calc();
c.show();
getch();
}
