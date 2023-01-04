/*prg to concatenate 2 string*/
#include <stdio.h>
#include <conio.h>
void main()
{
int i;
char str1[20],str2[20];
clrscr();
printf ("\n enter 1st string");
gets(str1);
for (i=0;str1[i]!='\0';i++)
{
str1[i]=str2[i];
}
str2[i]='\0';
printf ("\n concatenated string is :%s",str1);
getch();
}