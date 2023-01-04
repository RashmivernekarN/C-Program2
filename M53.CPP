/*prg to reverse a given num using sub program*/
#include <iostream.h>
#include <conio.h>
int rev(int);//prototype declaration
void main()
{
  int n,r,temp;
  clrscr();
  cout<<"\n Enter any num";
  cin>>n;  //actual variables
  temp=n;
  r=rev(n);//function call
  cout<<"\n given num="<<temp;
  cout<<"\n reversed num="<<r;
  getch();
}
 int rev(int x) //formal variables
  {
      int r=0,d;
      while(x>0)
       {
	d=x%10;
	r=(r*10)+d;
	x=x/10;
       }
      return(r);//returns value to function main
  }
