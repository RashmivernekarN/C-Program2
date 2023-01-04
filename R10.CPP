// program to find student marks sheet.
#include<stdio.h>
#include<conio.h>
void main()
{
int rollno,kan,eng,hin,total;
float per;
char name[10],grade[1],remark[15];
clrscr();
printf("\n\n\nenter the student rollno:");
scanf("%d",&rollno);
printf("enter the student Name:");
scanf("%s",&name);
printf("enter the student Subject Kannada:");
scanf("%d",&kan);
printf("enter the student Subject English:");
scanf("%d",&eng);
printf("enter the student Subject Hindi:");
scanf("%d",&hin);
total=kan+eng+hin;
per=total/3;
printf("***********************************************");
printf("\n    Student RollNo :%d",rollno);
printf("\n    Student Name :%s",name);
printf("\n    Subject Kannada :%d",kan);
printf("\n    Subject English :%d",eng);
printf("\n    Subject Hindi :%d",hin);
printf("\n    Student Marks Total :%d",total);
printf("\n    Student Percentage :%f",per);
printf("\n    Student Grade:");
{
if(per>=75)
printf("A");
if(per>=60 && per<75)
printf("B");
if(per>=50 && per<60)
printf("C");
else
printf("D");
}
printf("\n    Student Remarks:");
{
if(per>=75)
printf("Outstanding");
if(per>=60 && per<75)
printf("Excellent");
if(per>=50 && per<60)
printf("Good");
else
printf("Bad");
}
printf("\n***********************************************");
getch();
}






