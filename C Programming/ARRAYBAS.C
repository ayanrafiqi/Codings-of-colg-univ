#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,num,flaq=0,count=0;
  clrscr();
  printf("enter the array size \n");
  scanf("%d",&n);
  printf("enter the array elements\n") ;
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
 printf("Enter the number you want to search in a array\n");
  scanf("%d",&num);

 for (i=0;i<n;i++)
 {
      if(num==a[i])
      {
	 flaq=1;
	 }
	 }
    if(flaq==1)
   {
      printf(" yes %d is element of an array the location of %d \n",num,a[i]);
    }
    else
    {
      printf("ops it is not an element of array at the location of \n");
    }
       for (i=0;i<n;i++)
      {
	if (num==a[i])
	 {
	   count++;

	}
	}
	printf("TOTAL count of given numbers in a array is %d",count);
	 getch();
	 }