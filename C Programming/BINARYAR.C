#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,num,mid,low,high,f=0;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for (i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
printf("enter the number you want to search\n");
scanf("%d",&num);
low=0;
high=n;
 while (low<=high)
 {
   mid=(low+high)/2;
  if (a[mid]==num)
  {
   f=1;
   break;
   }
   else if(a[mid]<num)
   {
    low=mid+1;
    }
    else
    {
       high=mid-1;
	}
	}
    if (f==1)
    {
     printf("%d  is found in the array at location %d\n",num,a[mid]);
     }
    else
      {
       printf("%d not found in an array\n",num);
       }
	getch();
      }

