#include<stdio.h>
#include<conio.h>
struct school
{
int roll;
char name[25];
char address[25];
float weight;
};
void main()
{

 struct school;
 clrscr();
     printf("\n enter the roll no");
     scanf("%d",&school.roll);
     printf("\n enter name");
     scanf("%s",school.name);
     printf("\n enter address");
     scanf("%s",school.address);
     printf("\n enter weight in kgs");
     scanf("%f",&school.weight);
printf("\n The student details are:");
printf("\n Roll NO: %d",school.roll);
printf("\n Name: %s",school.name);
printf("\n Address: %s",school.address);
printf("\n Weight: %f",school.weight);

getch ();
}
