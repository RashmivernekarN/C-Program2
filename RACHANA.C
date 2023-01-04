#include<stdio.h>
#include<conio.h>
void main()
  {
   int n,temp,d,am=0;
   clrscr();
   printf("\n enter any no");
   scanf("%d",&n);
   temp=n;
   while(n>0)
    {
      d=n%10;
      am=am+(d*d*d);
      n=n/10;
    }
    if(temp==am)
       printf("\n given num %d is an amstrong no",temp);
    else
       printf("\n given num %d is not an amstrong no",temp);
   getch();

  }