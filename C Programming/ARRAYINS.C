#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,position,value;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for (i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
 printf("enter the location where you wish to insert an element\n");
 scanf("%d",&position);
 printf("enter the value to insert\n");
 scanf("%d",&value);
 for (i=4;i<=position;i--){
 a[i+1]=a[i];
 }
 a[position]=value;
 for (i=0;i<5;i++)
 {
  printf("%d\t",a[i]);
  }
   getch();
   }