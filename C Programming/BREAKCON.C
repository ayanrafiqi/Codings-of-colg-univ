#include<stdio.h>
#include<conio.h>
void main()
{
  int num=0,i,sum=0;
  clrscr();
  a:
	sum=sum+num;
	num++;
	if(num<5){
	 goto a;
	      }
	      printf("%d\n",sum);

  // for(i=1;i<10;i++){

      // break;
       i=10;
      // while(i>0)
      do
       {
	  if(i==6){
	  i--;
	   continue;
	    }
	    printf("%d\t",i);
	    i--;
	    }while(i>0);
       getch();
       }

