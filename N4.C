/*prg to read a string and find the length of the string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
   int len=0;
   char str1[20];
   clrscr();
   printf("\n Enter any string");
   gets(str1);
   printf("\n Entered string is %s",str1);
   len=strlen(str1);
   printf("\n Length of the string is %d characters",len);

   getch();

 }





