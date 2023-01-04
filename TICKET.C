#include<stdio.h>
#include<conio.h>

void main()
{
int a;
clrscr();
printf("Book airline ticket to destined place\n Enter your choice\n");
printf("1.DELHI\n 2.MUMBAI\n 3.CHENNAI\n 4.BANGALORE\n 5.EXIT\n");
scanf("%d",&a);
switch(a)
{
case 1:printf("''CONGRATULATIONS!'' You have booked a ticket to DELHI.\n Happy journey:)");
       break;

case 2:printf("CONGRATULATIONS! You have booked a ticket to MUMBAI.\n Happy journey:)");
       break;

case 3:printf("CONGRATULATIONS! You have booked a ticket to CHENNAI.\n Happy journey:)");
       break;

case 4:printf("CONGRATULATIONS! You have booked a ticket to BANGALORE.\n Happy journey:)");
       break;

case 5:exit();
      break;

default:printf("INVALID CHOICE!");
}
getch();
}