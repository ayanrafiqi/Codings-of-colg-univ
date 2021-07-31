#include<stdio.h>
#include<conio.h>
void rev(int);
int sum();
void name(int,int);
int body(int);
int bodyfun();

void main()
{
 int num,result,r,x,z,l,k;
 clrscr();
 printf("enter the number\n");
 scanf("%d",&num);
  rev(num);
  r=sum();
  printf("sum of two numbers is %d\n", r);
  name(x,z);
  // body(num);
  l=bodyfun();
  printf("  your marks is %d \t",l);	    //this function calls (calling function)
  getch();
 }
  void rev(int num)
  {
   int revrs=0;
   int m=num;
    while (m>0){
    revrs=(revrs*10)+ m%10;      //this is being called (definition)
    m=m/10;
    }

    printf("reverse=%d\t",revrs);
   }
   int sum(){
    int a , b,k;
     printf("enter two numbers for sum\n");
     scanf("%d %d", &a,&b);
      k=a+b;
      return k;

    }
     void name(int x,int z)
     {
      printf("now enter two digits to check the greatest number\n");
      scanf("%d %d",&x,&z);
      if(x>z)
      {
       printf("%d is greatest number\n",x);
       }
	else{
	 printf("%d is grestest number\n",z);
	 }
	}
	 int body(int age)
	 {

	 // printf("enter the age\n");
	 // scanf("%d",&age);
	  if (age>18)
	  {
	 // printf("you are eligible for votting\n");
	   return age;
	  }
	   else if(age<18)
	   {
	    printf("not eligible\n");
	 }
	}
	  int bodyfun()
	  {
	    int marks;
	    printf("enter the marks\n");
	    scanf("%d",&marks);
	    if(marks>=50)
	    {
	      printf("congrats you passed the test and ");
	      return marks;
	    }
	     else if (marks<50)
	       {
		printf("sorry you failed the exam and");
		return marks;
		}
	    }




