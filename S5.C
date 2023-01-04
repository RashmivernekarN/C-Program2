//prg to read a string and convert it to uppercase string
#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
  {

    char str1[20];
    clrscr();
    printf("\n Enter first string");
    gets(str1);
    strupr(str1);
    printf("\n Uppercase string is %s",str1);
    getch();
  }
