 /*prg to find biggest of 2 nums*/
 #include<stdio.h>
 #include<conio.h>

 void main()
   {
    int a,b;
     clrscr();
     printf("\n enter 2 nos");
     scanf("%d%d",&a,&b);
     (a>b)?printf("\n big of 2 nums=%d",a):printf("\n big of 2 nums=%d",b);
     getch();
   }