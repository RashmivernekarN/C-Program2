#include<stdio.h>
#include<conio.h>
void main()
{
struct student
{
char name[10];
int rollno;
};
clrscr();
student s[03];
int i;
clrscr();
for(i=1; i<=3;i++)
{
printf("enter the name:");
scanf("%s",&s[i],name);
printf("enter the rollno:");
scanf("%d",s[i],rollno);
}
printf("\n********************student detail***********************\n");
printf("\n_________________________________________________________\n");
printf("\nname\t roll no");
printf("\n_________________________________________________________\n");
for(i=1; i<=3;i++)
{
printf("%s\t%d\n",s[i],name,s[i],rollno);
}
getch();
}