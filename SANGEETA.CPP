/* prg to find the biggest of three numbers */
#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter any 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
if (a>c)
printf ("\n a is big");
else
printf ("\n c is big");
else if (b>c)
printf ("\n. b is a big");
else
printf ("\n c is big");
getch ();
}

