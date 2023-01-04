//to swap 2 variables without using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   printf("\n\tenter 2 numbers");
   scanf("%d%d",&a,&b);
   printf("\n\tBEFORE SWAPPING THE VALUES ARE\n");
   printf("\n\ta=%d\n\tb=%d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n\tAFTER SWAPPING THE VALUES ARE\n");
   printf("\n\ta=%d\n\tb=%d\n",a,b);
   getch();
}
