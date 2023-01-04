//program to check whether the entered strings are equal or not

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  char s1[20],s2[20];
  clrscr();
  printf("\nenter 2 strings");
  scanf("%s%s",s1,s2);
  if(strcmp(s1,s2)==0)
     printf("\n\tSTRINGS ARE EQUAL");
  else
     printf("\n\tSTRINGS ARE NOT EQUAL");
  getch();
}
