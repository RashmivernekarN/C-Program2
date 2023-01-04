#include<stdio.hf>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n;
clrscr();
printf("\n Enter the value of m and n");
scanf("%d%d",&m,&n);
printf("\nEnter the values Of first Array:");
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("\nelements of second array:");
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&b[i][j]);
printf("\nElements of first array in matrix notation\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n\n");
}
printf("Elements of first array in matrix notation\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
c[i][j]=0;
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
printf("elements of result and matrix\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}
/*// program to print multiplication table.
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,p;
clrscr();
for(i=1;i<=10;i++)
{
for(j=1;j<=10;j++)
{
p=i*j;
printf("%d\t",p);
}
printf("\n");
}
getch();
}*/