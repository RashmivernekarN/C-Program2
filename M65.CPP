/*program to read a string and convert it to lowercase string*/
#include <iostream.h>
#include<stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
  char str1[20];
  clrscr();
  cout<<"\n Enter any string";
  gets(str1);
  cout<<"\n Given string is "<<str1;
  cout<<"\n Lower case string is "<<strlwr(str1);
  getch();
}