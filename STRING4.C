//illustrate strncat() function

#include<stdio.h>
#include<conio.h>

void main()
{
  char s1[20],s2[20];
  clrscr();
  printf("\nenter 2 strings");
  scanf("%s%s",s1,s2);
  strncat(s1,s2,4);
  printf("\n\tCONCATENATED STRING IS=%s",s1);
  getch();
}