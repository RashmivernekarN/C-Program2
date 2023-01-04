#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char address[40];
  clrscr();
  printf("\nillustration of gets\n");
  gets(address);
  printf("\naddress\n);
  puts(address);
  getch();
}