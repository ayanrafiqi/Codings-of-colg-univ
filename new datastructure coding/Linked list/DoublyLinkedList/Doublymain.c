#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "headerf.h"
   
     Node* ll_make_node(int data) {
       Node* node = calloc(1, sizeof(struct node));
        node->prev = NULL;
        node->data = data;
        node->next=NULL;
       
       return node;
       }
       
    Node* ll_prepend( Node * head, int value)
     {
      
        Node *newnode;
        newnode=ll_make_node(value);

        if (head==NULL){
          return newnode;
        }        
        newnode->prev=NULL;
        newnode->next= head;
        head->prev=newnode;
    
        return newnode;  
                                                                                                                    
      }
      
    Node * insert_before(Node * head, int value){
                 Node* ptr=head;
              if(ptr->prev==NULL){
                  return ll_prepend(ptr,value);
              
               }
             }
             
             
    Node * insert_After(Node *head,int value){
        Node *newnode=ll_make_node(value);
         Node *ptr=head;
         
         while(ptr->next!= NULL){
             ptr=ptr->next;
          }
           ptr->next=newnode;
           newnode->prev=ptr;
           newnode->next=NULL;
           return head;
    }         


    Node * insert_AfterHead(Node *head,int value){
        Node *newnode=ll_make_node(value);
        Node *ptr=head;
        Node *q=head->next;
              newnode->next=ptr->next;
              newnode->prev=ptr;
              ptr->next=newnode;
              q->prev=newnode;

            return head;
         }      


    Node* find(Node* head,int value){
        Node * p;
        for(p=head;p!=NULL && p->data!=value; p=p->next);
        return p;
           
  
    }


 Node * insert_beforeHead(Node * head, int value){
           if (head->prev==NULL){
               return ll_prepend(head,value);
           }
          
          Node *newnode=ll_make_node(value);
          Node *ptr=head;
               newnode->next=ptr;
               newnode->prev= ptr->prev;
               ptr->prev=newnode;
              
             return newnode;
             
        }
             
             Node* deleteDesired(Node * head,Node * point)
             {
                 
                  Node* p=head;
                
                 if (head==point){
                     head=head->next;
                     head->prev=NULL;
                     free (p);
                     return head;
                   }
            
                 Node *pre=point->prev;
                 Node *q=point->next;
                 
               
                 if(q==NULL){
                      pre->next=point->next;
                       free(point);
                       return head;
                 } 
                 
                 
                 pre->next=point->next;
                 q->prev=pre;
                 
                  free(point);
                
                return head;
             }
             
             Node * reverseDoubly(Node * head)
             {
                 
                 while(head->next!=NULL)
                 {
                     head=head->next;
                   }
                  Node *ptr;
                  ptr=head;
                 while(ptr!=NULL)
                 {
                     printf("%d\t",ptr->data);
                     ptr=ptr->prev;
                 }
                    return head;
             
               }
                void display(Node *head)
      {
          Node *ptr=head;
       while (ptr != NULL)
       {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
        }
     }