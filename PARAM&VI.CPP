//program to demonstrate student marks detail.
#include<stdio.h>
#include<conio.h>
void main()
{
int rollno,std,kannada,english,hindi,maths,science,social,total;
float per;
char name[10];
clrscr();
printf("\nenter base name;");
scanf("%s",&name);
printf("\nenter the rollno:");
scanf("%d", & rollno);
printf("nenter the rollno ;");
scanf("%d", & rollno);
printf("nenter the subject kannada");
scanf("%d", & kannada);
printf("\nenter the subject english");
scanf("%d", & english);
printf("\nenter the subject hindi");
scanf("%d", & hindi);
printf("\nenter the subject maths");
scanf("%d", & maths);
printf("\nenter the subject science:");
scanf("%d", & science);
printf("\nenter the subject social:");
scanf("%d", & social);
total=kannada+english+hindi+maths+science+social;
printf("\n*******************student marks detail*******************");
printf("\n        name=%s",name);
printf("\n      rollno=%d",rollno);
printf("\n    standerd=%d",std);
printf("\n       total=%d",total);
printf("\n  percentage=%f",per);
printf("\n  grade=");
if(per>=75);
printf("A");
if(per>=60 && per<=75);
printf("B)");
if(per>=50 && per<=60);
printf("C");
}
printf(\n******************"end detail"*************************");