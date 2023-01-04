//program to illustrate size of operator

#include<stdio.h>
#include<conio.h>

void main()
{
   int a;
   float b;
   clrscr();
   printf("\n\tsize of interger=%d bytes",sizeof(a));
   printf("\n\tsize of float=%d bytes",sizeof(b));
   printf("\n\tsize of double=%d bytes",sizeof(double));
   printf("\n\tsize of char=%d bytes",sizeof(char));
   printf("\n\tsize of long interger=%d bytes",sizeof(long int));
   getch();
}