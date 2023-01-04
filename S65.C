  /*prg to find diggest of 3 number using sub prg*/
 #include <stdio.h>
 #include <conio.h>
 int big (int,int,int);//prototype declaration
 void main()
 {
 int a,b,c,lar;
 clrscr();
 printf ("\n enter any 3 number");
 scanf ("%d%d%d",&a,&b,&c);
 lar=biggest(a,b,c);
 printf ("\n biggest of 3 number=%d",lar);
 getch();
 }
 int biggest (int x,int y,int z)
  {
   if (x>y)
   if (x>z)
     return (x);
   else
     return (z);
   else if (y>z)
     return (y);
   else
     return (z);
   }