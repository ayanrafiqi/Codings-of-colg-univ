#include<stdio.h>
 #include<conio.h>
struct sumb add( struct sumb);
void display( struct sumb);
struct sum{
   int m;
   int n;
   };
   struct sumb{
       int x;
       int y;
       struct sum a;
   };

   int main()
   {
      struct sumb b;
      b.x=10;
      b.y=10;
      b.a.m=40;
      b.a.n=90;
      display(b);
      ;
      return 0;
      }

  struct sumb add(struct  sumb t){
	struct sumb c;
	c.x= t.x+ t.a.m;
	c.y = t.y + t.a.n;
	return c;
    }
   void display(struct sumb b){
        struct sumb new = add(b);
        printf("the elements of first structure 'A' is \n");
        printf("a=%d,b=%d\n",b.a.m, b.a.n);
        printf("the elements of second structure 'B' is \n");
        printf("x=%d,y=%d\n",b.x, b.y);
        printf("sum of the two structure 'A & B 'is\n");
        printf("sum z1=%d sum z2=%d", new.x,new.y);
        
      }


