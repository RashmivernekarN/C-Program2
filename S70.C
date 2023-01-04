/*prg to find sum of N number using sub prg*/
#include <stdio.h>
#include <conio.h>
int sum (int);
void main()
{
int s,n;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
s=sum(n);
printf ("\n sum of given number=%d",s);
getch();
}
int sum (int x)
{
int s=0,i=1;
while (i<=x)
{
s=s+i;
i++;
}
return (s);
}