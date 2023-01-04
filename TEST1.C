//prg to demo strncat
#include<stdio.h>
int main()
  {
    char str1[20],str2[20];
    clrscr();
    printf("\n Enter first string");
    gets(str1);
    printf("\n Entered string is %s",str1);
    printf("\n Enter second string");
    gets(str2);
    printf("\n Entered string is %s",str2);
    strncat(str1,str2,3);
    printf("\n Appended string is %s",str1);
    getch();

  }