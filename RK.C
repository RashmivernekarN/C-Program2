/*example to demonstrate use of reference operator in C programming.*/
#include<stdio.h>
int main()
{
int var=5;
clrscr();
printf("value:%d\n",var);
printf("address:%d",&var); //notice,the ampersand(&)before var.
return 0;
}