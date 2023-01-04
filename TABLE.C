#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
clrscr();
printf("\n enter any number");
scanf("%d",&n);

for(i=1;i<=10;i++)
{
printf("\n %d * %d=%d",n,i,n*i);
}
getch();
}