//illustrate structure with  multiple structure variable
#include<stdio.h>
#include<conio.h>

struct student
{
    int rl_no;
    char name[20];
    float per;
}s1,s2;
 void main()
 {
   //  struct student s1,s2;
     clrscr();
     printf("\n\tenter values for roll number name and per of first student");
     scanf("%d%s%f",&s1.rl_no,s1.name,&s1.per);
    printf("\n\tenter values for roll number name and per of second student");
     scanf("%d%s%f",&s2.rl_no,s2.name,&s2.per);
     printf("\n\tFIRST STUDENT INFORMATION\n");
     printf("\n\troll number=%d",s1.rl_no);
     printf("\n\tname=%s",s1.name);
     printf("\n\tpercentage=%f",s1.per);
     printf("\n\n\tSECOND STUDENT INFORMATION\n");
     printf("\n\troll number=%d",s2.rl_no);
     printf("\n\tname=%s",s2.name);
     printf("\n\tpercentage=%f",s2.per);
     getch();
}



