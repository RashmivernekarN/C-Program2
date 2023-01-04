/*prg to demonstrate sizeof operater*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x;
float y;
char ch;
double d;
clrscr();
printf("\n size of x=%d bytes",sizeof(x));
printf("\n size of y=%d bytes",sizeof(y));
printf("\n size of ch=%d bytes",sizeof(ch));
printf("\n size of d=%d bytes",sizeof(d));
getch();
}