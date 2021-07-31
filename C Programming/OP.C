#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   printf("enter the first number");
   scanf("%d",&c);
   printf("enter the second number");
   scanf("%d",&a);
   printf("enter the third number");
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("the value of a and b is \n %d %d",a,b);


   getch();
   }
