#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,num,z;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for (i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  printf("enter the number you want to replace\n");
  scanf("%d",&num);
  for (i=0;i<n;i++){
   if (a[i]==num)
   {
    printf("enter the new number you want to put at the replaced position\n");
    scanf("%d",&z);
    a[i]=z;
    }
    }
    printf("the new array after replacement is:");
    for (i=0;i<n;i++){
     printf("%d\t",a[i]);
     }
      getch();
      }



