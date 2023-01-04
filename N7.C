  /*prg to convert upper case string to lowercase string functions*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void main()
    {
      char str1[20];
      clrscr();
      printf("\n Enter any string");
      gets(str1);
      strlwr(str1);
      printf("\n Lower case string is %s",str1);
      getch();
    }