  /*prg to read to reverse a given string
  using built in function*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void main()
    {
      char str1[20];
      clrscr();
      printf("\n Enter any string");
      gets(str1);
      printf("\n Entered string is %s",str1);
      strrev(str1);
      printf("\n Reversed string is %s",str1);

      getch();

    }