/*prg to read a 2 string and concatenate 2 string using function*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char str1[20],str2[20];
clrscr();
printf ("\n enter 1st string");
gets(str1);
printf ("\n enter 2nd string");
gets(str2);
strcat(str1,str2);
printf ("\n concatenated string :%s",str1);
getch();
}