  /*prg to reverse  a given string*/
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
      printf("\n Reversed string is %s",strrev(str1));
      getch();
    }