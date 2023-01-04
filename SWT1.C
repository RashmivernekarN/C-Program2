// program to display month name by using month code
#include<stdio.h>
#include<conio.h>
void main()
{
   int mn;
   clrscr();
   printf("\nenter month code");
   scanf("%d",&mn);
   switch(mn)
   {
     case 1:printf("JANUARY");
	    break;
     case 2:printf("FEBRUARY");
	    break;
     case 3:printf("MARCH");
	    break;
     case 4:printf("APRIL");
	    break;
     case 5:printf("MAY");
	    break;
     case 6:printf("JUNE");
	    break;
     case 7:printf("JULY");
	    break;
     case 8:printf("AUG");
	    break;
     case 9:printf("SEPT");
	    break;
     case 10:printf("OCT");
	    break;
     case 11:printf("NOV");
	    break;
     case 12:printf("DEC");
	    break;
     default:printf("enter valid month number");
		      break;
    }
    getch();
}
