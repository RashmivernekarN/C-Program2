//program to find Bank Account Details.
#include<stdio.h>
#include<conio.h>
void main()
{
int accno,bal,amount,interest;
char name[10],acctype;
clrscr();
printf("\nEnter The Account Number:");
scanf("%d",&accno);
printf("Enter The Account Holder Name:");
scanf("%s",&name);
printf("Enter The Account Balance Amount:");
scanf("%d",&bal);
printf("Enter The Account Type:");
scanf("%s",&acctype);
printf("\n****************Bank Statement********************");
printf("\n        Account Number:=%d",accno);
printf("\n   Account Holder Name:=%s",name);
printf("\n          Account Type:=%s",acctype);
printf("\n        Balance Amount:=%d",bal);
{
if(acctype=='s')
{
printf("\n     Saving Bank Account");
interest=bal*0.7/100;
}
else if(acctype=='f')
{
printf("\n     Fixed Deposits");
interest=bal*0.9/100;
}
else if(acctype=='r')
{
printf("\n      Recuring Deposits");
interest=bal*0.12/100;
}
else
printf("\nInvalid Statement");
amount=bal+interest;
}
printf("\n         Bank Interest:=%d",interest);
printf("\n          Total Amount:=%d",amount);
printf("\n****************Bank Statement********************");
getch();
}




