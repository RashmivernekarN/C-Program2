////* prg tp read n nums and find the sum of even and odd all elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],i,n,se=0,so=0;
clrscr();
cout<<"\n enter the limit";
cin>>n;
cout<<"\n enter the elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
// compute sum
for(i=0;i<n;i++)
{
if(a[i]%2==0)
se=se+a[i];
else
so=so+a[i];
}
cout<<"/n of even elements "<<se;
cout<<"\n of odd elements"<<so;
getch();
}