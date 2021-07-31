#include<stdio.h>
#include<conio.h>
int gretSmal(int,int,int);
void main(){
int a,b,c,result;
 clrscr();
 printf("enter the numbers you want to chechk\n");
 scanf("%d%d%d",&a,&b,&c);
 result=gretSmal(a,b,c);
 printf("the greatest number among three is %d \n",result);
 getch();
 }
  int gretSmal(int a,int b,int c)
  {
   // int gre;
    if(a>b && a>c)
    {
    // gre=a;
     return a;
      }
   else if(b>a && b>c)
   {
    // gre=b;
     return b;
     }
     else
     {

	 return c;
	 }
	 }
