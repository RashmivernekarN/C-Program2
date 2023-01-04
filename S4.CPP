/*prg to read a string and copy it into another string
using built in functions*/
#include <iostream.h>
#include <conio.h>
#include<string.h>
int main ()
{

  char str1[30],str2[30];
  clrscr();
  cout<<"\n Enter any string";
  cin>>str1;
      strcpy(str2,str1);
  cout<<"\n Given string is"<<str1;
  cout<<"\n Copied string is"<<str2;
  getch();
}