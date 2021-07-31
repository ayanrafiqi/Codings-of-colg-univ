#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ch1[20],ch2[20];
 int i=0,value=0;
 clrscr();
 printf("enter the first string\n");
 gets(ch1);
 printf("enter the second string\n");
 gets(ch2);

  while (ch1[i]!=0 || ch2[i]!=0)
   {
      if (ch1[i]!=ch2[i])
      {
	value=1;
	break;
      }
      i++;
   }

     if(value==1)
     {
       printf("strings are not equal \n");
     }
      else{
	printf("strings are  equal \n");
     }
	getch();
    }
