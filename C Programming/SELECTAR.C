#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i,n,t,j;
 clrscr();
 printf("enter the size of array\n");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for (i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("\n array elements before sorting:");
  for(i=0;i<n;i++){
  printf("%d\t",a[i]);
  }


  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
	if(a[i]>a[j])
	{
	   t=a[i];
	   a[i]=a[j];
	   a[j]=t;
	  }
	}
      }
      printf("\n array elements after sorting are\n");
      for(i=0;i<n;i++){
	   printf("%d\t",a[i]);
	 }
       getch();

     }