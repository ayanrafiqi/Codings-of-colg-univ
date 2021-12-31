#include<stdio.h>
#include "sorting.h"



void quickSort(int a[], int low, int high){
   if(low < high )
   {
       int j= partition(a, low, high);
      quickSort(a, low, j);
       quickSort(a, j+1, high);
   }
}


 int partition(int a[], int low, int high ){
    int i = low;
    int j = high;
    int pivot = a[i];

    while(i < j)
    {
      do{
          i++;

         } while(a[i] <= pivot);
      
      do{
         j--;
        }while(a[j] > pivot);
     

      if (i < j){
        swap(a, i, j);
        }
     }
     swap(a,  low,j);
     
     return j;
 }
  
  void swap(int a[], int i, int j){
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;

  }
  
 void printArray(int a[] , int n){
    for(int i = 0 ; i < n; i++){
        printf(" %d\t ", a[i]);
     }
 }