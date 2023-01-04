/*program to concat two strings using built in function*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
 char str1[20],str2[20];
 clrscr();
 cout<<"Enter first string";
 cin>>str1;
 cout<<"Enter second string";
 cin>>str2;

 strcat(str1,str2);
 cout<<"\n concatenated string is: "<<str1;

 getch();
 }