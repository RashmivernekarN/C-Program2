 /*prg to read a character and check whether it is a vowel or not
  using switch statement*/
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
	  case 'A':
	  case 'a':
	  case 'E':
	  case 'e':
	  case 'I':
	  case 'i':
	  case 'O':
	  case 'o':
	  case 'U':
	  case 'u':
		  printf("\n %c is a vowel",ch);
		  break;
	  default:printf("\n Invalid choice");
	}
      getch();
    }