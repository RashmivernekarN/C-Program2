 #include<iostream.h>
 #include<conio.h>
 class myclass
 {
 long int p;
 int t;
 float si,r;
 public:
 void getdata();
 int calc();
 };
 void myclass::getdata()
 {
 cout<<"\n\nenter the values of p,t,r:";
 cin>>p>>t>>r;
 }
 int myclass::calc()
 {
 return((p*t*r)/100);
 }
 void main()
 {
 myclass m[3];
 int i;
 clrscr();
 for(i=1;i<=3;i++)
 {
 m[i].getdata();
 cout<<"\nsimple interest="<< m[i].calc();
 }
 getch();
 }


