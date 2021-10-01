#include<stdio.h>
#include<assert.h>

  void insertionSort(int[],int);
  bool array_equals(int [], int [],int);
   void  display(int [],int );

int main()
{
  int a[5],i,n,t,j;
  a[] = {2, 1, 10, 0, 5};
  int sorted [] = {0, 1, 2, 5, 10};

printf("enter the array size\n");
scanf("%d",&n);


        insertionSort(a,n); 
        assert(arrayEqual(a, sorted, n));
        display(a,n);

	return 0;

}

void insertionSort(int a[],int n){
   for (int i=0;i<n;i++)
    {
     for (int j=n;j>0;j--)
     {
         if (a[j]<a[j-1])
          {
               t=a[j];
               a[j]=a[j-1];
               a[j-1]=t;
              }
              }
              } 
          }

void  display(int a[],int n){
       printf("the sorted elements\n");
       for(i=1;i<=n;i++){
	  printf("%d\t",a[i]);
	}
      }

bool arrayEqual(int a[], int s[],n){
  int equal = true;
  for(int i = 0; i < size; i++){
    if(a[i] != s[i]){
      equal = false;
      break;
    }
  }
  return equal;
}
