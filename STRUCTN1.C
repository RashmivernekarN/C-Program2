//program to illustrate structure

#include<stdio.h>
#include<conio.h>

struct student
{
   int rollno;
   char name[20];
};

void main()
{
   struct student s1;
   clrscr();
   printf("\n\tenter student information");
   printf("\n\t\tenter student rol number and name");
   scanf("%d%s",&s1.rollno,s1.name);
   printf("\n\tROLL NUM=%d\n\tNAME=%s",s1.rollno,s1.name);
   getch();
}