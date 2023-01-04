/*program to find length of a string*/
#include <iostream.h>
#include <conio.h>
void main()
{
 int i,len=0;
 char str1[20];
 clrscr();
 cout<<"enter any string";
 cin>>str1;
 for(i=0;str1[i]!='\0';i++)
 {
 len=len+1;
 }
 cout<<"length of a given string is: "<<len;
 getch();
 }
