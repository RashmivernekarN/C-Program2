//program to check biggest of 3numbers
#include<std.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("enter values for a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b&&a>c)
    printf("%d is big{,a);
  else if(b>a&&b>c)
    printf("%d is big",b);
  else if(c>b&&c>a)
    printf("%d is big",c);
  else
    printf("its not possible to say which is big");
  getch();
}
