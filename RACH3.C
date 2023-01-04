/*prg to read n array elements and print the same*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a[50],i,n;
    clrscr();
    printf("\nenter the limit");
    scanf("%d",&n);
    printf("\n enter %d elements ",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\n entered  elements are:\n");
    for(i=0;i<n;i++)
    {
    printf("\t%d",a[i]);
    }

    getch();
  }