#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ch[]="JAVATPOINT";
 clrscr();
 printf("enter the string name\n");
 gets(ch);
  printf("the string is %s\n",ch);
  printf("the lowercase string is %s\n",strlwr(ch));
  getch();
  }