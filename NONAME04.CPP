
   int i,n,sum=0;
   clrscr();
   cout<<"\n\tenter final value";
   cin>>n;
   i=1;
   do
   {
      cout<<"\n\t"<<i;
      sum=sum+i;
      i++;
   }while(i<=n);
   cout<<"\n\tsum of"<<n<<"natural num="<<sum;
   getch();
}
