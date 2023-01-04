//student record
#include<stdio.h>
#include<conio.h>
void main()
{
   float s1,s2,s3,tot,per;
   int rl_no;
   clrscr();
   printf("\n\tenter student roll number");
   scanf("%d",&rl_no);
   printf("\n\tenter marks of 3 subjects");
   scanf("%f%f%f",&s1,&s2,&s3);
   tot=s1+s2+s3;
   per=tot/3;
   printf("\n\troll num=%d \n\tsub1=%f\n\tsub2=%f\n\tsub3=%f\n\ttotal=%f\n\tpercentage=%f",rl_no,s1,s2,s3,tot,per);
   getch();
}
