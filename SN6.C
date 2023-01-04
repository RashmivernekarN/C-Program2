//prg to swap 2 numbers without using dummy variable
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a,b;
    clrscr();
    printf("\n Enter any 2 nums");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping a=%d \t b=%d",a,b);
    getch();
  }