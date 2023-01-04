
  /*prg to read  two matrix of order MxN and find the sum
  and substraction of both the matrix*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[10][10],b[10][10],sum[10][10],sub[10][10];
      int m,n,r,c;
      clrscr();
      printf("\n Enter the size of the matrix");
      scanf("%d%d",&m,&n);
      printf("\n Enter the elements of matrix A");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      scanf("%d",&a[r][c]);
	    }
	}
      printf("\n Enter the elements of matrix B");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      scanf("%d",&b[r][c]);
	    }
	}
     //compute sum of both matrix
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      sum[r][c]=a[r][c]+b[r][c];
	    }
	}
     //compute substraction of both matrix
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      sub[r][c]=a[r][c]-b[r][c];
	    }
	}

      printf("\n Sum of both the matrix \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      printf("\t %d",sum[r][c]);
	    }
	    printf("\n");
	}
      printf("\n Substraction of both the matrix \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      printf("\t %d",sub[r][c]);
	    }
	    printf("\n");
	}
      getch();
    }