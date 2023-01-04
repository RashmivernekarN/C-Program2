 /*prg to check whether given num is +ve or -ve*/
 #include<stdio.h>
 #include<conio.h>

 void main()
   {
     int a;
     clrscr();
     printf("\n enter any no");
     scanf("%d",&a);
     (a>0)?printf("\n +ve no"):printf("\n -ve no");
     getch();
   }