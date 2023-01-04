//prg to print nums 1 to 100 nums  which are div by 5 and 7 using while
#include<iostream.h>
#include<conio.h>
int main()
 {
   int i=1;
   clrscr();
   while(i<=100)
    {
     if(i%5==0 && i%7==0)
       {
       cout<<i<<endl;
       }
       i++;
    }
   getch();
  }