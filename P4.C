  /*prg to copy one string to another using string using string functions*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void main()
    {
      char str1[20],str2[20];
      clrscr();
      printf("\n Enter any string");
      gets(str1);
      strcpy(str2,str1);
      printf("\n Given string is %s",str1);
      printf("\n copied string is %s",str2);
      getch();
    }