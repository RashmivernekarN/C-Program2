//program to swap two variable using function
#include<stdio.h>
#include<conio.h>

int a,b;
void swap();
void main()
{
  clrscr();
  swap();
  getch();
}

void swap()
{
 printf("\n\tEnter any two integers to swap\n");
 scanf("%d%d",&a,&b);
 printf("\n\tBefore swapping:\n a=%d\n b=%d\n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n\tAfter swapping:\n a=%d\n b=%d\n",a,b);

}