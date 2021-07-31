#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1 ,fact;
 clrscr();
  printf("enter the number");
  scanf("%d",&fact);
  while(fact>0){
      a=fact*a;
      fact--;
      }
  printf("the factorial of number is %d\n",a);
  getch();
  }

