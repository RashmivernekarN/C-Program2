//prg to print first 10 fibonacci  nums
#include<iostream.h>
#include<conio.h>
int main()
 {
   int i=1,f1=-1,f2=1,f3;
   clrscr();
   while(i<=10)
    {
       f3=f1+f2;
       cout<<f3<<endl;
       f1=f2;
       f2=f3;
       i++;
    }
   getch();
  }