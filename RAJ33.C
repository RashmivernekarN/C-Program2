#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
  char ch;
  clrscr();
  printf("\n enter any charecter \n");
  scanf("%c",&ch);
  if(isalpha(ch))
  printf("\n %c is a alphabet",ch);
  else if(isdigit(ch))
  printf("\n %c is a digit",ch);
  else
  printf("%c is a special charecter",ch);
  getch();
  }

