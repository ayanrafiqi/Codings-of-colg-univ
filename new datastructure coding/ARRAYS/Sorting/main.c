#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include "sorting.h"

int main()
{
 int a[]= { 3,5,2,13,12,3,2,13,45};
 int sorted [] ={1,2,7,8,10,20,21,31,42,66 };
  
  int size =sizeof(a)/sizeof(int);
  printf("\nYour array before sorting is:\n");          
  printArray(a,size);
/*
 printf("\nYour array after Selection sorting is:\n");   
 selectionSort(a,n); 

  printf("\nYour array after bubble sorting is:\n");   
  bubbleSort(a,n);

  printf("\nYour array after insertion  sorting is:\n");   
 insertionSort(a,n);

*/

 
  quickSort(a,0,size);   
  printf("\nYour array after quick sort sorting is:\n");
  printArray(a , size);

  //assert(arrayEqual(a, sorted, n));

	return 0;

}