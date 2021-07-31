#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2;
 clrscr();
 printf("enter two numbers");
 scanf("%d%d",&num1,&num2);
 switch(num1>num2)
 {
 case 1:
 num1>num2;
 printf("num1 is maximum number %d \n",num1);
 break;
 case 0:
 num2>num1;
 printf("num2 is maximum number %d \n",num2);
 break;
 }
  getch();
}
