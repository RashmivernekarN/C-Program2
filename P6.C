  /*prg to find the length of the string  using string functions*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void main()
    {
      char str1[20];
      clrscr();
      printf("\n Enter any string");
      gets(str1);
      printf("\n Length of given string is %d",strlen(str1));
      getch();
    }