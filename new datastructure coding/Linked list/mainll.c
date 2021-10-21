#include <stdio.h>
#include<assert.h>
#include "SinglyLinkedList.h"
   
int main()
{
 Node *head = NULL;
 int index;
 for(int  i = 0 ; i < 5 ; i++)   {
    head = addAtLast(head,i);
  } 
    printf ("my Singly Linked list\n");
    display(head);

    
   head = addAtBegin(head,33);//updated the head
   printf("enter the index you want to insert new node\n");
   scanf("%d",&index);
   head = addAtDesired(head,index,34);
    head = addAtLast(head,100);
     Node *mark = find(head,3);
     head = addAfterNode(head,mark,77);
    head = deleteAtBegin(head);
    head = deleteAtDesired(head,2);
    for(int i = 0; i<3; i++){
      head = deleteAtLast(head);
    }

   //  head=deleteAfterNode(head,mark);
      
    //head = deleteValueAtDesired(head,3);
     printf("linked list after various operation\n");
     display(head);
    
    return 0;
    
  }
  
  