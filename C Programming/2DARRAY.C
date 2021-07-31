/* printed 2d array
sum of 2d single matrix elements
addition of two matrix in 2d matrix into third matrix
multiply of two matrix in 2d
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],b[5][5],re[5][5],i,j,r,c,p,q,k;
clrscr();
printf("Welcome to the programs of 2D ARRAY\n");
printf("enter the row of a 1st matrix\n");
scanf("%d",&r);
printf("enter the columns of a 1st matrix\n");
scanf("%d",&c);
printf("enter the numbers in a matrix A?? \n");
for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
   {
       scanf("%d",&a[i][j]);
}
}
printf("enter the rows of second matrix\n");
scanf("%d",&p);
printf("enter the columns of second matrix\n");
scanf("%d",&q);
printf("now Enter the Numbers in 2nd matrix B?? \n");
for(i=0;i<p;i++){
for(j=0;j<q;j++){
    scanf("%d",&b[i][j]);
    }
    }
 if(c!=p){
     printf("sorry the multiplication of matrixes is not possible as the no.of colomn in first matrix is not equal to no.of rows of second matrix\n");
   }
   else
   {
  // printf("the THIRD MATRIX C AFTER ADDITION/multiplication Is:-\n");
   for(i=0;i<r;i++){
     printf("\n");
    for(j=0;j<q;j++){
	re[i][j]=0;
    for(k=0;k<c;k++){
	  re[i][j]=re[i][j]+a[i][k]*b[k][j];
       //	 printf("[%d%d]:",i,j);
	// printf("%d\t",a[i][j]);
	// printf("\n %d\t",b[i][j]);
       //	 re[i][j]=a[i][j]+b[i][j];
 //	 printf("[%d%d]\t:%d ",i,j,re[i][j]);
	 }
    }
    }
    }
    printf("THE MULTIPLICATION OF TWO MATRIX IS: ");
    for(i=0;i<r;i++){
       printf("\n");
    for(j=0;j<q;j++){
       printf("%d\t",re[i][j]);
       }
       }
      // printf("\n AND The sum of an array is %d \t",sum);    */
    getch();
    }