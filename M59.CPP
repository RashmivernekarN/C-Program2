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
    if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
    v++;

     }
    else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
    v++;

     }
  }
  cout<<"\n Entered string is "<<str;
  cout<<"\n Number of vowels in a given string is "<<v;
  getch();
}

