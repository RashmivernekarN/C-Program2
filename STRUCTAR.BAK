//program to illustrate structure(structure with array)
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
   struct student s1[5];
   int i;
   clrscr();
   printf("\nenter student information");
   for(i=0;i<5;i++)
   {
   printf("\nenter %d student inforamation",i+1);
   printf("\nenter name and address of the student");
   scanf("%s%s",s1[i].name,s1[i].add);
   printf("\nenter roll no and result of the student");
      scanf("%d%s",&s1[i].roll_no,s1[i].result);
   }
   printf("\n\n\tSTUDENT DETAILS ARE\n\n");
    printf("\tNAME\tADDRESS\t\tROLL_NO\tRESULT\n");
   for(i=0;i<5;i++)
   {
      printf("\t%s\t%s\t\t%d\t%s\n",s1[i].name,s1[i].add,s1[i].roll_no,s1[i].result);
      }
   getch();
}


