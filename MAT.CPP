//program to accept matrix and display the same

#include<stdio.h>
#include<conio.h>

void main()
{
   int m[10][10],r,c,i,j;
   clrscr();
   printf("\nenter order of the matrix");
   scanf("%d%d",&r,&c);
   printf("\nENTER MATRIX ELEMENTS\n");
   for(i=0;i<r;i++)
       {
	    for (j=0;j<c;j++)
	      {
		  scanf("%d",&m[i][j]);
	       }
       }
	  printf("\n MATRIX IS\n");
   for(i=0;i<r;i++)
       {
	    for (j=0;j<c;j++)
	      {
		  printf("\t%d",m[i][j]);
	       }
	       printf("\n");
       }
       getch();
}