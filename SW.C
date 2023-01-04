//program to illustrate switch(PERFORM ARITHMETIC OPERATIONS)
#include<stdio.h>
#include<conio.h>

 void main()
{
   int a,b,sum,diff,p,q,ch;
   clrscr();
 printf("\n\n\t1.ADDITION\n\t2.SUBTRACTION\n\t3.MULTIPLICATION\n\t4.DIVISION\n\t5.EXIT\n");
   printf("enter your choice");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:printf("\nAddition");
	      printf("\nenter 2 numbers");
	     scanf("%d%d",&a,&b);
	      sum=a+b;
	      printf("\nSum=%d",sum);
	      break;
      case 2:printf("\nSUBTRACTION");
	      printf("\nenter 2 numbers");
	     scanf("%d%d",&a,&b);
	      diff=a-b;
	      printf("\ndiff=%d",diff);
	      break;
      case 3:printf("\nMultiplication");
	      printf("\nenter 2 numbers");
	     scanf("%d%d",&a,&b);
	     p=a*b;
	      printf("\nProduct=%d",p);
	      break;
      case 4:printf("\nDivision");
	      printf("\nenter 2 numbers");
	     scanf("%d%d",&a,&b);
	      q=a/b;
	      printf("\nque=%d",q);
	      break;
      case 5:exit();
	      break;
     default:printf("\nenter valid choice");
	      break;
     }
     getch();
}