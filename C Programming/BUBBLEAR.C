#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,t,j;
 clrscr();
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for (i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
   for (i=0;i<n;i++)
   {
   for (j=0;j<n;j++)
   {
    if (a[j]>a[j+1])
    {
     t=a[j];
     a[j]=a[j+1];
     a[j+1]=t;
     }
     }
     }
     for (i=1;i<=n;i++){
      printf("%d\t",a[i]);
      }
       getch();
     }