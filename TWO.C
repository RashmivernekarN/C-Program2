#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],b[10][10],r,c,m,n,sum[10][10],sub[10][10];
clrscr();
printf("\n enter max row size & col size");
scanf("%d%d",&m,&n);
printf("\n enter the elements of matrix A");
for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
{
scanf("%d",&a[r][c]);
}
}
printf("\n enter the elements of matrix B");
for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
{
scanf("%d",&b[r][c]);
}
}
for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
{
sum[r][c]=a[r][c]+b[r][c];
sub[r][c]=a[r][c]-b[r][c];
}
}
for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
{
printf("%4d",sum[r][c]);
}
printf("\n");
}
for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
{
printf("%4d",sub[r][c]);
}
printf("\n");
}
getch();
}