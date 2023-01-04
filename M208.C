 /*prg to perform basic arithmetic operations
  using switch statement*/
  #include<stdio.h>
  #include<conio.h>
  #include<ctype.h>
  void main()
    {
      int a,b,sum,sub,prod,div;
      char ch;

      clrscr();
      printf("\n Enter any 2 nums");
      scanf("%d%d",&a,&b);
      fflush(stdin);
      printf("\n Enter your choice");
      scanf("%c",&ch);
      switch(ch)
	{
	  case '+':sum=a+b;
		   printf("\n sum=%d",sum);
		   break;
	  case '-':sub=a-b;
		   printf("\n substraction=%d",sub);
		   break;
	  case '*':prod=a*b;
		   printf("\n product=%d",prod);
		   break;
	  case '/':div=a/b;
		   printf("\n division=%d",div);
		   break;
	  default:printf("\n Invalid month no");
	}
      getch();
    }