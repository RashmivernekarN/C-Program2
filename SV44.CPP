//* prg top read 5 nums and print them in reverce*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
cout<<"\n enter 5 nums";
for(i=0;i<5;i++);
{
cin>>a[i];
}
cout<<"\ entered 5 nums are \n";
for(i=4;i>=0;i--)
{
cout<<"\n"<<a[i];
}
getch();
}
