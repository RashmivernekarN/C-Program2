  /*prg to read  a matrix of order MxN and  copy it into another matrix */
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[10][10],b[10][10],m,n,r,c;
      clrscr();
      printf("\n Enter the size of the matrix");
      scanf("%d%d",&m,&n);
      printf("\n Enter the elements of matrix");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      scanf("%d",&a[r][c]);
	    }
	}
      //copy elements
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      b[r][c]=a[r][c];
	    }
	}
      printf("\n copied elements of the matrix \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      printf("\t %d",b[r][c]);
	    }
	    printf("\n");
	}
      getch();
    }
