  /*prg to check whether given two strings are equal or not string*/
  #include<stdio.h>
  #include<conio.h>
  #include<string.h>
  void main()
    {
      char str1[20],str2[20];
      clrscr();
      printf("\n Enter first string");
      gets(str1);
      printf("\n Enter second string");
      gets(str2);
      if(strcmp(str1,str2)==0)
	printf("\n Both the string are equal");
      else
	printf("\n Both the string are not equal");
      getch();
    }