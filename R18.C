 /*prg to check whether given num is even  or odd*/
 #include<stdio.h>
 #include<conio.h>

 void main()
   {
     int a;
     clrscr();
     printf("\n enter any no");
     scanf("%d",&a);
     (a%2==0)?printf("\n even no"):printf("\n odd no");
     getch();
   }