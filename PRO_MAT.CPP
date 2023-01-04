//matrix multiplication

#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10][10],b[10][10],p[10][10],r,c,i,j,k;
    clrscr();
    cout<<"\nenter order of the matrix";
    cin>>r>>c;
    cout<<"\nenter elements of the first matrix";
    for(i=0;i<r;i++)
      {
	 for(j=0;j<c;j++)
	   {
	      cin>>a[i][j];
	    }
	 }
   cout<<"\nenter elements of the second matrix";
    for(i=0;i<r;i++)
      {
	 for(j=0;j<c;j++)
	   {
	      cin>>b[i][j];
	    }
	 }
     for(i=0;i<r;i++)
     {
	for(j=0;j<c;j++)
	   {
	       p[i][j]=0;
	       for(k=0;k<r;k++)
	       {
		   p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
		}
	     }
      }
      cout<<"\nPRODUCT MATRIX\n";
      for(i=0;i<r;i++)
	 {
	     for(j=0;j<c;j++)
		{
		    cout<<"\t"<<p[i][j];
		 }
		 cout<<endl;
	   }
	   getch();
}




