  /*prg to demonstrate switch statement*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      char ch;
      clrscr();
      printf("\n Enter any chracter");
      scanf("%c",&ch);
      switch(ch)
	{

	  case 'R':
	  case 'r':
	  printf("\n Red");
		  break;
	  case 'G':printf("\n Green");
		  break;
	  case 'B':printf("\n Blue");
		  break;
	  default:printf("\n Invalid choice");
	}
      getch();
    }