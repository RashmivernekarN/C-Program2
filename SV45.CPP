//* prg to read n nums and find the sum of are elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],i,n,s=0;
clrscr();
cout<<"\n enter the limit";
cin>>n;
cout<<"\n enter the elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
//compute sum
for(i=0;i<n;i++)
{
s=s+a[i];
}
cout<<"\n sum of all elements"<<s;
getch();
}