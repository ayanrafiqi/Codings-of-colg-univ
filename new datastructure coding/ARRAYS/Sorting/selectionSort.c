#include<stdio.h>
#include<stdbool.h>
#include "sorting.h"




void selectionSort(int a[],int n){
    for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
	    if(a[i]>a[j]){
	     swap(a, i, j);

	     }
      }
      }
      display(a,n);
}

void  display(int a[],int n){
       for(int i=0;i<n;i++){
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

