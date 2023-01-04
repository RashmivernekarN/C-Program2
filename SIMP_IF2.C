//program to check whether the student is PASS in the subject
//illustration of simple if

#include<stdio.h>
#include<conio.h>

void main()
{
  int marks;
  clrscr();
  printf("\n\tenter marks of student");
  scanf("%d",&marks);
  if(marks>=35)
      printf("\n\tPASS");
  getch();
}