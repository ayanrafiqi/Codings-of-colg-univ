#include<stdio.h>
#include<conio.h>
void main(){
  int num, a,b,sum,sub,mult,div;
  clrscr();
  printf("arthimatic operations\n");
  printf("enter 1st number\n");
  scanf("%d",&a);
  printf("enter 2nd number\n");
  scanf("%d",&b);
  printf("enter 1 for sum!!\t enter 2 for sub!!\t enter 3 for multiply\t enter 4 for divide \n");
  scanf("%d",&num);
switch(num){
 case 1:
	 sum=a+b;
	 printf("sum of two given numbers is: %d",sum);
	 break;
 case 2:
	 sub=a-b;
	 printf("subraction of two given numbers is: %d",sub);
	 break;
case 3:
	mult=a*b;
	printf("Product of two given numbers is: %d",mult);
	break;
case 4:
      div=(float)(a/b);
      printf("division of  two given  numbers is: %d",div);
      break;
 default:
 printf("enter the  valid option!!");
 }
 getch();
 }