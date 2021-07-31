#include<stdio.h>
#include<conio.h>
void main()
{
 char alphabet;
 clrscr();
 printf("enter any character");
 scanf("%c",&alphabet);
 if (alphabet=='a'|| alphabet=='e'|| alphabet=='i'|| alphabet=='o'|| alphabet=='u')
 {
  printf("%c is an vowel \n",alphabet);
    }
 else
 {
 printf("it is an consonent");
    }
    getch();
}