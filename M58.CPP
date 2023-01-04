/*program to read a string and count the no of vowels in a given string*/
#include <iostream.h>
#include<stdio.h>
#include <conio.h>
void main()
{
  int i,v=0;
  char str[20];
  clrscr();
  cout<<"\n Enter any string";
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
   switch(str[i])
     {
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u': v++;
     }
  }
  cout<<"\n Entered string is "<<str;
  cout<<"\n Number of vowels in a given string is "<<v;
  getch();
}

