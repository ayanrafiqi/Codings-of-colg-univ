#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("enter the first number");
  scanf("%d",&a);
  printf("enter the second number");
  scanf("%d",&b);
  if (a>b){
     printf("a is maximum %d \n",a);
     }
  else if (b>a){
     printf("b is maximum %d \n",b);
     }
  if (a==b){
     printf("bothe the numbers are equal %d %d \n",a,b);
     }
  getch();
  }