/*program to copy the content of one string to another
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
 strcpy(str2,str1);
 cout<<"\n Given string is: "<<str1;
 cout<<"\n Copied string is: "<<str2;
 getch();
 }