/*prg to read a string and convert it to upercase and lowercase
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
      strlwr(str1);
      printf("\n Lower case string is %s",str1);
      strupr(str1);
      printf("\n Upper case string is %s",str1);
      getch();
    }