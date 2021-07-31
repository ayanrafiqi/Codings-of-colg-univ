#include<stdio.h>
#include<conio.h>
printf("shahzaib rafiqi");
printf("roll no. 2001003045");
void main()
{
 int i,x,num,n=10;
 clrscr();
 printf("enter the number");
 scanf("%d",&num);
 for (i=0;i<n;i++){
    x=2;
    while (i%x!=0){
    x++;
    }
 if (i==x)
 {
  printf("\n %d is a prime number",i);
  }
  }
   getch();
}
