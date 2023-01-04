/*prg to read a matrix of order M*N find the sum of substraction
of both matrix*/
#include <stdio.h>
#include <conio.h>
void main ()
{
 int i,j,m,n,a[10][10],b[10][10],sum[10][10],sub[10][10];
 clrscr();
 printf ("\n enter row size and column size");
 scanf (%d%d",&m,&n);
 printf ("\n enter the array element for matrix A \n");
 for (i=0;i<m;i++)
 {
 for (j=0;j<n;j++)
 {
 scanf ("%d",&a[i][j]);
 }
 }
 printf ("\n enter the array element for matrix B \n");
 for (i=0;i<m;i++)
 {
 for (j=0;j<n;j++)
 {
 scanf ("%d",&b[i][j]);
 }
 }

/*sum of two matrix*/
 for (i=0;i<n;i++)
 {
 for (j=0;j<n;j++)
 {
 sum[i][j]=a[i][j]+b[i][j];
 }
 }

/*substraction*/
 for (i=0;i<m;i++)
 {
 for (j=0;j<n;j++)
 {
 sub[i][j]=a[i][j]+b[i][j];
 }
 }
 printf ("\n sum of both matrix \n");
 for (i=0;i<m;i++)
 {
 for (j=0;j<n;j++)
 {
 printf ("%3d",sum[i][j]);
 }
 printf ("\n");
 }
 printf ("\n substraction of both matrix \n");
 for (i=0;i<m;i++)
 {
 for (j=0;j<n;j++)
 {
 printf ("%2d",sub[i][j]);
 }
 printf ("\n");
 }
getch();
}