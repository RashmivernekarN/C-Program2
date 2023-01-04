//prgram to demonstate structure with arrays
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
struct student
{
char name[10];
int rollno;
};
student s[3];
int i;
clrscr();
for(i=1; i<=3; i++)
{
printf("enter the name:");
scanf("%s",&s[i].name);
printf("enter the rollno:");
scanf("%d",&s[i].rollno);
}
printf("\n\n*******student details********\n\n");
printf("name\t rollnumber\n");
printf("________________________\n");
for(i=1; i<=3; i++)
{
printf("%s\t%d\n",s[i].name,s[i].rollno);
printf("________________________\n");

}
getch();
}

