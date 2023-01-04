//program to illustrate structure

#include<stdio.h>
#include<conio.h>

struct student
{
   char name[20];
   char add[20];
   char result[20];
   int roll_no;
};
void main()
{
   struct student s1,s2;
   clrscr();
   printf("\nenter first student information");
   printf("\nenter name and address of the student");
   scanf("%s%s",s1.name,s1.add);
   printf("\nenter roll no and result of the student");
      scanf("%d%s",&s1.roll_no,s1.result);
	 printf("\nenter second student information");
   printf("\nenter name and address of the student");
   scanf("%s%s",s2.name,s2.add);
   printf("\nenter roll no and result of the student");
      scanf("%d%s",&s2.roll_no,s2.result);
   printf("\n\n\tSTUDENT DETAILS ARE\n");
   printf("\tNAME\tADDRESS\tROLL_NO\tRESULT\n");
   printf("\t%s\t%s\t%d\t%s\n",s1.name,s1.add,s1.roll_no,s1.result);
   printf("\t%s\t%s\t%d\t%s\n",s2.name,s2.add,s2.roll_no,s2.result);
   getch();
}



