/*program to accept a matrix display the same
and find the sum of principle diagonal elements*/

#include<stdio.h>
#include<conio.h>

void main()
{
   int m[10][10],r,c,i,j,sum=0;
   clrscr();
   printf("\n\tenter order of the matrix");
   scanf("%d%d",&r,&c);
   printf("\n\tenter elements of the matrix");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
       {
	  scanf("%d",&m[i][j]);
	}
    }
    printf("\n the matrix is\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
       {
	  printf("\t%d",m[i][j]);
	}
	printf("\n\n");
    }
       printf("\n the matrix  principle diagonal elements \n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
       {
	  if(i==j)
	  {
	    sum=sum+m[i][j];
	    printf("\t%d",m[i][j]);
	  }
	}
	printf("\n\n");
    }
    printf("\n\tsum of principle diagonal elements are=%d",sum);
    getch();
}