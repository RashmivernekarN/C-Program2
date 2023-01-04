#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n enter any charecter \n ");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
printf("%c is a alphabet",ch);
else if(ch>='0'&&ch<='9')
printf("%c is a digit",ch);
else
printf("%c is a special character",ch);
getch();
}

