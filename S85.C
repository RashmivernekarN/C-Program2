/*prg to read a string and count number of alphabet,digit
or spcial character using function*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
int i,a=0,s=0,d=0;
char str1[20];
clrscr();
printf ("\n enter any string");
gets(str1);
printf ("\n Given string is %s",str1);
for (i=0;str1[i]!='\0';i++)
{
 if (isalpha(str1[i]))
 {
 a++;
 }
 else if(isdigit(str1[i]))
 {
 d++;
 }
else
 {
 s++;
 }
}
 printf ("\n alphabet=%d",a);
 printf ("\n digit=%d",d);
 printf ("\n spcial character=%d",s);
getch();
}