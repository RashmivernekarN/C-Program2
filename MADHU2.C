*/program to check result of student depends on his percentage
  per>=85  dist
  per>=60  first
  per>=50  second
  per>=35  pass
  else     fail*/
#include<stdio.h>
#include<conio.h>
void main()
{
  float p;
  clrscr();
  printf("\nenter percentage of a student");
  scanf("%f",&p);
  if(p>=85)
  printf("dist");'
  else if(p>=60)
  printf("first");
  else if(p>=50)
  printf("second");
  else if(p>=35)
  printf("pass");
  else
  printf("fail");
  getch();
}