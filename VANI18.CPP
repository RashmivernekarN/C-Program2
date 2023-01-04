#include<iostream.h>
#include<conio.h>
class test
{
int code;
static int count;
public:
void setcode(void)
{
code=++count;
}
void showcode(void)
{
cout<<"objects no:"<<code<<"\n";
}
static void showcount(void)
{
cout<<"cout:"<<count<<"\n";
}
};
int test::count;
void main()
{
test t1,t2;
clrscr();
t1.setcode();
t2.setcode();
test::showcount();
test t3;
t3.setcode();
test::showcount();
t1.showcode();
t2.showcode();
t3.showcode();
getch();
}