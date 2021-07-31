#include<stdio.h>
#include<conio.h>
int sumarray(int[]);
void prime(int[]);
void greatest(int[]);
void main()
{
  int arr[5],i,sum;
  clrscr();
  printf("enter the  array elements\n");
  for(i=0;i<5;i++){
  scanf("%d",&arr[i]);
  }
  sum=sumarray(arr);
  printf("Sum of the array is %d\n",sum);
  prime(arr);
  greatest(arr);
  getch();
  }
  sumarray(int arr[]){
    int i,z=0;
    for(i=0;i<5;i++){
	z=z+arr[i];
	 }
      return z;
    }
     void prime(int arr[]){
      int i;
      for(i=0;i<5;i++){
	    int x=2;
	   while(arr[i]%x!=0){
		 x++;
		 }
	    if(arr[i]==x){
	       printf("%d is prime\n",arr[i]);
	       }
	    else{
		 printf("%d is not prime\n", arr[i]);
		 }
		 }
		 }
       void  greatest(int arr[])
       {
	  int i,num;
	   num=arr[0];
	   for(i=1;i<5;i++){
	       if(num<arr[i+1]){
		     num=arr[i];
		   }
		   }
		 printf("the greatest number in a array is %d\t ",num);
		 }





