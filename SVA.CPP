#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i;
float mean,var,sd,sum=0,x[25];
clrscr();
printf("\n\nEnter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%f",&x[i]);
sum=sum+x[i];
}
mean=(sum/n);
sum=0;
for(i=0;i<n;i++)
sum=(sum+((x[i]-mean*(x[i]-mean))));
var=sum/n;
sd=sqrt(var);
printf("\nmean=%f",mean);
printf("\nvar=%f",var);
printf("\nsd=%f",sd);
getch();
}
