//program to check the person is eligible to VOTE or NOt

#include<stdio.h>
#include<conio.h>

void main()
{
   int age;
   clrscr();
   printf("\n\tenter age of the person");
   scanf("%d",&age);
   if(age>=18)
      {
	   printf("\tELIGIBLE TO VOTE");
       }
   else
       {
	 printf("\tNOT ELIGIBLE TO VOTE");
       }
     printf("\n\tend of program");
  getch();
}
