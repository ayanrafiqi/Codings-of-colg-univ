#include<stdio.h>
#include<stdlib.h>
 typedef struct node {
    int data ;
    struct node *next;
    
}Node;


   Node* push(Node *, int );
   Node* make_node(int);
   Node* pop(Node * );
   void display(Node *);
   void print(Node *);
   

   
   int main(){
       Node *head=NULL;
       
       for (int i=0;i<10;i++){
           head=push(head,i);
           }
            print(head);
            
          // printf("after poping the 5 elements from Stack \n");
        //    for(int i=0;i<5;i++){
            head=pop(head);
          //   }
            
            printf("after displaying stack \n");
            print(head);
           // display(head);
          
           return 0;
      }
        
     Node* make_node(int value)
     {
         Node *newnode=calloc(1,sizeof(struct node));
         newnode->data=value;
         newnode->next=NULL;
         
         return newnode;
         
        }
        
     Node* push(Node * head, int value)
     {
        Node * newnode=make_node(value);
       
           newnode->next=head;
           return newnode;
        /* newnode->next=head;
        if (head== NULL){
        return newnode;
        }
       Node* p = head;
       for (; p->next != NULL; p = p->next);

          p->next = newnode;
         newnode->next =NULL;
         

         return head; */
         }

        Node* pop(Node* head)
        {
          
          
          Node *p=head;
          Node *q=p->next;
         
           
           free(p);
           
            return q;
          
           /*  Node *ptr;
             Node *q;        
            for(ptr=head;ptr->next!=NULL;ptr=ptr->next){
                q=ptr;
            }
            
            q->next=NULL;
            free(ptr);
            */
           }
        
       void display(Node * head)
       {
           
          
         /* Node * prev=NULL;
           Node * nxt=NULL;
           while(head!=NULL){
               nxt=head->next;
               head->next =prev;
               prev=head;
               head=nxt;
             }
              head= prev;
               Node *ptr=head;
           */ 
          while (ptr != NULL)
           {
              printf("Element: %d\n", ptr->data);
              ptr = ptr->next;
            } 
          
        // displaying singly linked list from reverse through recursion method 
        /*  if(head == NULL) { 
               return;
                  }
   
            display(head-> next);
            printf(" %d ",head->data); */
           }
           
      void print(Node *head)
       {
          Node *ptr=head;
          while (ptr != NULL)
         {
            printf("Element: %d\n", ptr->data);
             ptr = ptr->next;
            }
        
       }
     
   