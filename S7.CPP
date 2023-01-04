/*prg to convert string uppercase to lowercase and vice versa
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
  strlwr(str1);
  cout<<"\n Lower case string is"<<str1;
  strupr(str1);
  cout<<"\n Upper case string is"<<str1;

  getch();
}