//prg to find sum of 1 to n nums
#include<iostream.h>
#include<conio.h>
int main()
 {
   int i=1,sum=0,n;
   clrscr();
   cout<<"\n Enter any number";
   cin>>n;
   while(i<=n)
    {
       sum=sum+i;
       i++;
    }
   cout<<"sum of 1 to n nums="<<sum;
   getch();
  }