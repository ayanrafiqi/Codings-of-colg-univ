#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str1[20],str2[20];
 clrscr();
  printf("enter the first string\n");
  gets(str1);
  printf("enter the second string\n");
  gets(str2);
  if (strcmp(str1,str2)==0)
  {
   printf("strings are equal");
   }
   else {
    printf("strings are not equal");
    }
     getch();
   }

