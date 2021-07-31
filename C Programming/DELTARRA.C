#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,position;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for (i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 printf("enter the location where you wish to dlete the element\n");
 scanf("%d",&position);
 if(position>=n+1)
 {
  printf("deletion not possoble\n");
  }
  else
  {
   for (i=position-1;i<n-1;i++){
   a[i]=a[i+1];
   }
   }
   printf("resultanat array\n");
   for (i=0;i<n-1;i++){
   printf("%d\n",a[i]);
   }
    getch();
  }