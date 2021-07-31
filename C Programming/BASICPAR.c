#include<stdio.h>
#include<conio.h>
void main(){
     int marks,percentage=0;
     printf("Enter the marks");
     scanf("%d,&marks);
     parcentage=(float)marks/100*100;
     if(marks>80){
     printf("you Have distiction and your Parcentage is %d",parcentage);
     }
     else if (marks>70){
     printf("you have grade A and your Parcentage is %d",parcentage);
     }
     else if(marks >50){
     printf ("you have grade C and your parcentage is %d",parcentage);
     else if (marks<33){
     printf (" YOU FAILED");
     }
