/*prg to read two matrix of order MXN and find the sum and
substraction both the matrix*/
#include <stdio.h>
#include <conio.h>
void main ()
{
int a[10][10],b[10][10],sum[10][10],sub[10][10],m,n,r,c;
clrscr();
printf("\n Enter the order of the matrix");
scanf("%d%d",&m,&n);
printf ("\n Enter the elements of matrix A \n");
for (r=0;r<m;r++)
  {
  for (c=0;c<n;c++)
  {
  scanf("%d",&a[r][c]);
  }
  }
printf ("\n Enter the elements of matrix B \n");
for (r=0;r<m;r++)
  {
  for (c=0;c<n;c++)
  {
  scanf("%d",&b[r][c]);
  }
  }
//sum of both matrix
for(r=0;r<m;r++)
  {
  for (c=0;c<n;c++)
   {
    sum[r][c]=a[r][c]+b[r][c];
   }
  }
//substraction of both matrix
for(r=0;r<m;r++)
  {
  for (c=0;c<n;c++)
   {
    sub[r][c]=a[r][c]-b[r][c];
   }
  }

printf("\n Sum of both matrix: \n");
for(r=0;r<m;r++)
  {
  for (c=0;c<n;c++)
   {
    printf("%3d",sum[r][c]);
   }
   printf("\n");
  }
printf("\n Substraction of both matrix: \n");
for(r=0;r<m;r++)
  {
  for (c=0;c<n;c++)
   {
    printf("%3d",sub[r][c]);
   }
   printf("\n");
  }
  getch();

 }