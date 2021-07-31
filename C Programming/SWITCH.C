#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
  char c;
  int a,b,r,p;
  clrscr();
  printf("THE CALCULATOR\n");
do{
   printf("enter number  \n");
   scanf("%d",&a);
   printf("enter second no \n");
   scanf("%d",&b);
   printf("enter + for sum \n enter - for sub \n enter * for  multiply \n enter / for divide\n ");
   scanf("%d",&p);
   switch(p)
   {
      case 1:
	  r=a+b;
	// printf("%d",c);
	   break;
      case 2:
	  r=a-b;
	  break;
      case 3:
	   r=a*b;
	//  printf("%d",c);
	   break;
      case 4:
	   r=(float)a/b;
	 // printf("%d",c);
	   break;
      default: printf("enter valid option");
      }
 printf(" result of %d and %d is: %d",a,b,r);
 printf("\n press y To continue  or \t press to exit\n");
 scanf("%c",&c);
 } while(c == 'y');
 getch();
 }