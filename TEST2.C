/*prg to read a string and count number of alphabet,digits and spcial
 character using ascii*/
#include <stdio.h>
#include <conio.h>
void main()
{
int i,a=0,s=0,d=0;
char str1[20],str2[20];
clrscr();
printf ("\n enter any string");
gets(str1);
printf ("\n Given string is %s",str1);
for (i=0;str1[i]!='\0';i++)
{
 if (str1[i]>=65 && str1[i]<=90 || str1[i]>=97 && str1[i]<=122)
 {
 a++;
 }
 else if(str1[i]>=48 && str1[i]<=57)
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


