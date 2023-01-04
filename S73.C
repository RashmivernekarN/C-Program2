/*prg to find sum of digit using sub prg*/
#include <stdio.h>
#include <conio.h>
int sum (int);
void main()
{
int s,n,temp;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
temp=n;
s=sum(n);
printf ("\n given number=%d",temp);
printf ("\n sum of digit=%d",s);
getch();
}
int sum (int x)
{
int s=0,d;
while (x>0)
{
d=x%10;
s=s+d;
x=x/10;
}
return (s);
}