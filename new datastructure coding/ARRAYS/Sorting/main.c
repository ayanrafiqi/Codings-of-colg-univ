#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include "sorting.h"

int main()
{
  int i , n, j;
 int a[]= {2, 1, 10, 0, 5};
  int sorted [5] = {0, 1, 2, 5, 10};

  printf("enter the array size\n");
  scanf("%d",&n);


         selectionSort(a,n); 
        // bubbleSort(a,n);
       // insertionSort(a,n);
        assert(arrayEqual(a, sorted, n));
        display(a,n);

	return 0;

}