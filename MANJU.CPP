/*prg to perform basic arithmetic operation*/
#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,sum,sub,prd,div;
clrscr();
printf("\n enter two nos");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
prd=a*b;
div=a%b;
printf("\n sum=%d",sum);
printf("\n sub=%d",sub);
printf("\n prd=%d",prd);
printf("\n div=%d",div);
getch();
}