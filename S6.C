//prg to read a string and convert it to lowercase string
#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
  {

    char str1[20];
    clrscr();
    printf("\n Enter first string");
    gets(str1);
    strlwr(str1);
    printf("\n Lowercase string is %s",str1);
    getch();
  }
