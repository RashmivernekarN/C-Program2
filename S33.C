/*prg to find sum and average of 3 number*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a,b,c,sum,average;
clrscr();
printf ("\n enter 3 number");
scanf ("%d%d%d",&a,&b,&c);
sum=a+b+c;
average=sum/3;
printf ("\n sum of 3 number=%d",sum);
printf ("\n average of 3 number=%d",average);
getch();
}
