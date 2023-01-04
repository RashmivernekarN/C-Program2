//program to perform arithmatic operation using pointer.
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,s,d,p,q;
	int *p1,*p2;
	clrscr();
	cout<<"\n\tEnter values for a,b";
	cin>>a>>b;
	p1=&a;
	p2=&b;
	s=(*p1)+(*p2);
	d=(*p1)-(*p2);
	p=(*p1)*(*p2);
	q=(*p1)/(*p2);
	cout<<"\n\ta= "<<*p1<<"\n\tb="<<*p2;
	cout<<"\n\taddress of a="<<p1<<"\n\taddress of b="<<p2;
	cout<<"\n\taddition= "<<s<<"\n\tsubtraction= "<<d<<"\n\tproduct= "<<p<<"\n\tque= "<<q;
	getch();
}