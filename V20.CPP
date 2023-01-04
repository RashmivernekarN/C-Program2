// * prg to read a charcter and check wheather given charcter is a alphabet,digit or special charcter using built in function
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
cout<<"\n enter an charcter ";
cin>>ch;
if(isalpha(ch))
cout<<ch<<"is a alphabet";
else if(isdigit(ch))
cout<<ch<<"is a digit";
else
cout<<ch<<"is a special charcter";
getch();
}