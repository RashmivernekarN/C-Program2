//program to accept a matrix and display the same
#include<iostream.h>
#include<conio.h>

void main()
{
    int m[10][10],i,j,r,c;
    clrscr();
    cout<<"\n\tenter order of the matrix";
    cin>>r>>c;
    cout<<"enter elements of the matrix";
    for(i=0;i<r;i++)
       for(j=0;j<c;j++)
	  cin>>m[i][j];
  cout<<"matrix is\n\n";
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
	  cout<<"\t"<<m[i][j];
	}
	cout<<endl;
     }
     getch();
}


