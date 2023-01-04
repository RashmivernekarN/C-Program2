//program to accept one single dimensional array and display the same.
#include<iostream.h>
#include<conio.h>

void main()
{
   int a[10],i,n;
   clrscr();
   cout<<"\nenter size of the array";
   cin>>n;
   cout<<"\nenter array elements";
   for(i=0;i<n;i++)
   {
      cin>>a[i];
    }
    cout<<"\nARRAY ELEMENTS ARE\n";
    for(i=0;i<n;i++)
    {
       cout<<a[i]<<endl;
     }
     getch();
}

