#include<stdio.h>
#include<stdbool.h>
#include "sorting.h"


void selectionSort(int a[],int n){
    for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
	if(a[i]>a[j])
	{
	    int t;
	   t=a[i];
	   a[i]=a[j];
	   a[j]=t;
	  }
	}
      }
}

void  display(int a[],int n){
       printf("the sorted elements\n");
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