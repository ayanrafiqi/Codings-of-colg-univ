#include<stdio.h>
#include<conio.h>
void main()
{
 int i,num,a;
 clrscr();
 printf("enter the number whose table you want to print\n");
 scanf("%d",&num);
 printf("the table of %d is \n",num);
 for (i=1;i<11;i++){
  printf("%d*%d=%d\n",num,i,num*i);
  }
   getch();
 }
