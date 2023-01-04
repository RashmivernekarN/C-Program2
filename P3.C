  /*prg to find the length of given string to another*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int i,len=0;
      char str1[20],str2[20];
      clrscr();
      printf("\n Enter any string");
      gets(str1);
      for(i=0;str1[i]!='\0';i++)
	 {
	   len++;
	 }
      printf("\n Length of given string is %d",len);
      getch();
    }