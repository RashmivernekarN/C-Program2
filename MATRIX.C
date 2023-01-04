//program to accept a matrix and display the same
#include<stdio.h>
#include<conio.h>

void main()
{
   int m[10][10],r,c,i,j;
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
	printf("\n");
    }
    getch();
}