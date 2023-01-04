/*program to find the total and average of marks of 3 subject of a student*/
#include<stdio.h>
#include<conio.h>
void main()
{
char name[10];
int m1,m2,m3,rollno;
float total, average;
clrscr();
printf("enter the name:");
scanf("%s",&name);
printf("enter the roll no:");
scanf("%d",&rollno);
printf("enter the values of m1,m2,and m3:");
scanf("%d%d%d",& m1,& m2,& m3);
total=m1+m2+m3;
average=total/3;
printf("\n***student detels ***\n");
printf("\n name : %s",name);
printf("\nroll no:%d",rollno);
printf("\ntotal:%6.2f",total);
printf("\naverage:%6.2f",average);
getch();
}