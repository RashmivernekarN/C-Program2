/*//program to demonstrate simple if statement.

#include<stdio.h>
#include<conio.h>

void main()
{
   int money;
   clrscr();
   printf("\nenter the money");
   scanf("%d",&money);
   if(money<=500)
   printf("\nborrow money");
   getch();
} */
/*//program to check whether the no's even or odd.

#include<stdio.h>
#include<conio.h>

void main()
{
   int a;
   clrscr();
   printf("\nenter the value of a:");
   scanf("%d",&a);
   if(a%2==0)
   printf("\n %d Number Is Even");
   else
   printf("\n Number Is odd",a);
   getch();
} */
/*//program to find the biggest of three number using if.

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c;
   clrscr();
   printf("\nenter the value of a:");
   scanf("%d",&a);
   printf("\nenter the value of b:");
   scanf("%d",&b);
   printf("\nenter the value of c:");
   scanf("%d",&c);
   if(a>b)
   {
   if(a>c)
   printf("\n %d Is Bigg",a);
   else
   printf("\n %d is Big",c);
   }
   else
   {
   if(b>c)
   printf("\n %d Is Bigg",b);
   else
   printf("\n %d is Big",c);
   }
   getch();
}*/
/*//program to find the biggest of two number using if,else.

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b;
   clrscr();
   printf("\nenter the value of a and b:");
   scanf("%d%d",&a,&b);
   if(a>b)
   printf("\n %d Is Bigg",a);
   else
   printf("\n %d is Big",b);
   getch();
}*/
/*//program to find the biggest of three number using if,else if,else.

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c;
   clrscr();
   printf("\nenter the value of a,b and c:");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && b>c)
   printf("\n %d Is Bigg",a);
   else if(b>c && c>a)
   printf("\n %d is Big",b);
   else
   printf("\n %d Is Bigg",c);
   getch();
} */
//program to check whethar the traingale is equilateral,isoscales or scalane.

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c;
   clrscr();
   printf("\nenter the value of a,b and c:");
   scanf("%d%d%d",&a,&b,&c);
   if(a==b && b==c && c==b)
   printf("\n Traingle Is Equilateral");
   else if(a==b ||b==c || c==a)
   printf("\n Traingle Is Isoscales");
   else
   printf("\n Traingle Is Scalane");
   getch();
}
