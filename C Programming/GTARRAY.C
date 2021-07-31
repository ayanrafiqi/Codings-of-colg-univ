
#include<stdio.h>
#include<conio.h>
void main(){
 int a[5],gt,n,i;
 clrscr();
  printf("enter the array size\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
   gt=a[0];
   for (i=0;i<n;i++)
   {
    if (gt<a[i+1])
    {
     gt=a[i+1];
     }
     }
      printf("the greatest no. in the element is %d\n",gt);
  getch();
  }
