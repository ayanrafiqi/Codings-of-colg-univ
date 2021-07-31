#include<stdio.h>
#include<conio.h>
void main()
{
 int num,t,n=0,s=1,k,nn=0,j,r;
 clrscr();
 printf("TO CHECK THE NUMBER IS ARMSTRONG OR NOT\n");
 printf("enter the number you want to check\n");
 scanf("%d",&num);
   t=num;
   while(t>0)
   {
      n++;
      t=t/10;
      }
       j=num;
       flag:
	   r=j%10;
	   j=j/10;
	  // printf("%d %d",r,j);
	   k=0,s=1;
	   while(k<n)
	  {
	     s=s*r;
	     k++;
		}
	   nn=s+nn;
	   if(j>0){
	    goto flag;
	    }
      //	else
       //	{
	//  printf("%d\n",nn);
      // }
    if(num==nn)
    {
      printf("RESULT:yes :) the given number %d is an Armstrong number\n",num);
      }
    else
    {
       printf("RESULT: SORRY! The given number %d is not an arm strong number\n",num);
       }
       getch();
       }