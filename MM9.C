 /*prg to swap two nums without using dummy variable*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b;
   clrscr();
   printf("\n Enter two numbers");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n After swapping a=%d \t b=%d",a,b);
   getch();
 }