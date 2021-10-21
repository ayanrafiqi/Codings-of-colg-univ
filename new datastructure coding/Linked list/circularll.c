#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int data ;
    struct node *next;
    
}Node;


   Node* cl_insert(Node *, int );
   Node* cl_make_node(int);
   Node* insert_before(Node * , int);
   Node* insert_After(Node * , int);
   void display( Node *);
   Node * cl_find(Node *,int);
   Node * cl_delete(Node *); 
    Node * insert_AfterHead(Node*,int);
  
   
     void display(Node *head)
      {
          Node *ptr=head;
       do
       {
        printf("Element: %d\n", ptr->data);
         ptr = ptr->next;
       } while(ptr!=head);
     }
        
   int main()
   {
       
      Node * head=NULL;
     
        for(int i=0;i<5;i++){
           head=cl_insert(head, i);
        }
        printf("my Circular linked list before any operation\n");
        display(head);
        Node *flaq=cl_find(head,2);
        head=cl_delete( flaq);
        printf("my Circular linked list after delete  operation\n");
        display(head);
      
       return 0;
   }
   
   
   
   
     Node* cl_make_node( int data) {
       Node* node = calloc(1, sizeof(struct node));
        node->data = data;
        node->next=node;
       
         return node;
       }
       
       
       Node * cl_insert(Node * head,int value){
           Node *newnode=cl_make_node(value);
             if(head==NULL){
                 return newnode;
             }
             Node *ptr;
             for(ptr=head;ptr->next!=head;ptr=ptr->next);
                ptr->next=newnode;
                newnode->next=head;

             return head;
           }
         Node * cl_find(Node * head, int value){
            Node * ptr;
           for(ptr=head;ptr!=NULL && ptr->data !=value;ptr=ptr->next);
               return ptr;
         }

         Node * cl_delete(Node * node){
           /*Node *k=dnode->next;
           Node *ptr=dnode;
          for(; ptr->next!=dnode;ptr=ptr->next);
                ptr->next=dnode->next;

                   free(dnode);

                 
                   return k;

           */
          if (node == NULL) return NULL;

            Node* p = node;
            for ( ; p->next != node; p = p->next);

             Node *head;
               if (p !=node) {
                 p->next = node->next;
                 head = node->next;
              } else {
                  head = NULL;
                 }

           free(node);
            return head;
           }