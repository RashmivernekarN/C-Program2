#include<stdio.h>
#include<conio.h>
int reverse(int);
void main()
{
int n,r,temp;
clrscr();
printf("\n enter any no");
scanf("%d",&n);
temp=n;
r=reverse(n);
if(temp==r)
printf("\n given no %d is a palindrome",temp);
else
printf("\n given no %d is not a palindrome",temp);
getch();
}
int reverse(int x)
{
int=0,d;
 while(x>0)
 {
 d=x%10;
 r=(r*10)+d;
 x=x/10;
 }
 return(r);
 }