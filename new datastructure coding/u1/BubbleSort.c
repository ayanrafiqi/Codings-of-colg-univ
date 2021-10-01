#include<stdio.h>
#include<assert.h>


 bool array_equals(int [], int [],int);
 void  display(int [],int );
void bubbleSort(int[],int );

int main()
{
 int a[5],i,n,t,j;



   a[] = {2, 1, 10, 0, 5};
  int sorted [] = {0, 1, 2, 5, 10};


printf("enter the array size\n");
scanf("%d",&n);

        bubbleSort(a,n);
        assert(arrayEqual(a, sorted, n));
        display(a,n);
        getch();

}

void bubbleSort(int a[],int n){
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