/*prg to read a string and copy it into another string*/
#include <stdio.h>
#include <conio.h>
void main()
{
int i;
char str1[20],str2[20];
clrscr();
printf ("\n enter any string");
gets(str1);
for (i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
printf ("\n entered string is :%s",str1);
printf ("\n copied string is :%s", str2);
getch();
}