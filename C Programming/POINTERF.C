#include<stdio.h>
#include<conio.h>
int sum(int *,int);
void swap(int *, int*);
void main(){
  int a[5],i,z,n,x,y;
  clrscr();
  printf("enter the array size\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  z=sum(a,n);
  printf("the sum of the array is %d\n",z);
  printf("Enter two numbers for swapping \n");
  scanf("%d %d",&x,&y);
  printf("TWO Numbers before swapping is  %d %d \n",x,y);
  swap(&x,&y);
 getch();
 }
int sum(int *x,int n){
   int summ=0,i;
   for(i=0;i<n;i++){
      summ=summ + *x ;
      x++;
      }
  return summ;
  }
 void swap(int *m,int *n){
      int c;
       c=*m; // putting value at m in c
       *m=*n;
       *n=c;
       printf("numbers after swapping is %d %d\n",*m,*n);
       }



