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
  printf("%d is the greatest",a);
  }
  else if (b>a){
  printf("%d is the greatest",b);
  }
  getch();
  }