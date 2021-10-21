#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include "sorting.h"


void bubbleSort(int a[],int n){
  int t;
  for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
          {
            if (a[j]>a[j+1])
             {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
               }
              }
              }
}

void  display(int a[],int n){
       printf("the sorted elements\n");
       for( int i=0;i<n;i++){
	        printf("%d\t",a[i]);
	}
      }
bool arrayEqual(int a[], int s[],int n){
    int equal = true;
    for(int i = 0; i < n; i++){
     if(a[i] != s[i]){
      equal = false;
      break; 
    }
   }
  return equal;
   }