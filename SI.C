//program to find simple interest

#include<stdio.h>
#include<conio.h>

void main()
{
  float p,t,r,si;
  clrscr();
 printf("\nenter values for p t r");
 scanf("%f%f%f",&p,&t,&r);
  si=(p*t*r)/100;
  printf("\n\tp=%f\n\tt=%f\n\tr=%f\n\tsimple interest=%f",p,t,r,si);
  getch();
}