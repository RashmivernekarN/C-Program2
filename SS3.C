#include<stdio.h>
#include<conio.h>
void main()
{
int temp,n,d,rev=0;
clrscr();
printf("\n enter the limit");
scanf("%d",&n);
temp=n;
while(n>0)
{
d=n%10;
rev=(rev*10)+d;
n=n/10;
}
printf("\n given number=%d",temp);
printf("\n reversed number=%d",rev);
getch();
}
