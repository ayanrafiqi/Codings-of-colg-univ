#include<stdio.h>
int main()
{
  int i,n,arr[20];
  printf("Enter the number of elements in a array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("\n arr[%d]=",i);
      scanf("%d,arr[i]");
      }
      for(i=0;i<n;i++){
      printf("%d",arr[i]);

      }
      return 0;

}
