#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 char z;
 printf("enter  two numbers");
 scanf("%d%d",&a,&b);
 printf("enter + for sum \t enter - for subtraction \t enter * for multiplication \n");
 scanf("%c",&z);
 switch(z){
  case '+':
   c=a+b;
   printf("the sum of your two numbers is %d",c);
   break;
  case '-' :
   c=a-b;
   printf("the subtration of two numbers is %d",c);
   break;
  case '*' :
   c=a*b;
   printf("the multiplication of two numbers is %d",c);
   break;
  default:
   printf("enter write characters");
   }
   getch();
 }