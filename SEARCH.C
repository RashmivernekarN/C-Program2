/*program to accept single dimensional array elements,
search a given element in an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],i,n,key;
   clrscr();
   printf("\n\tenter array limit");
   scanf("%d",&n);
   printf("\n\tenter %d array elements",n);
   for(i=0;i<n;i++)
   {
	scanf("%d",&a[i]);
   }
   printf("\n\tenter key element");
   scanf("%d",&key);
      for(i=0;i<n;i++)
      {
      if(a[i]==key)
	 {
	   printf("\n\tkey %d  is present in the list in %d location",key,i);
	   break;
	  }
      }
      if(i==n)
      {
      printf("key %d is not present in the list",key);
      }
      getch();
}