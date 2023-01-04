/*prg to read a string and reverse the same string using function*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char str1[20];
clrscr();
printf ("\n enter 1st string");
gets(str1);
strrev(str1);
printf ("\n reversed string is :%s",str1);
getch();
}