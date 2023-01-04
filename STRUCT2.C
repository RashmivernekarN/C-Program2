//program to illustrate structure with multiple structure variables.
#include<stdio.h>
#include<conio.h>
struct student
  {
    int roll_no;
    char name[20];
    float result[20];
  }s1,s2;
  void main()
  {
      clrscr();
      printf("\n\tENTER FIRST STUDENT INFORMATION");
      printf("\n\tenter student roll_ no");
      scanf("%d",&s1.roll_no);
      printf("\n\tenter student name");
      scanf("%s",s1.name);
      printf("\n\tenter student result");
      scanf("%f",&s1.result);
       printf("\n\tENTER SECOND STUDENT INFORMATION");
      printf("\n\tenter student roll_ no");
      scanf("%d",&s2.roll_no);
      printf("\n\tenter student name");
      scanf("%s",s2.name);
      printf("\n\tenter student result");
      scanf("%f",&s2.result);
      printf("\n\tFIRST STUDENT");
printf("\n\tROLL NO=%d\n\t NAME=%s \n\tRESULT=%f",s1.roll_no,s1.name,s1.result);
      printf("\n\n\tSECOND STUDENT");
printf("\n\tROLL NO=%d\n\t NAME=%s \n\tRESULT=%f",s2.roll_no,s2.name,s2.result);
      getch();
      }