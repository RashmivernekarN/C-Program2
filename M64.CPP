/*program to read a string and convert it to uppercase string*/
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
  cout<<"\nUpper case string is "<<strupr(str1);
  getch();
}