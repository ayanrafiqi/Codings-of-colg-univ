#include<stdio.h>
#include<conio.h>
void main()
{
 int a=0,b=1,c,i,lt;
 clrscr();
 printf("enter the limit");
 scanf("%d",&lt);
 for(i=1;i<=lt;i++)
 {
 printf("%d \t",a);
  c=a+b;
  a=b;
  b=c;
 }
 getch();
}