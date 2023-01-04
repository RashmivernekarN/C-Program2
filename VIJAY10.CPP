/* programme to find smallest of two nums using conditional operttor*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res;
clrscr();
printf("\n enter any 2 numbers");
scanf("%d%d",&a,&b);
res=(a<b)?a:b;
printf("\n smallest =%d",res);
getch();
}