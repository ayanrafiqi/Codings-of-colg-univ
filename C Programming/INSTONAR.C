#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,t,j;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for (i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
   for (i=0;i<n;i++)
   {
    for (j=n;j>0;j--)
    {
     if (a[j]<a[j-1])
     {
      t=a[j];
      a[j]=a[j-1];
      a[j-1]=t;
      }
      }
      }
       printf("the sorted elements\n");
       for(i=1;i<=n;i++){
	  printf("%d\t",a[i]);
	}
	 getch();
      }