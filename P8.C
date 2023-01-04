  /*prg to convert uppercase to lower case  a given string*/
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
      printf("\n Lower case string is %s",strlwr(str1));
      getch();
    }