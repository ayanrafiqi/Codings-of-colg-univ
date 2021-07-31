#include<stdio.h>
#include<conio.h>
void main(){
int i=1;
clrscr();
 while(i<=10){
      if(i==4){
       i++;
       continue;
}

       printf("%d\t",i);
       i++;
}
       getch();
       }