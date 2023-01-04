/*program to copy the content of one string to another*/
#include <iostream.h>
#include <conio.h>
void main()
{
 int i;
 char str1[20],str2[20];
 clrscr();
 cout<<"Enter any string";
 cin>>str1;
 for(i=0;str1[i]!='\0';i++)
 {
   str2[i]=str1[i];
 }
 str2[i]='\0';
 cout<<"\n Given string is: "<<str1;
 cout<<"\n Copied string is: "<<str2;
 getch();
 }
