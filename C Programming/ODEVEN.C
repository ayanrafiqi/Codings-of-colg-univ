#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter the number");
 scanf("%d",&a);
 if(a%2==0){
   printf(" %d is even");
   }
 else if(a%2!=0){
 printf("%d is odd");

 }
getch();
}