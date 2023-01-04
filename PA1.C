/*prg to print find biggest of two numbers using sub program*/
#include<stdio.h>
#include<conio.h>
void main ()
{
int big(int,int);//protype declation
int a,b,lar;
clrscr();
printf("\n enter any two numbers");
scanf("%d%d",&a,&b);
lar=big(a,b);
printf("\nbiggest no=%d",lar);
getch();
}
int big (int x,int y)
{
if(x>y)
return(x);
else
return(y);
}