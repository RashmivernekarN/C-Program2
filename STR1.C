//illustrate gets and puts functions
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   char address[40];
   clrscr();
    printf("\nillustration of gets and puts\n");
    printf("\tenter line of text\n\t");
   gets(address);
   printf("\naddress is\n\t\t");
   puts(address);
   getch();
}