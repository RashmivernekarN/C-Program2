//pattern printing
#include<iostream.h>
#include<conio.h>

void main()
{
    int rows;
	clrscr();
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;++i)
    {
	for(int j=1;j<=i;++j)
	{
	    cout<<"* ";
	}
	cout<<"\n";
    }
    getch();
}
