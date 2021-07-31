#include<stdio.h>
#include<conio.h>
void main(){
 int p,num,a=1,s=1;
 clrscr();
 printf("Enter the base number\n");
 scanf("%d",&num);
 printf("Enter the power'Upper Bound number'\n");
 scanf("%d",&p);
	while(a<=p){
	   s=num*s;
	   a++;
	   }
	printf("The base %d to a power %d is: %d",num,p,s);
	getch();
    }