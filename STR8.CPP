/*program to lower case to uppercase string  and vice versa
using built in function*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
 char str1[20];
 clrscr();
 cout<<"Enter any string";
 cin>>str1;
 cout<<"\n Given string is: "<<str1;
 strlwr(str1);
 cout<<"\n Lower string is: "<<str1;
 strupr(str1);
 cout<<"\n Upper case string is: "<<str1;

 getch();
 }