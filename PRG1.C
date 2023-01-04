//program to find sum of two numbers

#include<stdio.h>
#include<conio.h>

void main()   //c program execution begins from here
{           //main begins
    int a,b,sum;//variable declaration
    clrscr();   //clears output screen
    a=10;         //assign value to the variable
    b=5;
    sum=a+b;      //calculate sum
  printf("\n\ta=%d",a);  //display a value
  printf("\n\tb=%d",b);  //display b value
  printf("\n\tsum=%d",sum); //display sum value
//  printf("\n\ta=%d\n\tb=%d\n\tsum=%d",a,b,sum);
    getch();  //get character from keyboard
}       //main ends