#include<stdio.h>
#include<stdbool.h>
#include "sorting.h"

void insertionSort(int a[],int n){

  for(int i=0;i<n;i++)
  {
    for (int j=i;j>0;j--)
    {
      if (a[j]<a[j-1])
      {
       swap(a,j,j-1);
       }

    }
  } 
   display(a,n); 
}

void  display (int a[], int n){
   printf("the sorted elements\n");
  for(int i=0 ; i<n ; i++){
	  printf("%d\t",a[i]);
	}

  }

bool arrayEqual(int a[], int s[], int n){
  int equal = true;
  for(int i = 0; i < n; i++){
    if(a[i] != s[i]){
      equal = false;
      break;
    }
  }
  return equal;
}


void swap(int a[], int i, int j){
      int temp=a[i];
      a[i] = a[j];
      a[j]=temp;

  }