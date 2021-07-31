#include<stdio.h>
#include<string.h>
void main()
{
 char ch[20],n;
 int i,count=0;
 clrscr();
 printf("enter any string\n:");
 gets(ch);
 printf("enter the character you want to count\n");
 scanf("%c",&n);
 for(i=0;ch[i]!=0;i++){
  if(ch[i]==n)
  {
   count++;
   }
   }
   printf("total characters are %d\t",count);
   getch();
   }
