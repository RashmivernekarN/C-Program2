/*prg to read 5 array elements and print the reverse*/
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
    printf("\n reversed 5 nums are:\n");
    for(i=4;i>=0;i--)
    {
    printf("\n %d",a[i]);
    }
    getch();
  }