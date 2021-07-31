#include<stdio.h>
#include<conio.h>
int sum();
void main(){
 int sumz;
 clrscr();
 sumz=sum();    //calling function
 printf("sum of two numbers is %d\n",sumz);
 getch();
 }
 int sum(){            //function definition//
  int a,b,c;
  printf("enter the numbers\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  return c;
  }
