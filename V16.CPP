/* prg to check result of a student using if else if*/
#include<iostream.h>
#include<conio.h>
void main()
{
int per;
clrscr();
cout<<"\n enter percentage";
cin>>per;
if(per>80)
cout<<"\n distinction";
else if(per>=60)
cout<<"\n first class";
else if(per>=50)
cout<<"\n second class";
else if(per>=35)
cout<<"\n just pass";
else
cout<<"\n fail";
getch();
}