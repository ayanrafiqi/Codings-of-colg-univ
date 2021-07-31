#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,number=0;
 clrscr();
 printf("enter the number");
 scanf("%d",&number);
 for(a=1;a<=10;a++){
 printf("%d \n",number*a);
 }
 getch();
}