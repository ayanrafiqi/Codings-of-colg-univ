#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,number,c;
 clrscr();
 printf("enter the number");
 scanf("%d",&number);
 while (a<=10){
  c=number*a;
  printf("%dx%d=%d  \n",number,a,c);
  a++;
  }
  getch();
}