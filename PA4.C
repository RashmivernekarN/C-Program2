//prg to swap 2nums using dummy vrible*/
    #include<stdio.h>
    #include<conio.h>
      void main()
      {
      int a,b,temt;
      clrscr();
      printf("\n enter 2 nums ");
      scanf("%d%d",&a,&b);
      temp=a;
      a=b;
      b=temp;
      printf("\n alter swapping a=%d\t b=%d",a,b);
      getch();
      }