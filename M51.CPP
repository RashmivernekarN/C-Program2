/*prg to find the factorial of a given num using sub program*/
#include <iostream.h>
#include <conio.h>
int fact(int);//prototype declaration
void main()
{
  int n,f;
  clrscr();
  cout<<"\n Enter any num";
  cin>>n;  //actual variables
  f=fact(n);//function call
  cout<<"\n Factorial of a given num="<<f;
  getch();
}
 int fact(int x) //formal variables
  {
      int i=1,f=1;
      while(i<=x)
       {
	f=f*i;
	i++;
       }
      return(f);//returns value to function main
  }
