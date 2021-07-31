#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,r;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for (i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  printf("the array elements before reversing is\t");
  for (i=0;i<n;i++){
  printf("%d\t",a[i]);
  }
  for(i=0;i<n/2;i++){
  r=a[i];
  a[i]=a[n-i-1];
  a[n-i-1]=r;
  }
   printf("\nthe array elements after revesing is\t");
   for (i=0;i<n;i++){
   printf("%d\t",a[i]);
   }
   getch();
 }






