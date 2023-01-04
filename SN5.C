//prg to swap 2 numbers using dummy variable
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a,b,temp;
    clrscr();
    printf("\n Enter any 2 nums");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After swapping a=%d \t b=%d",a,b);
    getch();
  }