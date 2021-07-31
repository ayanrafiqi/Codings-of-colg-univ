#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,n;
  clrscr();
  printf("enter the array size\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
   }
  for(i=0;i<=n;i++){
       if(i==n)
       {
	printf("insert the element at the end\n");
	scanf("%d",&a[i]);
	}
  }
  printf("the new array elements are\n");
  for(i=0;i<=n;i++)
  {
    printf("%d\t",a[i]);
    }
    getch();
    }