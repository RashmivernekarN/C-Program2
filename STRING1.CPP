//program to illlustrate strings
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   char name[20],add[20];
   clrscr();
   printf("\n\tenter name and address");
   scanf("%s%s",name,add);
   printf("\n\tname=%s\n\taddress=%s",name,add);
   getch();
}