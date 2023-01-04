//program to find square and cube of a given number

#include<stdio.h>
#include<conio.h>

void main()
{
   int n,sq,cube;
   clrscr();
   printf("\n\tenter value for n");
   scanf("%d",&n);
   sq=n*n;
   cube=n*n*n;
   printf("\n\tnumber=%d\n\tsquare=%d\n\tcube=%d",n,sq,cube);
   getch();
}