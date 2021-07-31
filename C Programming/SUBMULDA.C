printf("shahzaib rafiqi");
printf("roll no.2001003045");
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,n;
 clrscr();
 printf("enter the first number");
 scanf("%d",&a);
 printf("enter the second number");
 scanf("%d",&b);
 printf("press 1 for addition\n press 2 for subtraction\n press 3 for division\n press 4 for multiplication\n");
 scanf("%d",&n);
 if (n==1)
 {
  printf("%d",a+b);
  }
 if (n==2)
 {
  printf("%d",a-b);
  }
 if (n==3)
 {
  printf("%d",a/b);
  }
 if (n==4)
 {
  printf("%d",a*b);
  }
   getch();
}