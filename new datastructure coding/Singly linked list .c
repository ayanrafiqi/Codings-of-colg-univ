#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};

   struct Node* addAtBegin(struct Node *, int );
   struct Node* addAtDesired(struct Node *, int, int);
   struct Node * addAtLast(struct Node *, int);
   struct Node * addAfterNode(struct Node *, struct Node *, int);
   struct Node* deleteAtBegin(struct Node *);
   struct Node* deleteAtDesired(struct Node *,int);
   struct Node* deleteAtLast(struct Node *);
   struct Node* deleteAfterNode(struct Node *,struct Node *);
   struct Node *deleteValueAtDesired(struct Node*,int);
   void display(struct Node *);
   
    

 int main(){
    int index;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    
 
    
    head->data = 7;
    head->next = second;
 
    
    second->data = 11;
    second->next = third;
 

    third->data = 41;
    third->next = fourth;
 
  
    fourth->data = 66;
    fourth->next = NULL;
    
    printf("my Linked list before any update\n");
    display(head);
    
    // head=addAtBegin(head,33);//updated the head
   // printf("enter the index you want to insert new node\n");
   // scanf("%d",&index);
   // head=addAtDesired(head,index,34);
   //  head=addAtLast(head,100);
   // head=addAfterNode(head,third,77);
    //head=deleteAtBegin(head);
    //head=deleteAtDesired(head,2);
    //head=deleteAtLast(head);
     //head=deleteAfterNode(head,second);
      
     head=deleteValueAtDesired(head,11);
     printf("linked list after various operation\n");
     display(head);
    
    return 0;
    
  }
  
  
   struct Node* addAtBegin(struct Node *head, int data)
   {
    struct Node *newnode;
    newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next= head;
    return newnode;
    }
    
    
  struct Node* addAtDesired(struct Node *head, int index,int data)
  {
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=1;
    while(i!=index-1) 
    {
        p=p->next;
        i++;
     }
     newnode->data=data;
    newnode->next=p->next;
     p->next=newnode;
    
    return head;
    }
    
    struct Node* addAtLast(struct Node* head , int data)
    {
        struct Node *newnode;
        newnode=(struct Node *)malloc(sizeof(struct Node));
        struct Node *p=head;
        
        while(p->next!=NULL)
        {
            p=p->next;
        }
        newnode->data=data;
        p->next=newnode;
        newnode->next=NULL;
        
        return head;
        
     }
     
      struct Node* deleteAtBegin(struct Node *head){
          struct Node *temp=head;
          head=head->next;
          free(temp);
          return head;
      }
      
      
        struct Node* deleteAtLast(struct Node *head){
            struct Node *temp=head;
            struct Node *p=head->next;
            while(p->next != NULL){
               temp=temp->next;
                p=p->next; 
            }
            temp->next=NULL;
            free (p);
           
            
           return head;
        }
      
      struct Node *deleteAtDesired(struct Node *head, int index){
          struct Node *p=head;
          struct Node *q=head->next;
          
           for(int i=1;i<index;i++)
           {
             p=p->next;
             q=q->next;
             }
           p->next=q->next;
            free(q);
          
        return head;
        }
     
      struct Node* addAfterNode(struct Node *head , struct Node *previous ,int data )
      {
          struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
           //struct Node *p;
           
           newnode->next=previous->next;
           previous->next=newnode;
           newnode->data=data;
           
            return head;
      }
     
      struct Node* deleteAfterNode(struct Node * head ,struct Node * previous){
           struct Node *temp=head;
           struct Node *p=head->next;
           
           while(temp->next!=previous){
               p=p->next;
               temp=temp->next;
            }
            
            previous->next= p->next;
            
            free(p);
            
            
            return head;
          }
      
         
      struct Node *deleteValueAtDesired(struct Node *head,int value)
      {
          struct Node *p=head;
          struct Node *q=head->next;
          
         
             while(q->data!=value && q->next !=NULL)
            {
              q=q->next;
             p=p->next;
              
               }
             //printf("%d %d", p->data,q->data);
             if(q->data==value){
              p->next=q->next;
               free(q);
             }
            
          
        return head;
        }
     
      
      
      
    void display(struct Node *ptr)
    {
        if(ptr==NULL){
            printf("EMPTY LINKED LIST");
             }
       while (ptr != NULL)
      {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
        }
     }
     