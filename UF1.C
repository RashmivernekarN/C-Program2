/*program to illustrate user defined fuction
(FUNCTION WITHOUT RETURN VALUE WITHOUT ARGUMENT)*/

#include<stdio.h>
#include<conio.h>
int a,b,sum;//global variable declaration
void addition();//function declaration

void main()
{
  clrscr();
  addition();//calling function
  getch();
}
void addition()//function definition
{
   printf("\n\tenter 2 numbers");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("\n\tsum=%d",sum);
}
