/*prg to reverse a given number using sub prg*/
#include <stdio.h>
#include <conio.h>
int reverse (int);
void main()
{
int r,n,temp;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
temp=n;
r=reverse(n);
printf ("\n given number=%d",temp);
printf ("\n reversed number=%d",r);
getch();
}
int reverse (int x)
{
int r=0,d;
while (x>0)
{
d=x%10;
r=(r*10)+d;
x=x/10;
}
return (r);
}