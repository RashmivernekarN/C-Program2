/* prg to read c character and check whether given character is a alphabet, digit or a special character using ascii values*/
#include<iostream.h>
#include<conio.h>
void main()
(
char ch;
clrscr();
cout<<"\n enter any character";
cin>>ch;
if(ch>=65 &&ch<<=90 ||ch>=97 &&ch<<=122)
cout<<ch<<" is a alphabet";
else if (ch>=48 &&ch<=57)
count<<ch<<" is adigit";
else
cout<<ch<<"is a special character";
getch();
}