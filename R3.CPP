/*//program to find sum,avg,diff,pro of two no's.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,sum,diff,pro;
float avg;
printf("\n\nEnter the value of a and b:");
scanf("%d%d",&a,&b);
sum=a+b;
avg=sum/2;
diff=a-b;
pro=a*b;
printf("\n Sum of Two No's=%d",sum);
printf("\n Average of Two No's=%f",avg);
printf("\n Difference of Two No's=%d",diff);
printf("\n Product of Two No's=%d",pro);
getch();
} */
//program to find area and perimeter.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int l,b,area;
float peri;
printf("\n\nEnter the value of l and b:");
scanf("%d%d",&l,&b);
area=l+b;
peri=2*(l+b);
printf("\n area=%d",area);
printf("\n Perimeter=%f",peri);
getch();
}