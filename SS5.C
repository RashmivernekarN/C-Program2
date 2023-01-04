//prg to read a string and copy it in to another string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{

   char str1[20],str2[20];
   clrscr();
   printf("\n Enter any string");
   gets(str1);
   strcpy(str2,str1);
   printf("\n Entered string is %s",str1);
   printf("\n Cpoied string is %s",str2);

   getch();
}
