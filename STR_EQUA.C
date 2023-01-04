//strcpy function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s1[20],s2[20];
    clrscr();
    printf("\nenter 2 strings");
    scanf("%s%s",s1,s2);
    printf("\n\tstring1=%s",s1);
    printf("\n\tstring2=%s",s2);
    strncpy(s1,s2,4);
    printf("\n\tcopied string=%s",s1);
      getch();
}