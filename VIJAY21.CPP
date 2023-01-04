/* prgm to read 5 nums and print the same*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("\nenter 5 nums");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n entered 5 nums");
for(i=0;i<=5;i++)
{
printf("\n%d",a[i]);
}
getch();
}
