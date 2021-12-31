#include<stdio.h>
#include<assert.h>


 int binarySearch(int[] ,int , int, int );

int main()
{
 int a[5],n,
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for( int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }


assert(binarySearch(a, 0, n, 0) == -1);
assert(binarySearch(a, 0 ,n, 15) == 4);
assert(binarySearch(a, 0 ,n, 4) == 3);


 return 0;
}



 int binarySearch(int a[],int low, int n, int num){
    int high=n;
    int results= -1;
    while(low<=high)
    {
	mid=(low+high)/2;
	if(a[mid]==num)
	{
	    results=mid;
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
     return results;
}