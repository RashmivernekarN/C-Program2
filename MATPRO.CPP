//multiplication of two matrices

#include<iostream.h>
#include<conio.h>

void main()
{
   int m1[2][2],m2[2][2],p[2][2],i,j,k;
   clrscr();
   cout<<"\n\tENTER ELEMENTS OF MATRIX A\t";
   for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	    {
	       cin>>m1[i][j];
	     }
       }
   cout<<"\n\tENTER ELEMENTS OF MATRIX B\t";
   for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	    {
	       cin>>m2[i][j];
	     }
       }
   cout<<"\n\t MATRIX A\n";
   for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	    {
	       cout<<"\t"<<m1[i][j];
	     }
	     cout<<endl<<endl;
       }
   cout<<"\n\t MATRIX B\n";
   for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	    {
	       cout<<"\t"<<m2[i][j];
	     }
	     cout<<endl<<endl;
       }
       for(i=0;i<2;i++)
	 {
	   for(j=0;j<2;j++)
	   {
	       p[i][j]=0;
	       for(k=0;k<2;k++)
	       {
		  p[i][j]=p[i][j]+(m1[i][k]*m2[k][j]);
		}
	    }
	 }
     cout<<"\n\t  PRODUCT MATRIX \n";
   for(i=0;i<2;i++)
      {
	 for(j=0;j<2;j++)
	    {
	       cout<<"\t"<<p[i][j];
	     }
	     cout<<endl<<endl;
       }
       getch();                        }


