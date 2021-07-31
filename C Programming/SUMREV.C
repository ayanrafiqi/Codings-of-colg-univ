#include<stdio.h>
#include<conio.h>
void main()
{
 int num,rev;
 clrscr();
 printf("enter the number\n");
 scanf("%d",&num);
 printf("the reverse of the number is:\t");
 while (num>0){
  rev=num%10;
  printf("%d",rev);
  num=num/10;
  }
  getch();
  }