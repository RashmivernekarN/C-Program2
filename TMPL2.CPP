#include <iostream.h>  
#include <conio.h>  
template<class T>  
class A   
{  
    public:  
		T num1;
		 T num2;
    void add()
    {
      //	num1=5;
       //	num2=10;
       cout<<"\n\tenter ni and n2 values";
       cin>>num1>>num2;
	cout << "\n\tAddition of num1 and num2 : " << num1+num2<<endl;
    }
};
void  main()
{
    A<int> d;
    A<float> d1;
    clrscr();
    d.add();
    d1.add();
    getch();
}  
