/*prg to read a string and find how many vowels are there in a string
using built in functions*/
#include <iostream.h>
#include <conio.h>
#include<string.h>
int main ()
{

  int i,len=0;
  char str1[30];
  clrscr();
  cout<<"\n Enter any string";
  cin>>str1;
  for(i=0;str1[i]!='\0';i++)
  {
   switch(str1[i])
    {
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
		len++;
    }           break;
  }
     cout<<"total no of Vowels= "<<len;
  getch();
}