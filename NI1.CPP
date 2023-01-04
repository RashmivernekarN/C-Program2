//illustrate nested if
#include<iostream.h>
#include<conio.h>

void main()
{
   int n;
   clrscr();
   cout<<"\nenter any number";
   cin>>n;
   if(n%5==0)
      {
	 if(n%7==0)
	    {
	       cout<<"ENTERED NUMBER IS DIVISABLE BY 5 AND 7";
	     }
	   else
	    {
	      cout<<"ENTERED NUMBER IS DIVISABLE BY 5 AND NOT DIVISABLE BY 7";
	    }
       }
       getch();
}