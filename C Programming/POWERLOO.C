#include<stdio.h>
#include<conio.h>
void main()
{
 int num,pow,i,r=1;
 clrscr();
 printf("enter the number");
 scanf("%d",&num);
 printf("enter the pow of the number");
 scanf("%d",&pow);
 for(i=1;i<=pow;i++){
 r=num*r;
 }
  printf("the power %d to the number %d is %d \n",pow,num,r);
  getch();
}