#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct node
{
  int data;
  struct node *next;
 } Node;

typedef struct queue{
 Node *front;
 Node *rear;
   
}Queue;

void node_enqueue (Queue *, int );
Node * make_node (int);
void display (Queue *);
void dequeue(Queue * );
  
int main()
{
    Queue * queue;
      
    queue->front= NULL;
    queue->rear = NULL;
     
  for(int i = 0 ; i < 5 ; i++){
       node_enqueue(queue, i);
   }
   printf("my Linked list after enqueue\n ");    
   display(queue);
  // for(int i = 0 ; i < 2 ; i++){
      dequeue(queue);
    }
   printf("after dequeue\n");

   display(queue);
  
  return 0;
 }
   
Node * make_node (int value)
{
  Node * newnode = calloc(1,sizeof(Node));
  newnode->data = value;
  newnode->next = NULL;
  return newnode;

  }
   
  void node_enqueue(Queue *queue, int value)
 {
  Node * newnode = make_node(value);
  if(queue->front==NULL){
    queue->rear =queue->front = newnode;
    }
  else{
    queue->rear->next = newnode;
    queue->rear = newnode;
 
  }
  
  }

void dequeue(Queue * queue)
  {
  if (queue-> front == NULL ){
    queue->rear=NULL;
    printf ("queue is empty\n");

    }
    else{
    
    Node *n =queue->front;
    queue->front=n->next;
       free(n);
    }
  }
 void display(Queue *queue){
   while(queue->front !=NULL)
  {
    printf("Element: %d\n",queue->front->data);
     queue->front =queue->front->next;
  }
  }
       