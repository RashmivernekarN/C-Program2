
#include<stdio.h>
#include<conio.h>
int a,b,sum;
void addition();

void main()
{
    clrscr();
    addition();
    getch();
}
void addition()
{
   printf("\n\tenter 2 integers");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("\n\tsum=%d",sum);
}