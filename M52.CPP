/*prg to find the sum of 1 to N nums using sub program*/
#include <iostream.h>
#include <conio.h>
int sum(int);//prototype declaration
void main()
{
  int n,s;
  clrscr();
  cout<<"\n Enter any num";
  cin>>n;  //actual variables
  s=sum(n);//function call
  cout<<"\n sum  of 1 to N  num="<<s;
  getch();
}
 int sum(int x) //formal variables
  {
      int i=1,s=0;
      while(i<=x)
       {
	s=s+i;
	i++;
       }
      return(s);//returns value to function main
  }
