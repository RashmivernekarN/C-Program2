/*program to Reverse a string using built in function*/
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
 strrev(str1);
 cout<<"\n Reversed string is: "<<str1;
 getch();
 }