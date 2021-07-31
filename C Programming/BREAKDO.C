#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n=2,choice;
 clrscr();
 do
 {
  i=1;
  while (i<=10)
  {
   printf("%d*%d=%d \n",n,i,n*i);
   i++;
   }
    printf("do you want to continue with the table of %d?,type any non zero value to continue",n+1);
    scanf("%d",&choice);
    if (choice==0)
    {
     break;
     }
      n++;
      }while (1);
       getch();
   }

