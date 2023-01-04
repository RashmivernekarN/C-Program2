//* prg to find sum of 2 nums using functions*/
#include<iostream.h>
#include<conio.h>
int sum(int,int);
void main()
{
int a,b,s;
clrscr();
cout<<"\n enter any 2 nums";
cin>>a>>b;
s=sum(a,b);
cout<<"\n sum of 2 nums="<<s;
getch();
}
int sum(int x,int y)
{
int z;
z=x+y;
return(z);
}
