#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,n,e,t;
  clrscr();
  printf("enter the array size\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    }

/*   e= a[0];
  printf("element deleted is %d\n",e);
  for(i=0;i<n-1;i++)
  {
      a[i]=a[i+1];
      }
   //  n--;
     printf(" new elements in a array are\n");
     for(i=0;i<n-1;i++)
     {
	printf("%d\n",a[i]);
	}
	*/
	e=a[n-1];
	printf("element deleted is %d\n New elements in a array are:\t",e);
       //	for(i=0;i<n-1;i++){
	   // printf("%d\n",a[i]);
	t=n;
	for(i=t;t>=0;t--)
	{
	  a[t-1]=a[t-2];
	  }

	for(i=1;i<n;i++)
	{
	 printf("%d\t",a[i]);
	}
	printf("%d",a[0]);
  getch();
  }

