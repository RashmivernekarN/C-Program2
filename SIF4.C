//program to find si only if rate of interest is less than 8
#include<stdio.h>
#include<conio.h>

void main()
{
   float p,t,r,si;
   clrscr();
   printf("\n\tenter principle amount");
   scanf("%f",&p);
   printf("\n\tenter time");
   scanf("%f",&t);
   printf("\n\tenter rate of interest");
   scanf("%f",&r);
   if(r<8)
   {
      si=(p*t*r)/100;
      printf("\n\tp=%f\n\tt=%f\n\tr=%f\n\tsimple interest=%f",p,t,r,si);
   }
   getch();
}

