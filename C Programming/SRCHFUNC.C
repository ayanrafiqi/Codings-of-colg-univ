#include<stdio.h>
#include<conio.h>
void srchArray(int[],int);
void binrArray(int[],int);
void contArray(int[],int);
void main()
{
 int a[5],i,n,nums,b[5],count=0;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the elements for binary search\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
  srchArray(a,n);
  binrArray(b,n);
  contArray(b,n);
  getch();
 }
 void srchArray(int a[5],int n)
 {
  int i,nums,flag=0;
  printf("enter the number you want to search for the first elements\n");
  scanf("%d",&nums);
  for(i=0;i<n;i++)
  {
   if(nums==a[i])
   {
    flag=1;
   }
  }
   if(flag==1)
   {
    printf("%d is an element of array\n",nums);
   }
   else{
    printf("%d is not an element of array\n",nums);
   }
  }
   void binrArray(int b[5],int n)
   {
    int i,numb,low,high,mid,flag=0;
    printf("enter the number you want to search for second elements\n");
    scanf("%d",&numb);
    low=0;
    high=n;
     while(low<=high)
     {
      mid=low+high/2;
      if(b[mid]==numb)
      {
       flag=1;
       break;
      }
      else if(b[mid]<numb)
      {
       low=mid+1;
      }
      else{
       high=mid-1;
      }
      }
       if(flag==1)
       {
	printf("%d is an element of array at location of %d\n",numb,b[mid]);
       }
	else{
	printf("%d not found in the elements\n",numb);
       }
      }
  void contArray(int b[5],int n)
  {
   int count=0,i,numc;
   for(i=0;i<n;i++)
   {
    if(numc==b[i])
    {
     count++;
    }
    }
    printf("%d\n",count);
  }