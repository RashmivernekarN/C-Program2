//illustrate switch[arithmetic operation
#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b,sum,diff,p,r,ch,x;
   float q;
   clrscr();
    cout<<"\nenter values for a and b";
    cin>>a>>b;
   do
   {
 cout<<"\n1.ADD\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.REMAINDER\n";
   cout<<"\n\nenter your choice";
   cin>>ch;
   switch(ch)
   {
      case 1:sum=a+b;
	     cout<<"sum="<<sum;
	     break;
      case 2:diff=a-b;
	     cout<<"difference="<<diff;
	     break;
     case 3: p=a*b;
	     cout<<"product="<<p;
	     break;
     case 4:q=(float)a/(float)b;
	     cout<<"que="<<q;
	     break;
      case 5:r=a%b;
	     cout<<"rem="<<r;
	     break;
     default:cout<<"ENTER VALID CHOICE";
	     break;
   }
   cout<<"\ndo you want to continue[YES-1/NO-0]";
   cin>>x;
   }while(x==1);
   getch();
   }
