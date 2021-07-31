#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ch[20]={'j','a','v','a','t','p','o','i','n','t','\0'};
 int count=0,i=1;
 clrscr();
  while (ch[i]!=0)
  {
   count++;
   i++;

   }
    printf("the length of string is %d",count);
    getch();
    }