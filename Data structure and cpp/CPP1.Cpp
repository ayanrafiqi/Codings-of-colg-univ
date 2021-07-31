#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void display();
class first
{
   private:
	  int a;
	  int b;
   public:
	 display();

};
void main()
 {
    first j;
    clrscr();
    j.display();
    getch();
    }
 void first :: display()
 {
     int c;
     cout<<"enter values\n";
     cin >> a >> b;
     c=a+b;
     cout<<"the sum of a numbers is:"<<c;
     }

