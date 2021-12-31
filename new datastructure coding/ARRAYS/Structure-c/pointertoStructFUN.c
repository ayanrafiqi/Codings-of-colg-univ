#include <stdio.h>

struct node{
    int x; 
    int y;
};
struct node* add(struct node *);
int main()
{
    struct node a;
    a.x=3;
    a.y=2;
    struct node* k = add(&a);
    printf("%d,%d",k->x,k->y);
    return 0;
}
struct node* add(struct node * m){
struct node* newnode;
 newnode = (struct node*)calloc(1,sizeof(struct node));
  newnode->x = m-> x + m->y;
  newnode->y = m-> x * m->y;
        
  return newnode;

}



#include<stdio.h>
 #include<conio.h>
struct sum add(struct sum, struct sum);
void display(struct sum, struct sum);
struct sum{
   int m;
   int n;
   };

   int main()
   {
      struct sum a;
      struct sum b;
      b.m=10;
      b.n=10;
      a.m=40;
      a.n=90;
      display(a,b);
      ;
      return 0;
      }

  struct sum add(struct sum t, struct  sum j){
	struct sum c;
	c.m= t.m + j.m;
	c.n = t.n + j.n;
	return c;
    }
    void display(struct sum a,struct sum b){
        struct sum new = add(a,b);
        printf("sum of the two is\n");
        printf("%d %d", new.m,new.n);
        
      }