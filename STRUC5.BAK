#include <stdio.h>
#include <string.h>
struct student
{

     int id;
     char name[30];
     float per;

};
int main()
{
     int i;
     struct student record[2];
     clrscr();

     for(i=0; i<3; i++)
     {
	 printf("\n Enter Name ");
	 scanf("%s",record[i].name);

	 printf("\n Enter the details of student %d",i+1);
	 printf("\n Enter student Id ");
	 scanf("%d",&record[i].id);
	 printf("\n Enter Percentage");
	 scanf("%f",&record[i].per);
     }
    //print students info
    for(i=0; i<3; i++)
     {
	 printf("     Records of STUDENT : %d \n", i+1);
	 printf(" Id is: %d \n",record[i].id);
	 printf(" Name is: %s \n",record[i].name);
	 printf(" Percentage is: %f\n\n",record[i].per);
     }
     getch();
}