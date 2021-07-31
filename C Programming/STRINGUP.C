#include<stdio.h>
#include<string.h>
void main()
{
 char ch[]="javatpoint";
 clrscr();
 printf("enter the string \n");
 gets(ch);
  printf ("the string is %s\n",ch);
  printf("the uppercase string is %s\n",strupr(ch));
  getch();
  }