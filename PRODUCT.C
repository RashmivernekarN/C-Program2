//product of 3 numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c,p;
   clrscr();
   printf("\nenter 3 integer values\n");
   scanf("%d%d%d",&a,&b,&c);
      p=a*b*c;
   printf("\na=%d\nb=%d\nc=%d\nproduct=%d",a,b,c,p);
   getch();
}