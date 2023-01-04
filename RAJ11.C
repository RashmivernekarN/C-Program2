#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
  {
    float area,a,b,c,s;
    clrscr();
     printf("\n enter three slides");
     scanf("%f%f%f",&a,&b,&c);
     s=(a+b+c)/2;
     area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("\n area of tringle =%f",area);
     getch();
     }


