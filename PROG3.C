//program to add 2 numbers

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,sum;
    clrscr();
    printf("\nenter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\ta=%d\n\tb=%d\n\tsum=%d",a,b,sum);
    getch();
}