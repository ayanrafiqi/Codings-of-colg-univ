#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ch[20];
 int i;
 clrscr();
 printf("enter the characters\n");
 gets(ch);
 for(i=0;i<20;i++)
 {
  if (ch[i]=='a'|| ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u')
  {
    printf("%c is a vovel\n",ch[i]);
   }
   }
   printf("others are consonent\n");
      getch();
  }
