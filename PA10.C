/*prg to find area of a circle*/
    #include<stdio.h>
    #include<conio.h>
      void main()
    {
       float area ,r;
       clrscr();
       printf("\n enter radius");
       scanf("%f",&r);
       area=pi*r*r;
       printf("\n area of a circle=%f",area);
       getch();
   }