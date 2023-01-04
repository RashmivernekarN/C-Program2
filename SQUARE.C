//program to find square and cube of a given number

#include<stdio.h>
#include<conio.h>

void main()
{
   int n,sq,cube;
   clrscr();
   printf("\nenter value for n");
   scanf("%d",&n);
   sq=n*n;
   cube=n*n*n;
   printf("\n\tnumber=%d",n);
   printf("\n\tsquare=%d",sq);
   printf("\n\tcube=%d",cube);
   getch();
}
