 /*prg to check whether given string is palindrome or not
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
  strrev(str2);
  if(strcmp(str1,str2)==0)
      cout<<str1<<" is a plaindrome";
  else
     cout<<str1<<" is not a plaindrome";
  getch();
}