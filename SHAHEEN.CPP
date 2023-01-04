//program to find goto statements.
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
char ch;
label:
clrscr();
printf("\n enter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c && c==a)
printf("\n tringle is equilateral");
else if(a==b || b==c || c==a)
printf("\n tringle is scalane");
else
printf("\n tringle is isoscless");
printf("\n do you want to continue[y\n]?");
scanf("%s",&ch);
if(ch=='y')
goto label;
getch();
}


