//program to find Employee Details.
#include<stdio.h>
#include<conio.h>
void main()
{
int code,basic,hra,da,gross,pf,tax,ded,net;
char name[10],design[10];
clrscr();
printf("\nEnter The Employee Code:");
scanf("%d",&code);
printf("Enter The Employee Name:");
scanf("%s",&name);
printf("Enter The Employee Design:");
scanf("%s",&design);
printf("Enter The Basic Salary:");
scanf("%d",&basic);
{
hra=basic*32/100;
da=basic*16/100;
gross=basic+hra+da;
pf=basic*12/100;
tax=basic*1/100;
ded=pf+tax;
net=gross-ded;
}
printf("\n****************Employee Records********************");
printf("\n        Employee Code:=%d",code);
printf("\n        Employee Name:=%s",name);
printf("\n Employee Designation:=%s",design);
printf("\n         Basic Salary:=%d",basic);
printf("\n  House Rent Allownce:=%d",hra);
printf("\n    Dearness Allownce:=%d",da);
printf("\n         Gross Salary:=%d",gross);
printf("\n      Providend Found:=%d",pf);
printf("\n                  Tax:=%d",tax);
printf("\n      Total Deduction:=%d",ded);
printf("\n           Net Salary:=%d",net);
printf("\n       Employee Grade:=");
{
if(net>=75000)
printf("A");
else if (net>=50000 && net<75000)
printf("B");
else if (net>=20000 && net<50000)
printf("C");
else
printf("D");
}
printf("\n     Employee Remarks:=");
{
if(net>=75000)
printf("R");
else if (net>=50000 && net<75000)
printf("M");
else if (net>=20000 && net<50000)
printf("P");
else
printf("B");
printf("\n****************Employee Records********************");
}
getch();
}




