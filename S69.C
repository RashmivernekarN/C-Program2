/*prg to find factorial of a given number using sub prg*/
#include <stdio.h>
#include <conio.h>
int fact (int);
void main()
{
int f,n;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
f=fact(n);
printf ("\n factorial of given number=%d",f);
getch();
}
int fact (int x)
{
int f=1,i=1;
while (i<=x)
{
f=f*i;
i++;
}
return (f);
}