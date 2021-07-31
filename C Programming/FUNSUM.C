#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main(){
 int a,b;
 clrscr();
 printf("enter the two numbers a and b\n");
 scanf("%d%d",&a,&b);
 sum(a,b);
 getch();
 }
  void sum(int x,int y){
   int z;
   z=x+y;
   printf("the sum of two numbers is %d\n",z);
   }
