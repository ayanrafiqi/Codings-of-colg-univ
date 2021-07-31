#include<stdio.h>
#include<conio.h>
void main(){
    int a[5],n,t,i;
    clrscr();
    printf("ENTER THE SIZE OF AN ARRAY\n");
    scanf("%d",&n);
    printf("Enter the elements in a array\n");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       }
       for(i=0;i<n/2;i++){
	     t=a[i];
	      a[i]=a[n-1-i];
	      a[n-1-i]=t;
	      }
	      for(i=0;i<n;i++){
	  printf("%d\t",a[i]);
	  }
	  getch();
    }