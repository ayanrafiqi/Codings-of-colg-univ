#include<stdio.h>
#include<conio.h>
void main()
{
 int i=10;
 clrscr();
 do
 {
  if (i==6)
  {
   i--;
    continue;
  }
  printf("%d \n",i);
  i--;
  }while (i>0);
   getch();
}
