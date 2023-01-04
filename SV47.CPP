//* prg to reafd n nums and find the biggest elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],i,n,lar;
clrscr();
cout<<"\n enter the limit";
cin>>n;
cout<<"\n enter the elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
// find big
lar=a[0];
for(i=1;i<n;i++)
{
if(a[i]>lar)
lar=a[i];
}
cout<<"\n biggest elements"<<lar;
getch();
}