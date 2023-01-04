//program to find the lenth of string using pointers
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char str[10],*ptr;
int i=0;
clrscr();
printf("enter the string:");
scanf("%s",&str);
ptr=str;
while(*ptr++!='\0')
{
i++;
}
printf("lenth of string=%d",i);
getch();
}