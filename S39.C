/*prg to find fibonacci series by using for loop*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int i,f1=-1,f2=1,f3,n;
clrscr();
printf ("\n enter any number");
scanf ("%d",&n);
for (i=1;i<=n;i++)
{
f3=f1+f2;
printf ("\n %d",f3);
f1=f2;
f2=f3;
}
getch();
}

