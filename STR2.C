//illustrate string input output with printf and scanf function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   char name[40];
  clrscr();
    printf("\nillustration of string scanf function\n");
    printf("\tenter your name\n\t");
   scanf("%s",name);
   printf("\n\tname=%s",name);
   getch();
}