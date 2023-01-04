/*prg to read 5 array elements and print the same*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a[5],i;
    clrscr();
    printf("\nenter 5 nums");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nenter 5 nums are:\n");
    for(i=0;i<5;i++)
    {
    printf("\n %d",a[i]);
    }
    getch();
  }