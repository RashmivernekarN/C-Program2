//program to display student result depending on there percentage
#include<stdio.h>
#include<conio.h>
void main()
{
   float per;
   clrscr();
   printf("\nenter student percentage");
   scanf("%f",&per);
   if(per>=75)
      printf("\n\tDISTINCTION");
   else if(per>=60)
      printf("\n\tFIRST CLASS");
   else if(per>=50)
       printf("\n\tSECOND CLASS");
   else if(per>=35)
      printf("\n\tPASS");
   else
      printf("\n\tFAIL");
   getch();
}
