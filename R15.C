 /*prg to find biggest of 2 nums*/
 #include<stdio.h>
 #include<conio.h>

 void main()
   {
    int a,b,big;
     clrscr();
     printf("\n enter 2 nos");
     scanf("%d%d",&a,&b);
     big=(a>b)?a:b;
     printf("\n big of 2 nums=%d",big);
     getch();
   }


