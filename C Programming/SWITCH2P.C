#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter the number");
 scanf("%d",&a);

switch (a>0){
case 1:
   printf("the number %d is positive \n",a);
   break;
case 0:
 switch(a<0){
   case 1:
   printf("the number %d is negative\n",a);
   break;
   case 0:
   printf("the number %d is zero\n",a);
   break;
    }
    break;
 default:
   printf("select valid number\n");
   }
   getch();
}
