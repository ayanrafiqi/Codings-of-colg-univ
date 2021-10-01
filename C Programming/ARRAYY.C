#include<stdio.h>
#include<conio.h>
int main()
{
   int a[5],i,n,sum=0,avrg;
   //clrscr();
//   printf("%d\n ",sizeof(a));
   printf("enter the size of an array\n");
   scanf("%d",&n);
   //intializing the array dynamically
 printf("enter the array elements\n");
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
    }
    //now displaying the array elements
  //printf("the elements you entered are\n");
  //for(i=0 ;i<n;i++)
  //{

    for (i=0;i<n;i++)
    {
     sum=sum+a[i];
     }
 // printf("%d\t",arr[i]);
  //}
  printf("The sum of given array is : %d\t",sum);
  avrg=sum/n;
  printf("the average of array is : %d\t",avrg);

  return 0;
  }