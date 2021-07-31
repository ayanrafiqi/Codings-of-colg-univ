#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],n,low,i,high,mid,flaq=0,num;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("enter the number you want to search\n");
 scanf("%d",&num);
  low=0;
  high=n;

   while(low<=high)
   {
	mid=(low+high)/2;
	if(a[mid]==num)
	{
	     flaq=1;
	     break;
	     }
	 else if(a[mid]< num)
	  {
		 low=mid+1;
		 }
	       else
	       {
		   high=mid-1;
		  }
    }
   if(flaq==1)
   {
      printf(" %d is found in an array at loc %d\n",num,a[mid]);
       }
   else
   {
	    printf("%d is not present in our array \n",num);
	     }
	    getch();
	    }

