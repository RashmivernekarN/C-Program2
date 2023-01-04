//program to find the sum of six numbers with arrays and pointers.
#include<stdio.h>
int main()
{
int i,a[6],sum=0;
clrscr();
printf("enter 6 numbers:\n");
for(i=0;i<6;++i)
{
scanf("%d",(a+i));//(a+i)is equivalent to &a[i]
sum+=*(a*i);//*(a+i)is equivalent to a[i]
}
printf("sum=%d",sum);
return 0;
}