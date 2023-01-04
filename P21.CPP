//prg to demonstrate switch statement
#include<iostream.h>
#include<conio.h>
int main()
 {
   char ch;
   clrscr();
   cout<<"\n Enter any char";
   cin>>ch;
   switch(ch)
     {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
		cout<<ch<<" is a vowel";
		break;
      default:
		cout<<ch<<" is not a vowel";
     }
     getch();
  }