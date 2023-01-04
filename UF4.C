/*program to illustrate user defined fuction
(FUNCTION WITH RETURN VALUE WITH ARGUMENT)*/
#include<stdio.h>
#include<conio.h>
int a,b,sum;//global variable declaration
int addition(int x,int y);//function declaration
void main()
{
  clrscr();
  printf("\n\tenter 2 numbers");
  scanf("%d%d",&a,&b);
  sum=addition(a,b);//calling function->actual parameters
  printf("\n\tsum=%d",sum);
  getch();
}
int addition(int x,int y)//called function->formal parameters
{
    sum=x+y;
    return(sum);
}
