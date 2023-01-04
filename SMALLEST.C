#include<stdio.h>
#include<conio.h>

void main()
{
long int a,b,c;
clrscr();
printf("\n\tEnter any three numbers to find the smallest of all\n");
scanf("%ld%ld%ld",&a,&b,&c);
if(a<b&&a<c)
{
printf("\n\t%ld is the smallest",a);
}
else if(b<c&&b<a)
{
printf("\n\t%ld is smallest",b);
}
else if(c<a&&c<b)
{
printf("\n\t%ld is smallest",c);
}
else
{
printf("OOPS,SORRY!\n ERROR!!!!");
}

getch();
}
