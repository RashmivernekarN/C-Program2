/*prg to read a string and length of string*/
#include <stdio.h>
#include <conio.h>
void main()
{
int i,len=0;
char str[20];
clrscr();
printf ("\n enter any string");
gets(str);
for (i=0;str[i]!='\0';i++)
{
len=len+1;
}
printf ("\n entered string is :%s",str);
printf ("\n length of the given string is %d",len);
getch();
}