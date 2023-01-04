  //illustate strlwr() and strupr()  strrev()

#include<stdio.h>
#include<conio.h>

void main()
{
  char s1[20];
  clrscr();
  printf("\nenter any string");
  scanf("%s",s1);
    printf("\n\tentered string is=%s",s1);
     printf("\n\tupper case string= %s ",strupr(s1));
     printf("\n\tlower case string= %s",strlwr(s1));
     printf("\n\treverse string= %s",strrev(s1));
    getch();
}