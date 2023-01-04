//program to illustrate structure
#include<stdio.h>
#include<conio.h>
struct student
  {
    int roll_no;
    char name[20];
    float result;
  }; void main()
  {
      struct student s1;//structure variable creation
      clrscr();
      printf("\n\tenter student roll_ no");
      scanf("%d",&s1.roll_no);
      printf("\n\tenter student name");
      scanf("%s",s1.name);
      printf("\n\tenter student result");
      scanf("%f",&s1.result);
      printf("\n\t\n ROLL NO=%d\n\t NAME=%s \n\tRESULT=%0.2f",s1.roll_no,s1.name,s1.result);
      getch();  }