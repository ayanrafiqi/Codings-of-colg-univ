#include<stdio.h>
#include<conio.h>
void sumarray(int[],int n);
void primearray(int [],int n);
void oddEven(int[],int n);
void gtArray(int[],int n);
void delArray(int[],int n);
void insrtArray(int[],int n);
void main()
{
 int a[5],n,i,m,k,x,ar,farray[5],sarray[5],s,position,d,loc,val,e;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for (i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter the elements\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&farray[i]);
 }
 printf("enter the second elements\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&sarray[i]);
 }

   sumarray(a,n);
   oddEven(farray,n);
   primearray(sarray,n);
   gtArray(a,n);
   delArray(farray,n);
   insrtArray(sarray,n);
   getch();
 }
  void sumarray(int a[],int n)
   {
    int sum=0,i;
    for( i=0;i<n;i++)
    {
     sum=sum+a[i];
     }
      printf("\n the sum of an array is :%d\n",sum);
    }

  void oddEven(int m[],int n)
  {
   int i;
    for(i=0;i<n;i++)
    {
       if(m[i]%2==0)
       {
	printf("%d is an even number\n", m[i]);
       }
	else{
	 printf(" %d is an odd number\n",m[i]);
       }
      }
     }
  void primearray(int ar[],int n)
  {
   int i,x;
   for(i=0;i<n;i++){
    x=2;
     while(ar[i]%x!=0)
     {
      x++;
     }
      if(ar[i]==x)
      {
       printf("%d is a prime number\n",ar[i]);
      }
       else{
       printf("%d is not a prime number\n",ar[i]);
      }
     }
    }
  void gtArray(int s[5],int n)
  {
   int gt,i;
    gt=s[0];
    for (i=0;i<n;i++)
    {
     if (gt<s[i+1])
     {
	gt=s[i+1];
     }
    }
	printf("%d is the greatest element in this array\n",gt);
  }
   void delArray(int d[5],int n)
   {
    int position,i;
    printf("enter the location where you wish to delete the element\n");
    scanf("%d",&position);
    for(i=position;i<4;i++)
    {
     d[i]=d[i+1];
    }
    for(i=0;i<4;i++)
    {
     printf("%d\t",d[i]);
    }
  }
   void insrtArray(int e[],int n)
   {
    int loc,val,i;
    printf("enter the location where you wish to insert the value\n");
    scanf("%d",&loc);
    printf("enter the new value\n");
    scanf("%d",&val);
    for(i=4;i<=loc;i--)
    {
     e[i+1]=e[i];
    }
     e[loc]=val;
   for(i=0;i<=5;i++)
   {
    printf("%d\t",e[i]);
   }
 }







