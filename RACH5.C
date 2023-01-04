/*prg to read n array elements and find the sum of even and odd elements*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a[50],i,n,se=0,so=0;
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
    if(a[i]%2==0)
    se=se+a[i];
    else
    so=so+a[i];
    }
    printf("\t sum of even nums=%d",se);
    printf("\t sum of odd nums=%d",so);
    getch();
  }