//illustrate switch[arithmetic operation]
#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b,sum,diff,p,r,ch;
   float q;
   clrscr();

    cout<<"\n\t1.ADD\n\t2.SUBTRACTION\n\t3.MULTIPLICATION\n\t4.DIVISION\n\t5.REMAINDER\n";
   cout<<"\n\tenter your choice";
   cin>>ch;


   switch(ch)
   {
      case 1:   cout<<"\n\tenter values for a and b";
   cin>>a>>b;
		sum=a+b;
	     cout<<"\n\tsum="<<sum;
	     break;
      case 2:cout<<"\n\tenter values for a and b";
   cin>>a>>b;
      diff=a-b;
	     cout<<"\n\tdifference="<<diff;
	     break;
     case 3: cout<<"\n\tenter values for a and b";
   cin>>a>>b;
     p=a*b;
	     cout<<"\n\tproduct="<<p;
	     break;
     case 4:
     cout<<"\n\tenter values for a and b";
   cin>>a>>b;q=(float)a/(float)b;
	     cout<<"\n\tque="<<q;
	     break;
      case 5:cout<<"\n\tenter values for a and b";
   cin>>a>>b;
      r=a%b;
	     cout<<"\n\trem="<<r;
	     break;
     default:cout<<"\n\tENTER VALID CHOICE";
	     break;
   }


   getch();
}