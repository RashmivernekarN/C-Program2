//program to find si using function

#include<stdio.h>
#include<conio.h>

void simple(float  ,float   ,float  );

void main()
{
   float a,b,c;
   clrscr();
   printf("\n\tenter values for principle amt time rate");
   scanf("%f%f%f",&a,&b,&c);
   simple(a,b,c);
   getch();
}
void simple(float  p,float  t,float r)
{
  printf("\n\tsimple interest =%f",(p*t*r)/100);
}