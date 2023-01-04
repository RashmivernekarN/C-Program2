#include<stdio.h>
#include<conio.h>

void main()
{
   int i,a[10],b[10],s[10],n;
   clrscr();
   printf("enter size of array");
   scanf("%d",&n);
   printf("\nenter A array elements\n");
     for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   printf("\nenter B array elements\n");
     for(i=0;i<n;i++)
	scanf("%d",&b[i]);
  printf("\t\tA\tB\tS\n");
  for(i=0;i<n;i++)
     {
       s[i]=a[i]+b[i];
       printf("\t\t%d\t%d\t%d\n",a[i],b[i],s[i]);
     }
     getch();
}
