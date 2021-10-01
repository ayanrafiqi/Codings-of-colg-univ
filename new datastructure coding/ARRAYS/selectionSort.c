#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
  void selectionSort(int[],int);
   bool arrayEqual(int [], int [],int);
   void  display(int [],int );

int main()
{
  int i,n,j;
 int a[5]= {2, 1, 10, 0, 5};
  int sorted [5] = {0, 1, 2, 5, 10};

printf("enter the array size\n");
scanf("%d",&n);


        selectionSort(a,n); 
        assert(arrayEqual(a, sorted, n));
        display(a,n);

	return 0;

}

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