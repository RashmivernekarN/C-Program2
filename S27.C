/*prg to demonstrate lader if*/
#include <stdio.h>
#include <conio.h>
void main ()
{
float per;
clrscr();
printf ("\n enter percantage");
scanf ("%f",&per);
if (per>=70)
    printf ("\n distinction");
else if (per>=60)
    printf ("\n first class");
else if (per>=50)
    printf ("\n second class");
else if (per>=35)
    printf ("\n just pass");
else
    printf ("\n fail");
getch();
}
