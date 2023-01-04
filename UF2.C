/*program to illustrate user defined fuction
(FUNCTION WITHOUT RETURN VALUE WITH ARGUMENT)*/
#include<stdio.h>
#include<conio.h>
int a,b,sum;//global variable declaration
void addition(int x,int y);//function declaration
void main()
{
  clrscr();
  printf("\n\tenter 2 numbers");
  scanf("%d%d",&a,&b);
  addition(a,b);//calling function->actual parameters
  getch();
}
void addition(int x,int y)//called function->formal parameters
{
    sum=x+y;
     printf("\n\tsum=%d",sum);
}
					    f