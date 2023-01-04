/*prg to swap two nums using dummy variable*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,temp;
   clrscr();
   printf("\n Enter two numbers");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
   printf("\n After swapping a=%d \t b=%d",a,b);
   getch();
 }