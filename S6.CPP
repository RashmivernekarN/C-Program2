/*prg to read a string and reverse the string
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
  cout<<"\n Given string is"<<str1;
  strrev(str1);
  cout<<"\n Reversed string is"<<str1;
  getch();
}