//insertion sort and sum of a array by passing a pointer array to a  function
#include<stdio.h>
#include<conio.h>
int sum(int *,int);
void insertionSort(int *,int);
void main(){
  int a[5],i,z,n;
   clrscr();
   printf("enter the array size\n");
   scanf("%d",&n);
   printf("enter the array elements\n");
   for(i=0;i<n;i++){
     scanf("%d",&a[i]);
   }
   insertionSort(a,n);
   z=sum(a,n);
   printf("\nthe sum of the array is %d",z);
   getch();
   }
  void insertionSort(int *a ,int n)
   {
     int i,j,t;
     for(i=0;i<n;i++)
     {
       for(j=i;j>0;j--)
       {
	  if(*(a+j) < *(a+j-1))
	  {
	      t=*(a+j);
	      *(a+j)=*(a+j-1);
	      *(a+j-1)=t;
	    }
	   }
    }
   printf("\nthe sorted array is:\t");
   for(i=0;i<n;i++){
      printf("%d\t",*(a+i));
      }

 }
int sum(int *x,int n){
   int summ=0,i;
   for(i=0;i<n;i++){
      summ=summ + *x ;
       x++;
      }
  return summ;
  }


