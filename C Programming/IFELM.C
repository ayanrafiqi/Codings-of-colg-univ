#include<stdio.h>
#include<conio.h>
void main()
{
  int marks,sport;
  clrscr();
  printf("enter the marks out of 100 \n");
  scanf("%d",&marks);
  if (marks<=100){
      printf("you have distinction\n");
  }
  if(marks<=70){
     printf(" YOU HAVE grade A");
  }
  if(marks<=60){
     printf("you have grade B \n");
  }
  if(marks<=50){
     printf("you have grade C\n");
  }
  if(marks<=40){
     printf("you have failed the test \n");
  }
  printf("do you have the sport scholorship? \n");
  printf("enter 1 for YES or 0 for NO \n");
  scanf("%d",&sport);
  if (marks>=80&&sport==1){
     marks=marks+10;
     printf("you are eligible for scholorship and your new marks after scholorship is %d \n",marks);
  }
  else{
      printf("you are not eligible for scholorship thus your new marks will remain same %d \n",marks);
  }
  getch();
  }