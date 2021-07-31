#include<stdio.h>
#include<conio.h>
void main()
{
 int num,k,t,r=0;
 clrscr();
 printf("enter the number");
 scanf("%d",&num);
 k=num;
 while (k>0)
 {
  t=k%10;
  r=r*10+t;
  k=k/10;
  }
  if (num==r)
  {
   printf("the given number %d is palandrome number",num);
   }
    else
    {
     printf("the given number %d is not a palandrome number",num);
     }
      getch();
      }