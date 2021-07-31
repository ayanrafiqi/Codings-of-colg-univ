#include<stdio.h>
#include<conio.h>
int swap(int,int);
void main()
{
 int a,b;
 clrscr();
 printf("enter the numbers you want to swap\n");
 scanf("%d%d",&a,&b);
 swap(a,b);
 printf("two number after swapping %d  %d ",a , b);
 getch();
 }
  int swap(int a,int b)
  {
   int c;
     c=a;
     a=b;
     b=c;
     return a;
     return b;

   }

