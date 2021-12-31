#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"

   
    
 Node* ll_make_node(int value){
  Node* node = calloc(1, sizeof(Node));
  node->data = value;
  node->next = NULL;
       
  return node;
 }

 Node* addAtBegin( Node *head, int data)
 {
  Node*newnode= ll_make_node(data); 
  if(head==NULL){
    return newnode;
  }
  newnode->next = head;
  return newnode;
 }
 
 Node* insertionAfterNode(Node* head , int value)
  {
  Node *newnode= ll_make_node(value);
    if(head==NULL){
     return newnode;
      }
   Node *ptr;
   for(ptr=head;ptr->next!=NULL;ptr=ptr->next);
    ptr->next = newnode;
    newnode->next = NULL;
    return head;
       }
    
Node* addAtDesired ( Node *head ,int index , int data)
{
  Node *newnode = ll_make_node(data);
  Node *p = head;
  int i=1;
  while(i!=index-1) 
  {
    p = p->next;
    i ++ ;
    }
  newnode->data=data;
  newnode->next = p->next;
  p->next = newnode;
    
  return head;
    }
     
 Node* deleteAtBegin( Node *head){
   Node *temp = head;
   head = head->next;
   free(temp);
   return head;
   }
      
      
  Node* deleteAtLast ( Node *head){
    Node *temp = head;
    Node *p = head->next;
    while (p->next != NULL){
    temp = temp->next;
    p = p->next; 
   }
    temp->next= NULL;
    free (p);
           
    return head;
  }
      
 Node *deleteAtDesired( Node *head, int index){
  Node *p = head;
  Node *q = head->next;
  for(int i = 1 ;i < index ; i++)
  {
    p = p->next;
    q = q->next;
    }
   p->next = q->next;
   free(q);
          
   return head;
   }
     
  Node* addAfterNode( Node *head , Node *previous ,int data )
 {
  Node *newnode = ll_make_node(data);
  newnode->next = previous->next;
  previous->next = newnode;
  newnode->data = data;

  return head;
  }
     
 Node* deleteAfterNode( Node * head , Node * previous){
  Node *temp = head;
  Node *p = head->next;
           
  while(temp->next != previous)
  {
   p = p->next;
  temp = temp->next;
  }
  previous->next = p->next;
  free(p);
 return head;

  }
      
         
 Node *deleteValueAtDesired( Node *head,int value)
  {
    Node *p = head;
    Node *q = head->next;
          
    while( q->data != value && q->next != NULL)
    {
    q = q->next;
    p = p->next;
     }
      //printf("%d %d", p->data,q->data);
    if(q->data == value){
    p->next = q->next;
    free(q);
    }
    return head;
    }

   Node * find(Node * head,int value){
      Node * ptr=head;
      for(;ptr!=NULL && ptr->data ==value ;ptr=ptr->next ){
        return ptr;
      }
    }
     
void display( Node * head)
 {
  Node *ptr=head;
  while (ptr != NULL)
  {
   printf("Element: %d \n", ptr->data);
   ptr = ptr->next;
   }
  }
     