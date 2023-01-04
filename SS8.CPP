/*//program to find the biggest of two no's.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a and b:");
scanf("%d%d",&a,&b);
if(a>b)
printf("\n  %d is big",a);
else
printf("\n  b is big",b);
getch();
}*/


/*//program to find the even or add no's.
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf ("enter the value of a:");
scanf(" %d", &a);
if(  a%2==0)
printf(" \n  %d even",a);
if(a%2!=0)
printf("\n a is add",a);
getch();
}*/

/*//program to find the +ve and -ve no's.
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
if(a>0)
printf("\n%dis +ve",a);
else
printf("\n ais -ve",a);
getch();
}*/

//program to find tringle is equilateral,scalane or isoscles.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr ();
printf("\n enter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c && c==a)
printf("\n tringle is equilateral");
else if (a==b||b==c||c==a)
printf("\n tringle is scalane");
getch();
}







