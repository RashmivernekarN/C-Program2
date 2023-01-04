//simple interest

#include<stdio.h>
#include<conio.h>

 void main()
 {
     float p,t,r,si;
     clrscr();
     printf("\n\tenter values for p t r");
     scanf("%f%f%f",&p,&t,&r);
     si=(p*t*r)/100;
     printf("\n\tprinciple amt=%f\n\trate=%f\n\ttime=%f",p,r,t);
     printf("\n\n\tsimple interest=%f",si);
     getch();
}



