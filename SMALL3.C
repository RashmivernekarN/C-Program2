#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,smallest;
clrscr();
printf("Enter any three numbers to find smallest of all\n");
scanf("%d%d%d",&a,&b,&c);
smallest=(a<b&&a<c)?a:((b<c?b:c));
printf("The smallest of all the entered numbers is %d",smallest);
getch();
}