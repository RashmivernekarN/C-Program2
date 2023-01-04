//prg to read a string and reverse the same string
#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
  {

    char str1[20];
    clrscr();
    printf("\n Enter first string");
    gets(str1);
    strrev(str1);
    printf("\n Reversed string is %s",str1);
    getch();
  }
