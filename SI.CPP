//calculate simple interest

#include<iostream.h>
#include<conio.h>

void main()
{
    float p,t,r,si;
    clrscr();
    cout<<"\n\tenter values for p t r";
    cin>>p>>t>>r;
    si=(p*t*r)/100;
    cout<<"\n\tprinciple amt="<<p<<"\n\trate="<<r<<"\n\ttime="<<t;
    cout<<"\n\tsimple interest="<<si;
    getch();
}