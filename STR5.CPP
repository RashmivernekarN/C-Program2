/*program to find the length of given string
using built in function*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
 int i,len=0;
 char str1[20];
 clrscr();
 cout<<"Enter any string";
 cin>>str1;
 len=strlen(str1);
 cout<<"\n Given string is: "<<str1;
 cout<<"\n Length of string is: "<<len;
 getch();
 }
