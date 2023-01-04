/* prg to read a character and check whether given character is a alphabet, digit or a special character using if-else-if*/
#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"\n enter any character";
cin>>ch;
if(ch>='a'&& ch<='z'||ch>='a'&& ch<='z')
cout<<ch<<"is a alphabet";
else if (ch>='0'&&ch<='9')
cout<<ch<<"is a digit";
else
cout<<ch<<" is a special character";
getch();
}