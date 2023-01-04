/*prg to read a string and check whether the given string is a palindrome
string or not*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
  {
    char str1[20],str2[20];
    clrscr();
    printf("\n Enter first string");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1,str2)==0)
      printf("\n Given string is %s is a palindrome string",str2);
    else
      printf("\n Given string is %s is not a palindrome string",str2);
    getch();
  }