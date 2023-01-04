/*program to read a string and find  the length of a given string*/
#include <iostream.h>
#include<stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
  char str[20];
  clrscr();
  cout<<"\n Enter any string";
  gets(str);
  cout<<"\n Entered string is "<<str;
  cout<<"\n Length of string is "<<strlen(str);
  getch();
}
