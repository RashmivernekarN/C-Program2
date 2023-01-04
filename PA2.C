/*prg to print find biggest of three numbers using sub program*/
#include<stdio.h>
#include<conio.h>
void main ()
{
int big(int,int,int);//protype declation
int a,b,c,lar;
clrscr();
printf("\n enter any three numbers");
scanf("%d%d%d",&a,&b,&c);
lar=big(a,b,c);
printf("\n biggest three nos=%d",lar);
getch();
}
int big(int x,int y,int z)
{
if(x>y)
if(x>z)
return(x);
else
return(z);
else if(y>z)
return(y);
else
return(z);
}