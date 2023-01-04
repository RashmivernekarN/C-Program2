/*prg to concat two strings using built in functions*/
#include <iostream.h>
#include <conio.h>
#include<string.h>
int main ()
{

  char str1[30],str2[30];
  clrscr();
  cout<<"\n Enter first string";
  cin>>str1;
  cout<<"\n Enter second string";
  cin>>str2;
  strcat(str1,str2);
  cout<<"Concatenated string is:"<<str1;
  getch();
}