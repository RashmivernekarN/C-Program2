/*prg to read a  num  and find the sum of given digits using sub program*/
#include <iostream.h>
#include <conio.h>
int sum(int);//prototype declaration
void main()
{
  int n,s,temp;
  clrscr();
  cout<<"\n Enter any num";
  cin>>n;  //actual variables
  temp=n;
  s=sum(n);//function call
  cout<<"\n given num="<<temp;
  cout<<"\n sum of digits="<<s;
  getch();
}
 int sum(int x) //formal variables
  {
      int s=0,d;
      while(x>0)
       {
	d=x%10;
	s=s+d;
	x=x/10;
       }
      return(s);//returns value to function main
  }
