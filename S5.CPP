/*prg to read a string and find length of given string
using built in functions*/
#include <iostream.h>
#include <conio.h>
#include<string.h>
int main ()
{

  char str1[30];
  clrscr();
  cout<<"\n Enter any string";
  cin>>str1;
  int len=strlen(str1);
  cout<<"\n Given string is"<<str1;
  cout<<"\n Length of given string is"<<len;
  getch();
}