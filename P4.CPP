//find square and cube of a given number

#include<iostream.h>
#include<conio.h>

void main()
{
    int n,s,c;
    clrscr();
    cout<<"\n\tenter any integer";
    cin>>n;
    s=n*n;
    c=n*n*n;
    cout<<"\n\tnumber="<<n;
    cout<<"\n\tsquare="<<s;
    cout<<"\n\tcube="<<c;
    getch();
}