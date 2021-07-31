#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 clrscr();
  for(num=1;num<100;num++){
    if(num%3==0 &&num%5==0){
     printf("fizzbuzz\n");
     }
    if (num%3==0)
    {
    printf(" fizz \n");
    }
    if (num%5==0)
    {
    printf(" buzz \n");
    }
   // printf("%d",num);
    }
    getch();
}

