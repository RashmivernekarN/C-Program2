/*prg to read n array elements and find the sum of all elements*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a[50],i,n,s=0;
    clrscr();
    printf("\nenter the limit");
    scanf("%d",&n);
    printf("\n enter %d elements ",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
    s=s+a[i];
    }
    printf("\tsum=%d",s);
    getch();
  }