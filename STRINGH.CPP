#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
char*name;
int length;
public:
string 0
}
length=0;
name=new char[length=1];
};
string(char*s)
{
length=strlen(s);
name=new char[length+1];
strcpy(name,s);
};
void display(void)
{
cout<<"\n name:-"<<name;
};
void join(string &a,string &b)
{
length=a.length+b.length;
delete name;
name=new char[length+1];
strcpy(name,a.name);
strcat(name," ");
strcat(name,b.name);
};
};
void main()
{
char*first name="mohan";
string fname(first name);
string mname("kumar");
string sname("singh");
string halfname,fullname;
halfname.join(fname,sname);
fullname.join(halfname,mname);
fname.display();
mname.display();
sname.display();
halfname.display();
fullname.display();
getch();
}