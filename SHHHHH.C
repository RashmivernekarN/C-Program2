      /*pgm to swap two num using dummy variables*/
      #include<stdio.h>
      #include<conio.h>
      void main()
      {
      int temp,a,b;
      clrscr();
      printf("\n enter two numbers");
      scanf("%d%d",&a,&b);
      temp=a;
      a=b;
      b=temp;
      printf("\n after swapping a=%d \t b=%d",a,b);
      getch();
      }