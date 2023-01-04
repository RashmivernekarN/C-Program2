//program to illustrate switch(display student remark depends on their grade)
#include<stdio.h>
#include<conio.h>

void main()
{
  char grade;
  clrscr();
  printf("\n\tenter grade of the student");
  scanf("%c",&grade);
  switch(grade)
  {
    case 'A':printf("\n\tEXCELLENT");
	       break;
    case 'B':printf("\n\tVERY GOOD");
	       break;
    case 'C':printf("\n\tGOOD");
	       break;
    case 'D':printf("\n\tPOOR");
	       break;
    case 'E':printf("\n\tNEED TO IMPROVE");
	       break;
   default:printf("\n\tENTER VALID GRADE");
	   break;
  }
  getch();
}