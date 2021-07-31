#include<stdio.h>
#include<conio.h>
void main()
{
 int num,t,n=0,s=1,k,nm=0,j,r;
 clrscr();
 printf("to check the number is armstrong or not \n");
 printf("enter the number you want to check \n");
 scanf("%d",&num);
 t=num;
 while (t>0)
 {
  n++;
  t=t/10;
  }
   j=num;
   flag:
	r=j%10;
	j=j/10;
	k=0,s=1;
      while (k<n)
      {
       s=s*r;
       k++;
       }
       nm=s+nm;
       if (j>0)
       {
	goto flag;
	}
	if (num==nm)
	{
	printf("result: yes, the given number %d is an armstrong number",num);
	}
	 else
	 {
	  printf("result: sorry! the given number %d is not an armstrong number",num);
	  }
	   getch();
      }
