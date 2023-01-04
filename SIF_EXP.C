//eveluate expression only if x<5
#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,x,y;
   clrscr();
   printf("\n\tenter values for a");
   scanf("%d",&a);
    printf("\n\tenter values for b");
   scanf("%d",&b);
      printf("\n\tenter values for c");
   scanf("%d",&c);
      printf("\n\tenter values for x");
   scanf("%d",&x);
   if(x<5)
   {
      y=a*x*x+b*x+c;
      printf("\n\ta=%d\n\tb=%d\n\tc=%d\n\tx=%d\n\t\tY=%d",a,b,c,x,y);
   }
   getch();
   }
