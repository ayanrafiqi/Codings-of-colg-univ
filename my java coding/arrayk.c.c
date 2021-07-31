#include<stdio.h>
int arr[5],i,count=0,x=2;
void main()
{
printf("enter the array elements\n");
for(i=0;i<5;i++)
scanf("%d",arr[i]);
    for(i=0;i<5;i++)
    {
        while(arr[i]%x!=0)
        {
            x++;
        }
        if(arr[i]==x)
            count++;
    }
    printf("the total prime no. of  array is %d",count);
}
