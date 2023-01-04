/* create a structure called bank ,structure members are
bank code,account number,customer name ,account type and balance
write main program to accept and display 5 account holders information*/

#include<stdio.h>
#include<conio.h>

struct bank
{
   int bcode;
   long int accno;
   char cname[20];
   char acctype[20];
   int bal;
}b[5];
void main()
{
   int i;
   clrscr();
   printf("\n\tENTER ACCOUNT HOLDERS INFORMATION\n");
   for(i=0;i<5;i++)
   {
  printf("\n\tenter %d account holder information",i+1);
  printf("\n\tenter branch code account no cust name acc type balance\n\t");
scanf("%d%ld%s%s%d",&b[i].bcode,&b[i].accno,b[i].cname,b[i].acctype,&b[i].bal);
    }
    printf("\n\tBRANCHCODE\tACCNO\tCNAME\tACCTYPE\tBALANCE\n\t");
    for(i=0;i<5;i++)
    {
printf("\n\t%d\t%ld\t%s\t%s\t%d",b[i].bcode,b[i].accno,b[i].cname,
b[i].acctype,b[i].bal);
    }
    getch();
}

