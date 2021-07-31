#include<stdio.h>
#include<stdio.h>
void main()
{
 int a[5],i,n,x;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
  for (i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
   x=2;
     while (a[i]%x!=0)
    {
     x++;
     }
     if (a[i]==x)
     {
      printf("the number %d is a prime number\n",a[i]);
      }
     else
     {
      printf("the number %d is not a prime number\n",a[i]);
      }

       }
	 getch();
       }