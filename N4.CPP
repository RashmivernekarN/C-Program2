/*prg to print Arithmetic operations..*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=5,b=10,sum,diff,mul,div;
float avg;
sum=a+b;
diff=a-b;
mul=a*b;
div=a/b;
avg=sum/2;
printf("\n           Sum:=%d",sum);
printf("\n    Difference:=%d",diff);
printf("\nmultiplication:=%d",mul);
printf("\n      Division:=%d",div);
printf("\n       Average:=%0.2f",avg);
getch();
}





