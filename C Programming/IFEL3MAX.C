#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,maximum;
  clrscr();
  printf("enter the first number");
  scanf("%d",&a);
  printf("enter the second number");
  scanf("%d",&b);
  printf("enter the third number");
  scanf("%d",&c);
  if (a>b && a>c)
  {
     printf("a is maximum number %d \n",a);
     }
  if (b>a && b>c)
  {
     printf("b is maximum number %d \n",b);
     }
  if (c>a && c>b)
  {
     printf("c is maximum number %d \n",c);
     }
     getch();
     }