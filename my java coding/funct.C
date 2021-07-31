#include<stdio.h>
#include<conio.h>
 int main()
{
 int a,fact;
 printf("Enter the number");
 scanf("%d",&a);
  fact=factorial(a);

 printf("%d,fact");
}
    factorial(int y)
  {
    int f=1,i;
 for(i=y;i>=1;i--)
    f=f*i;

   return(f);
}


