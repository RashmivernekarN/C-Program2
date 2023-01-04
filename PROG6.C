//squre and cube of a given number

#include<stdio.h>
#include<conio.h>

void main()
{
   int n,s,cube;
   clrscr();
   printf("\n\tenter value for n");
   scanf("%d",&n);
   s=n*n;
   cube=n*n*n;
   printf("\n\tnumber=%d\n\tsquare=%d\n\tcube=%d",n,s,cube);
   getch();
}
