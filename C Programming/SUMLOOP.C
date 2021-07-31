#include<stdio.h>
#include<conio.h>
void main()
{
 int num,s=0,t;
 clrscr();
 printf("enter the number");
 scanf("%d",&num);
 while (num>0){
 t=num%10;
 s=s+t;
 num=num/10;
 }
 printf("%d \t",s);

  getch();
}