/*prg to find area of a traingle*/
    #include<stdio.h>
    #include<conio.h>
      void main()
       {
       float area ,b,h;
       clrscr();
       printf("\n enter base and hight");
       scanf("%f%f"&b,&h);
       area=0.5*b*h;
       printf("\n area ofa traingle=%f"area);
       getch();
       }