  /*prg to check whether given string is a palindrome or not*/
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
      strrev(str2);
      if(strcmp(str1,str2)==0)
	printf("\n Given string is %s is a palindrome",str1);
      else
	printf("\n Given string is %s is not a palindrome",str1);
      getch();
    }