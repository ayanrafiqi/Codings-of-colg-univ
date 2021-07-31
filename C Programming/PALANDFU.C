#include<stdio.h>
#include<conio.h>
void paland(int);
void main()
{
 int num,result;
 clrscr();
 printf("enter the number\n");
 scanf("%d",&num);
 paland(num);
 getch();
}
  void paland(int num)
  {
   int t,k,r=0;
   k=num;
   while(k>0)
   {
    t=k%10;
    r=r*10+t;
    k=k/10;
    }
     if (num==r)
     {
      printf("%d is a palandrome number\n",num);
      }
      else if(num!=r){
	printf("%d is not a palandrome number\n",num);
       }
      }

