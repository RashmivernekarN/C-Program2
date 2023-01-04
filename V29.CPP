/* prg to read a no and find factorial of a givrn number*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i=1, fact=1,n;
clrscr();
cout<<"\n enter any no";
cin>>n;
while(i<=n)
{
fact=fact*i;
i++;
}
cout<<"factorial of a given no="<<fact<<endl;
getch();
}