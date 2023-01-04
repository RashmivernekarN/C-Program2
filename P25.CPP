//prg to find factorial of given num
#include<iostream.h>
#include<conio.h>
int main()
 {
   int i=1,fact=1,n;
   clrscr();
   cout<<"\n Enter any number";
   cin>>n;
   while(i<=n)
    {
       fact=fact*i;
       i++;
    }
   cout<<"Factorial of a given ="<<fact;
   getch();
  }