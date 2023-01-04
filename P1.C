  /*prg to demonstrate strings*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      char str[20];
      clrscr();
      printf("\n Enter any string");
      // scanf("%s",str);
      gets(str);
      printf("\n Entered string is %s",str);

      getch();
    }