//illustrate simple if
#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
  clrscr();
  printf("\nenter age of the person");
  scanf("%d",&age);
  if(age>=18)
  {
    printf("eligible to VOTE");
  }
  getch();
}