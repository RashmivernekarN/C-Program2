  /*prg to find the result of a student */
  #include<stdio.h>
  #include<conio.h>
  void main()

    {
      char name[20];
      int rollno;

      float s1,s2,s3,tot,per;
      clrscr();
      printf("\n Enter Roll No");
      scanf("%d",&rollno);
      printf("\n Enter Name");
      scanf("%s",name);
      printf("\n Enter sub 1 marks");
      scanf("%f",&s1);
      printf("\n Enter sub 2 marks");
      scanf("%f",&s2);
      printf("\n Enter sub 3 marks");
      scanf("%f",&s3);
      tot=s1+s2+s3;
      printf("\n Roll No=%d \n Name=%s \n Subject1=%f \n Subject2=%f \n Subject=%f \n Total=%f",rollno,name,s1,s2,s3,tot);

      if(s1>=35 && s2>=35 && s3>=35)
	{

	  per=tot/3;
	  printf("\n Per=%f",per);
	    if(per>=70)
	      {
		printf("\n Dist");
	      }
	    else if(per>=60)
	      {
		printf("\n First Class");
	      }
	    else if(per>=50)
	      {
		printf("\n Second Class");
	      }
	    else if(per>=35)
	      {
		printf("\n Just Pass");
	      }
	 }
	    else
	       {
		 printf("\n Fail");
	       }

      getch();
    }
