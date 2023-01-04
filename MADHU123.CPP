
//program to demonstrate student marks detail.
#include<stdio.h>
#include<conio.h>
void main()
{
int rollno, kan, eng, hin, total, std;
float per;
char name[10];
clrscr();
printf("enter the name:");
scanf("%s",&name);
printf("enter the standered:");
scanf("%d",&std);
printf("enter the rollno:");
scanf("%d",&rollno);
printf("enter the sub kannada:");
scanf("%d",&kan);
printf("enter the sub english:");
scanf("%d",&eng);
printf("enter the sub hindi:");
scanf("%d", &hin);
total=kan+eng+hin;
per=total/3;
printf("\n       name:=%s", name);
printf("\n  standered:=%d", std);
printf("\n     rollno:=%d", rollno);
printf("\n      total:=%d", total);
printf("\n percentage:=%f", per);
printf("\n      grade:=");
{
if(per>=75)
printf("A");
else if(per>=60 && per<=75)
printf("B");
else if(per>=50 && per<=60)
printf("C");
else
printf("D");
}
printf("\n remarks:=");
{
if(per>=75)
printf("excellent");
else if(per>=60 && per<=75)
printf("good");
else if(per>=50 && per<=60)
printf("poor");
else
printf("bad");
}
getch();
}



/*//program to demonstrate borrow money.
#include<stdio.h>
#include<conio.h>
void main()
{
int money;
clrscr();
printf("enter the money:");
scanf("%d", &money);
if(money<500)
printf("borrow money");
getch();
}*/



/*//program to demonstrate eligible for voting.
#include<stdio.h>
#include<conio.h>
void main()
{
int age, n;
clrscr();
printf("enter the nationality 1 if as Indian:");
scanf("%d", &n);
printf("enter the age:");
scanf("%d", &age);
{
if(n==1);
{
if(age>=18)
printf("eligible for voting:");
}
printf("not eligible for voting:");
}
else
printf("not eligible for voting:");
getch();
}*/







