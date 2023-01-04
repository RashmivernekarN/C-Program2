/*prg to read a string and find the length of a given string*/
#include <iostream.h>
#include <conio.h>
void main ()
{
  int i,len=0;
  char str[30];
  clrscr();
  cout<<"\n Enter any string";
  cin>>str;
  for(i=0;str[i]!='\0';i++)
    {
      len++;
    }
  cout<<"\n Given string is"<<str;
  cout<<"\n Length of given string is"<<len;
  getch();
}

