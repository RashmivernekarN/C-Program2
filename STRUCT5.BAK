//program to illustrate structure
#include<stdio.h>
#include<conio.h>
struct student
  {
    int rollno;
    int s1,s2,s3,tot,avg;
    char name[20];
  };
  void main()
  {
      struct student s1[10];
      int i,n;
      clrscr();
      printf("\n How many students?");
      scanf("%d",&n);
      for(i=0;i<n;i++)
       {
      printf("\n\t enter student roll_ no");
      scanf("%d",&s1[i].rollno);
      printf("\n\t enter student name");
      scanf("%s",s1[i].name);
      printf("\n\t enter sub 1 marks");
      scanf("%d",&s1[i].s1);
      printf("\n\t enter sub 2 marks");
      scanf("%d",&s1[i].s2);
      printf("\n\t enter sub 3 marks");
      scanf("%d",&s1[i].s3);
      s1[i].tot=s1[i].s1+s1[i].s2+s1[i].s3;
      s1[i].avg=s1[i].tot/3;
      }
      for(i=0;i<n;i++)
       {
	printf("\n\t\n ROLL NO=%d\t NAME=%s \tsub 1 marks=%d \tsub 2marks=%d  \tsub 3 marks=%d \t total=%d \t avg=%d",s1[i].rollno,	s1[i].name,s1[i].s1,s1[i].s2,s1[i].s3,s1[i].tot,s1[i].avg);       }
      getch();
       }