#include<stdio.h>
#include<conio.h>
main(){
int num,r,sum=0;
clrscr();
printf("ENTER THE NUMBER\n");
scanf("%d",&num);
	while(num>0){
	r=num%10;
	sum=sum*r;
	num=num/10;
	}
printf("THE Sum of a number %d",sum);
getch();
}


