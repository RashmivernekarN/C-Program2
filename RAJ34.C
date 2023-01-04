#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("\n enter any charecter");
 scanf("%c",&ch);
 if(ch>=65&&ch<=90||ch>=9&&ch<=122)
 printf("%c is a alphabet",ch);
 else if(ch>=48&&ch<=57)
 printf("\n %c is a digit",ch);
 else
 printf("%c is special charecter",ch);
 getch();
 }
